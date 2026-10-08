/* Decoded values; see ../README.md for evidence and confidence scope.
 * These declarations document observed dispatch values, not an original SDK.
 */
enum OB_TempEffectType_Decoded
{
    OB_TempEffect_Decal = 0,             /* Verified: vtable and load factory */
    OB_TempEffect_GeometryDecal = 1,     /* Verified: vtable and load factory */
    OB_TempEffect_Particle = 2,          /* Verified: vtable and load factory */
    OB_TempEffect_Base = 3,              /* Verified: base vtable; not saveable */
    OB_TempEffect_Unknown4 = 4,          /* Unknown: no restoration case identified */
    OB_TempEffect_MagicModelHit = 5,     /* Verified: load factory */
    OB_TempEffect_MagicShaderHit = 6     /* Verified: load factory */
};

enum OB_DecalRenderPassSelector_Decoded
{
    OB_BSSM_3XDECAL = 0x152,            /* Verified: producer and name resolver */
    OB_BSSM_3XDECAL_A = 0x153,          /* Verified: producer and name resolver */
    OB_BSSM_GEOMDECAL = 0x188,          /* Verified: producer and name resolver */
    OB_BSSM_GEOMDECAL_S = 0x189,        /* Verified: name mapping; producer Unknown */
    OB_BSSM_DECAL = 0x18A,              /* Verified: producer and name resolver */
    OB_BSSM_DECAL_A = 0x18B             /* Verified: producer and name resolver */
};
