char __thiscall sub_534D70(_DWORD *this, char *FullPath, int a3)
{
  unsigned int v4; // eax
  char *v5; // edi
  int v7; // esi
  int v8; // eax
  int v9; // edi
  char Ext[31]; // [esp+10h] [ebp-A4h] BYREF
  char v12; // [esp+2Fh] [ebp-85h] BYREF
  char Filename[128]; // [esp+30h] [ebp-84h] BYREF

  if ( !*(this + 3) )
    return 1;
  _splitpath(FullPath, 0, 0, Filename, Ext);
  v4 = strlen(Ext) + 1;
  v5 = &v12;
  while ( *++v5 )
    ;
  qmemcpy(v5, Ext, v4);
  v7 = 0;
  if ( (int)*(this + 3) <= 0 )
    return 1;
  while ( 1 )
  {
    v8 = *(this + 2);
    v9 = *(_DWORD *)(v8 + 8 * v7 + 4);
    if ( !sub_8B17C0((int)Filename, *(char **)(v8 + 8 * v7)) && a3 == v9 )
      break;
    if ( ++v7 >= *(this + 3) )
      return 1;
  }
  return 0;
}
