void __thiscall sub_84F7F0(NiTArray_NiD3DPass *this, int a2, int a3, int a4, NiD3DPass *a5)
{
  NiD3DPass *v5; // ebx
  NiD3DPass *v6; // esi
  int v7; // edi
  int v8; // eax
  int v9; // edi
  int v10; // ebp
  _DWORD **v11; // edi
  int v12; // eax
  NiTexture *Texture; // edi
  int v14; // eax
  UInt32 m_uiRefCount; // edi
  int v16; // ebp
  NiTexture *v17; // edi
  int v18; // eax
  UInt32 Unk08; // edi
  int v20; // ebp
  int v21; // edi
  _DWORD **v22; // edi
  int v23; // eax
  int v25; // [esp+14h] [ebp-14h]
  NiTexture *v26; // [esp+14h] [ebp-14h]
  UInt32 v27; // [esp+14h] [ebp-14h]

  v5 = (NiD3DPass *)dword_B459C8;
  v6 = a5;
  v7 = **(_DWORD **)(dword_B459C8 + 0x24);
  v25 = v7;
  v8 = ((int (__thiscall *)(NiD3DPass *, _DWORD))a5->__vftable[8].sub_75FD90)(a5, 0);
  v9 = *(_DWORD *)(v7 + 4);
  v10 = v8;
  if ( v9 == v8 )
  {
    v11 = (_DWORD **)v25;
  }
  else
  {
    if ( v9 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) )
        (**(void (__thiscall ***)(int, int))v9)(v9, 1);
    }
    v11 = (_DWORD **)v25;
    *(_DWORD *)(v25 + 4) = v10;
    if ( v10 )
      InterlockedIncrement((volatile LONG *)(v10 + 4));
  }
  if ( v11 )
  {
    if ( byte_B42CDD )
    {
      v12 = ((int (__thiscall *)(NiD3DPass *))v6->__vftable[7].sub_75FD90)(v6);
      sub_7715E0(v11, v12);
    }
  }
  Texture = v5->Stages.data->Texture;
  v26 = Texture;
  v14 = ((int (__thiscall *)(NiD3DPass *, int))v6->__vftable[8].sub_75FD90)(v6, 1);
  m_uiRefCount = Texture->members.super.super.m_uiRefCount;
  v16 = v14;
  if ( m_uiRefCount == v14 )
  {
    v17 = v26;
  }
  else
  {
    if ( m_uiRefCount )
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) )
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1);
    }
    v17 = v26;
    v26->members.super.super.m_uiRefCount = v16;
    if ( v16 )
      InterlockedIncrement((volatile LONG *)(v16 + 4));
  }
  if ( v17 )
  {
    if ( byte_B42CDD )
    {
      v18 = ((int (__thiscall *)(NiD3DPass *))v6->__vftable[7].sub_75FD90)(v6);
      sub_7715E0(v17, v18);
    }
  }
  Unk08 = v5->Stages.data->Unk08;
  v27 = Unk08;
  if ( ((int (__thiscall *)(NiD3DPass *, int))v6->__vftable[8].sub_75F9E0)(v6, 1) )
  {
    v20 = ((int (__thiscall *)(NiD3DPass *, int))v6->__vftable[8].sub_75F9E0)(v6, 1);
  }
  else
  {
    v20 = dword_B430F0;
    if ( (v6->TexturesPerPass & 0x80) == 0 )
      v20 = dword_B430DC;
  }
  v21 = *(_DWORD *)(Unk08 + 4);
  if ( v21 == v20 )
  {
    v22 = (_DWORD **)v27;
  }
  else
  {
    if ( v21 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v21 + 4)) )
        (**(void (__thiscall ***)(int, int))v21)(v21, 1);
    }
    v22 = (_DWORD **)v27;
    *(_DWORD *)(v27 + 4) = v20;
    if ( v20 )
      InterlockedIncrement((volatile LONG *)(v20 + 4));
  }
  if ( v22 )
  {
    if ( byte_B42CDD )
    {
      v23 = ((int (__thiscall *)(NiD3DPass *))v6->__vftable[7].sub_75FD90)(v6);
      sub_7715E0(v22, v23);
    }
  }
  ++v5->RefCount;
  a5 = v5;
  sub_76CE40(this + 4, *((NiD3DPass **)this + 0xE), &a5);
  if ( v5->RefCount-- == 1 )
    sub_7604D0(v5);
  ++*((_DWORD *)this + 0xE);
}
