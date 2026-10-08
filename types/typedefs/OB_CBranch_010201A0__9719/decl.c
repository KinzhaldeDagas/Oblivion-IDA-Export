struct OB_CBranch_010201A0
{
struct OB_CBranch_010201A0 *parentBranch;
float percentAlongParent;
OB_stVectorBranchChildRef_010201A0 children;
OB_SIdvBranchVertex_010201A0 *branchVertices;
int branchVertexCount;
unsigned __int16 crossSectionSegmentCount;
unsigned __int16 pad_22;
int startVertexOffset;
float branchVolume;
float fuzzyBranchVolume;
OB_stVectorBranchFlareEntry_010201A0 flares;
};
