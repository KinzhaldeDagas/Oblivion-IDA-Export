void __thiscall sub_850F60(NiTArray_NiD3DPass *this, int a2, int a3, int a4, _DWORD *a5, NiD3DPass *a6)
{
  int v7; // ebp
  int v8; // eax
  int v9; // esi
  int v10; // ebx
  int v11; // eax
  NiTexture *Texture; // esi
  int v13; // ebp
  int v14; // ebx
  UInt32 m_uiRefCount; // esi
  NiTexture *v16; // esi
  int v17; // eax
  double v18; // st6
  double v19; // st6
  double v20; // st7
  double v21; // st7
  double v22; // rtt
  double v23; // rt0
  double v24; // st6
  int v26; // [esp+14h] [ebp-30h]
  int v27; // [esp+18h] [ebp-2Ch]
  int v28; // [esp+1Ch] [ebp-28h]
  int v29; // [esp+1Ch] [ebp-28h]
  NiD3DPass *v30; // [esp+20h] [ebp-24h]
  NiTexture *v32; // [esp+54h] [ebp+10h]
  int v33; // [esp+54h] [ebp+10h]

  v7 = **(_DWORD **)(dword_B45B58 + 0x24);
  v30 = (NiD3DPass *)dword_B45B58;
  v28 = *(unsigned __int8 *)(dword_B42EB8 + 9);
  v8 = (*(int (__thiscall **)(_DWORD *, int))(*a5 + 0x88))(a5, v28);
  v9 = *(_DWORD *)(v7 + 4);
  v10 = v8;
  if ( v9 != v8 )
  {
    if ( v9 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) )
        (**(void (__thiscall ***)(int, int))v9)(v9, 1);
    }
    *(_DWORD *)(v7 + 4) = v10;
    if ( v10 )
      InterlockedIncrement((volatile LONG *)(v10 + 4));
  }
  if ( v7 )
  {
    if ( byte_B42CDD )
    {
      v11 = (*(int (__thiscall **)(_DWORD *))(*a5 + 0x78))(a5);
      sub_7715E0((_DWORD **)v7, v11);
    }
  }
  Texture = v30->Stages.data->Texture;
  v13 = v28;
  v32 = Texture;
  if ( (*(int (__thiscall **)(_DWORD *, int))(*a5 + 0x8C))(a5, v28) )
  {
    v14 = (*(int (__thiscall **)(_DWORD *, int))(*a5 + 0x8C))(a5, v28);
  }
  else
  {
    v14 = dword_B430F0;
    if ( (a5[7] & 0x80) == 0 )
      v14 = dword_B430DC;
  }
  m_uiRefCount = Texture->members.super.super.m_uiRefCount;
  if ( m_uiRefCount == v14 )
  {
    v16 = v32;
  }
  else
  {
    if ( m_uiRefCount )
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) )
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1);
    }
    v16 = v32;
    v32->members.super.super.m_uiRefCount = v14;
    if ( v14 )
      InterlockedIncrement((volatile LONG *)(v14 + 4));
  }
  if ( v16 )
  {
    if ( byte_B42CDD )
    {
      v17 = (*(int (__thiscall **)(_DWORD *))(*a5 + 0x78))(a5);
      sub_7715E0(v16, v17);
    }
  }
  v18 = 0.0;
  if ( v28 == 4 )
  {
    v19 = 1.0;
    v20 = 0.0;
    *(float *)&v29 = 1.0;
  }
  else
  {
    *(float *)&v29 = 0.0;
    if ( v13 == 3 )
    {
      *(float *)&v27 = 1.0;
      v21 = 1.0;
      goto LABEL_28;
    }
    v19 = 1.0;
    v20 = 0.0;
  }
  v22 = v19;
  v18 = v20;
  v21 = v22;
  *(float *)&v27 = v18;
  if ( v13 == 2 )
  {
    v23 = v18;
    v24 = v21;
    v21 = v23;
    *(float *)&v26 = v24;
    goto LABEL_34;
  }
LABEL_28:
  *(float *)&v26 = v18;
  if ( v13 != 1 )
    v21 = v18;
LABEL_34:
  *(float *)&v33 = v21;
  sub_7ECAE0(2u, v33, v26, v27, v29);
  sub_7ECAE0(3u, COERCE_INT(0.0), COERCE_INT(0.0), COERCE_INT(0.0), COERCE_INT(0.0));
  if ( (_BYTE)a6 )
  {
    ++v30->RefCount;
    a6 = v30;
    sub_76CE40(this + 4, *((NiD3DPass **)this + 0xE), &a6);
    if ( v30->RefCount-- == 1 )
      sub_7604D0(v30);
    ++*((_DWORD *)this + 0xE);
  }
}
