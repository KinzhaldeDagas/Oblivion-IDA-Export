void __thiscall sub_83AEB0(NiTArray_NiD3DPass *this, int a2, int a3, int a4, int a5)
{
  NiD3DPass *v6; // edi
  int v7; // ebx
  UInt32 Stage; // ebp
  int v9; // eax
  int v10; // ebx
  _DWORD *v11; // ebx
  NiTexture *Texture; // ebp
  int v13; // eax
  UInt32 m_uiRefCount; // ebp
  int v15; // ebx
  UInt32 v16; // ebx
  int v17; // eax
  int v18; // ebp
  float v19; // edx
  double v20; // st7
  double v21; // st7
  int v23; // [esp+1Ch] [ebp-1Ch]
  int v24; // [esp+24h] [ebp-14h]
  int v25; // [esp+28h] [ebp-10h]
  int v26; // [esp+3Ch] [ebp+4h]
  int v27; // [esp+44h] [ebp+Ch]
  NiTexture *v28; // [esp+44h] [ebp+Ch]
  int v29; // [esp+44h] [ebp+Ch]

  v6 = (NiD3DPass *)dword_B4577C;
  sub_848C40(*(float **)(a4 + 0x10));
  v7 = *(_DWORD *)(a4 + 0xC);
  sub_848E50(v7);
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, int, _DWORD))this->_vtbl + 0x2F))(this, a2, v7, 0);
  Stage = v6->Stages.data->Stage;
  v9 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a5 + 0x88))(a5, 0);
  v10 = *(_DWORD *)(Stage + 4);
  v27 = v9;
  if ( v10 != v9 )
  {
    if ( v10 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) )
        (**(void (__thiscall ***)(int, int))v10)(v10, 1);
      v9 = v27;
    }
    *(_DWORD *)(Stage + 4) = v9;
    if ( v9 )
      InterlockedIncrement((volatile LONG *)(v9 + 4));
  }
  v11 = (_DWORD *)a5;
  sub_848FA0((_DWORD **)Stage, a5);
  Texture = v6->Stages.data->Texture;
  v28 = Texture;
  v13 = sub_848FD0(v11, 0);
  m_uiRefCount = Texture->members.super.super.m_uiRefCount;
  v15 = v13;
  if ( m_uiRefCount != v13 )
  {
    if ( m_uiRefCount )
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) )
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1);
    }
    v28->members.super.super.m_uiRefCount = v15;
    if ( v15 )
      InterlockedIncrement((volatile LONG *)(v15 + 4));
  }
  v16 = v6->Stages.data[2].Stage;
  v17 = dword_B430E8;
  v18 = *(_DWORD *)(v16 + 4);
  v29 = dword_B430E8;
  if ( v18 != dword_B430E8 )
  {
    if ( v18 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v18 + 4)) )
        (**(void (__thiscall ***)(int, int))v18)(v18, 1);
      v17 = v29;
    }
    *(_DWORD *)(v16 + 4) = v17;
    if ( v17 )
      InterlockedIncrement((volatile LONG *)(v17 + 4));
  }
  sub_848FA0((_DWORD **)v16, a5);
  v19 = *(float *)(a2 + 0x8C);
  *(float *)&a5 = 0.0 - *(float *)(a2 + 0x88);
  *(float *)&v26 = 0.0 - v19;
  v20 = *(float *)&a5;
  a5 = (int)v6;
  *(float *)&v23 = v20;
  dword_B4617C = v23;
  v21 = flt_A94900;
  dword_B46180 = v26;
  *(float *)&v24 = v21;
  *(float *)&v25 = v21;
  dword_B46184 = v24;
  dword_B46188 = v25;
  ++v6->RefCount;
  sub_76CE40(this + 4, *((NiD3DPass **)this + 0xE), (NiD3DPass **)&a5);
  if ( v6->RefCount-- == 1 )
    sub_7604D0(v6);
  ++*((_DWORD *)this + 0xE);
}
