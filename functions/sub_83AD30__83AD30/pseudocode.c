void __thiscall sub_83AD30(NiTArray_NiD3DPass *this, int a2, int a3, int Stage, _DWORD *a5)
{
  int v6; // ebx
  NiD3DPass *v7; // edi
  int v8; // ebx
  _DWORD *v9; // ebx
  int v10; // ebp
  int (__thiscall *v11)(_DWORD *, _DWORD); // eax
  int v12; // eax
  int v13; // ebp
  int v14; // ebp
  int v15; // eax
  int v16; // ebp
  int v18; // [esp+28h] [ebp+4h]
  int v19; // [esp+28h] [ebp+4h]

  v6 = Stage;
  v7 = (NiD3DPass *)dword_B45778;
  sub_848C40(*(float **)(Stage + 0x10));
  v8 = *(_DWORD *)(v6 + 0xC);
  sub_848E50(v8);
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, int, _DWORD))this->_vtbl + 0x2F))(this, a2, v8, 0);
  v9 = a5;
  v11 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88);
  Stage = v7->Stages.data->Stage;
  v10 = Stage;
  v12 = v11(a5, 0);
  v13 = *(_DWORD *)(v10 + 4);
  v18 = v12;
  if ( v13 != v12 )
  {
    if ( v13 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) )
        (**(void (__thiscall ***)(int, int))v13)(v13, 1);
      v12 = v18;
    }
    *(_DWORD *)(Stage + 4) = v12;
    if ( v12 )
      InterlockedIncrement((volatile LONG *)(v12 + 4));
  }
  sub_848FA0((_DWORD **)Stage, (int)v9);
  Stage = (int)v7->Stages.data->Texture;
  v14 = Stage;
  v15 = sub_848FD0(v9, 0);
  v16 = *(_DWORD *)(v14 + 4);
  v19 = v15;
  if ( v16 != v15 )
  {
    if ( v16 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) )
        (**(void (__thiscall ***)(int, int))v16)(v16, 1);
      v15 = v19;
    }
    *(_DWORD *)(Stage + 4) = v15;
    if ( v15 )
      InterlockedIncrement((volatile LONG *)(v15 + 4));
  }
  sub_848FA0((_DWORD **)Stage, (int)v9);
  ++v7->RefCount;
  Stage = (int)v7;
  sub_76CE40(this + 4, *((NiD3DPass **)this + 0xE), (NiD3DPass **)&Stage);
  if ( v7->RefCount-- == 1 )
    sub_7604D0(v7);
  ++*((_DWORD *)this + 0xE);
}
