void __thiscall sub_67AE90(int *this)
{
  int v2; // ebx
  int *v3; // edi
  char v4; // [esp+13h] [ebp-5h]
  char v5; // [esp+13h] [ebp-5h]

  v2 = 0;
  v3 = this + 0x10;
  if ( this != (int *)0xFFFFFFC0 )
  {
    while ( 1 )
    {
      if ( v3[1] || (v2 |= 1u, v4 = 1, *v3) )
        v4 = 0;
      if ( (v2 & 1) != 0 )
        v2 &= ~1u;
      if ( v4 )
        break;
      sub_67A850(v3);
    }
  }
  if ( this != (int *)0xFFFFFFB8 )
  {
    while ( 1 )
    {
      if ( *(this + 0x13) || (v2 |= 2u, v5 = 1, *(this + 0x12)) )
        v5 = 0;
      if ( (v2 & 2) != 0 )
        v2 &= ~2u;
      if ( v5 )
        break;
      sub_67A850(this + 0x12);
    }
  }
}
