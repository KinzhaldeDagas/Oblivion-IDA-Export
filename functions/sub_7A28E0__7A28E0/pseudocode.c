// CTreeEngine LOD-info parser. Writes branch LOD count +0x70, leaf LOD count +0xC0, and branch/leaf reduction fields +0xDC..+0xEC.
int __thiscall OB_CTreeEngine_ParseLodInfo_010201A0(OB_CTreeEngine_010201A0 *this, OB_CTreeFileAccess_010201A0 *file)
{
  int result; // eax
  rsize_t v5; // [esp-4h] [ebp-60h]
  int v6; // [esp+Ch] [ebp-50h] BYREF
  char v7; // [esp+10h] [ebp-4Ch]
  int v8; // [esp+20h] [ebp-3Ch]
  int v9; // [esp+24h] [ebp-38h]
  _BYTE v10[40]; // [esp+28h] [ebp-34h] BYREF
  int v11; // [esp+58h] [ebp-4h]
  float filea; // [esp+60h] [ebp+4h]

  result = OB_CTreeFileAccess_ReadDword_010201A0(file);// SpeedTreeOBSE 2026-05-25 stock-tail fidelity pass: nested 9005/9006 engine LOD parser reads a first recognized 9007/9008/9010/9011/9012/9013/9014 payload before accepting 9006. /*0x7a290d*/
  do /*0x7a29b6*/
  {
    switch ( result ) /*0x7a2920*/
    {
      case 0x232F: /*0x7a2920*/
        this->branchLodCount = OB_CTreeFileAccess_ReadDword_010201A0(file); /*0x7a292e*/
        break; /*0x7a2931*/
      case 0x2330: /*0x7a2920*/
        this->minBranchVolumePercent = OB_CTreeFileAccess_ReadFloat_010201A0(file); /*0x7a293a*/
        break; /*0x7a2940*/
      case 0x2332: /*0x7a2920*/
        filea = OB_CTreeFileAccess_ReadFloat_010201A0(file); /*0x7a2949*/
        this->leafReductionPercent = filea; /*0x7a2951*/
        if ( 0.0 == filea ) /*0x7a2960*/
          this->leafReductionPercent = kFaceEarNormalMatchRadius; /*0x7a2968*/
        break; /*0x7a296e*/
      case 0x2333: /*0x7a2920*/
        this->leafInfo.leafLodLevelCount = OB_CTreeFileAccess_ReadDword_010201A0(file); /*0x7a2977*/
        break; /*0x7a297d*/
      case 0x2334: /*0x7a2920*/
        this->maxBranchVolumePercent = OB_CTreeFileAccess_ReadFloat_010201A0(file); /*0x7a2986*/
        break; /*0x7a298c*/
      case 0x2335: /*0x7a2920*/
        this->branchReductionFuzziness = OB_CTreeFileAccess_ReadFloat_010201A0(file); /*0x7a2995*/
        break; /*0x7a299b*/
      case 0x2336: /*0x7a2920*/
        this->largeBranchPercent = OB_CTreeFileAccess_ReadFloat_010201A0(file); /*0x7a29a4*/
        break; /*0x7a29a4*/
      default:
        LODWORD(v5) = 0x19; /*0x7a29d0*/
        v9 = 0xF; /*0x7a29db*/
        v8 = 0; /*0x7a29e3*/
        v7 = 0; /*0x7a29eb*/
        OB_stString28_AssignBytes_010201A0(&v6, (int)this, "malformed engine lod data", v5); /*0x7a29f0*/
        v11 = 0; /*0x7a2a00*/
        OB_IdvFileError_Ctor_010201A0((std::exception *)v10, &v6, 0); /*0x7a2a08*/
        ThrowException__((DWORD)v10, &_TI3_AVIdvFileError__); /*0x7a2a17*/
    }
    result = OB_CTreeFileAccess_ReadDword_010201A0(file); /*0x7a29ac*/
  }
  while ( result != 0x232E ); /*0x7a29b6*/
  return result; /*0x7a29bc*/
}
