void __thiscall sub_840370(NiTArray_NiD3DPass *this, int a2, int a3, int Stage, _DWORD *a5)
{
  int v6; // ebp
  int v7; // esi
  NiD3DPass *v8; // ebx
  _DWORD *v9; // esi
  int v10; // ebp
  int (__thiscall *v11)(_DWORD *, _DWORD); // eax
  int v12; // eax
  int v13; // ebp
  int v14; // ebp
  int v15; // eax
  int v16; // ebp
  int v17; // ebp
  int (__thiscall *v18)(_DWORD *, int); // eax
  int v19; // eax
  int v20; // ebp
  int v22; // [esp+30h] [ebp+4h]
  int v23; // [esp+30h] [ebp+4h]
  int v24; // [esp+30h] [ebp+4h]

  v6 = Stage;
  v7 = *(_DWORD *)(Stage + 0xC);
  v8 = (NiD3DPass *)dword_B458C0;
  sub_848E50(v7);
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, int, _DWORD))this->_vtbl + 0x2F))(
    this,
    a2,
    v7,
    *(_DWORD *)(v6 + 0x10));
  v9 = a5;
  dword_B46628 = a5[0x2A];
  dword_B4662C = v9[0x2B];
  dword_B46630 = v9[0x2C];
  dword_B46634 = v9[0x2D];
  v11 = *(int (__thiscall **)(_DWORD *, _DWORD))(*v9 + 0x88);
  Stage = v8->Stages.data->Stage;
  v10 = Stage;
  v12 = v11(v9, 0);
  v13 = *(_DWORD *)(v10 + 4);
  v22 = v12;
  if ( v13 != v12 )
  {
    if ( v13 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) )
        (**(void (__thiscall ***)(int, int))v13)(v13, 1);
      v12 = v22;
    }
    *(_DWORD *)(Stage + 4) = v12;
    if ( v12 )
      InterlockedIncrement((volatile LONG *)(v12 + 4));
  }
  sub_848FA0((_DWORD **)Stage, (int)v9);
  Stage = (int)v8->Stages.data->Texture;
  v14 = Stage;
  v15 = sub_848FD0(v9, 0);
  v16 = *(_DWORD *)(v14 + 4);
  v23 = v15;
  if ( v16 != v15 )
  {
    if ( v16 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) )
        (**(void (__thiscall ***)(int, int))v16)(v16, 1);
      v15 = v23;
    }
    *(_DWORD *)(Stage + 4) = v15;
    if ( v15 )
      InterlockedIncrement((volatile LONG *)(v15 + 4));
  }
  sub_848FA0((_DWORD **)Stage, (int)v9);
  v18 = *(int (__thiscall **)(_DWORD *, int))(*v9 + 0x88);
  Stage = (int)v8->Stages.data[1].Texture;
  v17 = Stage;
  v19 = v18(v9, 1);
  v20 = *(_DWORD *)(v17 + 4);
  v24 = v19;
  if ( v20 != v19 )
  {
    if ( v20 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v20 + 4)) )
        (**(void (__thiscall ***)(int, int))v20)(v20, 1);
      v19 = v24;
    }
    *(_DWORD *)(Stage + 4) = v19;
    if ( v19 )
      InterlockedIncrement((volatile LONG *)(v19 + 4));
  }
  sub_848FA0((_DWORD **)Stage, (int)v9);
  ++v8->RefCount;
  Stage = (int)v8;
  sub_76CE40(this + 4, *((NiD3DPass **)this + 0xE), (NiD3DPass **)&Stage);
  if ( v8->RefCount-- == 1 )
    sub_7604D0(v8);
  ++*((_DWORD *)this + 0xE);
}
