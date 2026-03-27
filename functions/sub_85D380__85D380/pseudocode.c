void __thiscall sub_85D380(NiTArray_NiD3DPass *this, int a2, int a3, int a4, _DWORD *a5, NiD3DPass *a6)
{
  int v7; // ebx
  NiD3DPass *v8; // edi
  UInt32 Stage; // ebx
  int v10; // eax
  int v11; // ebx
  NiTexture *Texture; // ebx
  int v13; // eax
  UInt32 m_uiRefCount; // ebx
  int v16; // [esp+28h] [ebp+4h]
  int v17; // [esp+28h] [ebp+4h]
  UInt32 v18; // [esp+30h] [ebp+Ch]
  NiTexture *v19; // [esp+30h] [ebp+Ch]

  v7 = *(_DWORD *)(a4 + 0xC);
  v8 = (NiD3DPass *)dword_B477B8;
  sub_848E50(v7);
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, int, _DWORD))this->_vtbl + 0x2F))(this, a2, v7, 0);
  Stage = v8->Stages.data->Stage;
  v18 = Stage;
  v10 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88))(a5, 0);
  v11 = *(_DWORD *)(Stage + 4);
  v16 = v10;
  if ( v11 != v10 )
  {
    if ( v11 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) )
        (**(void (__thiscall ***)(int, int))v11)(v11, 1);
      v10 = v16;
    }
    *(_DWORD *)(v18 + 4) = v10;
    if ( v10 )
      InterlockedIncrement((volatile LONG *)(v10 + 4));
  }
  sub_848FA0((_DWORD **)v18, (int)a5);
  Texture = v8->Stages.data->Texture;
  v19 = Texture;
  v13 = sub_848FD0(a5, 0);
  m_uiRefCount = Texture->members.super.super.m_uiRefCount;
  v17 = v13;
  if ( m_uiRefCount != v13 )
  {
    if ( m_uiRefCount )
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) )
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1);
      v13 = v17;
    }
    v19->members.super.super.m_uiRefCount = v13;
    if ( v13 )
      InterlockedIncrement((volatile LONG *)(v13 + 4));
  }
  sub_848FA0(v19, (int)a5);
  if ( !(_BYTE)a6 )
  {
    ++v8->RefCount;
    a6 = v8;
    sub_76CE40(this + 4, *((NiD3DPass **)this + 0xE), &a6);
    if ( v8->RefCount-- == 1 )
      sub_7604D0(v8);
    ++*((_DWORD *)this + 0xE);
  }
}
