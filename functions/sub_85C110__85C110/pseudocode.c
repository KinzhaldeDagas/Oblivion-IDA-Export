void __thiscall sub_85C110(NiTArray_NiD3DPass *this, int a2, int a3, int a4, _DWORD *a5, NiD3DPass *a6)
{
  NiD3DPass *v7; // esi
  UInt32 Stage; // edi
  int v9; // eax
  int v10; // edi
  int v11; // ebp
  NiTexture *Texture; // edi
  int v13; // eax
  UInt32 m_uiRefCount; // edi
  int v15; // ebp
  UInt32 v17; // [esp+2Ch] [ebp+Ch]
  NiTexture *v18; // [esp+2Ch] [ebp+Ch]

  v7 = (NiD3DPass *)dword_B47798;
  sub_848E50(*(_DWORD *)(a4 + 0xC));
  Stage = v7->Stages.data->Stage;
  v17 = Stage;
  v9 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88))(a5, 0);
  v10 = *(_DWORD *)(Stage + 4);
  v11 = v9;
  if ( v10 != v9 )
  {
    if ( v10 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) )
        (**(void (__thiscall ***)(int, int))v10)(v10, 1);
    }
    *(_DWORD *)(v17 + 4) = v11;
    if ( v11 )
      InterlockedIncrement((volatile LONG *)(v11 + 4));
  }
  Texture = v7->Stages.data->Texture;
  v18 = Texture;
  v13 = sub_848FD0(a5, 0);
  m_uiRefCount = Texture->members.super.super.m_uiRefCount;
  v15 = v13;
  if ( m_uiRefCount != v13 )
  {
    if ( m_uiRefCount )
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) )
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1);
    }
    v18->members.super.super.m_uiRefCount = v15;
    if ( v15 )
      InterlockedIncrement((volatile LONG *)(v15 + 4));
  }
  if ( !(_BYTE)a6 )
  {
    ++v7->RefCount;
    a6 = v7;
    sub_76CE40(this + 4, *((NiD3DPass **)this + 0xE), &a6);
    if ( v7->RefCount-- == 1 )
      sub_7604D0(v7);
    ++*((_DWORD *)this + 0xE);
  }
}
