struct OB_SIdvLeafInfo_010201A0
{
unsigned __int8 dimmingEnabled;
unsigned __int8 pad_01[3];
float dimmingScalar;
float branchDimmingScalar;
int collisionType;
OB_stVector_SIdvLeafTexture_010201A0 leafTextures;
float spacingTolerance;
float blossomDistance;
float blossomWeighting;
int blossomLevel;
float minimumBudAngle;
float maximumBudAngle;
int rockingGroupCount;
int leafLodLevelCount;
int leafTextureCount;
float **leafVertexTables;
float *leafTexcoordTable;
float *rockingTimeOffsets;
};
