void __thiscall sub_85BFD0(NiTArray_NiD3DPass *this, int a2, int a3, int a4, _DWORD *a5, NiD3DPass *a6)
{
  NiD3DPass *v6; // esi
  int v7; // edi
  int v8; // eax
  int v9; // edi
  int v10; // ebx
  NiTexture *Texture; // ebx
  int v12; // eax
  UInt32 m_uiRefCount; // edi
  int v14; // ebp
  int v17; // [esp+18h] [ebp-10h]

  v6 = (NiD3DPass *)dword_B47794;
  v7 = **(_DWORD **)(dword_B47794 + 0x24);
  v17 = v7;
  v8 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88))(a5, 0);
  v9 = *(_DWORD *)(v7 + 4);
  v10 = v8;
  if ( v9 != v8 )
  {
    if ( v9 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) )
        (**(void (__thiscall ***)(int, int))v9)(v9, 1);
    }
    *(_DWORD *)(v17 + 4) = v10;
    if ( v10 )
      InterlockedIncrement((volatile LONG *)(v10 + 4));
  }
  Texture = v6->Stages.data->Texture;
  v12 = sub_848FD0(a5, 0);
  m_uiRefCount = Texture->members.super.super.m_uiRefCount;
  v14 = v12;
  if ( m_uiRefCount != v12 )
  {
    if ( m_uiRefCount )
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) )
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1);
    }
    Texture->members.super.super.m_uiRefCount = v14;
    if ( v14 )
      InterlockedIncrement((volatile LONG *)(v14 + 4));
  }
  if ( !(_BYTE)a6 )
  {
    ++v6->RefCount;
    a6 = v6;
    sub_76CE40(this + 4, *((NiD3DPass **)this + 0xE), &a6);
    if ( v6->RefCount-- == 1 )
      sub_7604D0(v6);
    ++*((_DWORD *)this + 0xE);
  }
}
