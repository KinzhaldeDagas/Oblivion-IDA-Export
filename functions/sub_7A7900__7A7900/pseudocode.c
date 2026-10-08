// Compact stock SIdvBranchInfo parser. Allocates 0x74 bytes, accepts only core branch-level tokens 6000..6017, and stores spline/profile pointers at +0x50..+0x70.
OB_SIdvBranchInfo_010201A0 *__cdecl OB_SIdvBranchInfo_Parse_010201A0(OB_CTreeFileAccess_010201A0 *a1)
{
  OB_SIdvBranchInfo_010201A0 *v1; // eax
  int v2; // ebx
  OB_SIdvBranchInfo_010201A0 *v3; // edi
  int Dword_010201A0; // eax
  void *v5; // eax
  unsigned int disturbanceProfile; // ebp
  void *v7; // eax
  unsigned int gravityProfile; // ebp
  void *v9; // eax
  unsigned int flexibilityProfile; // ebp
  void *v11; // eax
  unsigned int flexibilityScaleProfile; // ebp
  void *v13; // eax
  unsigned int angleProfile; // ebp
  void *v15; // eax
  unsigned int lengthProfile; // ebp
  void *v17; // eax
  unsigned int radiusProfile; // ebp
  void *v19; // eax
  unsigned int radiusScaleProfile; // ebp
  void *v21; // eax
  unsigned int startAngleProfile; // ebp
  unsigned int v23; // ebp
  unsigned int byteBufferBegin; // ecx
  unsigned int v25; // ebp
  unsigned int v26; // ecx
  rsize_t v28; // [esp-4h] [ebp-B0h]
  int v29; // [esp+18h] [ebp-94h] BYREF
  char v30; // [esp+1Ch] [ebp-90h]
  int v31; // [esp+2Ch] [ebp-80h]
  int v32; // [esp+30h] [ebp-7Ch]
  int v33; // [esp+34h] [ebp-78h] BYREF
  char v34; // [esp+38h] [ebp-74h]
  int v35; // [esp+48h] [ebp-64h]
  int v36; // [esp+4Ch] [ebp-60h]
  _BYTE v37[40]; // [esp+50h] [ebp-5Ch] BYREF
  _BYTE v38[40]; // [esp+78h] [ebp-34h] BYREF
  int v39; // [esp+A8h] [ebp-4h]

  v1 = (OB_SIdvBranchInfo_010201A0 *)FormHeapAlloc(0x74u); /*0x7a792f*/
  v2 = 0; /*0x7a793b*/
  v39 = 0; /*0x7a793f*/
  if ( v1 ) /*0x7a7946*/
    v3 = OB_SIdvBranchInfo_ctor_010201A0(v1); /*0x7a794f*/
  else
    v3 = 0; /*0x7a7953*/
  v39 = 0xFFFFFFFF; /*0x7a795e*/
  if ( OB_CTreeFileAccess_ReadDword_010201A0(a1) != 0x3F8 ) /*0x7a7973*/
  {
    LODWORD(v28) = 0x15; /*0x7a7975*/
    v36 = 0xF; /*0x7a7980*/
    v35 = 0; /*0x7a7988*/
    v34 = 0; /*0x7a798c*/
    OB_stString28_AssignBytes_010201A0(&v33, (int)v3, "malformed branch data", v28); /*0x7a7990*/
    v39 = 1; /*0x7a799f*/
    OB_IdvFileError_Ctor_010201A0((std::exception *)v37, &v33, 0); /*0x7a79aa*/
    ThrowException__((DWORD)v37, &_TI3_AVIdvFileError__); /*0x7a79b9*/
  }
  Dword_010201A0 = OB_CTreeFileAccess_ReadDword_010201A0(a1); /*0x7a79c0*/
  do /*0x7a7c46*/
  {
    switch ( Dword_010201A0 ) /*0x7a79d3*/
    {
      case 0x1770: /*0x7a79d3*/
        v5 = OB_CTreeFileAccess_ParseSplineProfileObject_010201A0(a1); /*0x7a79dc*/
        disturbanceProfile = v3->disturbanceProfile; /*0x7a79e1*/
        v2 = (int)v5; /*0x7a79e4*/
        if ( (void *)disturbanceProfile != v5 ) /*0x7a79e8*/
        {
          if ( disturbanceProfile ) /*0x7a79f0*/
          {
            OB_StBezierSpline_Dtor_010201A0((void *)v3->disturbanceProfile); /*0x7a79f4*/
            FormHeapFree(disturbanceProfile); /*0x7a79fa*/
          }
          v3->disturbanceProfile = v2; /*0x7a7a02*/
        }
        break; /*0x7a7a05*/
      case 0x1771: /*0x7a79d3*/
        v7 = OB_CTreeFileAccess_ParseSplineProfileObject_010201A0(a1); /*0x7a7a0c*/
        gravityProfile = v3->gravityProfile; /*0x7a7a11*/
        v2 = (int)v7; /*0x7a7a14*/
        if ( (void *)gravityProfile != v7 ) /*0x7a7a18*/
        {
          if ( gravityProfile ) /*0x7a7a20*/
          {
            OB_StBezierSpline_Dtor_010201A0((void *)v3->gravityProfile); /*0x7a7a24*/
            FormHeapFree(gravityProfile); /*0x7a7a2a*/
          }
          v3->gravityProfile = v2; /*0x7a7a32*/
        }
        break; /*0x7a7a35*/
      case 0x1772: /*0x7a79d3*/
        v9 = OB_CTreeFileAccess_ParseSplineProfileObject_010201A0(a1); /*0x7a7a3c*/
        flexibilityProfile = v3->flexibilityProfile; /*0x7a7a41*/
        v2 = (int)v9; /*0x7a7a44*/
        if ( (void *)flexibilityProfile != v9 ) /*0x7a7a48*/
        {
          if ( flexibilityProfile ) /*0x7a7a50*/
          {
            OB_StBezierSpline_Dtor_010201A0((void *)v3->flexibilityProfile); /*0x7a7a54*/
            FormHeapFree(flexibilityProfile); /*0x7a7a5a*/
          }
          v3->flexibilityProfile = v2; /*0x7a7a62*/
        }
        break; /*0x7a7a65*/
      case 0x1773: /*0x7a79d3*/
        v11 = OB_CTreeFileAccess_ParseSplineProfileObject_010201A0(a1); /*0x7a7a6c*/
        flexibilityScaleProfile = v3->flexibilityScaleProfile; /*0x7a7a71*/
        v2 = (int)v11; /*0x7a7a74*/
        if ( (void *)flexibilityScaleProfile != v11 ) /*0x7a7a78*/
        {
          if ( flexibilityScaleProfile ) /*0x7a7a80*/
          {
            OB_StBezierSpline_Dtor_010201A0((void *)v3->flexibilityScaleProfile); /*0x7a7a84*/
            FormHeapFree(flexibilityScaleProfile); /*0x7a7a8a*/
          }
          v3->flexibilityScaleProfile = v2; /*0x7a7a92*/
        }
        break; /*0x7a7a95*/
      case 0x1774: /*0x7a79d3*/
        v15 = OB_CTreeFileAccess_ParseSplineProfileObject_010201A0(a1); /*0x7a7acc*/
        lengthProfile = v3->lengthProfile; /*0x7a7ad1*/
        v2 = (int)v15; /*0x7a7ad4*/
        if ( (void *)lengthProfile != v15 ) /*0x7a7ad8*/
        {
          if ( lengthProfile ) /*0x7a7ae0*/
          {
            OB_StBezierSpline_Dtor_010201A0((void *)v3->lengthProfile); /*0x7a7ae4*/
            FormHeapFree(lengthProfile); /*0x7a7aea*/
          }
          v3->lengthProfile = v2; /*0x7a7af2*/
        }
        break; /*0x7a7af5*/
      case 0x1775: /*0x7a79d3*/
        v17 = OB_CTreeFileAccess_ParseSplineProfileObject_010201A0(a1); /*0x7a7afc*/
        radiusProfile = v3->radiusProfile; /*0x7a7b01*/
        v2 = (int)v17; /*0x7a7b04*/
        if ( (void *)radiusProfile != v17 ) /*0x7a7b08*/
        {
          if ( radiusProfile ) /*0x7a7b10*/
          {
            OB_StBezierSpline_Dtor_010201A0((void *)v3->radiusProfile); /*0x7a7b14*/
            FormHeapFree(radiusProfile); /*0x7a7b1a*/
          }
          v3->radiusProfile = v2; /*0x7a7b22*/
        }
        break; /*0x7a7b25*/
      case 0x1776: /*0x7a79d3*/
        v19 = OB_CTreeFileAccess_ParseSplineProfileObject_010201A0(a1); /*0x7a7b2c*/
        radiusScaleProfile = v3->radiusScaleProfile; /*0x7a7b31*/
        v2 = (int)v19; /*0x7a7b34*/
        if ( (void *)radiusScaleProfile != v19 ) /*0x7a7b38*/
        {
          if ( radiusScaleProfile ) /*0x7a7b40*/
          {
            OB_StBezierSpline_Dtor_010201A0((void *)v3->radiusScaleProfile); /*0x7a7b44*/
            FormHeapFree(radiusScaleProfile); /*0x7a7b4a*/
          }
          v3->radiusScaleProfile = v2; /*0x7a7b52*/
        }
        break; /*0x7a7b55*/
      case 0x1777: /*0x7a79d3*/
        v21 = OB_CTreeFileAccess_ParseSplineProfileObject_010201A0(a1); /*0x7a7b5c*/
        startAngleProfile = v3->startAngleProfile; /*0x7a7b61*/
        v2 = (int)v21; /*0x7a7b64*/
        if ( (void *)startAngleProfile != v21 ) /*0x7a7b68*/
        {
          if ( startAngleProfile ) /*0x7a7b70*/
          {
            OB_StBezierSpline_Dtor_010201A0((void *)v3->startAngleProfile); /*0x7a7b74*/
            FormHeapFree(startAngleProfile); /*0x7a7b7a*/
          }
          v3->startAngleProfile = v2; /*0x7a7b82*/
        }
        break; /*0x7a7b85*/
      case 0x1778: /*0x7a79d3*/
        v3->crossSectionSegments = OB_CTreeFileAccess_ReadDword_010201A0(a1); /*0x7a7b91*/
        break; /*0x7a7b93*/
      case 0x1779: /*0x7a79d3*/
        v3->segments = OB_CTreeFileAccess_ReadDword_010201A0(a1); /*0x7a7b9f*/
        break; /*0x7a7ba2*/
      case 0x177A: /*0x7a79d3*/
        v3->firstBranch = OB_CTreeFileAccess_ReadFloat_010201A0(a1); /*0x7a7bae*/
        break; /*0x7a7bb1*/
      case 0x177B: /*0x7a79d3*/
        v3->lastBranch = OB_CTreeFileAccess_ReadFloat_010201A0(a1); /*0x7a7bbd*/
        break; /*0x7a7bc0*/
      case 0x177C: /*0x7a79d3*/
        v3->frequency = OB_CTreeFileAccess_ReadFloat_010201A0(a1); /*0x7a7bc9*/
        break; /*0x7a7bcc*/
      case 0x177D: /*0x7a79d3*/
        v3->diffuseSTile = OB_CTreeFileAccess_ReadFloat_010201A0(a1); /*0x7a7bd5*/
        break; /*0x7a7bd8*/
      case 0x177E: /*0x7a79d3*/
        v3->diffuseTTile = OB_CTreeFileAccess_ReadFloat_010201A0(a1); /*0x7a7be1*/
        break; /*0x7a7be4*/
      case 0x177F: /*0x7a79d3*/
        v23 = a1->cursorOffset++; /*0x7a7be6*/
        byteBufferBegin = a1->byteBufferBegin; /*0x7a7bed*/
        if ( !byteBufferBegin || v23 >= a1->byteBufferEnd - byteBufferBegin ) /*0x7a7bfb*/
          _invalid_parameter_noinfo(v2, (int)v3, (int)a1); /*0x7a7bfd*/
        v3->diffuseSTileAbsolute = *(_BYTE *)(a1->byteBufferBegin + v23) != 0; /*0x7a7c0c*/
        break; /*0x7a7c0f*/
      case 0x1780: /*0x7a79d3*/
        v25 = a1->cursorOffset++; /*0x7a7c11*/
        v26 = a1->byteBufferBegin; /*0x7a7c18*/
        if ( !v26 || v25 >= a1->byteBufferEnd - v26 ) /*0x7a7c26*/
          _invalid_parameter_noinfo(v2, (int)v3, (int)a1); /*0x7a7c28*/
        v3->diffuseTTileAbsolute = *(_BYTE *)(a1->byteBufferBegin + v25) != 0; /*0x7a7c37*/
        break; /*0x7a7c37*/
      case 0x1781: /*0x7a79d3*/
        v13 = OB_CTreeFileAccess_ParseSplineProfileObject_010201A0(a1); /*0x7a7a9c*/
        angleProfile = v3->angleProfile; /*0x7a7aa1*/
        v2 = (int)v13; /*0x7a7aa4*/
        if ( (void *)angleProfile != v13 ) /*0x7a7aa8*/
        {
          if ( angleProfile ) /*0x7a7ab0*/
          {
            OB_StBezierSpline_Dtor_010201A0((void *)v3->angleProfile); /*0x7a7ab4*/
            FormHeapFree(angleProfile); /*0x7a7aba*/
          }
          v3->angleProfile = v2; /*0x7a7ac2*/
        }
        break; /*0x7a7ac5*/
      default:
        LODWORD(v28) = 0x24; /*0x7a7c68*/
        v32 = 0xF; /*0x7a7c73*/
        v31 = 0; /*0x7a7c7b*/
        v30 = 0; /*0x7a7c83*/
        OB_stString28_AssignBytes_010201A0(&v29, (int)v3, "malformed general branch information", v28); /*0x7a7c88*/
        v39 = 2; /*0x7a7c9b*/
        OB_IdvFileError_Ctor_010201A0((std::exception *)v38, &v29, 0); /*0x7a7ca6*/
        ThrowException__((DWORD)v38, &_TI3_AVIdvFileError__); /*0x7a7cb5*/
    }
    Dword_010201A0 = OB_CTreeFileAccess_ReadDword_010201A0(a1); /*0x7a7c3c*/
  }
  while ( Dword_010201A0 != 0x3F9 ); /*0x7a7c46*/
  return v3; /*0x7a7c4e*/
}
