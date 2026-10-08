// Oblivion default rendered-target parameter map. Type 0x17 is the frustum shadow map: square unsigned-short ShadowSurfaceRes dimensions, target flags 6, D3DFORMAT ShadowMapRenderTargetD3DFormat (0x72/D3DFMT_R32F), and auxiliary output zero.
void __userpurge GetRenderedSurfacEParameters(
        BSTextureManager *a1@<esi>,
        NiDX9Renderer *a2,
        int a3,
        int *a4,
        int *a5,
        _DWORD *a6,
        _DWORD *a7,
        _DWORD *a8)
{
  NiRenderTargetGroup *v8; // eax
  double v9; // st7
  NiRenderTargetGroup *v10; // eax
  double v11; // st7
  NiRenderTargetGroup *v12; // eax
  NiRenderTargetGroup *v13; // eax
  NiRenderTargetGroup *v14; // eax
  NiRenderTargetGroup *v15; // eax
  int v16; // eax
  double v17; // st7
  NiRenderTargetGroup *v18; // eax
  double v19; // st7
  NiRenderTargetGroup *v20; // eax
  NiRenderTargetGroup *v21; // eax
  int v22; // eax
  int v23; // [esp+8h] [ebp+8h]
  int v24; // [esp+Ch] [ebp+Ch]
  int v25; // [esp+Ch] [ebp+Ch]
  int v26; // [esp+Ch] [ebp+Ch]

  *a7 = 0; /*0x7c0d14*/
  switch ( a3 )
  {
    case 0:
      *a8 = 0x26; /*0x7c0d3b*/
      *a5 = 0x100; /*0x7c0d45*/
      *a4 = 0x100; /*0x7c0d4b*/
      *a6 = 0x71; /*0x7c0d51*/
      return; /*0x7c0d58*/
    case 1:
      *a8 = 0x26; /*0x7c0d67*/
      *a4 = 0x100; /*0x7c0d6d*/
      v8 = a2->__vftable->super.GetDefaultRTGroup(a2); /*0x7c0d7a*/
      v24 = v8->vtbl->GetHeight(v8, 0); /*0x7c0d89*/
      v9 = (double)v24; /*0x7c0d8d*/
      if ( v24 < 0 ) /*0x7c0d91*/
        v9 = v9 + flt_A2FC78; /*0x7c0d93*/
      if ( Double_To_SInt32(v9 * dbl_A2FAA0) >= 0x100 ) /*0x7c0da9*/
      {
        v10 = a2->__vftable->super.GetDefaultRTGroup(a2); /*0x7c0dcb*/
        v25 = v10->vtbl->GetHeight(v10, 0); /*0x7c0dda*/
        v11 = (double)v25; /*0x7c0dde*/
        if ( v25 < 0 ) /*0x7c0de2*/
          v11 = v11 + flt_A2FC78; /*0x7c0de4*/
        *a5 = Double_To_SInt32(v11 * dbl_A2FAA0); /*0x7c0dfd*/
        *a6 = 0x71; /*0x7c0dff*/
      }
      else
      {
        *a5 = 0x100; /*0x7c0db8*/
        *a6 = 0x71; /*0x7c0dba*/
      }
      return; /*0x7c0dc1*/
    case 2:
      *a8 = 0x26; /*0x7c0e15*/
      *a5 = 0x100; /*0x7c0e1f*/
      *a4 = 0x100; /*0x7c0e25*/
      *a6 = 0x71; /*0x7c0e2b*/
      return; /*0x7c0e32*/
    case 3:
      v12 = a2->__vftable->super.GetDefaultRTGroup(a2); /*0x7c0e40*/
      *a4 = v12->vtbl->GetWidth(v12, 0); /*0x7c0e51*/
      v13 = a2->__vftable->super.GetDefaultRTGroup(a2); /*0x7c0e5a*/
      *a5 = v13->vtbl->GetHeight(v13, 0); /*0x7c0e6f*/
      *a8 = 0x26; /*0x7c0e75*/
      *a6 = 0; /*0x7c0e7b*/
      return; /*0x7c0e82*/
    case 4:
      v14 = a2->__vftable->super.GetDefaultRTGroup(a2); /*0x7c0e90*/
      *a4 = v14->vtbl->GetWidth(v14, 0); /*0x7c0ea1*/
      v15 = a2->__vftable->super.GetDefaultRTGroup(a2); /*0x7c0eaa*/
      *a5 = v15->vtbl->GetHeight(v15, 0); /*0x7c0ebb*/
      *a8 = *(_DWORD *)&MEMORY[0xB33E90][0x1130] < 2 ? 0x22 : 0xA2;
      *a6 = OB_RendererGlobalState_010201A0[0x1D7] != 0 ? 0x71 : 0;
      return; /*0x7c0eef*/
    case 5:
      v16 = ((int (__thiscall *)(NiDX9Renderer *, BSTextureManager *))a2->__vftable->super.GetDefaultRTGroup)(a2, a1); /*0x7c0efd*/
      v23 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v16 + 0x4C))(v16, 0); /*0x7c0f0c*/
      v17 = (double)v23; /*0x7c0f10*/
      if ( v23 < 0 ) /*0x7c0f14*/
        v17 = v17 + flt_A2FC78; /*0x7c0f16*/
      *a5 = Double_To_SInt32(v17);              // Type-5 case: stores default-RT width through the width output pointer. Hex-Rays can misidentify this because the function reuses the same stack slot as a temporary afterward. /*0x7c0f25*/
      v18 = a2->__vftable->super.GetDefaultRTGroup(a2); /*0x7c0f2e*/
      v26 = v18->vtbl->GetHeight(v18, 0);       // Reuses the no-longer-needed width-pointer stack slot as a temporary for the default-RT height; this does not overwrite the width result. /*0x7c0f3d*/
      v19 = (double)v26; /*0x7c0f41*/
      if ( v26 < 0 ) /*0x7c0f45*/
        v19 = v19 + flt_A2FC78; /*0x7c0f47*/
      *a5 = Double_To_SInt32(v19);              // Type-5 case: loads the distinct height output pointer and stores default-RT height. /*0x7c0f56*/
      *a8 = 4 * (OB_RendererGlobalState_010201A0[0xA5] != 0) + 0x22; /*0x7c0f73*/
      *a6 = 0; /*0x7c0f75*/
      return; /*0x7c0f7b*/
    case 6:
      *a5 = LODWORD(OB_ShaderConstantStorage_010201A0[0x6D]); /*0x7c0f8c*/
      *a4 = LODWORD(OB_ShaderConstantStorage_010201A0[0x6D]); /*0x7c0f98*/
      *a8 = 6; /*0x7c0f9e*/
      *a6 = 0x74; /*0x7c0fa4*/
      return; /*0x7c0fab*/
    case 7:
      *a5 = 0x100; /*0x7c109f*/
      *a4 = 0x100; /*0x7c10a9*/
      *a8 = 6; /*0x7c10af*/
      *a6 = 0x24; /*0x7c10b5*/
      return; /*0x7c10bc*/
    case 8:
      *a5 = 0x80; /*0x7c10cb*/
      *a4 = 0x80; /*0x7c10d5*/
      *a8 = 6; /*0x7c10db*/
      *a6 = 0x24; /*0x7c10e1*/
      return; /*0x7c10e8*/
    case 9:
      *a4 = LODWORD(OB_ShaderConstantStorage_010201A0[0x6D]); /*0x7c0fbb*/
      *a5 = 1; /*0x7c0fc5*/
      *a8 = 0xC; /*0x7c0fcb*/
      *a6 = 0x51; /*0x7c0fd1*/
      return; /*0x7c0fd8*/
    case 0xA:
      *a4 = LODWORD(OB_ShaderConstantStorage_010201A0[0x6D]); /*0x7c0fe9*/
      *a5 = 0x10; /*0x7c0ff3*/
      *a8 = 0xC; /*0x7c0ff9*/
      *a6 = 0x74; /*0x7c0fff*/
      return; /*0x7c1006*/
    case 0xB:
      *a5 = LODWORD(OB_ShaderConstantStorage_010201A0[0x6D]); /*0x7c1016*/
      *a4 = LODWORD(OB_ShaderConstantStorage_010201A0[0x6D]); /*0x7c1021*/
      *a8 = 0xC; /*0x7c1027*/
      *a6 = 0x72; /*0x7c102d*/
      return; /*0x7c1034*/
    case 0xC:
      *a5 = LODWORD(OB_ShaderConstantStorage_010201A0[0x6D]); /*0x7c1071*/
      *a4 = LODWORD(OB_ShaderConstantStorage_010201A0[0x6D]); /*0x7c107d*/
      *a8 = 0xC; /*0x7c1083*/
      *a6 = 0x74; /*0x7c1089*/
      return; /*0x7c1090*/
    case 0xD:
      *a5 = 0x100; /*0x7c1043*/
      *a4 = 0x100; /*0x7c104d*/
      *a8 = 2; /*0x7c1053*/
      *a6 = 0x15; /*0x7c1059*/
      return; /*0x7c1060*/
    case 0xE:
      *a5 = 0x100; /*0x7c10f7*/
      *a4 = 0x100; /*0x7c1101*/
      *a8 = 6; /*0x7c1107*/
      *a6 = 0; /*0x7c110d*/
      return; /*0x7c1114*/
    case 0xF:
    case 0x10:
      *a5 = dword_B2C2B8; /*0x7c1125*/
      *a4 = dword_B2C2B8; /*0x7c1131*/
      *a8 = 6; /*0x7c1137*/
      *a6 = 0; /*0x7c113d*/
      return; /*0x7c1144*/
    case 0x11:
    case 0x12:
      *a5 = 0x80; /*0x7c114f*/
      *a4 = 0x80; /*0x7c1155*/
      goto LABEL_29; /*0x7c1155*/
    case 0x13:
      *a5 = dword_B2C2B8; /*0x7c1181*/
      *a4 = dword_B2C2B8; /*0x7c1189*/
