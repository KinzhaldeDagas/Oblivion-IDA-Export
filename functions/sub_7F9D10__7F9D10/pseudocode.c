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

  if ( a2 )
  {
    v3 = *(_DWORD *)(a2 + 0x20);
    if ( v3 )
      v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 0x4C))(v3);
    else
      v4 = 0;
    v5 = (double)v4;
    if ( v4 < 0 )
      v5 = v5 + flt_A2FC78;
    v6 = *(_DWORD *)(a2 + 0x20);
    v37 = v5;
    if ( v6 )
    {
      v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 0x50))(v6);
      v8 = (double)v7;
    }
    else
    {
      v7 = 0;
      v8 = (double)0;
    }
  }
  else
  {
    v9 = g_Renderer->__vftable->super.GetDefaultRTGroup(g_Renderer);
    v42 = v9->vtbl->GetWidth(v9, 0);
    v10 = (double)v42;
    if ( v42 < 0 )
      v10 = v10 + flt_A2FC78;
    v37 = v10;
    v11 = g_Renderer->__vftable->super.GetDefaultRTGroup(g_Renderer);
    v7 = v11->vtbl->GetHeight(v11, 0);
    v8 = (double)v7;
  }
  if ( v7 < 0 )
    v8 = v8 + flt_A2FC78;
  v43 = v8;
  v12 = v43 / v37;
  v13 = 1.0;
  if ( v12 >= 1.0 )
    v14 = v12;
  else
    v14 = 1.0;
  v44 = v12 / v14;
  if ( v12 >= 1.0 )
    v13 = v12;
  v15 = flt_A43328;
  *((_DWORD *)this + 0x32) = 0;
  v41[0] = v15;
  v41[1] = v44;
  v45 = 1.0 / v13;
  v41[2] = v45 - dbl_A68610;
  v41[3] = 0.0;
  do
  {
    v16 = *((_DWORD *)this + *((_DWORD *)this + 0x32) + 0x1F);
    if ( v16 )
    {
      v46 = (*(int (__thiscall **)(int))(*(_DWORD *)v16 + 0x4C))(v16);
      v17 = (double)v46;
      if ( v46 < 0 )
        v17 = v17 + flt_A2FC78;
      v47 = v17;
      v18 = *((_DWORD *)this + *((_DWORD *)this + 0x32) + 0x1F);
      v38 = (*(int (__thiscall **)(int))(*(_DWORD *)v18 + 0x50))(v18);
      v19 = (double)v38;
      if ( v38 < 0 )
        v19 = v19 + flt_A2FC78;
      v39 = v19;
      v20 = v47 / v39;
      v21 = 1.0;
      if ( v20 >= 1.0 )
        v22 = v20;
      else
        v22 = 1.0;
      if ( v20 >= 1.0 )
        v21 = v20;
      v48 = 1.0 / v21;
      v49 = v48 * dbl_A93080;
      a6 = v49;
      v40 = v20 / v22;
      v50 = v40 * dbl_A93078;
      a5 = v50;
      v51 = (double)(*((_DWORD *)this + 0x32) >> 2) * dbl_A7CDE0 + 1.0;
      a4 = v51;
      a3 = (double)(*(this + 0x32) & 3) * dbl_A2FAA0 - 1.0;
      sub_702EC0(*(NiGeometry **)(*((_DWORD *)this + 0x2F) + 0xB4), 0, a3, a4, a5, a6);
      v23 = sub_703050(*(NiGeometry **)(*((_DWORD *)this + 0x2F) + 0xB4));
      v24 = *((_DWORD *)this + 0x2F);
      v25 = *(volatile LONG **)(v24 + 0xBC);
      v26 = (_DWORD *)(v24 + 0xBC);
      if ( v25 != this )
      {
        if ( v25 )
        {
          if ( !InterlockedDecrement(v25 + 1) )
            (**(void (__thiscall ***)(volatile LONG *, int))v25)(v25, 1);
        }
        *v26 = this;
        InterlockedIncrement(this + 1);
      }
      (*(void (__usercall **)(volatile LONG *@<ecx>, _DWORD, double@<st0>))(*this + 0x18))(
        this,
        *((_DWORD *)this + 0x2F),
        v23);
      v27 = g_Renderer;
      if ( (g_Renderer->member.super.SceneState1 == 1 || v27->member.super.SceneState2 == 1)
        && v27->member.super.IsReady == 1 )
      {
        v27->__vftable->super.SetupScreenSpaceCamera((NiRenderer *)v27, (NiViewport *)v41);
      }
      sub_709C60(*((NiScreenElements **)this + 0x2F));
      v28 = *((_DWORD *)this + 0x32);
      v29 = *((_DWORD *)this + v28 + 0x1F);
      v30 = this + v28 + 0x1F;
      if ( v29 )
      {
        if ( !InterlockedDecrement((volatile LONG *)(v29 + 4)) )
          (**(void (__thiscall ***)(int, int))v29)(v29, 1);
        *v30 = 0;
      }
      v31 = *((_DWORD *)this + 0x2F);
      v32 = *(_DWORD *)(v31 + 0xBC);
      v33 = (_DWORD *)(v31 + 0xBC);
      if ( v32 )
      {
        if ( !InterlockedDecrement((volatile LONG *)(v32 + 4)) )
          (**(void (__thiscall ***)(int, int))v32)(v32, 1);
        *v33 = 0;
      }
    }
    ++*((_DWORD *)this + 0x32);
  }
  while ( *((_DWORD *)this + 0x32) < 0x10u );
}
