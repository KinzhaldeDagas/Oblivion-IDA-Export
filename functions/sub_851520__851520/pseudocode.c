void __thiscall sub_851520(NiTArray_NiD3DPass *this, int a2, int a3, int a4, int a5, NiD3DPass *a6)
{
  NiD3DPass *v6; // edi
  UInt32 Stage; // esi
  int v8; // eax
  int v9; // esi
  int v10; // ebp
  _DWORD **v11; // esi
  int v12; // eax
  NiTexture *Texture; // esi
  int v14; // eax
  UInt32 m_uiRefCount; // esi
  int v16; // ebp
  NiTexture *v17; // esi
  int v18; // eax
  int v19; // esi
  double v20; // st6
  double v21; // st6
  double v22; // st7
  double v23; // st7
  double v24; // rtt
  double v25; // rt0
  double v26; // st6
  int v28; // [esp+14h] [ebp-28h]
  int v29; // [esp+14h] [ebp-28h]
  int v30; // [esp+18h] [ebp-24h]
  UInt32 v32; // [esp+48h] [ebp+Ch]
  NiTexture *v33; // [esp+48h] [ebp+Ch]
  int v34; // [esp+48h] [ebp+Ch]
  int v35; // [esp+4Ch] [ebp+10h]

  v6 = (NiD3DPass *)dword_B45B60;
  sub_848DA0(*(float **)(a4 + 0x10));
  Stage = v6->Stages.data->Stage;
  v28 = *(unsigned __int8 *)(dword_B42EB8 + 9);
  v32 = Stage;
  v8 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a5 + 0x88))(a5, v28);
  v9 = *(_DWORD *)(Stage + 4);
  v10 = v8;
  if ( v9 == v8 )
  {
    v11 = (_DWORD **)v32;
  }
  else
  {
    if ( v9 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) )
        (**(void (__thiscall ***)(int, int))v9)(v9, 1);
    }
    v11 = (_DWORD **)v32;
    *(_DWORD *)(v32 + 4) = v10;
    if ( v10 )
      InterlockedIncrement((volatile LONG *)(v10 + 4));
  }
  if ( v11 )
  {
    if ( byte_B42CDD )
    {
      v12 = (*(int (__thiscall **)(int))(*(_DWORD *)a5 + 0x78))(a5);
      sub_7715E0(v11, v12);
    }
  }
  Texture = v6->Stages.data->Texture;
  v33 = Texture;
  v14 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a5 + 0x90))(a5, v28);
  m_uiRefCount = Texture->members.super.super.m_uiRefCount;
  v16 = v14;
  if ( m_uiRefCount == v14 )
  {
    v17 = v33;
  }
  else
  {
    if ( m_uiRefCount )
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) )
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1);
    }
    v17 = v33;
    v33->members.super.super.m_uiRefCount = v16;
    if ( v16 )
      InterlockedIncrement((volatile LONG *)(v16 + 4));
  }
  if ( v17 )
  {
    if ( byte_B42CDD )
    {
      v18 = (*(int (__thiscall **)(int))(*(_DWORD *)a5 + 0x78))(a5);
      sub_7715E0(v17, v18);
    }
  }
  v19 = v28;
  v20 = 0.0;
  if ( v28 == 4 )
  {
    v21 = 1.0;
    v22 = 0.0;
    *(float *)&v30 = 1.0;
  }
  else
  {
    *(float *)&v30 = 0.0;
    if ( v28 == 3 )
    {
      *(float *)&v29 = 1.0;
      v23 = 1.0;
      goto LABEL_25;
    }
    v21 = 1.0;
    v22 = 0.0;
  }
  v24 = v21;
  v20 = v22;
  v23 = v24;
  *(float *)&v29 = v20;
  if ( v19 == 2 )
  {
    v25 = v20;
    v26 = v23;
    v23 = v25;
    *(float *)&v35 = v26;
    goto LABEL_31;
  }
LABEL_25:
  *(float *)&v35 = v20;
  if ( v19 != 1 )
    v23 = v20;
LABEL_31:
  *(float *)&v34 = v23;
  sub_7ECAE0(2u, v34, v35, v29, v30);
  sub_7ECAE0(3u, COERCE_INT(0.0), COERCE_INT(0.0), COERCE_INT(0.0), COERCE_INT(0.0));
  if ( (_BYTE)a6 )
  {
    ++v6->RefCount;
    a6 = v6;
    sub_76CE40(this + 4, *((NiD3DPass **)this + 0xE), &a6);
    if ( v6->RefCount-- == 1 )
      sub_7604D0(v6);
    ++*((_DWORD *)this + 0xE);
  }
}