LABEL_29:
      *a8 = 6; /*0x7c115b*/
      *a6 = 0; /*0x7c1169*/
      break; /*0x7c1170*/
    case 0x14:
      v20 = a2->__vftable->super.GetDefaultRTGroup(a2); /*0x7c1198*/
      *a4 = v20->vtbl->GetWidth(v20, 0); /*0x7c11a9*/
      v21 = a2->__vftable->super.GetDefaultRTGroup(a2); /*0x7c11b2*/
      *a5 = v21->vtbl->GetHeight(v21, 0); /*0x7c11c7*/
      *a8 = 0x46; /*0x7c11cd*/
      *a6 = 0; /*0x7c11d3*/
      break; /*0x7c11da*/
    case 0x15:
      *a5 = 0x100; /*0x7c11e9*/
      *a4 = 0x100; /*0x7c11f3*/
      *a8 = 2; /*0x7c11f9*/
      *a6 = 0; /*0x7c11ff*/
      break; /*0x7c1206*/
    case 0x16:
      *a5 = 0x200; /*0x7c1215*/
      *a4 = 0x200; /*0x7c121f*/
      *a8 = 6; /*0x7c1225*/
      *a6 = 0x72; /*0x7c122b*/
      break; /*0x7c1232*/
    case 0x17:
      v22 = (unsigned __int16)ShadowSurfaceRes; // Default target type 0x17 uses unsigned-short ShadowSurfaceRes for both width and height (retail IDB initial value 0x400). /*0x7c1235*/
      *a5 = v22; /*0x7c1244*/
      *a4 = v22; /*0x7c124a*/
      *a8 = 6;                                  // Type 0x17 target flags = 6. /*0x7c1250*/
      *a6 = ShadowMapRenderTargetD3DFormat;     // Type 0x17 D3D format = ShadowMapRenderTargetD3DFormat, retail value 0x72 (D3DFMT_R32F). /*0x7c125c*/
      break; /*0x7c125f*/
    case 0x18:
      *a5 = 0x100; /*0x7c126e*/
      *a4 = 0x100; /*0x7c1278*/
      *a8 = 0x10; /*0x7c127e*/
      *a6 = 0; /*0x7c1284*/
      GetRenderedSurfacEParameters_::def_7C0D28((int)a2, a3, (int)a4, (int)a5, (int)a6, (int)a7, (int)a8); /*0x7c128a*/
      break; /*0x7c128a*/
    default:
      JUMPOUT(0x7C128B); /*0x7c128b*/
  }
}
