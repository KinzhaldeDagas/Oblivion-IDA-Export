struct OB_STLSPData_010201A0
{
int vtbl;
int refCount;
float *leafConstantTable; ///< Verified owned float[192] table. Fallout pLeafMaps +8; Oblivion alloc/copy/free 0x7F1810/0x7F18A0/0x7F1920. Count zero is a no-op.
float curveScalar; ///< Verified dataflow: BSTreeModel+0x44 -> +0x0C -> ShaderConstantStorage[0x264]. Probable canonical name fCurveScalar, corroborated by Fallout STLSPData and homologous builder/consumer; model offset differs (Fallout +0x3C).
float rockScalar; ///< Verified: copied from CSpeedTreeRT.windEngine+0x3C (speedWindRockScalar); shader consumer writes storage[0x25F]. Fallout fRock at same offset and same producer/consumer flow.
float rustleScalar; ///< Verified: copied from CSpeedTreeRT.windEngine+0x40 (speedWindRustleScalar); shader consumer writes storage[0x25B]. Fallout fRustle at same offset. Preserve the observed cross-order of rock/rustle shader destinations.
float rockSpeed; ///< Verified: builder obtains this from treeObject virtual +0x164; consumer multiplies by accumulated phase storage[0x246] into [0x25A]. Probable canonical fRockSpeed from Fallout. Constructor does not initialize this member; builder write is conditional.
float rustleSpeed; ///< Verified: builder obtains this from treeObject virtual +0x16C; consumer multiplies by accumulated phase storage[0x247] into [0x25E]. Probable canonical fRustleSpeed from Fallout. Constructor does not initialize this member; builder write is conditional.
};
