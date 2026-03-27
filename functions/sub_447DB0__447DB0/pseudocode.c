void __thiscall sub_447DB0(char *this, int a2)
{
  char *v2; // esi
  Data *v3; // edi

  v2 = this + 0x8C8;
  if ( this != (char *)0xFFFFF738 )
  {
    do
    {
      v3 = *(Data **)v2;
      if ( !*(_DWORD *)v2 )
        break;
      if ( TESFile_GetIsMaster(*(Data **)v2) )
        sub_44FBB0(v3, a2);
      v2 = *((char **)v2 + 1);
    }
    while ( v2 );
  }
}
