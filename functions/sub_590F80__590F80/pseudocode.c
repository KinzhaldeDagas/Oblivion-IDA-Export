void __thiscall sub_590F80(Tile *this, float a2, char *a3, int a4)
{
  int v5; // edi

  sub_58DA00((int)this, a2, a3, a4);
  Tile_SetFloat(this, (_DWORD *)0xFCC, flt_A40098);
  Tile_SetFloat(this, (_DWORD *)0xFCD, flt_A40098);
  Tile_SetFloat(this, (_DWORD *)0xFCE, flt_A40098);
  Tile_SetFloat(this, (_DWORD *)0xFA7, flt_A40098);
  *((float *)this + 0x10) = 1.0;
  v5 = *((_DWORD *)this + 0x11);
  if ( v5 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) )
      (**(void (__thiscall ***)(int, int))v5)(v5, 1);
    *((_DWORD *)this + 0x11) = 0;
  }
  *((_BYTE *)this + 0x48) = 0;
}
