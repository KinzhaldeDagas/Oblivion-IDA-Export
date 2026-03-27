__int16 __thiscall sub_440F70(int *this, int a2)
{
  int *v2; // eax
  int v3; // ecx

  v2 = this + 0x23;
  if ( this != (int *)0xFFFFFF74 )
  {
    do
    {
      v3 = *v2;
      if ( !*v2 )
        break;
      if ( *(_DWORD *)v3 == a2 )
        return *(_WORD *)(v3 + 4);
      v2 = (int *)v2[1];
    }
    while ( v2 );
  }
  return 0;
}
