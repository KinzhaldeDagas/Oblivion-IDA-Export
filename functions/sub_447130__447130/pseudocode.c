char __thiscall sub_447130(char *this)
{
  char *v1; // esi
  char result; // al

  v1 = this + 0x8C8;
  if ( this != (char *)0xFFFFF738 )
  {
    do
    {
      if ( !*(_DWORD *)v1 )
        break;
      result = TESFile_Close(*(Data **)v1);
      v1 = *((char **)v1 + 1);
    }
    while ( v1 );
  }
  return result;
}
