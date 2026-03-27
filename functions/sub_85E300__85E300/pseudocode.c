void __thiscall sub_85E300(NiTArray_NiD3DPass *this, int a2, int a3, int a4, _DWORD *a5, NiD3DPass *a6)
{
  NiD3DPass *v7; // edi
  UInt32 Stage; // ebx
  int v9; // eax
  int v10; // ebx
  int v11; // ebp
  UInt32 v13; // [esp+2Ch] [ebp+Ch]

  v7 = (NiD3DPass *)dword_B477F8;
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, _DWORD, _DWORD))this->_vtbl + 0x2F))(
    this,
    a2,
    0,
    *(_DWORD *)(a4 + 0x10));
  Stage = v7->Stages.data->Stage;
  v13 = Stage;
  v9 = sub_848FD0(a5, 0);
  v10 = *(_DWORD *)(Stage + 4);
  v11 = v9;
  if ( v10 != v9 )
  {
    if ( v10 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) )
        (**(void (__thiscall ***)(int, int))v10)(v10, 1);
    }
    *(_DWORD *)(v13 + 4) = v11;
    if ( v11 )
      InterlockedIncrement((volatile LONG *)(v11 + 4));
  }
  sub_848FA0((_DWORD **)v13, (int)a5);
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
