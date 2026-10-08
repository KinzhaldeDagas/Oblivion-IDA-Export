struct OB_SFrondGuide_010201A0
{
OB_stVector16_010201A0 vertexVector; ///< Oblivion compact guide storage: direct 16-byte vector of 0x38-byte SFrondVertex records. Local RT 4.1 stock stack-vertex fields are absent.
float guideLength; ///< Computed centerline length.
float radius; ///< Frond radius.
unsigned __int8 frondMapIndex; ///< Selected frond texture/map index.
unsigned __int8 pad_19[3];
float offsetAngle; ///< Rotation offset around the guide centerline.
float surfaceArea; ///< Computed surface area used for LOD.
float fuzzySurfaceArea; ///< Randomized surface-area key used for guide LOD ordering.
unsigned int sharedVertexStartIndex; ///< Start index in shared indexed geometry.
unsigned int verticesPerGuideVertex; ///< Generated geometry vertices associated with each guide vertex.
};
