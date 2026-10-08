// Generic queued file description formatter. Uses +0x20 path string, +0x24 archive/file entry offset/size, and +0x1C child list.
char __thiscall sub_434D40(const char **this, char *a2, const char *a3)
{
  int v4; // ecx
  const char *v5; // edx
  int v6; // eax
  unsigned int v7; // esi
  int v8; // ecx
  unsigned int i; // [esp+Ch] [ebp-32D0h]
  char v11[13000]; // [esp+10h] [ebp-32CCh] BYREF

  v4 = (int)*(this + 9); /*0x434d6a*/
  if ( v4 ) /*0x434d70*/
  {
    v5 = *(this + 8); /*0x434d72*/
    if ( v5 ) /*0x434d77*/
      _sprintf( /*0x434d95*/
        a2,
        "Queued %s %s with file entry offset %i and size %i",
        a3,
        v5,
        *(_DWORD *)(v4 + 0xC) & 0x7FFFFFFF,
        *(_DWORD *)(v4 + 8) & 0x3FFFFFFF);
    else
      _sprintf( /*0x434dbe*/
        a2,
        "Queued %s with file entry offset %i and size %i",
        a3,
        *(_DWORD *)(v4 + 0xC) & 0x7FFFFFFF,
        *(_DWORD *)(v4 + 8) & 0x3FFFFFFF);
  }
  else
  {
    _sprintf(a2, "Queued %s %s", a3, *(this + 8)); /*0x434dd3*/
  }
  v6 = (int)*(this + 7); /*0x434ddb*/
  if ( v6 ) /*0x434de0*/
  {
    v7 = 0; /*0x434de6*/
    for ( i = 0; v7 < *(unsigned __int16 *)(v6 + 0xA); i = ++v7 ) /*0x434de8*/
    {
      v8 = *(_DWORD *)(*(_DWORD *)(v6 + 4) + 4 * v7); /*0x434dfa*/
      if ( v8 ) /*0x434dff*/
      {
        if ( (*(unsigned __int8 (__thiscall **)(int, char *))(*(_DWORD *)v8 + 0x10))(v8, v11) ) /*0x434e0b*/
        {
          strcat(a2, "\n * "); /*0x434e26*/
          strcat(a2, v11); /*0x434e5f*/
          v7 = i; /*0x434e68*/
        }
      }
      v6 = (int)*(this + 7); /*0x434e6c*/
    }
  }
  return 1; /*0x434e83*/
}
