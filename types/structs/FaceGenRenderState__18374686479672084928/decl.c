struct FaceGenRenderState
{
FaceGenHeadParameters parameters;
void *hair;
unsigned int hairColorRGB;
float hairLength; ///< Hair-length morph weight copied from TESNPC+0x1CC and consumed by BSFaceGen_ApplyHairLengthMorph.
void *eyes;
unsigned int isFemale;
FaceGenPointerArray headModels;
FaceGenPointerArray headTextures;
FaceGenPointerArray nodeNames;
FaceGenPointerArray textureOverrides;
unsigned __int8 useTextureOverrides;
unsigned __int8 padB5[3];
void *raceFaceTextureData;
void *raceFaceTintData;
unsigned int renderFlags;
};
