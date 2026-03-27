void __thiscall sub_875D30(NiTArray_NiD3DPass *this, int a2, int a3, int Stage, int *a5)
{
  int v6; // ebx
  NiD3DPass *v7; // edi
  int *v8; // ebp
  int v9; // ebx
  int (__thiscall *v10)(int *, _DWORD); // eax
  int v11; // eax
  int v12; // ebx
  int v13; // ebx
  int v14; // eax
  int v15; // ebx
  int v16; // edx
  int v17; // eax
  int v18; // ebp
  int v19; // ebx
  int v21; // [esp+30h] [ebp+4h]
  int v22; // [esp+30h] [ebp+4h]

  v6 = *(_DWORD *)(Stage + 0xC);
  v7 = (NiD3DPass *)dword_B4766C;
  sub_848E50(v6);
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, int, _DWORD))this->_vtbl + 0x2F))(this, a2, v6, 0);
  v8 = a5;
  v10 = *(int (__thiscall **)(int *, _DWORD))(*a5 + 0x88);
  Stage = v7->Stages.data->Stage;
  v9 = Stage;
  v11 = v10(a5, 0);
  v12 = *(_DWORD *)(v9 + 4);
  v21 = v11;
  if ( v12 != v11 )
  {
    if ( v12 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v12 + 4)) )
        (**(void (__thiscall ***)(int, int))v12)(v12, 1);
      v11 = v21;
    }
    *(_DWORD *)(Stage + 4) = v11;
    if ( v11 )
      InterlockedIncrement((volatile LONG *)(v11 + 4));
  }
  Stage = (int)v7->Stages.data->Texture;
  v13 = Stage;
  v14 = sub_848FD0(v8, 0);
  v15 = *(_DWORD *)(v13 + 4);
  v22 = v14;
  if ( v15 != v14 )
  {
    if ( v15 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v15 + 4)) )
        (**(void (__thiscall ***)(int, int))v15)(v15, 1);
      v14 = v22;
    }
    *(_DWORD *)(Stage + 4) = v14;
    if ( v14 )
      InterlockedIncrement((volatile LONG *)(v14 + 4));
  }
  v16 = *v8;
  Stage = (int)v7->Stages.data[1].Texture;
  v17 = (*(int (__thiscall **)(int *, _DWORD))(v16 + 0x90))(v8, 0);
  v18 = *(_DWORD *)(Stage + 4);
  v19 = v17;
  if ( v18 != v17 )
  {
    if ( v18 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v18 + 4)) )
        (**(void (__thiscall ***)(int, int))v18)(v18, 1);
    }
    *(_DWORD *)(Stage + 4) = v19;
    if ( v19 )
      InterlockedIncrement((volatile LONG *)(v19 + 4));
  }
  ++v7->RefCount;
  Stage = (int)v7;
  sub_76CE40(this + 4, *((NiD3DPass **)this + 0xE), (NiD3DPass **)&Stage);
  if ( v7->RefCount-- == 1 )
    sub_7604D0(v7);
  ++*((_DWORD *)this + 0xE);
}
