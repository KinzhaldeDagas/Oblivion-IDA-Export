void *__thiscall sub_52B160(char *this, TESForm *a2)
{
  char *v3; // esi
  void *result; // eax

  v3 = this + 4;
  if ( this != (char *)0xFFFFFFFC )
  {
    do
    {
      if ( *(_DWORD *)v3 )
        result = sub_52B0C0(*(UInt32 **)v3, a2, this);
      v3 = *((char **)v3 + 1);
    }
    while ( v3 );
  }
  return result;
}
