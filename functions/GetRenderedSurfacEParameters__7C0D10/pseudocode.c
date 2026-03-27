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

  *a7 = 0;
  switch ( a3 )
  {
    case 0:
      *a8 = 0x26;
      *a5 = 0x100;
      *a4 = 0x100;
      *a6 = 0x71;
      return;
    case 1:
      *a8 = 0x26;
      *a4 = 0x100;
      v8 = a2->__vftable->super.GetDefaultRTGroup(a2);
      v24 = v8->vtbl->GetHeight(v8, 0);
      v9 = (double)v24;
      if ( v24 < 0 )
        v9 = v9 + flt_A2FC78;
      if ( Double_To_SInt32(v9 * dbl_A2FAA0) >= 0x100 )
      {
        v10 = a2->__vftable->super.GetDefaultRTGroup(a2);
        v25 = v10->vtbl->GetHeight(v10, 0);
        v11 = (double)v25;
        if ( v25 < 0 )
          v11 = v11 + flt_A2FC78;
        *a5 = Double_To_SInt32(v11 * dbl_A2FAA0);
        *a6 = 0x71;
      }
      else
      {
        *a5 = 0x100;
        *a6 = 0x71;
      }
      return;
    case 2:
      *a8 = 0x26;
      *a5 = 0x100;
      *a4 = 0x100;
      *a6 = 0x71;
      return;
    case 3:
      v12 = a2->__vftable->super.GetDefaultRTGroup(a2);
      *a4 = v12->vtbl->GetWidth(v12, 0);
      v13 = a2->__vftable->super.GetDefaultRTGroup(a2);
      *a5 = v13->vtbl->GetHeight(v13, 0);
      *a8 = 0x26;
      *a6 = 0;
      return;
    case 4:
      v14 = a2->__vftable->super.GetDefaultRTGroup(a2);
      *a4 = v14->vtbl->GetWidth(v14, 0);
      v15 = a2->__vftable->super.GetDefaultRTGroup(a2);
      *a5 = v15->vtbl->GetHeight(v15, 0);
      *a8 = iMultisample < 2 ? 0x22 : 0xA2;
      *a6 = UseHDR != 0 ? 0x71 : 0;
      return;
    case 5:
      v16 = ((int (__thiscall *)(NiDX9Renderer *, BSTextureManager *))a2->__vftable->super.GetDefaultRTGroup)(a2, a1);
      v23 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v16 + 0x4C))(v16, 0);
      v17 = (double)v23;
      if ( v23 < 0 )
        v17 = v17 + flt_A2FC78;
      *a5 = Double_To_SInt32(v17);
      v18 = a2->__vftable->super.GetDefaultRTGroup(a2);
      v26 = v18->vtbl->GetHeight(v18, 0);
      v19 = (double)v26;
      if ( v26 < 0 )
        v19 = v19 + flt_A2FC78;
      *a5 = Double_To_SInt32(v19);
      *a8 = 4 * (ImageSpaceEffectEnabled != 0) + 0x22;
      *a6 = 0;
      return;
    case 6:
      *a5 = WaterSurfaceResolution;
      *a4 = WaterSurfaceResolution;
      *a8 = 6;
      *a6 = 0x74;
      return;
    case 7:
      *a5 = 0x100;
      *a4 = 0x100;
      *a8 = 6;
      *a6 = 0x24;
      return;
    case 8:
      *a5 = 0x80;
      *a4 = 0x80;
      *a8 = 6;
      *a6 = 0x24;
      return;
    case 9:
      *a4 = WaterSurfaceResolution;
      *a5 = 1;
      *a8 = 0xC;
      *a6 = 0x51;
      return;
    case 0xA:
      *a4 = WaterSurfaceResolution;
      *a5 = 0x10;
      *a8 = 0xC;
      *a6 = 0x74;
      return;
    case 0xB:
      *a5 = WaterSurfaceResolution;
      *a4 = WaterSurfaceResolution;
      *a8 = 0xC;
      *a6 = 0x72;
      return;
    case 0xC:
      *a5 = WaterSurfaceResolution;
      *a4 = WaterSurfaceResolution;
      *a8 = 0xC;
      *a6 = 0x74;
      return;
    case 0xD:
      *a5 = 0x100;
      *a4 = 0x100;
      *a8 = 2;
      *a6 = 0x15;
      return;
    case 0xE:
      *a5 = 0x100;
      *a4 = 0x100;
      *a8 = 6;
      *a6 = 0;
      return;
    case 0xF:
    case 0x10:
      *a5 = dword_B2C2B8;
      *a4 = dword_B2C2B8;
      *a8 = 6;
      *a6 = 0;
      return;
    case 0x11:
    case 0x12:
      *a5 = 0x80;
      *a4 = 0x80;
      goto LABEL_29;
    case 0x13:
      *a5 = dword_B2C2B8;
      *a4 = dword_B2C2B8;
LABEL_29:
      *a8 = 6;
      *a6 = 0;
      break;
    case 0x14:
      v20 = a2->__vftable->super.GetDefaultRTGroup(a2);
      *a4 = v20->vtbl->GetWidth(v20, 0);
      v21 = a2->__vftable->super.GetDefaultRTGroup(a2);
      *a5 = v21->vtbl->GetHeight(v21, 0);
      *a8 = 0x46;
      *a6 = 0;
      break;
    case 0x15:
      *a5 = 0x100;
      *a4 = 0x100;
      *a8 = 2;
      *a6 = 0;
      break;
    case 0x16:
      *a5 = 0x200;
      *a4 = 0x200;
      *a8 = 6;
      *a6 = 0x72;
      break;
    case 0x17:
      v22 = (unsigned __int16)ShadowSurfaceRes;
      *a5 = v22;
      *a4 = v22;
      *a8 = 6;
      *a6 = dword_B2C994;
      break;
    case 0x18:
      *a5 = 0x100;
      *a4 = 0x100;
      *a8 = 0x10;
      *a6 = 0;
      GetRenderedSurfacEParameters_::def_7C0D28(a2, a3, a4, a5, a6, a7, a8);
      break;
    default:
      JUMPOUT(0x7C128B);
  }
}
