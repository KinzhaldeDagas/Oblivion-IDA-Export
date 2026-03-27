void __thiscall sub_849770(NiTArray_NiD3DPass *this, int a2, int a3, int Stage, int a5)
{
  NiD3DPass *v5; // esi
  int v6; // ebx
  int v7; // edi
  int (__thiscall *v8)(int, _DWORD); // eax
  int v9; // eax
  int v10; // edi
  int v11; // ebp
  _DWORD **v12; // edi
  int v13; // eax
  int v14; // edi
  int (__thiscall *v15)(int, _DWORD); // eax
  int v16; // eax
  int v17; // edi
  int v18; // ebp
  _DWORD **v19; // edi
  int v20; // eax

  v5 = (NiD3DPass *)dword_B455F4;
  sub_848DA0(*(float **)(Stage + 0x10));
  v6 = a5;
  v8 = *(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a5 + 0x88);
  Stage = v5->Stages.data->Stage;
  v7 = Stage;
  v9 = v8(a5, 0);
  v10 = *(_DWORD *)(v7 + 4);
  v11 = v9;
  if ( v10 == v9 )
  {
    v12 = (_DWORD **)Stage;
  }
  else
  {
    if ( v10 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) )
        (**(void (__thiscall ***)(int, int))v10)(v10, 1);
    }
    v12 = (_DWORD **)Stage;
    *(_DWORD *)(Stage + 4) = v11;
    if ( v11 )
      InterlockedIncrement((volatile LONG *)(v11 + 4));
  }
  if ( v12 )
  {
    if ( byte_B42CDD )
    {
      v13 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 0x78))(v6);
      sub_7715E0(v12, v13);
    }
  }
  v15 = *(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v6 + 0x90);
  Stage = (int)v5->Stages.data->Texture;
  v14 = Stage;
  v16 = v15(v6, 0);
  v17 = *(_DWORD *)(v14 + 4);
  v18 = v16;
  if ( v17 == v16 )
  {
    v19 = (_DWORD **)Stage;
  }
  else
  {
    if ( v17 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v17 + 4)) )
        (**(void (__thiscall ***)(int, int))v17)(v17, 1);
    }
    v19 = (_DWORD **)Stage;
    *(_DWORD *)(Stage + 4) = v18;
    if ( v18 )
      InterlockedIncrement((volatile LONG *)(v18 + 4));
  }
  if ( v19 )
  {
    if ( byte_B42CDD )
    {
      v20 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 0x78))(v6);
      sub_7715E0(v19, v20);
    }
  }
  ++v5->RefCount;
  Stage = (int)v5;
  sub_76CE40(this + 4, *((NiD3DPass **)this + 0xE), (NiD3DPass **)&Stage);
  if ( v5->RefCount-- == 1 )
    sub_7604D0(v5);
  ++*((_DWORD *)this + 0xE);
}
