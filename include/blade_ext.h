
#ifndef BLADE_EXT_H

#define BLADE_EXT_H


#include <export.h>

#ifdef GetCommandLine
/* Undefine WINAPI macro GetCommandLine to avoid collision with
 * Blade.GetCommandLine
 */
#undef GetCommandLine

#endif

#ifdef GetObject
/* Undefine WinGDI macro GetObject to avoid collision with
 * Blade.GetObject
 */
#undef GetObject

#endif


typedef struct _entity_t entity_t;
typedef struct _material_t material_t;

typedef struct {
        const char *name;
        int executed;
} combo_t;


#define CHR_FLT_TURN_SPEED                0
#define CHR_FLT_DIE_FALL                  1
#define CHR_FLT_J_COST                    4
#define CHR_FLT_MAX_FALL                  5
#define CHR_FLT_MAX_STAIR                 6
#define CHR_FLT_FOV                       7
#define CHR_FLT_MAX_GRAB                 10
#define CHR_FLT_MED_GRAB                 11
#define CHR_FLT_MIN_TAKE                 13
#define CHR_FLT_MAX_TAKE_1               14
#define CHR_FLT_MAX_TAKE_2               15
#define CHR_FLT_MAX_TAKE_3               16
#define CHR_FLT_MAX_TAKE_4               17
#define CHR_FLT_MAX_TAKE_5               18
#define CHR_FLT_REACH                    19
#define CHR_FLT_MIN_2_GRAB               20
#define CHR_FLT_HEAR_MIN_VOLUME          21
#define CHR_FLT_MOV_FRWD_SPEED_IN_STRAFE 22
#define CHR_FLT_MOV_BKWD_SPEED_IN_STRAFE 23
#define CHR_FLT_MAX_COMBAT_DIST          24
#define CHR_FLT_DIST_STOP                25
#define CHR_FLT_DIST_STOP_2              26
#define CHR_FLT_MAX_SEE_DIST             27
#define CHR_FLT_DIST_STOP_MAX_FACT       28

#define CHR_STR_INT_NAME                  0
#define CHR_STR_ADD_ROUTE_ANIM            1
#define CHR_STR_NO_ARMOUR                 3
#define CHR_STR_LOW_ARMOUR                4
#define CHR_STR_MED_ARMOUR                5
#define CHR_STR_HIGH_ARMOUR               6

#define CHR_INT_NATURAL_WEAPONS           0
#define CHR_INT_HEAD_CONTROLLED           1

#define CHR_FNC_ON_FIRST                  0


