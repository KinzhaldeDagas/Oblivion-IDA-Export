// Parses Oblivion lighting tokens 8002..8009 into the exact 0xB0 CLightingEngine layout.
void __thiscall OB_CLightingEngine_Parse_010201A0(OB_CLightingEngine_010201A0 *this, OB_CTreeFileAccess_010201A0 *file)
{
  int v2; // ebx
  int v3; // ebp
  OB_SSpeedTreeMaterial_010201A0 *p_branchMaterial; // edi
  int v5; // esi
  int Dword_010201A0; // eax
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx
  rsize_t v11; // [esp-4h] [ebp-68h]
  OB_SSpeedTreeMaterial_010201A0 *v12; // [esp+4h] [ebp-60h] BYREF
  int v13; // [esp+8h] [ebp-5Ch]
  int v14; // [esp+Ch] [ebp-58h]
  int v15; // [esp+10h] [ebp-54h]
  int v16; // [esp+14h] [ebp-50h] BYREF
  char v17; // [esp+18h] [ebp-4Ch]
  int v18; // [esp+28h] [ebp-3Ch]
  int v19; // [esp+2Ch] [ebp-38h]
  _BYTE v20[40]; // [esp+30h] [ebp-34h] BYREF
  _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // [esp+58h] [ebp-Ch]
  void *v22; // [esp+5Ch] [ebp-8h]
  unsigned int v23; // [esp+60h] [ebp-4h]

  v23 = 0xFFFFFFFF; /*0x794340*/
  v22 = &SEH_794340; /*0x794342*/
  ExceptionList = NtCurrentTeb()->Tib.ExceptionList; /*0x79434d*/
  v15 = v2; /*0x794351*/
  v14 = v3; /*0x794352*/
  v13 = v5; /*0x794353*/
  v12 = p_branchMaterial; /*0x794354*/
  HIDWORD(v11) = (unsigned int)&v12 ^ __security_cookie; /*0x79435c*/
  Dword_010201A0 = OB_CTreeFileAccess_ReadDword_010201A0(file);// SpeedTreeOBSE 2026-05-25 stock-tail fidelity pass: top-level 8000 lighting reads a first inner token before accepting 8001; immediate 8001 is malformed in the observed Oblivion path. /*0x79436f*/
  do /*0x794433*/
  {
    switch ( Dword_010201A0 ) /*0x79438e*/
    {
      case 0x1F42: /*0x79438e*/
        this->branchLightingMethod = OB_CTreeFileAccess_ReadDword_010201A0(file); /*0x79439c*/
        break; /*0x79439f*/
      case 0x1F43: /*0x79438e*/
        p_branchMaterial = &this->branchMaterial; /*0x7943a4*/
        v8 = 0xD; /*0x7943a7*/
        do /*0x7943bf*/
        {
          p_branchMaterial->diffuse[0] = OB_CTreeFileAccess_ReadFloat_010201A0(file); /*0x7943b7*/
          p_branchMaterial = (OB_SSpeedTreeMaterial_010201A0 *)((char *)p_branchMaterial + 4); /*0x7943b9*/
          --v8; /*0x7943bc*/
        }
        while ( v8 ); /*0x7943bf*/
        break; /*0x7943bf*/
      case 0x1F44: /*0x79438e*/
        this->leafLightingMethod = OB_CTreeFileAccess_ReadDword_010201A0(file);// SPT lighting token 8004 stores leafLightingMethod (0 dynamic, 1 static). BSTreeModel::InitFromBase later forces method 0 at 0x560818. /*0x7943ca*/
        break; /*0x7943cd*/
      case 0x1F45: /*0x79438e*/
        p_branchMaterial = &this->leafMaterial; /*0x7943cf*/
        v9 = 0xD; /*0x7943d2*/
        do /*0x7943e6*/
        {
          p_branchMaterial->diffuse[0] = OB_CTreeFileAccess_ReadFloat_010201A0(file); /*0x7943de*/
          p_branchMaterial = (OB_SSpeedTreeMaterial_010201A0 *)((char *)p_branchMaterial + 4); /*0x7943e0*/
          --v9; /*0x7943e3*/
        }
        while ( v9 ); /*0x7943e6*/
        break; /*0x7943e6*/
      case 0x1F46: /*0x79438e*/
        this->leafLightingAdjustmentScalar = OB_CTreeFileAccess_ReadFloat_010201A0(file);// SPT lighting token 8006 stores leafLightingAdjustmentScalar. /*0x7943f1*/
        break; /*0x7943f4*/
      case 0x1F47: /*0x79438e*/
        this->staticLightingStyle = OB_CTreeFileAccess_ReadDword_010201A0(file);// SPT lighting token 8007 stores staticLightingStyle: 0 BASIC/no work here, 1 USE_LIGHT_SOURCES/bit0, 2 SIMULATE_SHADOWS/bit1. /*0x7943fd*/
        break; /*0x794400*/
      case 0x1F48: /*0x79438e*/
        this->frondLightingMethod = OB_CTreeFileAccess_ReadDword_010201A0(file); /*0x794409*/
        break; /*0x79440c*/
      case 0x1F49: /*0x79438e*/
        p_branchMaterial = &this->frondMaterial; /*0x79440e*/
        v10 = 0xD; /*0x794411*/
        do /*0x794425*/
        {
          p_branchMaterial->diffuse[0] = OB_CTreeFileAccess_ReadFloat_010201A0(file); /*0x79441d*/
          p_branchMaterial = (OB_SSpeedTreeMaterial_010201A0 *)((char *)p_branchMaterial + 4); /*0x79441f*/
          --v10; /*0x794422*/
        }
        while ( v10 ); /*0x794425*/
        break; /*0x794425*/
      default:
        LODWORD(v11) = 0x1E; /*0x79444f*/
        v19 = 0xF; /*0x79445c*/
        v18 = 0; /*0x794464*/
        v17 = 0; /*0x794468*/
        OB_stString28_AssignBytes_010201A0(&v16, (int)p_branchMaterial, "malformed lighting information", v11); /*0x79446c*/
        v23 = 0; /*0x79447b*/
        OB_IdvFileError_Ctor_010201A0((std::exception *)v20, &v16, 0); /*0x79447f*/
        ThrowException__((DWORD)v20, &_TI3_AVIdvFileError__); /*0x79448e*/
    }
    Dword_010201A0 = OB_CTreeFileAccess_ReadDword_010201A0(file); /*0x794429*/
  }
  while ( Dword_010201A0 != 0x1F41 ); /*0x794433*/
}
