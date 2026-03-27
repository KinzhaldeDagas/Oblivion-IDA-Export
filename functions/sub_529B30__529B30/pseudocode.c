char __thiscall sub_529B30(_DWORD *this, char a2)
{
  _DWORD *v2; // eax
  int v3; // ecx

  v2 = this + 0x10;
  if ( this != (_DWORD *)0xFFFFFFC0 )
  {
    do
    {
      v3 = v2[1];
      if ( !v3 && !*v2 )
        break;
      if ( *(_BYTE *)*v2 == a2 )
        return *(_BYTE *)(*v2 + 1);
      v2 = (_DWORD *)v2[1];
    }
    while ( v3 );
  }
  return 0;
}
