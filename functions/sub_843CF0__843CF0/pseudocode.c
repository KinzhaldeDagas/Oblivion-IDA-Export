void __thiscall sub_843CF0(NiTArray_NiD3DPass *this, int a2, int a3, int a4, NiD3DPass *a5)
{
  NiD3DPass *v6; // esi
  int v7; // ebp
  int v8; // eax
  int v9; // ebx
  int v11; // [esp+14h] [ebp-10h]

  v6 = (NiD3DPass *)dword_B45984;
  v7 = **(_DWORD **)(dword_B45984 + 0x24);
  v8 = sub_848FD0(a5, 0);
  v9 = *(_DWORD *)(v7 + 4);
  v11 = v8;
  if ( v9 != v8 )
  {
    if ( v9 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) )
        (**(void (__thiscall ***)(int, int))v9)(v9, 1);
      v8 = v11;
    }
    *(_DWORD *)(v7 + 4) = v8;
    if ( v8 )
      InterlockedIncrement((volatile LONG *)(v8 + 4));
  }
  sub_848FA0((_DWORD **)v7, (int)a5);
  ++v6->RefCount;
  a5 = v6;
  sub_76CE40(this + 4, *((NiD3DPass **)this + 0xE), &a5);
  if ( v6->RefCount-- == 1 )
    sub_7604D0(v6);
  ++*((_DWORD *)this + 0xE);
}
