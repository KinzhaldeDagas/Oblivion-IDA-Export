struct ShadowSceneNode_DecodedLayout
{
unsigned __int8 base_000[228];
void *fullListVtable_E4;
void *fullListHead_E8; ///< Head of the native full source-light list. Exterior grid activation populates this through per-reference ExtraLight registration, then walks it to reconcile receivers; it is not a loaded-static caster list.
void *fullListTail_EC;
unsigned int fullListCount_F0; ///< Count of native full source-light entries.
void *activeListVtable_F4;
void *activeListHead_F8; ///< Head of the native active/ranked shadow-light list; distinct from full source-light registration.
void *activeListTail_FC;
unsigned int activeListCount_100;
void *activeIterationCursor_104;
void *partitionAnchorA_108;
void *partitionAnchorB_10C;
void *persistentLightA_110;
void *persistentLightB_114;
void *lightLevelReference_118;
unsigned int registrationIndex_11C;
void *cubeRenderTarget_120;
void *cubeCamera_124;
unsigned int cubeFaceIndex_128;
unsigned __int8 state_12C;
unsigned __int8 reservedTail_12D[3];
};
