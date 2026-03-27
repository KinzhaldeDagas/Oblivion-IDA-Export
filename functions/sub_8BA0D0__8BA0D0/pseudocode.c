int __thiscall sub_8BA0D0(int *this)
{
  int *v2; // esi
  int v3; // edi
  int v4; // ecx
  int result; // eax

  *this = (int)&off_A981DC;
  v2 = this + 2;
  v3 = 0xB;
  do
  {
    v4 = *v2;
    if ( *v2 )
    {
      if ( *(_WORD *)(v4 + 4) )
      {
        if ( !--*(_WORD *)(v4 + 6) )
          result = (**(int (__thiscall ***)(int, int))v4)(v4, 1);
      }
      *v2 = 0;
    }
    ++v2;
    --v3;
  }
  while ( v3 );
  *this = (int)&hkBaseObject::`vftable';
  return result;
}
