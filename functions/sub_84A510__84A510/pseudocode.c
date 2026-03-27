void __thiscall sub_84A510(NiTArray_NiD3DPass *this, int a2, int a3, int Stage, _DWORD *a5)
{
  NiD3DPass *v5; // ebx
  _DWORD *v6; // esi
  int v7; // edi
  int (__thiscall *v8)(_DWORD *, _DWORD); // eax
  int v9; // eax
  int v10; // edi
  int v11; // ebp
  _DWORD **v12; // edi
  int v13; // eax
  int Texture; // edi
  int (__thiscall *v15)(_DWORD *, _DWORD); // eax
  int v16; // ebp
  int v17; // edi
  _DWORD **v18; // edi
  int v19; // eax
  int v20; // edi
  int (__thiscall *v21)(_DWORD *, _DWORD); // eax
  int v22; // eax
  int v23; // edi
  int v24; // ebp
  _DWORD **v25; // edi
  int v26; // eax

  v5 = (NiD3DPass *)dword_B45610;
  sub_848DA0(*(float **)(Stage + 0x10));
  v6 = a5;
  v8 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88);
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
      v13 = (*(int (__thiscall **)(_DWORD *))(*v6 + 0x78))(v6);
      sub_7715E0(v12, v13);
    }
  }
  Texture = (int)v5->Stages.data->Texture;
  v15 = *(int (__thiscall **)(_DWORD *, _DWORD))(*v6 + 0x8C);
  Stage = Texture;
  if ( v15(v6, 0) )
  {
    v16 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v6 + 0x8C))(v6, 0);
  }
  else
  {
    v16 = dword_B430F0;
    if ( (v6[7] & 0x80) == 0 )
      v16 = dword_B430DC;
  }
  v17 = *(_DWORD *)(Texture + 4);
  if ( v17 == v16 )
  {
    v18 = (_DWORD **)Stage;
  }
  else
  {
    if ( v17 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v17 + 4)) )
        (**(void (__thiscall ***)(int, int))v17)(v17, 1);
    }
    v18 = (_DWORD **)Stage;
    *(_DWORD *)(Stage + 4) = v16;
    if ( v16 )
      InterlockedIncrement((volatile LONG *)(v16 + 4));
  }
  if ( v18 )
  {
    if ( byte_B42CDD )
    {
      v19 = (*(int (__thiscall **)(_DWORD *))(*v6 + 0x78))(v6);
      sub_7715E0(v18, v19);
    }
  }
  v21 = *(int (__thiscall **)(_DWORD *, _DWORD))(*v6 + 0x90);
  Stage = v5->Stages.data->Unk08;
  v20 = Stage;
  v22 = v21(v6, 0);
  v23 = *(_DWORD *)(v20 + 4);
  v24 = v22;
  if ( v23 == v22 )
  {
    v25 = (_DWORD **)Stage;
  }
  else
  {
    if ( v23 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v23 + 4)) )
        (**(void (__thiscall ***)(int, int))v23)(v23, 1);
    }
    v25 = (_DWORD **)Stage;
    *(_DWORD *)(Stage + 4) = v24;
    if ( v24 )
      InterlockedIncrement((volatile LONG *)(v24 + 4));
  }
  if ( v25 )
  {
    if ( byte_B42CDD )
    {
      v26 = (*(int (__thiscall **)(_DWORD *))(*v6 + 0x78))(v6);
      sub_7715E0(v25, v26);
    }
  }
  ++v5->RefCount;
  Stage = (int)v5;
  sub_76CE40(this + 4, *((NiD3DPass **)this + 0xE), (NiD3DPass **)&Stage);
  if ( v5->RefCount-- == 1 )
    sub_7604D0(v5);
  ++*((_DWORD *)this + 0xE);
}