#define ENT_INT_N_LIGHTS                  1
#define ENT_INT_N_FIRES                   2
#define ENT_INT_SEND_SECTOR_MSGS          5
#define ENT_INT_VISIBLE                   6
#define ENT_INT_FLICK                     7
#define ENT_INT_PHYSIC                   13
#define ENT_INT_CAN_USE                  16
#define ENT_INT_INVENTORY_VISIBLE        17
#define ENT_INT_ACTIVE                   18
#define ENT_INT_DAMAGE                   20
#define ENT_INT_SEND_NOTIFY              21
#define ENT_INT_SOLID                    22
#define ENT_INT_GOF                      23
#define ENT_INT_GOB                      24
#define ENT_INT_TR                       25
#define ENT_INT_TL                       26
#define ENT_INT_RUN                      27
#define ENT_INT_LEVEL                    28
#define ENT_INT_CURRENT_AREAS            29
#define ENT_INT_BLIND                    30
#define ENT_INT_TEXTURE                  30
#define ENT_INT_DEAF                     31
#define ENT_INT_TEST_HIT                 33
#define ENT_INT_IN_COMBAT                34
#define ENT_INT_FIXED_TARGET             35
#define ENT_INT_EXCLUSION_GROUP          36
#define ENT_INT_SIMPLE_SECTIONS          37
#define ENT_INT_SNEAK                    38
#define ENT_INT_CAST_SHADOWS             39
#define ENT_INT_ATTACK                   40
#define ENT_INT_BLOCK                    41
#define ENT_INT_COMBAT_DIST_FLAG         42
#define ENT_INT_T_TYPE                   43
#define ENT_INT_S_TYPE                   44
#define ENT_INT_EARTH_QUAKE              45
#define ENT_INT_ON_FLOOR                 46
#define ENT_INT_LAST_BAY_NUM_ANIMS       47
#define ENT_INT_HEARD                    48
#define ENT_INT_SEEN                     49
#define ENT_INT_SEND_TRIGGER_SECTOR_MSGS 50
#define ENT_INT_PARTIAL_LEVEL            51
#define ENT_INT_IN_DESTRUCTOR_ATTACK     52
#define ENT_INT_GLOW_TEST_Z              53
#define ENT_INT_GLOW_SIZE_DIST           53
#define ENT_INT_OBJ_C_TEST               54
#define ENT_INT_RETURNS                  55
#define ENT_INT_MUTILATIONS_MASK         56
#define ENT_INT_GO_TO_JOGGING            57
#define ENT_INT_EXCLUSION_MASK           58
#define ENT_INT_P_VIEW_TYPE              59
#define ENT_INT_CONTINUOUS_BLOCK         60
#define ENT_INT_DEFENCE_NEEDED           61
#define ENT_INT_AIM                      62
#define ENT_INT_WILL_CRASH_IN_FLOOR      64
#define ENT_INT_INVERTED_ROUTE           65
#define ENT_INT_GO_TO_SNEAKING           66
#define ENT_INT_CONTINUOUS_DAMAGE        67
#define ENT_INT_WILL1AA_TO2AA            68
#define ENT_INT_IN_WORLD                 71
#define ENT_INT_IN_ATTACK                72
#define ENT_INT_RANGE_ACTIVE             73
#define ENT_INT_MELEE_ACTIVE             74
#define ENT_INT_TRAIL_MODE               75
#define ENT_INT_WEAPON_MODE              76
#define ENT_INT_STATIC_WEAPON_MODE       77
#define ENT_INT_IS_STOPPED               78
#define ENT_INT_PLAYING                  79
#define ENT_INT_REFLECTS                 80
#define ENT_INT_FROZEN                   81
#define ENT_INT_OBJECT                   82
#define ENT_INT_RANGE_DEFENCE_CAPABLE    83

#define ENT_FLT_SCALE                     0
#define ENT_FLT_INTENSITY                 5
#define ENT_FLT_PRECISSION                6
#define ENT_FLT_INTENSITY2                7
#define ENT_FLT_FLICK_PERIOD              8
#define ENT_FLT_ANGLE                     9
#define ENT_FLT_LIFE                     10
#define ENT_FLT_ENERGY                   11
#define ENT_FLT_DAMAGE_RADIUS            12
#define ENT_FLT_T2_FALL                  13
#define ENT_FLT_LOOK_AT_TIME             16
#define ENT_FLT_MASS                     17
#define ENT_FLT_PITCH                    20
#define ENT_FLT_ANM_POS                  21
#define ENT_FLT_DISPLACEMENT             22
#define ENT_FLT_REFLECTION               24
#define ENT_FLT_TRANSPARENCY             25
#define ENT_FLT_F_P_S                    26
#define ENT_FLT_TRAIL_LIFE_TIME          27
#define ENT_FLT_MIN_DISTANCE             28
#define ENT_FLT_MAX_DISTANCE             29
#define ENT_FLT_VOLUME                   30
#define ENT_FLT_BASE_VOLUME              31
#define ENT_FLT_SOUND_SCALE              32
#define ENT_FLT_MIN_SECTOR_LENGTH        33
#define ENT_FLT_MAX_AMPLITUDE            34
#define ENT_FLT_WUEA                     35
#define ENT_FLT_ROUTE_TYPE               36
#define ENT_FLT_ANG_VEL                  37
#define ENT_FLT_SIZE_FACTOR              38
#define ENT_FLT_BAY_ROUTE                39
#define ENT_FLT_ASTAR_STATE              40
#define ENT_FLT_DIST2_FLOOR              41
#define ENT_FLT_Y_GRAVITY                42
#define ENT_FLT_FRICTION                 43
#define ENT_FLT_FRICTION2                44
#define ENT_FLT_P_P_S                    45
#define ENT_FLT_DEATH_TIME               46
#define ENT_FLT_RANDOM_VELOCITY          47
#define ENT_FLT_RANDOM_VELOCITY_V        48
#define ENT_FLT_TIME2_LIVE               49
#define ENT_FLT_TIME2_LIVE_V             50
#define ENT_FLT_DIST                     51
#define ENT_FLT_EARTH_QUAKE_FACTOR       52
#define ENT_FLT_BLOCKING_PROPENSITY      53
#define ENT_FLT_RADIUS                   54
#define ENT_FLT_HEIGHT                   55
#define ENT_FLT_CONE                     56
#define ENT_FLT_ALPHA                    57
#define ENT_FLT_LAST_BAY_ANG_ANIMS       58
#define ENT_FLT_LAST_TIME_SEEN           59
#define ENT_FLT_ZOOM_S                   60
#define ENT_FLT_ZOOM_T                   61
#define ENT_FLT_ORIGIN_S                 62
#define ENT_FLT_ORIGIN_T                 63
#define ENT_FLT_ANGLE_2                  67
#define ENT_FLT_FRAME                    68
#define ENT_FLT_ZOOM                     69
#define ENT_FLT_NORMAL_VELOCITY          70
#define ENT_FLT_FOLLOW_FACTOR            71
#define ENT_FLT_SELF_ILUM                72
#define ENT_FLT_ACCURACY                 73
#define ENT_FLT_AIM_OFF_TARGET           74
#define ENT_FLT_LAST_ATTACK_TIME         75
#define ENT_FLT_DISPLACEMENT_LIMIT       76
#define ENT_FLT_V_D                      77
#define ENT_FLT_A_D                      78
#define ENT_FLT_SELF_LIGHT               79

