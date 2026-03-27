int __thiscall SettingCollectionList_BuildOutputArray(char *this, unsigned __int16 *a2)
{
  char *v2; // esi
  int v3; // edi

  v2 = this + 0x10C;
  v3 = 0;
  if ( this != (char *)0xFFFFFEF4 )
  {
    do
    {
      Setting_BuildOutputArray(*(char **)v2, a2);
      v2 = *((char **)v2 + 1);
      ++v3;
    }
    while ( v2 );
  }
  return v3;
}
