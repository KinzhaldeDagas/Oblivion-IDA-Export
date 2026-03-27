int __thiscall sub_5340F0(_DWORD *this, char *FullPath, int a3)
{
  unsigned int v4; // eax
  char *v5; // edi
  char *v7; // edi
  int v8; // ecx
  int result; // eax
  char Ext[31]; // [esp+10h] [ebp-A4h] BYREF
  char v11; // [esp+2Fh] [ebp-85h] BYREF
  char Filename[128]; // [esp+30h] [ebp-84h] BYREF

  _splitpath(FullPath, 0, 0, Filename, Ext);
  v4 = strlen(Ext) + 1;
  v5 = &v11;
  while ( *++v5 )
    ;
  qmemcpy(v5, Ext, v4);
  v7 = sub_8B18F0(Filename);
  if ( *(this + 3) == (*(this + 4) & 0x3FFFFFFF) )
    sub_8A6EE0((int)(this + 2), 8);
  v8 = *(this + 3);
  result = *(this + 2);
  *(_DWORD *)(result + 8 * v8) = v7;
  *(_DWORD *)(result + 8 * v8 + 4) = a3;
  ++*(this + 3);
  return result;
}
