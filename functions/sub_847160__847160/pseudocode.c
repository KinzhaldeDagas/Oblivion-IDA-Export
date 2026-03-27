void __thiscall sub_847160(NiTArray_NiD3DPass *this, int a2, int a3, int a4, _DWORD *a5, NiD3DPass *a6)
{
  NiD3DPass *v6; // esi
  int v7; // ebx
  int v9; // edi
  int v10; // eax
  int v11; // edi
  NiTexture *Texture; // edi
  int v13; // eax
  UInt32 m_uiRefCount; // edi
  NiTArray_NiD3DPass *v15; // edi
  double v16; // st6
  double v17; // st6
  double v18; // st7
  double v19; // st7
  double v20; // rtt
  double v21; // rt0
  double v22; // st6
  int v24; // [esp+14h] [ebp-28h]
  NiTexture *v25; // [esp+14h] [ebp-28h]
  int v26; // [esp+14h] [ebp-28h]
  int v28; // [esp+18h] [ebp-24h]
  int v29; // [esp+1Ch] [ebp-20h]
  int v30; // [esp+4Ch] [ebp+10h]
  int v31; // [esp+4Ch] [ebp+10h]
  int v32; // [esp+4Ch] [ebp+10h]

  v6 = (NiD3DPass *)dword_B45B68;
  v7 = *(unsigned __int8 *)(dword_B42EB8 + 9);
  v9 = **(_DWORD **)(dword_B45B68 + 0x24);
  v24 = v9;
  v10 = (*(int (__thiscall **)(_DWORD *, int))(*a5 + 0x88))(a5, v7);
  v11 = *(_DWORD *)(v9 + 4);
  v30 = v10;
  if ( v11 != v10 )
  {
    if ( v11 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) )
        (**(void (__thiscall ***)(int, int))v11)(v11, 1);
      v10 = v30;
    }
    *(_DWORD *)(v24 + 4) = v10;
    if ( v10 )
      InterlockedIncrement((volatile LONG *)(v10 + 4));
  }
  sub_848FA0((_DWORD **)v24, (int)a5);
  Texture = v6->Stages.data->Texture;
  v25 = Texture;
  v13 = sub_848FD0(a5, v7);
  m_uiRefCount = Texture->members.super.super.m_uiRefCount;
  v31 = v13;
  if ( m_uiRefCount != v13 )
  {
    if ( m_uiRefCount )
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) )
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1);
      v13 = v31;
    }
    v25->members.super.super.m_uiRefCount = v13;
    if ( v13 )
      InterlockedIncrement((volatile LONG *)(v13 + 4));
  }
  v15 = this;
  sub_848FA0(v25, (int)a5);
  v16 = 0.0;
  if ( v7 == 4 )
  {
    v17 = 1.0;
    v18 = 0.0;
    *(float *)&v29 = 1.0;
  }
  else
  {
    *(float *)&v29 = 0.0;
    if ( v7 == 3 )
    {
      *(float *)&v26 = 1.0;
      v19 = 1.0;
      goto LABEL_19;
    }
    v17 = 1.0;
    v18 = 0.0;
  }
  v20 = v17;
  v16 = v18;
  v19 = v20;
  *(float *)&v26 = v16;
  if ( v7 == 2 )
  {
    v21 = v16;
    v22 = v19;
    v19 = v21;
    *(float *)&v28 = v22;
    goto LABEL_25;
  }
LABEL_19:
  *(float *)&v28 = v16;
  if ( v7 != 1 )
    v19 = v16;
LABEL_25:
  *(float *)&v32 = v19;
  sub_7ECAE0(0, v32, v28, v26, v29);
  sub_7ECAE0(0x19u, COERCE_INT(0.0), COERCE_INT(0.0), COERCE_INT(0.0), COERCE_INT(0.0));
  if ( (_BYTE)a6 )
  {
    ++v6->RefCount;
    a6 = v6;
    sub_76CE40(v15 + 4, *(NiD3DPass **)&v15[3].capacity, &a6);
    if ( v6->RefCount-- == 1 )
      sub_7604D0(v6);
    ++*(_DWORD *)&v15[3].capacity;
  }
}
