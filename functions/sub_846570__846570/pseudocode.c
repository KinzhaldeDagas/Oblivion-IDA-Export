void __thiscall sub_846570(NiTArray_NiD3DPass *this, int a2, int a3, int a4, _DWORD *a5, NiD3DPass *a6)
{
  NiD3DPass *v6; // edi
  int v8; // ebp
  int v9; // eax
  int v10; // ebx
  NiTexture *Texture; // ebp
  int v12; // eax
  UInt32 m_uiRefCount; // ebx
  UInt32 Unk08; // esi
  int v15; // ebx
  int *v16; // esi
  int v17; // ebp
  UInt32 Stage; // ebx
  NiRenderedTexture *v19; // esi
  NiRenderedTexture *v20; // ebp
  int v21; // esi
  double v22; // st6
  double v23; // st6
  double v24; // st7
  double v25; // st7
  double v26; // rtt
  double v27; // rt0
  double v28; // st6
  int v31; // [esp+18h] [ebp-28h]
  int v32; // [esp+18h] [ebp-28h]
  int v33; // [esp+1Ch] [ebp-24h]
  int v34; // [esp+20h] [ebp-20h]
  int v35; // [esp+50h] [ebp+10h]
  int v36; // [esp+50h] [ebp+10h]
  int v37; // [esp+50h] [ebp+10h]

  v6 = (NiD3DPass *)dword_B45B5C;
  v8 = **(_DWORD **)(dword_B45B5C + 0x24);
  v31 = *(unsigned __int8 *)(dword_B42EB8 + 9);
  v9 = (*(int (__thiscall **)(_DWORD *, int))(*a5 + 0x88))(a5, v31);
  v10 = *(_DWORD *)(v8 + 4);
  v35 = v9;
  if ( v10 != v9 )
  {
    if ( v10 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) )
        (**(void (__thiscall ***)(int, int))v10)(v10, 1);
      v9 = v35;
    }
    *(_DWORD *)(v8 + 4) = v9;
    if ( v9 )
      InterlockedIncrement((volatile LONG *)(v9 + 4));
  }
  sub_848FA0((_DWORD **)v8, (int)a5);
  Texture = v6->Stages.data->Texture;
  v12 = sub_848FD0(a5, v31);
  m_uiRefCount = Texture->members.super.super.m_uiRefCount;
  v36 = v12;
  if ( m_uiRefCount != v12 )
  {
    if ( m_uiRefCount )
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) )
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1);
      v12 = v36;
    }
    Texture->members.super.super.m_uiRefCount = v12;
    if ( v12 )
      InterlockedIncrement((volatile LONG *)(v12 + 4));
  }
  sub_848FA0(Texture, (int)a5);
  Unk08 = v6->Stages.data->Unk08;
  v15 = *(_DWORD *)(Unk08 + 4);
  v16 = (int *)(Unk08 + 4);
  v17 = dword_B43108;
  if ( v15 != dword_B43108 )
  {
    if ( v15 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v15 + 4)) )
        (**(void (__thiscall ***)(int, int))v15)(v15, 1);
    }
    *v16 = v17;
    if ( v17 )
      InterlockedIncrement((volatile LONG *)(v17 + 4));
  }
  Stage = v6->Stages.data[1].Stage;
  v19 = *(NiRenderedTexture **)(Stage + 4);
  v20 = CanopySadowMap;
  if ( v19 != CanopySadowMap )
  {
    if ( v19 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v19->member) )
        v19->__vftable->super.super.super.Destructor((NiRefObject *)v19, 1);
    }
    *(_DWORD *)(Stage + 4) = v20;
    if ( v20 )
      InterlockedIncrement((volatile LONG *)&v20->member);
  }
  v21 = v31;
  v22 = 0.0;
  if ( v31 == 4 )
  {
    v23 = 1.0;
    v24 = 0.0;
    *(float *)&v34 = 1.0;
  }
  else
  {
    *(float *)&v34 = 0.0;
    if ( v31 == 3 )
    {
      *(float *)&v33 = 1.0;
      v25 = 1.0;
      goto LABEL_31;
    }
    v23 = 1.0;
    v24 = 0.0;
  }
  v26 = v23;
  v22 = v24;
  v25 = v26;
  *(float *)&v33 = v22;
  if ( v31 == 2 )
  {
    v27 = v22;
    v28 = v25;
    v25 = v27;
    *(float *)&v32 = v28;
    goto LABEL_37;
  }
LABEL_31:
  *(float *)&v32 = v22;
  if ( v21 != 1 )
    v25 = v22;
LABEL_37:
  *(float *)&v37 = v25;
  sub_7ECAE0(2u, v37, v32, v33, v34);
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
