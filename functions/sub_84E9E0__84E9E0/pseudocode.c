void __thiscall sub_84E9E0(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DPass *a4, _DWORD *a5)
{
  float v6; // ecx
  float v7; // edx
  NiD3DPass *v8; // esi
  int v9; // eax
  int v10; // ecx
  _DWORD *v11; // ebp
  UInt32 Stage; // ebx
  int v13; // ebx
  int v14; // eax
  bool v15; // zf
  _DWORD **v16; // ebx
  int v17; // eax
  UInt32 v18; // [esp+14h] [ebp-10h]

  v6 = flt_B4653C;
  v7 = flt_B46540;
  v8 = (NiD3DPass *)dword_B45668;
  flt_B46528 = flt_B46538;
  v9 = dword_B46544;
  flt_B4652C = v6;
  v10 = (int)a4;
  flt_B46530 = v7;
  dword_B46534 = v9;
  sub_848C40(*(float **)(v10 + 0x10));
  v11 = a5;
  Stage = v8->Stages.data->Stage;
  v18 = Stage;
  if ( (*(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x8C))(a5, 0) )
  {
    a4 = (NiD3DPass *)(*(int (__thiscall **)(_DWORD *, _DWORD))(*v11 + 0x8C))(v11, 0);
  }
  else if ( (v11[7] & 0x80) != 0 )
  {
    a4 = (NiD3DPass *)dword_B430F0;
  }
  else
  {
    a4 = (NiD3DPass *)dword_B430DC;
  }
  v13 = *(_DWORD *)(Stage + 4);
  if ( (NiD3DPass *)v13 == a4 )
  {
    v16 = (_DWORD **)v18;
  }
  else
  {
    if ( v13 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) )
        (**(void (__thiscall ***)(int, int))v13)(v13, 1);
    }
    v14 = (int)a4;
    v15 = a4 == 0;
    v16 = (_DWORD **)v18;
    *(_DWORD *)(v18 + 4) = a4;
    if ( !v15 )
      InterlockedIncrement((volatile LONG *)(v14 + 4));
  }
  if ( v16 )
  {
    if ( byte_B42CDD )
    {
      v17 = (*(int (__thiscall **)(_DWORD *))(*v11 + 0x78))(v11);
      sub_7715E0(v16, v17);
    }
  }
  ++v8->RefCount;
  a4 = v8;
  sub_76CE40(this + 4, *((NiD3DPass **)this + 0xE), &a4);
  v15 = v8->RefCount-- == 1;
  if ( v15 )
    sub_7604D0(v8);
  ++*((_DWORD *)this + 0xE);
}
