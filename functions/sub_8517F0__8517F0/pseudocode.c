void __thiscall sub_8517F0(NiTArray_NiD3DPass *this, int a2, int a3, int a4, _DWORD *a5, NiD3DPass *a6)
{
  NiD3DPass *v6; // edi
  int v7; // esi
  int v8; // eax
  int v9; // esi
  int v10; // ebp
  _DWORD **v11; // esi
  int v12; // eax
  NiTexture *Texture; // esi
  int v14; // ebp
  UInt32 m_uiRefCount; // esi
  NiTexture *v16; // esi
  int v17; // eax
  int v19; // [esp+14h] [ebp-18h]
  NiTexture *v20; // [esp+14h] [ebp-18h]
  int v21; // [esp+18h] [ebp-14h]

  v6 = (NiD3DPass *)dword_B45B40;
  v7 = **(_DWORD **)(dword_B45B40 + 0x24);
  v21 = *(unsigned __int8 *)(dword_B42EB8 + 9);
  v19 = v7;
  v8 = (*(int (__thiscall **)(_DWORD *, int))(*a5 + 0x88))(a5, v21);
  v9 = *(_DWORD *)(v7 + 4);
  v10 = v8;
  if ( v9 == v8 )
  {
    v11 = (_DWORD **)v19;
  }
  else
  {
    if ( v9 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) )
        (**(void (__thiscall ***)(int, int))v9)(v9, 1);
    }
    v11 = (_DWORD **)v19;
    *(_DWORD *)(v19 + 4) = v10;
    if ( v10 )
      InterlockedIncrement((volatile LONG *)(v10 + 4));
  }
  if ( v11 )
  {
    if ( byte_B42CDD )
    {
      v12 = (*(int (__thiscall **)(_DWORD *))(*a5 + 0x78))(a5);
      sub_7715E0(v11, v12);
    }
  }
  Texture = v6->Stages.data->Texture;
  v20 = Texture;
  if ( (*(int (__thiscall **)(_DWORD *, int))(*a5 + 0x8C))(a5, v21) )
  {
    v14 = (*(int (__thiscall **)(_DWORD *, int))(*a5 + 0x8C))(a5, v21);
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
    v16 = v20;
  }
  else
  {
    if ( m_uiRefCount )
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) )
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1);
    }
    v16 = v20;
    v20->members.super.super.m_uiRefCount = v14;
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