#define ENT_STR_NAME                      0
#define ENT_STR_KIND                      1
#define ENT_STR_PREV_ANIM_NAME            2
#define ENT_STR_MATERIAL                  5
#define ENT_STR_ANIMATION                 6
#define ENT_STR_ANIM_FULL_NAME            9
#define ENT_STR_ANIM_NAME                10
#define ENT_STR_INVENTORY_SELECTION      11
#define ENT_STR_CHAR_TYPE                12
#define ENT_STR_CHAR_TYPE_EXT            13
#define ENT_STR_PARENT                   14
#define ENT_STR_INV_RIGHT                15
#define ENT_STR_INV_LEFT                 16
#define ENT_STR_GLOW_TEXTURE             17
#define ENT_STR_OBJECT_NAME              18
#define ENT_STR_PERSON_NAME              19
#define ENT_STR_PERSON_NODE_NAME         20
#define ENT_STR_INV_RIGHT_BACK           22
#define ENT_STR_INV_LEFT_BACK            23
#define ENT_STR_ACTIVE_ENEMY             24
#define ENT_STR_E_TARGET                 25
#define ENT_STR_E_SOURCE                 26
#define ENT_STR_COMBAT_GROUP             27
#define ENT_STR_BLEND_MODE               28
#define ENT_STR_INV_LEFT2                29
#define ENT_STR_RASTER_MODE              31
#define ENT_STR_TEXTURE_NAME             32
#define ENT_STR_RASTER_MODE_Z            33
#define ENT_STR_RASTER_MODE_ALPHA        34
#define ENT_STR_LAST_SOUND               35
#define ENT_STR_FIRE_PARTICLE_TYPE       36
#define ENT_STR_PARTICLE_TYPE            37
#define ENT_STR_MESH_NAME                39

#define ENT_VEC_POSITION                  0
#define ENT_VEC_COLOR                     4
#define ENT_VEC_VELOCITY                  5
#define ENT_VEC_GRAVITY                   6
#define ENT_VEC_ANGULAR_VELOCITY          7
#define ENT_VEC_SLIDING_SURFACE           9
#define ENT_VEC_TRAIL_COLOR              11
#define ENT_VEC_ADD_BAY_POINT            12
#define ENT_VEC_TARGET                   13
#define ENT_VEC_OUTER_GLOW_COLOR         14
#define ENT_VEC_INNER_GLOW_COLOR         15
#define ENT_VEC_CORE_GLOW_COLOR          16
#define ENT_VEC_INIT_POS                 17
#define ENT_VEC_ENEMY_LAST_SEEN          18
#define ENT_VEC_D1                       20
#define ENT_VEC_D2                       21
#define ENT_VEC_D                        22
#define ENT_VEC_T_ANG                    24
#define ENT_VEC_T_POS                    25
#define ENT_VEC_DEEP_COLOR               26
#define ENT_VEC_LAST_SOUND_POSITION      27
#define ENT_VEC_AIM_VECTOR               28

