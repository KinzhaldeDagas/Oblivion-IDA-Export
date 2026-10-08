void __thiscall sub_7F9D10(volatile LONG *this, int a2)
{
  int v3; // ecx
  int v4; // eax
  double v5; // st7
  int v6; // ecx
  int v7; // eax
  double v8; // st7
  NiRenderTargetGroup *v9; // eax
  double v10; // st7
  NiRenderTargetGroup *v11; // eax
  double v12; // st7
  double v13; // st6
  double v14; // st5
  double v15; // st5
  int v16; // ecx
  double v17; // st7
  int v18; // ecx
  double v19; // st7
  double v20; // st7
  double v21; // st6
  double v22; // st5
  double v23; // st7
  int v24; // edi
  volatile LONG *v25; // ebp
  _DWORD *v26; // edi
  NiDX9Renderer *v27; // ecx
  int v28; // ecx
  int v29; // edi
  volatile LONG *v30; // ebp
  int v31; // edi
  int v32; // ebp
  _DWORD *v33; // edi
  float a4; // [esp+Ch] [ebp-30h]
  float a5; // [esp+10h] [ebp-2Ch]
  float a6; // [esp+14h] [ebp-28h]
  float v37; // [esp+28h] [ebp-14h]
  int v38; // [esp+28h] [ebp-14h]
  float v39; // [esp+28h] [ebp-14h]
  float v40; // [esp+28h] [ebp-14h]
  float v41[4]; // [esp+2Ch] [ebp-10h] BYREF
  int v42; // [esp+40h] [ebp+4h]
  float v43; // [esp+40h] [ebp+4h]
  float v44; // [esp+40h] [ebp+4h]
  float v45; // [esp+40h] [ebp+4h]
  int v46; // [esp+40h] [ebp+4h]
  float v47; // [esp+40h] [ebp+4h]
  float v48; // [esp+40h] [ebp+4h]
  float v49; // [esp+40h] [ebp+4h]
  float v50; // [esp+40h] [ebp+4h]
  float v51; // [esp+40h] [ebp+4h]
  float a3; // [esp+40h] [ebp+4h]

  if ( a2 ) /*0x7f9d1f*/
  {
    v3 = *(_DWORD *)(a2 + 0x20); /*0x7f9d21*/
    if ( v3 ) /*0x7f9d26*/
      v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 0x4C))(v3); /*0x7f9d2d*/
    else
      v4 = 0; /*0x7f9d31*/
    v5 = (double)v4; /*0x7f9d39*/
    if ( v4 < 0 ) /*0x7f9d3d*/
      v5 = v5 + flt_A2FC78; /*0x7f9d3f*/
    v6 = *(_DWORD *)(a2 + 0x20); /*0x7f9d45*/
    v37 = v5; /*0x7f9d48*/
    if ( v6 ) /*0x7f9d4e*/
    {
      v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 0x50))(v6); /*0x7f9d55*/
      v8 = (double)v7; /*0x7f9d5b*/
    }
    else
    {
      v7 = 0; /*0x7f9d61*/
      v8 = (double)0; /*0x7f9d67*/
    }
  }
  else
  {
    v9 = renderer->__vftable->super.GetDefaultRTGroup(renderer); /*0x7f9d78*/
    v42 = v9->vtbl->GetWidth(v9, 0); /*0x7f9d87*/
    v10 = (double)v42; /*0x7f9d8b*/
    if ( v42 < 0 ) /*0x7f9d8f*/
      v10 = v10 + flt_A2FC78; /*0x7f9d91*/
    v37 = v10; /*0x7f9d9d*/
    v11 = renderer->__vftable->super.GetDefaultRTGroup(renderer); /*0x7f9da6*/
    v7 = v11->vtbl->GetHeight(v11, 0); /*0x7f9db1*/
    v8 = (double)v7; /*0x7f9db7*/
  }
  if ( v7 < 0 ) /*0x7f9dbd*/
    v8 = v8 + flt_A2FC78; /*0x7f9dbf*/
  v43 = v8; /*0x7f9dc5*/
  v12 = v43 / v37; /*0x7f9dcd*/
  v13 = 1.0; /*0x7f9dd1*/
  if ( v12 >= 1.0 ) /*0x7f9dda*/
    v14 = v12; /*0x7f9de0*/
  else
    v14 = 1.0; /*0x7f9ddc*/
  v44 = v12 / v14; /*0x7f9de4*/
  if ( v12 >= 1.0 ) /*0x7f9def*/
    v13 = v12; /*0x7f9df7*/
  v15 = flt_A43328; /*0x7f9df9*/
  *((_DWORD *)this + 0x32) = 0; /*0x7f9dff*/
  v41[0] = v15; /*0x7f9e09*/
  v41[1] = v44; /*0x7f9e16*/
  v45 = 1.0 / v13; /*0x7f9e1c*/
  v41[2] = v45 - dbl_A68610; /*0x7f9e2a*/
  v41[3] = 0.0; /*0x7f9e30*/
  do /*0x7fa076*/
  {
    v16 = *((_DWORD *)this + *((_DWORD *)this + 0x32) + 0x1F); /*0x7f9e3a*/
    if ( v16 ) /*0x7f9e40*/
    {
      v46 = (*(int (__thiscall **)(int))(*(_DWORD *)v16 + 0x4C))(v16); /*0x7f9e4f*/
      v17 = (double)v46; /*0x7f9e53*/
      if ( v46 < 0 ) /*0x7f9e57*/
        v17 = v17 + flt_A2FC78; /*0x7f9e59*/
      v47 = v17; /*0x7f9e65*/
      v18 = *((_DWORD *)this + *((_DWORD *)this + 0x32) + 0x1F); /*0x7f9e69*/
      v38 = (*(int (__thiscall **)(int))(*(_DWORD *)v18 + 0x50))(v18); /*0x7f9e76*/
      v19 = (double)v38; /*0x7f9e7a*/
      if ( v38 < 0 ) /*0x7f9e7e*/
        v19 = v19 + flt_A2FC78; /*0x7f9e80*/
      v39 = v19; /*0x7f9e86*/
      v20 = v47 / v39; /*0x7f9e8e*/
      v21 = 1.0; /*0x7f9e92*/
      if ( v20 >= 1.0 ) /*0x7f9e9b*/
        v22 = v20; /*0x7f9ea1*/
      else
        v22 = 1.0; /*0x7f9e9d*/
      if ( v20 >= 1.0 ) /*0x7f9eb0*/
        v21 = v20; /*0x7f9eb8*/
      v48 = 1.0 / v21; /*0x7f9ecc*/
      v49 = v48 * dbl_A93080; /*0x7f9eda*/
      a6 = v49; /*0x7f9ee2*/
      v40 = v20 / v22; /*0x7f9ea5*/
      v50 = v40 * dbl_A93078; /*0x7f9ef0*/
      a5 = v50; /*0x7f9efc*/
      v51 = (double)(*((_DWORD *)this + 0x32) >> 2) * dbl_A7CDE0 + 1.0; /*0x7f9f19*/
      a4 = v51; /*0x7f9f25*/
      a3 = (double)(*(this + 0x32) & 3) * dbl_A2FAA0 - 1.0; /*0x7f9f49*/
      sub_702EC0(*(NiGeometry **)(*((_DWORD *)this + 0x2F) + 0xB4), 0, a3, a4, a5, a6); /*0x7f9f56*/
      v23 = sub_703050(*(NiGeometry **)(*((_DWORD *)this + 0x2F) + 0xB4)); /*0x7f9f67*/
      v24 = *((_DWORD *)this + 0x2F); /*0x7f9f6c*/
      v25 = *(volatile LONG **)(v24 + 0xBC); /*0x7f9f72*/
      v26 = (_DWORD *)(v24 + 0xBC); /*0x7f9f78*/
      if ( v25 != this ) /*0x7f9f80*/
      {
        if ( v25 ) /*0x7f9f84*/
        {
          if ( !InterlockedDecrement(v25 + 1) ) /*0x7f9f8a*/
            (**(void (__thiscall ***)(volatile LONG *, int))v25)(v25, 1); /*0x7f9fa0*/
        }
        *v26 = this; /*0x7f9fa6*/
        InterlockedIncrement(this + 1); /*0x7f9fa8*/
      }
      (*(void (__usercall **)(volatile LONG *@<ecx>, _DWORD, double@<st0>))(*this + 0x18))( /*0x7f9fbc*/
        this,
        *((_DWORD *)this + 0x2F),
        v23);
      v27 = renderer; /*0x7f9fbe*/
      if ( (renderer->member.super.SceneState1 == 1 || v27->member.super.SceneState2 == 1) /*0x7f9fda*/
        && v27->member.super.IsReady == 1 )
      {
        v27->__vftable->super.SetupScreenSpaceCamera((NiRenderer *)v27, (NiViewport *)v41); /*0x7f9fe9*/
      }
      sub_709C60(*((NiScreenElements **)this + 0x2F)); /*0x7f9ff8*/
      v28 = *((_DWORD *)this + 0x32); /*0x7f9ffd*/
      v29 = *((_DWORD *)this + v28 + 0x1F); /*0x7fa003*/
      v30 = this + v28 + 0x1F; /*0x7fa009*/
      if ( v29 ) /*0x7fa00d*/
      {
        if ( !InterlockedDecrement((volatile LONG *)(v29 + 4)) ) /*0x7fa013*/
          (**(void (__thiscall ***)(int, int))v29)(v29, 1); /*0x7fa028*/
        *v30 = 0; /*0x7fa02a*/
      }
      v31 = *((_DWORD *)this + 0x2F); /*0x7fa031*/
      v32 = *(_DWORD *)(v31 + 0xBC); /*0x7fa037*/
      v33 = (_DWORD *)(v31 + 0xBC); /*0x7fa03d*/
      if ( v32 ) /*0x7fa045*/
      {
        if ( !InterlockedDecrement((volatile LONG *)(v32 + 4)) ) /*0x7fa04b*/
          (**(void (__thiscall ***)(int, int))v32)(v32, 1); /*0x7fa061*/
        *v33 = 0; /*0x7fa063*/
      }
    }
    ++*((_DWORD *)this + 0x32); /*0x7fa069*/
  }
  while ( *((_DWORD *)this + 0x32) < 0x10u ); /*0x7fa076*/
}
