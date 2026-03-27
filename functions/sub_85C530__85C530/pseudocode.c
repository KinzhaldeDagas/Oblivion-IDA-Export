void __thiscall sub_85C530(NiTArray_NiD3DPass *this, int a2, int a3, int a4, int a5, NiD3DPass *a6)
{
  NiD3DPass *v7; // esi
  int v8; // edi
  int v9; // eax
  int v10; // edi
  int v11; // ebx
  int v13; // [esp+14h] [ebp-10h]

  v7 = (NiD3DPass *)dword_B477A8;
  v8 = **(_DWORD **)(dword_B477A8 + 0x24);
  v13 = v8;
  v9 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a5 + 0x88))(a5, 0);
  v10 = *(_DWORD *)(v8 + 4);
  v11 = v9;
  if ( v10 != v9 )
  {
    if ( v10 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) )
        (**(void (__thiscall ***)(int, int))v10)(v10, 1);
    }
    *(_DWORD *)(v13 + 4) = v11;
    if ( v11 )
      InterlockedIncrement((volatile LONG *)(v11 + 4));
  }
  if ( !(_BYTE)a6 )
  {
    ++v7->RefCount;
    a6 = v7;
    sub_76CE40(this + 4, *((NiD3DPass **)this + 0xE), &a6);
    if ( v7->RefCount-- == 1 )
      sub_7604D0(v7);
    ++*((_DWORD *)this + 0xE);
  }
}
