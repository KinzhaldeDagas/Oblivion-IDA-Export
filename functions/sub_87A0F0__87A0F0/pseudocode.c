void __thiscall sub_87A0F0(NiTArray_NiD3DPass *this, int Stage, int a3, int a4, int a5)
{
  NiD3DPass *v6; // edi
  int v7; // ebx
  int (__thiscall *v8)(int, _DWORD); // eax
  int v9; // eax
  int v10; // ebx
  int v11; // ebp

  v6 = (NiD3DPass *)dword_B476F0;
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, _DWORD, _DWORD))this->_vtbl + 0x2F))(this, Stage, 0, 0);
  v8 = *(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a5 + 0x88);
  Stage = v6->Stages.data->Stage;
  v7 = Stage;
  v9 = v8(a5, 0);
  v10 = *(_DWORD *)(v7 + 4);
  v11 = v9;
  if ( v10 != v9 )
  {
    if ( v10 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) )
        (**(void (__thiscall ***)(int, int))v10)(v10, 1);
    }
    *(_DWORD *)(Stage + 4) = v11;
    if ( v11 )
      InterlockedIncrement((volatile LONG *)(v11 + 4));
  }
  ++v6->RefCount;
  Stage = (int)v6;
  sub_76CE40(this + 4, *((NiD3DPass **)this + 0xE), (NiD3DPass **)&Stage);
  if ( v6->RefCount-- == 1 )
    sub_7604D0(v6);
  ++*((_DWORD *)this + 0xE);
}
