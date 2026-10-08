struct OB_CFrondEngine_010201A0
{
OB_CIndexedGeometry_010201A0 *indexedGeometry;
OB_CLightingEngine_010201A0 *lightingEngine;
OB_stVector_SFrondGuide_010201A0 guideVectorWrapper;
OB_stVector_stVector_SFrondGuide_010201A0 guideLodVectorWrapper;
int frondType;
int bladeCount;
int profileSpline;
int profileSegmentCount;
int activationBranchLevel;
char enabledFlag;
char pad_3D[3];
OB_stVector16_010201A0 frondTextureVectorWrapper;
int frondLodCount;
float maxSurfaceAreaPercent;
float minSurfaceAreaPercent;
float reductionFuzziness;
float largeFrondRetentionPercent;
int minLengthSegments;
int minCrossSegments;
};
