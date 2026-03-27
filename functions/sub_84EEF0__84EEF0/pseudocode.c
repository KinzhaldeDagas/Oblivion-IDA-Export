void __thiscall sub_84EEF0(NiTArray_NiD3DPass *this, int a2, int a3, int a4, NiD3DPass *a5)
{
  NiD3DPass *v6; // esi
  NiD3DPass *v7; // ebx
  int v8; // edi
  int v9; // ebx
  bool v10; // zf
  int v11; // edi
  _DWORD **v12; // edi
  int v13; // eax
  int v14; // [esp+14h] [ebp-10h]

  v6 = (NiD3DPass *)dword_B45934;
  v7 = a5;
  v8 = **(_DWORD **)(dword_B45934 + 0x24);
  v14 = v8;
  if ( ((int (__thiscall *)(NiD3DPass *, _DWORD))a5->__vftable[8].sub_75F9E0)(a5, 0) )
  {
    v9 = ((int (__thiscall *)(NiD3DPass *, _DWORD))v7->__vftable[8].sub_75F9E0)(v7, 0);
  }
  else
  {
    v10 = (v7->TexturesPerPass & 0x80) == 0;
    v9 = dword_B430F0;
    if ( v10 )
      v9 = dword_B430DC;
  }
  v11 = *(_DWORD *)(v8 + 4);
  if ( v11 == v9 )
  {
    v12 = (_DWORD **)v14;
  }
  else
  {
    if ( v11 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) )
        (**(void (__thiscall ***)(int, int))v11)(v11, 1);
    }
    v12 = (_DWORD **)v14;
    *(_DWORD *)(v14 + 4) = v9;
    if ( v9 )
      InterlockedIncrement((volatile LONG *)(v9 + 4));
  }
  if ( v12 )
  {
    if ( byte_B42CDD )
    {
      v13 = ((int (__thiscall *)(NiD3DPass *))a5->__vftable[7].sub_75FD90)(a5);
      sub_7715E0(v12, v13);
    }
  }
  ++v6->RefCount;
  a5 = v6;
  sub_76CE40(this + 4, *((NiD3DPass **)this + 0xE), &a5);
  v10 = v6->RefCount-- == 1;
  if ( v10 )
    sub_7604D0(v6);
  ++*((_DWORD *)this + 0xE);
}
