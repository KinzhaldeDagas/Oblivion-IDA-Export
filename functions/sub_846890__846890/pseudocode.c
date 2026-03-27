void __thiscall sub_846890(NiTArray_NiD3DPass *this, int a2, int a3, int a4, float *a5, NiD3DPass *a6)
{
  NiD3DPass *v6; // esi
  int v8; // ebp
  int v9; // eax
  int v10; // ebx
  NiTexture *Texture; // ebp
  int v12; // eax
  UInt32 m_uiRefCount; // ebx
  UInt32 Unk08; // ebp
  int v15; // ebx
  int v16; // ecx
  double v17; // st7
  double v18; // st6
  bool v19; // zf
  double v20; // st6
  double v21; // st6
  int v23; // [esp+18h] [ebp-30h]
  float v24; // [esp+1Ch] [ebp-2Ch]
  int v25; // [esp+1Ch] [ebp-2Ch]
  float v26; // [esp+20h] [ebp-28h]
  float v27; // [esp+24h] [ebp-24h]
  float v28; // [esp+24h] [ebp-24h]
  int v29; // [esp+24h] [ebp-24h]
  float v30; // [esp+28h] [ebp-20h]
  float v31; // [esp+28h] [ebp-20h]
  float v32; // [esp+2Ch] [ebp-1Ch]
  int v33; // [esp+2Ch] [ebp-1Ch]
  float v34; // [esp+30h] [ebp-18h]
  int v35; // [esp+30h] [ebp-18h]
  int v36; // [esp+34h] [ebp-14h]
  int v37; // [esp+38h] [ebp-10h]
  int v38; // [esp+4Ch] [ebp+4h]
  int v39; // [esp+58h] [ebp+10h]
  int v40; // [esp+58h] [ebp+10h]
  int v41; // [esp+58h] [ebp+10h]
  float v42; // [esp+58h] [ebp+10h]
  float v43; // [esp+58h] [ebp+10h]
  float v44; // [esp+58h] [ebp+10h]

  v6 = (NiD3DPass *)dword_B45B78;
  v8 = **(_DWORD **)(dword_B45B78 + 0x24);
  v23 = *(unsigned __int8 *)(dword_B42EB8 + 9);
  v9 = (*(int (__thiscall **)(float *, int))(*(_DWORD *)a5 + 0x88))(a5, v23);
  v10 = *(_DWORD *)(v8 + 4);
  v39 = v9;
  if ( v10 != v9 )
  {
    if ( v10 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) )
        (**(void (__thiscall ***)(int, int))v10)(v10, 1);
      v9 = v39;
    }
    *(_DWORD *)(v8 + 4) = v9;
    if ( v9 )
      InterlockedIncrement((volatile LONG *)(v9 + 4));
  }
  sub_848FA0((_DWORD **)v8, (int)a5);
  Texture = v6->Stages.data->Texture;
  v12 = sub_848FD0(a5, v23);
  m_uiRefCount = Texture->members.super.super.m_uiRefCount;
  v40 = v12;
  if ( m_uiRefCount != v12 )
  {
    if ( m_uiRefCount )
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) )
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1);
      v12 = v40;
    }
    Texture->members.super.super.m_uiRefCount = v12;
    if ( v12 )
      InterlockedIncrement((volatile LONG *)(v12 + 4));
  }
  sub_848FA0(Texture, (int)a5);
  Unk08 = v6->Stages.data->Unk08;
  v15 = *(_DWORD *)(Unk08 + 4);
  v16 = dword_B430E8;
  v41 = dword_B430E8;
  if ( v15 != dword_B430E8 )
  {
    if ( v15 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v15 + 4)) )
        (**(void (__thiscall ***)(int, int))v15)(v15, 1);
      v16 = v41;
    }
    *(_DWORD *)(Unk08 + 4) = v16;
    if ( v16 )
      InterlockedIncrement((volatile LONG *)(v16 + 4));
  }
  v17 = 0.0;
  v32 = *(float *)(a2 + 0x88);
  v34 = *(float *)(a2 + 0x8C);
  if ( dword_B42D78 )
  {
    v42 = ((double (__cdecl *)(_DWORD, _DWORD))dword_B42D78)(0, 0);
    v17 = 0.0;
  }
  else
  {
    v42 = 0.0;
  }
  v18 = (v42 - flt_B43078) / dbl_A94908;
  if ( v18 < 0.0 || v18 <= 1.0 )
  {
    if ( v18 < 0.0 )
      v18 = 0.0;
  }
  else
  {
    v18 = 1.0;
  }
  v19 = (_BYTE)a6 == 0;
  v43 = v18;
  v27 = *(float *)&dword_B4312C - *(float *)&dword_B43134;
  v30 = *(float *)&dword_B43130 - *(float *)&dword_B43138;
  v24 = v27 * v43;
  v26 = v43 * v30;
  v28 = v24 + *(float *)&dword_B43134;
  v31 = v26 + *(float *)&dword_B43138;
  v38 = *((int *)a5 + 0x2B);
  *(float *)&v25 = v28 - v32;
  *(float *)&v29 = v31 - v34;
  dword_B46638 = *((int *)a5 + 0x2A);
  dword_B4663C = v38;
  dword_B46640 = v25;
  v20 = (double)dword_B2C684;
  dword_B46644 = v29;
  v44 = v20 * dbl_A2FAA0;
  *(float *)&v33 = v44 * dbl_A37650;
  v21 = flt_A2FF44;
  dword_B46648 = v33;
  *(float *)&v35 = v21;
  dword_B4664C = v35;
  *(float *)&v36 = v17;
  *(float *)&v37 = v17;
  dword_B46650 = v36;
  dword_B46654 = v37;
  if ( !v19 )
  {
    if ( byte_B2C67E )
    {
      if ( byte_B43077 )
      {
        if ( (*(int (__thiscall **)(float *, int))(*(_DWORD *)a5 + 0x88))(a5, v23) )
        {
          ++v6->RefCount;
          a6 = v6;
          sub_76CE40(this + 4, *((NiD3DPass **)this + 0xE), &a6);
          v19 = v6->RefCount-- == 1;
          if ( v19 )
            sub_7604D0(v6);
          ++*((_DWORD *)this + 0xE);
        }
      }
    }
  }
}
