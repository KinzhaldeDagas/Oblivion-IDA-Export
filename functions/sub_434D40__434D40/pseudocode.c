char __thiscall sub_434D40(const char **this, char *a2, const char *a3)
{
  int v4; // ecx
  const char *v5; // edx
  int v6; // eax
  unsigned int v7; // esi
  int v8; // ecx
  unsigned int i; // [esp+Ch] [ebp-32D0h]
  char v11[13000]; // [esp+10h] [ebp-32CCh] BYREF

  v4 = (int)*(this + 9);
  if ( v4 )
  {
    v5 = *(this + 8);
    if ( v5 )
      _sprintf(
        a2,
        "Queued %s %s with file entry offset %i and size %i",
        a3,
        v5,
        *(_DWORD *)(v4 + 0xC) & 0x7FFFFFFF,
        *(_DWORD *)(v4 + 8) & 0x3FFFFFFF);
    else
      _sprintf(
        a2,
        "Queued %s with file entry offset %i and size %i",
        a3,
        *(_DWORD *)(v4 + 0xC) & 0x7FFFFFFF,
        *(_DWORD *)(v4 + 8) & 0x3FFFFFFF);
  }
  else
  {
    _sprintf(a2, "Queued %s %s", a3, *(this + 8));
  }
  v6 = (int)*(this + 7);
  if ( v6 )
  {
    v7 = 0;
    for ( i = 0; v7 < *(unsigned __int16 *)(v6 + 0xA); i = ++v7 )
    {
      v8 = *(_DWORD *)(*(_DWORD *)(v6 + 4) + 4 * v7);
      if ( v8 )
      {
        if ( (*(unsigned __int8 (__thiscall **)(int, char *))(*(_DWORD *)v8 + 0x10))(v8, v11) )
        {
          strcat(a2, "\n * ");
          strcat(a2, v11);
          v7 = i;
        }
      }
      v6 = (int)*(this + 7);
    }
  }
  return 1;
}