#define ENT_FNC_HIT_FUNC                  1
#define ENT_FNC_IM_DEAD_FUNC             15
#define ENT_FNC_TAKE_FUNC                23
#define ENT_FNC_THROW_FUNC               24
#define ENT_FNC_NEW_COMBO_FUNC           25
#define ENT_FNC_MUTILATE_FUNC            29
#define ENT_FNC_DAMAGE_FUNC              30
#define ENT_FNC_ATTACK_FUNC              37
#define ENT_FNC_BIG_FALL_FUNC            38


LIB_EXP int WorldToMBW(const char *world);
LIB_EXP int SoundSystemActive(void);
LIB_EXP int SetSSFrecuency(int frequency);
LIB_EXP int SetSS2dChannels(int num_ch);
LIB_EXP int SetSS3dChannels(int num_ch);
LIB_EXP int SetSSFilter(int filter_output);
LIB_EXP int KillMusic(void);
LIB_EXP int ShutDownSoundChannels(void);
LIB_EXP int PauseSoundSystem(void);
LIB_EXP int PauseSoundSystemButMusic(void);
LIB_EXP int ResumeSoundSystem(void);
LIB_EXP int SetMusicVolume(float volume);
LIB_EXP double GetMusicVolume(void);
LIB_EXP int SetSoundVolume(double volume);
LIB_EXP double GetSoundVolume(void);
LIB_EXP int GetSSSpeakerConfig(void);
LIB_EXP int SetEAXOverride(int EAXOverride);
LIB_EXP int GetEAXOverride(void);
LIB_EXP int SaveSSConfig(void);
LIB_EXP int SetSSSpeakerConfig(int config);
LIB_EXP int GetSSQuality(void);
LIB_EXP int SetSSQuality(int SSQuality);
LIB_EXP int SetAutoGenTexture(const char *textureName, int textureEffect);
LIB_EXP int SetBloodLevel(int blood_level);
LIB_EXP int GetBloodLevel(void);
LIB_EXP int SetMutilationLevel(int mutilation_level);
LIB_EXP int GetMutilationLevel(void);
LIB_EXP const char *GetWorldFileName(void);
LIB_EXP int AddTranTime(
        const char *biped_name, const char *next_anm , const char *prev_anm,
        double time, int unknown
);
LIB_EXP int CheckAnims(void);
LIB_EXP int GiveAnims(const char *race_name);
LIB_EXP int GetAnimationDuration(const char *animation_name, double *duration);
LIB_EXP int SetAnimationFactor(const char *mov, double new_speed_factor);
LIB_EXP void SetTurnSpeed(const char *race_name, double new_speed);
LIB_EXP entity_t *GetEntity(const char *name);
LIB_EXP entity_t *GetEntityI(int index);
LIB_EXP entity_t *CreateEntity(
        const char *name, const char *kind, double x, double y, double z,
        const char *parent_class, const char *unknown
);
LIB_EXP entity_t *CreateEntityDecal(
        const char *name, double x, double y, double z, int i_unknown,
        double d_unknown1, double d_unknown2
);
LIB_EXP const char *GetEntityName(entity_t *entity);
LIB_EXP int GetEntityStringProperty(
        const char *entity_name, int property_kind, int unknown,
        const char **value
);
LIB_EXP int SetEntityStringProperty(
        const char *entity_name, int property_kind, int unknown,
        const char *value
);
LIB_EXP int GetEntityFloatProperty(
        const char *entity_name, int property_kind, int unknown, double *value
);
LIB_EXP int SetEntityFloatProperty(
        const char *entity_name, int property_kind, int unknown, double value
);
LIB_EXP int GetEntityIntProperty(
        const char *entity_name, int property_kind, int unknown, int *value
);
LIB_EXP int SetEntityIntProperty(
        const char *entity_name, int property_kind, int unknown, int value
);
LIB_EXP int GetEntityVectorProperty(
        const char *entity_name, int property_kind, int unknown,
        double *x, double *y, double *z
);
LIB_EXP int SetEntityVectorProperty(
        const char *entity_name, int property_kind, int unknown,
        double x, double y, double z
);
LIB_EXP int SetEntityFuncProperty(
        const char *entity_name, int property_kind, int unknown, PyObject *func
);
LIB_EXP int Freeze(const char *entity_name);
LIB_EXP int EntityAddAnmEventFunc(
        const char *entity_name, const char *anm_event, PyObject *func
);
LIB_EXP void EntityRemoveFromWorld(const char *entity_name);
LIB_EXP int SetSound(const char *entity_name, const char *sound);
LIB_EXP PyObject *GetEntityData(const char *entity_name);
LIB_EXP int SetEntityData(const char *entity_name, PyObject *data);
LIB_EXP const char *GetObject(const char *inv_name, int obj_type, int index);
LIB_EXP const char *GetObjectByName(
        const char *inv_name, int obj_type, const char *obj_name
);
LIB_EXP const char *GetSelectedObject(const char *inv_name, int obj_type);
LIB_EXP const char *GetActiveShield(const char *inv_name);
LIB_EXP const char *GetActiveWeapon(const char *inv_name);
LIB_EXP int GetInventoryIntProperty(
        const char *name, int property_kind, int *value
);
LIB_EXP int SetListenerMode(int mode, double x, double y, double z);
LIB_EXP int GetSectorByIndex(int index);
LIB_EXP int GetSectorByPosition(double x, double y, double z);
LIB_EXP int GetSectorFuncProperty(
        int sectorID, int property_kind, int unknown, PyObject **value
);
LIB_EXP int GetCharByName(const char *name, const char *short_name);
LIB_EXP int SetAnmDefaultPrefix(int charID, const char *prefix);
LIB_EXP int SetNCDSpheres(int charID, int NCDSpheres);
LIB_EXP int SetCDSphere(int charID, int index, double h, double r);
LIB_EXP int GetCharIntProperty(int charID, int property_kind, int unknown, int *value);
LIB_EXP int SetCharIntProperty(int charID, int property_kind, int unknown, int value);
LIB_EXP int GetCharFloatProperty(int charID, int property_kind, int unknown, double *value);
LIB_EXP int SetCharFloatProperty(int charID, int property_kind, int unknown, double value);
LIB_EXP int GetCharStringProperty(int charID, int property_kind, int unknown, const char **value);
LIB_EXP int SetCharStringProperty(int charID, int property_kind, int unknown, const char *value);
LIB_EXP int SetCharFuncProperty(int charID, int property_kind, int unknown, PyObject *func);
LIB_EXP int GetTrailByName(const char *name);
LIB_EXP int CreateSound(const char *file_name, const char *sound_name);
LIB_EXP void DestroySound(int soundID);
LIB_EXP int GetSoundDevInstace(void);
LIB_EXP void SetSoundPitchVar(
        int soundID, int i_unknown, float f_unknown1, float f_unknown2,
        float f_unknown3, float f_unknown4
);
LIB_EXP int CreateTimer(const char *timer_name, double period);
LIB_EXP int GetnTimers(void);
LIB_EXP int GetTimerInfo(
        int timer_index, const char **timer_name, double *period
);
LIB_EXP int AddScheduledFunc(
        double time, PyObject *func, PyObject *args, const char *name
);
LIB_EXP int RemoveScheduledFunc(const char *name);
LIB_EXP int GetnScheduledFuncs(void);
LIB_EXP int GetScheduledFunc(
        int index, PyObject **func, PyObject **args, const char **name,
        double *time
);
LIB_EXP int nEntities(void);
LIB_EXP int nSectors(void);
LIB_EXP double GetTime(void);
LIB_EXP int SetTime(double time);
LIB_EXP int GoToTime(double time);
LIB_EXP void StopTime(void);
LIB_EXP void RestartTime(void);
LIB_EXP double GetTimeSpeed(void);
LIB_EXP void SetTimeSpeed(double speed);
LIB_EXP int GetNewExclusionGroupId(void);
LIB_EXP int AssocKey(
        const char *action, const char *input_device, const char *key,
        int press
);
LIB_EXP double GetTimeActionHeld(const char *action_name);
LIB_EXP int AddInputAction(const char *action_name, int npi);
LIB_EXP int RemoveInputAction(const char *action_name);
LIB_EXP int Bind(const char *action_name, PyObject *proc);
LIB_EXP int BindPred(const char *action_name, const char *predproc);
LIB_EXP int Bind2(
        const char *action_name1, const char *action_name2,
        const char *new_action, int unknown
);
LIB_EXP int UnBind(const char *action_name, PyObject *proc);
LIB_EXP int UnBindPred(const char *action_name, const char *predproc);
LIB_EXP void UnBindAll(void);
LIB_EXP const char *Input(const char *text);
LIB_EXP void MarkLevelToLoad(const char *dir_name);
LIB_EXP void ReadLevel(const char *file_name);
LIB_EXP void CloseLevel(const char *statement1, const char *statement2);
LIB_EXP int OutSound(int soundId, double x, double y, double z, int unknown);
LIB_EXP int SetShowSounds(int showSounds);
LIB_EXP int nSounds(void);
LIB_EXP const char *GetSoundName(int soundId);
LIB_EXP const char *GetSoundFileName(int soundId);
LIB_EXP void ReadBitMap(const char *file_name, const char *internal_name);
LIB_EXP void ReadAlphaBitMap(const char *file_name, const char *internal_name);
LIB_EXP void SetSun(int exists, double x, double y, double z);
LIB_EXP int InsideAA(int AA, double x, double y, double z);
LIB_EXP void AnmAddEvent(const char *anm_name, const char *event_name, double event_frame);
LIB_EXP void AddAnmEvent(const char *anm_name, const char *event_name, double event_frame);
LIB_EXP void AnmDelEvent(const char *anm_name, const char *event_name);
LIB_EXP void AnmClearEvents(const char *anm_name);
LIB_EXP double AnmGetEventFrame(const char *anm_name, const char *event_name);
LIB_EXP int AddParticleGType(
        const char *new_type, const char *parent_type, int operation_type,
        int duration
);
LIB_EXP int SetParticleGVal(
        const char *type, int i, int r, int g, int b, int alpha, double size
);
LIB_EXP int GetnParticleGType(void);
LIB_EXP int GetParticleGType(
        int index, const char **type, const char **parent_type,
        int *operation_type, int *duration
);
LIB_EXP int GetParticleGVal(
        const char *type, int index, int *r, int *g, int *b, int *alpha,
        double *size
);
LIB_EXP int GetEntitiesAt(
        double x, double y, double z, double radius, char ***entity_names
);
LIB_EXP int GetEntitiesVisibleFrom(
        double xc, double yc, double zc, double radius, double xdir,
        double ydir, double zdir, double angle, char ***entity_names
);
LIB_EXP int GetObjectEntitiesVisibleFrom(
        double xc, double yc, double zc, double radius, double xdir,
        double ydir, double zdir, double angle, char ***entity_names
);
LIB_EXP int GetCombos(const char *person_name, combo_t **combos);
LIB_EXP int SetCombos(
        const char *person_name, int num_combos, char **combos_names,
        int *combos_executed
);
LIB_EXP int GetWeaponCombos(
        const char *person_name, const char *weapon_kind, combo_t **combos
);
LIB_EXP const char *GetLastPlayerCType(void);
LIB_EXP int GetEnemiesVisibleFrom(
        double xc, double yc, double zc, double radius, double xdir,
        double ydir, double zdir, double angle, char ***enemy_names
);
LIB_EXP int PlayCDTrack(int ntrack);
LIB_EXP int nCDTracks(void);
LIB_EXP int CDLenght(void);
LIB_EXP int CDTrackLenght(int ntrack);
LIB_EXP int CDPresent(void);
LIB_EXP int CDStop(void);
LIB_EXP int CDPause(void);
LIB_EXP int CDSetCallBack(PyObject *func);
LIB_EXP int SetDefaultMass(const char *entity_kind, double mass);
LIB_EXP int SetDefaultMaterial(const char *entity_kind, const char *material);
LIB_EXP material_t *CreateMaterial(const char *name);
LIB_EXP int nMaterials(void);
LIB_EXP int SetTriggerSectorFunc(
        const char *trigger_sector_name, const char *func_type, PyObject *func
);
LIB_EXP PyObject *GetTriggerSectorFunc(
        const char *trigger_sector_name, const char *func_type
);
LIB_EXP int SetTriggerSectorData(
        const char *trigger_sector_name, PyObject *data
);
LIB_EXP PyObject *GetTriggerSectorData(const char *trigger_sector_name);
LIB_EXP int GetTriggerSectorFloorHeight(const char *trigger_sector_name);
LIB_EXP int GetTriggerSectorRoofHeight(const char *trigger_sector_name);
LIB_EXP const char *GetTriggerSectorGroup(const char *trigger_sector_name);
LIB_EXP double *GetTriggerSectorPoints(const char *trigger_sector_name);
LIB_EXP int nTriggerSectors(void);
LIB_EXP const char *GetTriggerSectorName(int index);
LIB_EXP const char *GenerateEntityName(void);
LIB_EXP int AddWatchAnim(const char *anim);
LIB_EXP int AddAnimFlags(
        const char *anim, int wuea, int mdf_y, int solf, int copy_rot,
        int bng_mov, int head_f
);
LIB_EXP int SetEAX(int eax_flag);
LIB_EXP int SetActionCameraMovement(
        const char *action_name, double angle, double start_pos, double end_pos
);
LIB_EXP int DeactivateInput(void);
LIB_EXP int ActivateInput(void);
LIB_EXP int SetGhostSectorSound(
        const char *aghost_name, const char *file_name, double volume,
        double base_volume, double min_dist, double max_dist, double v_max_dist,
        double scale
);
LIB_EXP int SetGhostSectorGroupSound(
        const char *group_name, const char *file_name, double volume,
        double base_volume, double min_dist, double max_dist, double unknown,
        double scale
);
LIB_EXP int SetRootWidget(long int widget);
LIB_EXP long int GetRootWidget(void);
LIB_EXP int AddCombustionDataFor(
        const char *object_kind, const char *fire_kind, double upper_treshol,
        double lower_treshold, double flame_height, double flame_size,
        double speed, double livetime
);
LIB_EXP int SetAfterFrameFunc(const char *name, PyObject *function);
LIB_EXP PyObject *GetAfterFrameFunc(const char *name);
LIB_EXP int GetnAfterFrameFuncs(void);
LIB_EXP const char *GetAfterFrameFuncName(int index);
LIB_EXP int CloseDebugChannel(const char *channel_name);
LIB_EXP int OpenDebugChannel(const char *channel_name);
LIB_EXP int SetAppMode(const char *mode);
LIB_EXP const char *GetAppMode(void);
LIB_EXP const char *GetCommandLine(void);
LIB_EXP int Quit(void);
LIB_EXP int LoadSampledAnimation(
        const char *file, const char *internal_name, int type,
        const char *s_unknown, int i_unknown
);
LIB_EXP int CreateFCAnimation(
        const char *file, const char *internal_name, int n_armonics
);
LIB_EXP int CreateDFCAnimation(
        const char *file1, const char *file2, const char *internal_name,
        int n_armonics
);
LIB_EXP int CreateBipedData(const char *biped_name, const char *kind);
LIB_EXP int AddBipedAction(
        const char *char_name, const char *action_name,
        const char *animation_name, double d_unknown1, double d_unknown2,
        int i_unknown
);
LIB_EXP int AddBipedActionC(
        const char *char_name, const char *action_name,
        const char *animation_name, const char *s_unknown, double d_unknown1,
        double d_unknown2, int i_unknown
);
LIB_EXP int RemoveBipedAction(const char *s_unknown1, const char *s_unknown2);
LIB_EXP int AddRStepEvent(const char *animation_name, double d_unknown);
LIB_EXP int RStepEvents(const char *s_unknown1, const char *s_unknown2);
LIB_EXP int LStepEvents(const char *s_unknown1, const char *s_unknown2);
LIB_EXP int SetActionEventTable(
        const char *race_name, const char *action_name, const char *table_name
);
LIB_EXP int SetEventTableFuncC(
        const char *s_unknown1, const char *s_unknown2, const char *s_unknown3
);
LIB_EXP int SetEventTableFunc(
        const char *event_table_name, const char *event_type, PyObject *func
);
LIB_EXP int AddLStepEvent(const char *animation_name, double d_unknown);
LIB_EXP int AddRReleaseEvent(const char *animation_name, double d_unknown);
LIB_EXP int AddLReleaseEvent(const char *animation_name, double d_unknown);
LIB_EXP void AddStopTests(const char *animation_name);
LIB_EXP void AddFloorCTolerance(const char *animation_name, double tolerance);
LIB_EXP int SetSolidMask(const char *kind, int mask);
LIB_EXP int SetDrawObjectShadows(int draw);
LIB_EXP int GetAutoEngageCombat(void);
LIB_EXP int SetAutoEngageCombat(int auto_engage_combat);
LIB_EXP double GetAecGap(void);
LIB_EXP int SetAecGap(double aec_gap);
LIB_EXP int GetDrawObjectShadows(void);
LIB_EXP int GetModelPos(const char *person, double *x, double *y, double *z);
LIB_EXP const char *GetCurrentMap(void);
LIB_EXP int SetCurrentMap(const char *map);
LIB_EXP int LoadWorld(const char *file_name);
LIB_EXP void DoneLoadGame(void);
LIB_EXP void BeginLoadGame(void);
LIB_EXP int GetWindowId(void);
LIB_EXP int GetProgramId(void);
LIB_EXP int AddStepSound(const char *name, int soundID);
LIB_EXP int AddMaterialStepSound(
        const char *table, const char *material, const char *step_sound
);
LIB_EXP int AddActionStepSound(
        const char *table, const char *action, const char *step_sound_table
);
LIB_EXP int AddTextureMaterial(const char *texture, const char *material);
LIB_EXP int GetMusicEventPriority(int unknown);
LIB_EXP int getMusicEvent(const char *event_name);
LIB_EXP int exeMusicEvent(int unknown1, int unknown2);
LIB_EXP int addMusicEventCD(
        const char *lpszEventName, int iTrack, double dFIn, double dFOut,
        float fVolume, float fPriority, int bBackGround, int iNext
);
LIB_EXP int addMusicEventMP3(
        const char *lpszEventName, const char *lpszFile, double dFIn,
        float fVolume, double dFOut, float fPriority, int bBackGround,
        int iNext, int unknown
);
LIB_EXP int addMusicEventWAV(
        const char *lpszEventName, const char *lpszFile, double dFIn,
        float fVolume, double dFOut, float fPriority, int bBackGround,
        int iNext, int opened
);
LIB_EXP int addMusicEventADPCM(
        const char *lpszEventName, const char *lpszFile, double dFIn,
        float fVolume, double dFOut, float fPriority, int bBackGround,
        int iNext, int unknown
);
LIB_EXP int dropDebugInfo(void);
LIB_EXP int loadSoundDataBase(const char *file_name);
LIB_EXP int saveSoundDataBase(const char *file_name);
LIB_EXP int loadMusicState(const char *file_name);
LIB_EXP int saveMusicState(const char *file_name);
LIB_EXP void TakeSnapShot(void);
LIB_EXP void saveSoundStats(const char *file_name);
LIB_EXP void GetMouseState(int *invert, double *xsens, double *ysens);
LIB_EXP void SetMouseState(int invert, double xsens, double ysens);
LIB_EXP double GetPSeconds(void);
LIB_EXP int GetnRaces(void);
LIB_EXP const char *GetRaceName(int index);
LIB_EXP void BodInspector(void);
LIB_EXP void SetRunString(const char *variable);
LIB_EXP int SetStringValue(const char *variable, const char *value);
LIB_EXP const char *GetStringValue(const char *variable);
LIB_EXP int DeleteStringValue(const char *variable);
LIB_EXP int SaveEntitiesData(const char *filename);
LIB_EXP int LoadEntitiesData(const char *filename);
LIB_EXP int SaveParticleSystemsData(const char *filename);
LIB_EXP int LoadParticleSystemsData(const char *filename);
LIB_EXP int SaveCombustionData(const char *file_name);
LIB_EXP int LoadCombustionData(const char *file_name);
LIB_EXP int ReassignCombustionData(void);
LIB_EXP int SaveAnmRaceData(const char *file_name, const char *race);
LIB_EXP int LoadAnmRaceData(const char *file_name);
LIB_EXP int SaveAnmSoundData(const char *file_name, const char *race);
LIB_EXP int LoadAnmSoundData(const char *file_name);
LIB_EXP PyObject *GetSaveInfo(void);
LIB_EXP int SetSaveInfo(PyObject *info);
LIB_EXP int OpenProfileSection(int section, const char *comment);
LIB_EXP int CloseProfileSection(int section);
LIB_EXP int StartProfile(void);
LIB_EXP int EnableProfiler(void);
LIB_EXP int DisableProfiler(void);
LIB_EXP int SaveProfileData(const char *file_name);
LIB_EXP int SetInputMode(const char *device, const char *mode);
LIB_EXP const char *GetInputMode(const char *device);
LIB_EXP void SaveScreeShoot(const char *filename, int width, int height);
LIB_EXP void CleanArea(double x, double y, double z, float distance);

#endif /* BLADE_EXT_H */
