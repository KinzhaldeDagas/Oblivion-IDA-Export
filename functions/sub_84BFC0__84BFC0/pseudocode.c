void __thiscall sub_84BFC0(NiTArray_NiD3DPass *this, int a2, int a3, int Stage, _DWORD *a5)
{
  int v5; // edi
  NiD3DPass *v6; // ebx
  _DWORD *v7; // esi
  int v8; // edi
  int (__thiscall *v9)(_DWORD *, _DWORD); // eax
  int v10; // eax
  int v11; // edi
  int v12; // ebp
  _DWORD **v13; // edi
  int v14; // eax
  int Texture; // edi
  int (__thiscall *v16)(_DWORD *, _DWORD); // eax
  int v17; // ebp
  int v18; // edi
  _DWORD **v19; // edi
  int v20; // eax
  int v21; // edi
  int (__thiscall *v22)(_DWORD *, _DWORD); // eax
  int v23; // eax
  int v24; // edi
  int v25; // ebp
  _DWORD **v26; // edi
  int v27; // eax

  v5 = Stage;
  v6 = (NiD3DPass *)dword_B45690;
  sub_848DA0(*(float **)(Stage + 0x10));
  sub_848E50(*(_DWORD *)(v5 + 0xC));
  v7 = a5;
  v9 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88);
  Stage = v6->Stages.data->Stage;
  v8 = Stage;
  v10 = v9(a5, 0);
  v11 = *(_DWORD *)(v8 + 4);
  v12 = v10;
  if ( v11 == v10 )
  {
    v13 = (_DWORD **)Stage;
  }
  else
  {
    if ( v11 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) )
        (**(void (__thiscall ***)(int, int))v11)(v11, 1);
    }
    v13 = (_DWORD **)Stage;
    *(_DWORD *)(Stage + 4) = v12;
    if ( v12 )
      InterlockedIncrement((volatile LONG *)(v12 + 4));
  }
  if ( v13 )
  {
    if ( byte_B42CDD )
    {
      v14 = (*(int (__thiscall **)(_DWORD *))(*v7 + 0x78))(v7);
      sub_7715E0(v13, v14);
    }
  }
  Texture = (int)v6->Stages.data->Texture;
  v16 = *(int (__thiscall **)(_DWORD *, _DWORD))(*v7 + 0x8C);
  Stage = Texture;
  if ( v16(v7, 0) )
  {
    v17 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v7 + 0x8C))(v7, 0);
  }
  else
  {
    v17 = dword_B430F0;
    if ( (v7[7] & 0x80) == 0 )
      v17 = dword_B430DC;
  }
  v18 = *(_DWORD *)(Texture + 4);
  if ( v18 == v17 )
  {
    v19 = (_DWORD **)Stage;
  }
  else
  {
    if ( v18 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v18 + 4)) )
        (**(void (__thiscall ***)(int, int))v18)(v18, 1);
    }
    v19 = (_DWORD **)Stage;
    *(_DWORD *)(Stage + 4) = v17;
    if ( v17 )
      InterlockedIncrement((volatile LONG *)(v17 + 4));
  }
  if ( v19 )
  {
    if ( byte_B42CDD )
    {
      v20 = (*(int (__thiscall **)(_DWORD *))(*v7 + 0x78))(v7);
      sub_7715E0(v19, v20);
    }
  }
  v22 = *(int (__thiscall **)(_DWORD *, _DWORD))(*v7 + 0x90);
  Stage = v6->Stages.data->Unk08;
  v21 = Stage;
  v23 = v22(v7, 0);
  v24 = *(_DWORD *)(v21 + 4);
  v25 = v23;
  if ( v24 == v23 )
  {
    v26 = (_DWORD **)Stage;
  }
  else
  {
    if ( v24 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v24 + 4)) )
        (**(void (__thiscall ***)(int, int))v24)(v24, 1);
    }
    v26 = (_DWORD **)Stage;
    *(_DWORD *)(Stage + 4) = v25;
    if ( v25 )
      InterlockedIncrement((volatile LONG *)(v25 + 4));
  }
  if ( v26 )
  {
    if ( byte_B42CDD )
    {
      v27 = (*(int (__thiscall **)(_DWORD *))(*v7 + 0x78))(v7);
      sub_7715E0(v26, v27);
    }
  }
  ++v6->RefCount;
  Stage = (int)v6;
  sub_76CE40(this + 4, *((NiD3DPass **)this + 0xE), (NiD3DPass **)&Stage);
  if ( v6->RefCount-- == 1 )
    sub_7604D0(v6);
  ++*((_DWORD *)this + 0xE);
}
