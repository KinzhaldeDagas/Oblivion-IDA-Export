void __thiscall sub_8813A0(NiTArray_NiD3DPass *this, int a2, int a3, int Stage, _DWORD *a5)
{
  int v6; // ebx
  NiD3DPass *v7; // edi
  int v8; // ebx
  _DWORD *v9; // ebp
  int v10; // ebx
  int (__thiscall *v11)(_DWORD *, _DWORD); // eax
  int v12; // eax
  int v13; // ebx
  int v14; // ebx
  int v15; // eax
  int v16; // ebx
  int v17; // ebx
  int (__thiscall *v18)(_DWORD *, int); // edx
  int v19; // eax
  int v20; // ebx
  int v21; // eax
  int v22; // ebp
  int v23; // ebx
  UInt32 Unk08; // ebx
  int v25; // ebp
  bool v26; // zf
  int v27; // ecx
  int v28; // [esp+38h] [ebp+4h]
  int v29; // [esp+38h] [ebp+4h]
  int v30; // [esp+38h] [ebp+4h]

  v6 = Stage;
  v7 = (NiD3DPass *)dword_B47748;
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
  v28 = v12;
  if ( v13 != v12 )
  {
    if ( v13 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) )
        (**(void (__thiscall ***)(int, int))v13)(v13, 1);
      v12 = v28;
    }
    *(_DWORD *)(Stage + 4) = v12;
    if ( v12 )
      InterlockedIncrement((volatile LONG *)(v12 + 4));
  }
  Stage = (int)v7->Stages.data->Texture;
  v14 = Stage;
  v15 = sub_848FD0(v9, 0);
  v16 = *(_DWORD *)(v14 + 4);
  v29 = v15;
  if ( v16 != v15 )
  {
    if ( v16 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) )
        (**(void (__thiscall ***)(int, int))v16)(v16, 1);
      v15 = v29;
    }
    *(_DWORD *)(Stage + 4) = v15;
    if ( v15 )
      InterlockedIncrement((volatile LONG *)(v15 + 4));
  }
  v18 = *(int (__thiscall **)(_DWORD *, int))(*v9 + 0x88);
  Stage = v7->Stages.data->Unk08;
  v17 = Stage;
  v19 = v18(v9, 1);
  v20 = *(_DWORD *)(v17 + 4);
  v30 = v19;
  if ( v20 != v19 )
  {
    if ( v20 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v20 + 4)) )
        (**(void (__thiscall ***)(int, int))v20)(v20, 1);
      v19 = v30;
    }
    *(_DWORD *)(Stage + 4) = v19;
    if ( v19 )
      InterlockedIncrement((volatile LONG *)(v19 + 4));
  }
  Stage = v7->Stages.data[1].Stage;
  v21 = sub_848FD0(v9, 1);
  v22 = *(_DWORD *)(Stage + 4);
  v23 = v21;
  if ( v22 != v21 )
  {
    if ( v22 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v22 + 4)) )
        (**(void (__thiscall ***)(int, int))v22)(v22, 1);
    }
    *(_DWORD *)(Stage + 4) = v23;
    if ( v23 )
      InterlockedIncrement((volatile LONG *)(v23 + 4));
  }
  Unk08 = v7->Stages.data[1].Unk08;
  v25 = *(_DWORD *)(Unk08 + 4);
  v26 = v25 == dword_B43110;
  v27 = dword_B43110;
  Stage = dword_B43110;
  if ( !v26 )
  {
    if ( v25 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v25 + 4)) )
        (**(void (__thiscall ***)(int, int))v25)(v25, 1);
      v27 = Stage;
    }
    *(_DWORD *)(Unk08 + 4) = v27;
    if ( v27 )
      InterlockedIncrement((volatile LONG *)(v27 + 4));
  }
  ++v7->RefCount;
  Stage = (int)v7;
  sub_76CE40(this + 4, *((NiD3DPass **)this + 0xE), (NiD3DPass **)&Stage);
  v26 = v7->RefCount-- == 1;
  if ( v26 )
    sub_7604D0(v7);
  ++*((_DWORD *)this + 0xE);
}
