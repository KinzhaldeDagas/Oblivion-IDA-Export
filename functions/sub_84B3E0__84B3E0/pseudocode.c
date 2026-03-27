void __thiscall sub_84B3E0(NiTArray_NiD3DPass *this, int a2, int a3, int Stage, _DWORD *a5)
{
  int v6; // esi
  NiD3DPass *v7; // edi
  _DWORD *v8; // ebp
  int v9; // esi
  int (__thiscall *v10)(_DWORD *, _DWORD); // eax
  int v11; // eax
  int v12; // esi
  _DWORD **v13; // esi
  int v14; // eax
  int Texture; // esi
  int (__thiscall *v16)(_DWORD *, _DWORD); // eax
  int v17; // esi
  int v18; // eax
  bool v19; // zf
  _DWORD **v20; // esi
  int v21; // eax

  v6 = Stage;
  v7 = (NiD3DPass *)dword_B45684;
  sub_848C40(*(float **)(Stage + 0x10));
  sub_848E50(*(_DWORD *)(v6 + 0xC));
  v8 = a5;
  v10 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88);
  Stage = v7->Stages.data->Stage;
  v9 = Stage;
  v11 = v10(a5, 0);
  v12 = *(_DWORD *)(v9 + 4);
  a5 = (_DWORD *)v11;
  if ( v12 == v11 )
  {
    v13 = (_DWORD **)Stage;
  }
  else
  {
    if ( v12 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v12 + 4)) )
        (**(void (__thiscall ***)(int, int))v12)(v12, 1);
      v11 = (int)a5;
    }
    v13 = (_DWORD **)Stage;
    *(_DWORD *)(Stage + 4) = v11;
    if ( v11 )
      InterlockedIncrement((volatile LONG *)(v11 + 4));
  }
  if ( v13 )
  {
    if ( byte_B42CDD )
    {
      v14 = (*(int (__thiscall **)(_DWORD *))(*v8 + 0x78))(v8);
      sub_7715E0(v13, v14);
    }
  }
  Texture = (int)v7->Stages.data->Texture;
  v16 = *(int (__thiscall **)(_DWORD *, _DWORD))(*v8 + 0x8C);
  Stage = Texture;
  if ( v16(v8, 0) )
  {
    a5 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _DWORD))(*v8 + 0x8C))(v8, 0);
  }
  else if ( (v8[7] & 0x80) != 0 )
  {
    a5 = (_DWORD *)dword_B430F0;
  }
  else
  {
    a5 = (_DWORD *)dword_B430DC;
  }
  v17 = *(_DWORD *)(Texture + 4);
  if ( (_DWORD *)v17 == a5 )
  {
    v20 = (_DWORD **)Stage;
  }
  else
  {
    if ( v17 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v17 + 4)) )
        (**(void (__thiscall ***)(int, int))v17)(v17, 1);
    }
    v18 = (int)a5;
    v19 = a5 == 0;
    v20 = (_DWORD **)Stage;
    *(_DWORD *)(Stage + 4) = a5;
    if ( !v19 )
      InterlockedIncrement((volatile LONG *)(v18 + 4));
  }
  if ( v20 )
  {
    if ( byte_B42CDD )
    {
      v21 = (*(int (__thiscall **)(_DWORD *))(*v8 + 0x78))(v8);
      sub_7715E0(v20, v21);
    }
  }
  ++v7->RefCount;
  Stage = (int)v7;
  sub_76CE40(this + 4, *((NiD3DPass **)this + 0xE), (NiD3DPass **)&Stage);
  v19 = v7->RefCount-- == 1;
  if ( v19 )
    sub_7604D0(v7);
  ++*((_DWORD *)this + 0xE);
}
