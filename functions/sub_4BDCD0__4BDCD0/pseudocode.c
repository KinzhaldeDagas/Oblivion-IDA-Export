void sub_4BDCD0()
{
  LockFreeMap *v0; // eax
  int v1; // esi

  if ( !dword_B35B8C )
  {
    v0 = (LockFreeMap *)FormHeapAlloc(0x1Cu);
    v1 = (int)v0;
    if ( v0 )
      sub_4BD050(v0, 2u, 0x25u, 0xCu);
    else
      v1 = 0;
    dword_B35B8C = v1;
  }
}
