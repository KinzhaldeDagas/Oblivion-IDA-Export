void __thiscall sub_881FD0(NiTArray_NiD3DPass *this, int a2, int a3, int Stage, _DWORD *a5)
{
  int v6; // ebx
  NiD3DPass *v7; // edi
  int v8; // ebx
  int v9; // ebx
  int v10; // eax
  int v11; // ebx
  int v12; // ebp
  UInt32 v13; // ebp
  int v14; // ebx
  bool v15; // zf
  int v16; // ecx

  v6 = Stage;
  v7 = (NiD3DPass *)dword_B4775C;
  sub_848C40(*(float **)(Stage + 0x10));
  v8 = *(_DWORD *)(v6 + 0xC);
  sub_848E50(v8);
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, int, _DWORD))this->_vtbl + 0x2F))(this, a2, v8, 0);
  Stage = v7->Stages.data->Stage;
  v9 = Stage;
  v10 = sub_848FD0(a5, 0);
  v11 = *(_DWORD *)(v9 + 4);
  v12 = v10;
  if ( v11 != v10 )
  {
    if ( v11 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) )
        (**(void (__thiscall ***)(int, int))v11)(v11, 1);
    }
    *(_DWORD *)(Stage + 4) = v12;
    if ( v12 )
      InterlockedIncrement((volatile LONG *)(v12 + 4));
  }
  v13 = v7->Stages.data[1].Stage;
  v14 = *(_DWORD *)(v13 + 4);
  v15 = v14 == dword_B43110;
  v16 = dword_B43110;
  Stage = dword_B43110;
  if ( !v15 )
  {
    if ( v14 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v14 + 4)) )
        (**(void (__thiscall ***)(int, int))v14)(v14, 1);
      v16 = Stage;
    }
    *(_DWORD *)(v13 + 4) = v16;
    if ( v16 )
      InterlockedIncrement((volatile LONG *)(v16 + 4));
  }
  ++v7->RefCount;
  Stage = (int)v7;
  sub_76CE40(this + 4, *((NiD3DPass **)this + 0xE), (NiD3DPass **)&Stage);
  v15 = v7->RefCount-- == 1;
  if ( v15 )
    sub_7604D0(v7);
  ++*((_DWORD *)this + 0xE);
}
