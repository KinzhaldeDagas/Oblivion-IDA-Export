void __thiscall sub_847D50(NiTArray_NiD3DPass *this, int a2, int a3, int a4, _DWORD *a5, NiD3DPass *a6)
{
  int v6; // ebx
  NiD3DPass *v8; // edi
  UInt32 Stage; // ebp
  int v10; // eax
  int v11; // ebx
  NiTexture *Texture; // ebx
  int v13; // eax
  UInt32 m_uiRefCount; // ebp
  UInt32 Unk08; // esi
  int v16; // ebp
  int *v17; // esi
  int v18; // ebx
  UInt32 v19; // ebx
  NiRenderedTexture *v20; // esi
  NiRenderedTexture *v21; // ebp
  int v22; // esi
  double v23; // st6
  double v24; // rt0
  double v25; // st6
  double v26; // st7
  double v27; // st6
  int v30; // [esp+18h] [ebp-28h]
  int v31; // [esp+18h] [ebp-28h]
  int v32; // [esp+1Ch] [ebp-24h]
  int v33; // [esp+20h] [ebp-20h]
  int v34; // [esp+2Ch] [ebp-14h]
  int v35; // [esp+50h] [ebp+10h]
  int v36; // [esp+50h] [ebp+10h]
  int v37; // [esp+50h] [ebp+10h]

  v6 = *(unsigned __int8 *)(dword_B42EB8 + 9);
  v8 = (NiD3DPass *)dword_B45B74;
  *(float *)&v34 = (float)*(unsigned __int8 *)(a5[0x32] + v6);
  v30 = v6;
  sub_7ECAE0(0x1Fu, COERCE_INT(1.0), dword_B25AD4, v34, dword_B25ADC);
  Stage = v8->Stages.data->Stage;
  v10 = (*(int (__thiscall **)(_DWORD *, int))(*a5 + 0x88))(a5, v6);
  v11 = *(_DWORD *)(Stage + 4);
  v35 = v10;
  if ( v11 != v10 )
  {
    if ( v11 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) )
        (**(void (__thiscall ***)(int, int))v11)(v11, 1);
      v10 = v35;
    }
    *(_DWORD *)(Stage + 4) = v10;
    if ( v10 )
      InterlockedIncrement((volatile LONG *)(v10 + 4));
  }
  sub_848FA0((_DWORD **)Stage, (int)a5);
  Texture = v8->Stages.data->Texture;
  v13 = sub_848FD0(a5, v30);
  m_uiRefCount = Texture->members.super.super.m_uiRefCount;
  v36 = v13;
  if ( m_uiRefCount != v13 )
  {
    if ( m_uiRefCount )
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) )
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1);
      v13 = v36;
    }
    Texture->members.super.super.m_uiRefCount = v13;
    if ( v13 )
      InterlockedIncrement((volatile LONG *)(v13 + 4));
  }
  sub_848FA0(Texture, (int)a5);
  Unk08 = v8->Stages.data->Unk08;
  v16 = *(_DWORD *)(Unk08 + 4);
  v17 = (int *)(Unk08 + 4);
  v18 = dword_B43108;
  if ( v16 != dword_B43108 )
  {
    if ( v16 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) )
        (**(void (__thiscall ***)(int, int))v16)(v16, 1);
    }
    *v17 = v18;
    if ( v18 )
      InterlockedIncrement((volatile LONG *)(v18 + 4));
  }
  v19 = v8->Stages.data[1].Stage;
  v20 = *(NiRenderedTexture **)(v19 + 4);
  v21 = CanopySadowMap;
  if ( v20 != CanopySadowMap )
  {
    if ( v20 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v20->member) )
        v20->__vftable->super.super.super.Destructor((NiRefObject *)v20, 1);
    }
    *(_DWORD *)(v19 + 4) = v21;
    if ( v21 )
      InterlockedIncrement((volatile LONG *)&v21->member);
  }
  v22 = v30;
  if ( v30 == 4 )
  {
    v23 = 1.0;
    *(float *)&v33 = 1.0;
  }
  else
  {
    *(float *)&v33 = 0.0;
    v23 = 1.0;
    if ( v30 == 3 )
    {
      *(float *)&v32 = 1.0;
      v25 = 0.0;
      v26 = 1.0;
      goto LABEL_33;
    }
  }
  v24 = v23;
  v25 = 0.0;
  v26 = v24;
  *(float *)&v32 = 0.0;
  if ( v30 == 2 )
  {
    v27 = v26;
    v26 = 0.0;
    *(float *)&v31 = v27;
    goto LABEL_35;
  }
LABEL_33:
  *(float *)&v31 = v25;
  if ( v22 != 1 )
    v26 = v25;
LABEL_35:
  *(float *)&v37 = v26;
  sub_7ECAE0(2u, v37, v31, v32, v33);
  sub_7ECAE0(3u, COERCE_INT(0.0), COERCE_INT(0.0), COERCE_INT(0.0), COERCE_INT(0.0));
  if ( (_BYTE)a6 )
  {
    ++v8->RefCount;
    a6 = v8;
    sub_76CE40(this + 4, *((NiD3DPass **)this + 0xE), &a6);
    if ( v8->RefCount-- == 1 )
      sub_7604D0(v8);
    ++*((_DWORD *)this + 0xE);
  }
}
