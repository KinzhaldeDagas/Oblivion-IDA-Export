struct ShadowSceneLight_DecodedLayout
{
unsigned __int8 base_000[208];
float cameraRelativeScore_D0;
float cullRange_D4;
float visibilityFade_D8;
float transitionTarget_DC;
float transitionTimer_E0;
void *objectListVtable_E4;
MEF_RefListNode32 *objectListHead_E8;
MEF_RefListNode32 *objectListTail_EC;
unsigned int objectListCount_F0;
unsigned __int8 perSourceProjectorMode_F4;
unsigned __int8 specialCubeDispatch_F5;
unsigned __int8 pad_F6[2];
void *auxiliaryOwnedRef_F8;
unsigned __int8 backingIsNiPointLight_FC;
unsigned __int8 pad_FD[3];
void *backingLight_100;
unsigned __int8 trackBackingPosition_104; ///< When true, SetBackingLight seeds +0x108..+0x110 from the backing NiPointLight world position and ShadowSceneNode_RefreshMovedPointLightSource tracks later movement. Retail callers pass false for reference/equipped ExtraLight sources and true for dynamic/scene-graph point lights.
unsigned __int8 pad_105[3];
float cachedSourceX_108;
float cachedSourceY_10C;
float cachedSourceZ_110;
void *shadowMap_114;
unsigned __int16 cullStatus_118;
unsigned __int16 statusPad_11A;
unsigned __int8 pad_11C[4];
unsigned __int8 renderGateOverride_120; ///< Alternate normal-render eligibility gate. Constructor and TESObjectREFR attached-light registration clear it; no retail true producer is proved.
unsigned __int8 pad_121[3];
float projectorFovDegrees_124; ///< Projector field of view in degrees. Constructor and TESObjectLIGH DATA source default to 90.0; attached-reference registration copies TESObjectLIGH+0x84; projected-caster rendering may recompute radius/distance*110.
float falloffExponent_128; ///< Oblivion TESObjectLIGH DATA falloff exponent. Attached-reference registration copies base-form +0x80 here; record load normalizes zero to 1.0. The Oblivion Construction Set Light dialog independently labels the matching DATA field 'Falloff Exponent'. No ShadowSceneLight renderer-side consumer is proved.
unsigned __int8 bindShadowMapToShader9_12C;
unsigned __int8 pad_12D[3];
void *exactCasterRoot_130;
unsigned __int8 pad_134[16];
MEF_RefListNode32 *receiverCursor_144;
NiGeometry *receiverFence_148;
unsigned int projectorPlaneState_14C;
float projectorPlanes_150[6][4];
unsigned int activePlaneMask_1B0;
unsigned __int8 reservedPostPlaneBlock_1B4[96];
unsigned __int8 postRenderState_214;
unsigned __int8 reservedTail_215[11];
};
