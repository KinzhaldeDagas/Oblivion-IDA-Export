void __thiscall sub_878B40(NiTArray_NiD3DPass *this, int a2, int a3, int Stage, int *a5)
{
  int v6; // ebp
  int v7; // ebx
  NiD3DPass *v8; // edi
  int *v9; // ebp
  int v10; // ebx
  int (__thiscall *v11)(int *, _DWORD); // eax
  int v12; // eax
  int v13; // ebx
  int v14; // ebx
  int v15; // eax
  int v16; // ebx
  int v17; // edx
  int v18; // eax
  int v19; // ebp
  int v20; // ebx
  UInt32 Unk08; // ebp
  int v22; // ebx
  bool v23; // zf
  int v24; // ecx
  int v25; // [esp+34h] [ebp+4h]
  int v26; // [esp+34h] [ebp+4h]

  v6 = Stage;
  v7 = *(_DWORD *)(Stage + 0xC);
  v8 = (NiD3DPass *)dword_B476C4;
  sub_848E50(v7);
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, int, _DWORD))this->_vtbl + 0x2F))(
    this,
    a2,
    v7,
    *(_DWORD *)(v6 + 0x10));
  v9 = a5;
  v11 = *(int (__thiscall **)(int *, _DWORD))(*a5 + 0x88);
  Stage = v8->Stages.data->Stage;
  v10 = Stage;
  v12 = v11(a5, 0);
  v13 = *(_DWORD *)(v10 + 4);
  v25 = v12;
  if ( v13 != v12 )
  {
    if ( v13 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) )
        (**(void (__thiscall ***)(int, int))v13)(v13, 1);
      v12 = v25;
    }
    *(_DWORD *)(Stage + 4) = v12;
    if ( v12 )
      InterlockedIncrement((volatile LONG *)(v12 + 4));
  }
  Stage = (int)v8->Stages.data->Texture;
  v14 = Stage;
  v15 = sub_848FD0(v9, 0);
  v16 = *(_DWORD *)(v14 + 4);
  v26 = v15;
  if ( v16 != v15 )
  {
    if ( v16 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) )
        (**(void (__thiscall ***)(int, int))v16)(v16, 1);
      v15 = v26;
    }
    *(_DWORD *)(Stage + 4) = v15;
    if ( v15 )
      InterlockedIncrement((volatile LONG *)(v15 + 4));
  }
  v17 = *v9;
  Stage = (int)v8->Stages.data[1].Texture;
  v18 = (*(int (__thiscall **)(int *, _DWORD))(v17 + 0x90))(v9, 0);
  v19 = *(_DWORD *)(Stage + 4);
  v20 = v18;
  if ( v19 != v18 )
  {
    if ( v19 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v19 + 4)) )
        (**(void (__thiscall ***)(int, int))v19)(v19, 1);
    }
    *(_DWORD *)(Stage + 4) = v20;
    if ( v20 )
      InterlockedIncrement((volatile LONG *)(v20 + 4));
  }
  Unk08 = v8->Stages.data[1].Unk08;
  v22 = *(_DWORD *)(Unk08 + 4);
  v23 = v22 == dword_B43110;
  v24 = dword_B43110;
  Stage = dword_B43110;
  if ( !v23 )
  {
    if ( v22 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v22 + 4)) )
        (**(void (__thiscall ***)(int, int))v22)(v22, 1);
      v24 = Stage;
    }
    *(_DWORD *)(Unk08 + 4) = v24;
    if ( v24 )
      InterlockedIncrement((volatile LONG *)(v24 + 4));
  }
  ++v8->RefCount;
  Stage = (int)v8;
  sub_76CE40(this + 4, *((NiD3DPass **)this + 0xE), (NiD3DPass **)&Stage);
  v23 = v8->RefCount-- == 1;
  if ( v23 )
    sub_7604D0(v8);
  ++*((_DWORD *)this + 0xE);
}
