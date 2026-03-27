void __thiscall sub_83CFF0(NiTArray_NiD3DPass *this, int a2, int a3, int Stage, _DWORD *a5)
{
  int v6; // esi
  NiD3DPass *v7; // ebx
  _DWORD *v8; // esi
  int v9; // ebp
  int (__thiscall *v10)(_DWORD *, _DWORD); // eax
  int v11; // eax
  int v12; // ebp
  int v13; // ebp
  int v14; // eax
  int v15; // ebp
  int v16; // ebp
  int (__thiscall *v17)(_DWORD *, int); // eax
  int v18; // eax
  int v19; // ebp
  int v21; // [esp+30h] [ebp+4h]
  int v22; // [esp+30h] [ebp+4h]
  int v23; // [esp+30h] [ebp+4h]

  v6 = *(_DWORD *)(Stage + 0xC);
  v7 = (NiD3DPass *)dword_B457FC;
  sub_848E50(v6);
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, int, _DWORD))this->_vtbl + 0x2F))(this, a2, v6, 0);
  v8 = a5;
  dword_B46628 = a5[0x2A];
  dword_B4662C = v8[0x2B];
  dword_B46630 = v8[0x2C];
  dword_B46634 = v8[0x2D];
  v10 = *(int (__thiscall **)(_DWORD *, _DWORD))(*v8 + 0x88);
  Stage = v7->Stages.data->Stage;
  v9 = Stage;
  v11 = v10(v8, 0);
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
  sub_848FA0((_DWORD **)Stage, (int)v8);
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
  sub_848FA0((_DWORD **)Stage, (int)v8);
  v17 = *(int (__thiscall **)(_DWORD *, int))(*v8 + 0x88);
  Stage = (int)v7->Stages.data[1].Texture;
  v16 = Stage;
  v18 = v17(v8, 1);
  v19 = *(_DWORD *)(v16 + 4);
  v23 = v18;
  if ( v19 != v18 )
  {
    if ( v19 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v19 + 4)) )
        (**(void (__thiscall ***)(int, int))v19)(v19, 1);
      v18 = v23;
    }
    *(_DWORD *)(Stage + 4) = v18;
    if ( v18 )
      InterlockedIncrement((volatile LONG *)(v18 + 4));
  }
  sub_848FA0((_DWORD **)Stage, (int)v8);
  ++v7->RefCount;
  Stage = (int)v7;
  sub_76CE40(this + 4, *((NiD3DPass **)this + 0xE), (NiD3DPass **)&Stage);
  if ( v7->RefCount-- == 1 )
    sub_7604D0(v7);
  ++*((_DWORD *)this + 0xE);
}
