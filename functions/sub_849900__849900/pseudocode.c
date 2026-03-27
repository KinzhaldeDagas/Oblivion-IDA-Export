void __thiscall sub_849900(NiTArray_NiD3DPass *this, int a2, int a3, int a4, NiD3DPass *a5)
{
  NiD3DPass *v6; // esi
  UInt32 Stage; // ebx
  int v8; // eax
  int v9; // ebx
  int v10; // ebp
  _DWORD **v11; // ebx
  int v12; // eax
  UInt32 v14; // [esp+2Ch] [ebp+Ch]

  v6 = (NiD3DPass *)dword_B455F8;
  sub_848C40(*(float **)(a4 + 0x10));
  Stage = v6->Stages.data->Stage;
  v14 = Stage;
  v8 = ((int (__thiscall *)(NiD3DPass *, _DWORD))a5->__vftable[8].sub_75FD90)(a5, 0);
  v9 = *(_DWORD *)(Stage + 4);
  v10 = v8;
  if ( v9 == v8 )
  {
    v11 = (_DWORD **)v14;
  }
  else
  {
    if ( v9 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) )
        (**(void (__thiscall ***)(int, int))v9)(v9, 1);
    }
    v11 = (_DWORD **)v14;
    *(_DWORD *)(v14 + 4) = v10;
    if ( v10 )
      InterlockedIncrement((volatile LONG *)(v10 + 4));
  }
  if ( v11 )
  {
    if ( byte_B42CDD )
    {
      v12 = ((int (__thiscall *)(NiD3DPass *))a5->__vftable[7].sub_75FD90)(a5);
      sub_7715E0(v11, v12);
    }
  }
  ++v6->RefCount;
  a5 = v6;
  sub_76CE40(this + 4, *((NiD3DPass **)this + 0xE), &a5);
  if ( v6->RefCount-- == 1 )
    sub_7604D0(v6);
  ++*((_DWORD *)this + 0xE);
}
