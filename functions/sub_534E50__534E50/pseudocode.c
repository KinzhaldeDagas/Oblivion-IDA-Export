unsigned int __thiscall sub_534E50(_DWORD *this, char *FullPath, int a3)
{
  unsigned int result; // eax
  char *v5; // edi
  int v7; // esi
  int v8; // eax
  char *v9; // edi
  int v10; // ebp
  int v11; // ebx
  char Ext[31]; // [esp+Ch] [ebp-A4h] BYREF
  char v13; // [esp+2Bh] [ebp-85h] BYREF
  char Filename[128]; // [esp+2Ch] [ebp-84h] BYREF

  _splitpath(FullPath, 0, 0, Filename, Ext);
  result = strlen(Ext) + 1;
  v5 = &v13;
  while ( *++v5 )
    ;
  qmemcpy(v5, Ext, result);
  v7 = 0;
  if ( (int)*(this + 3) > 0 )
  {
    while ( 1 )
    {
      v8 = *(this + 2);
      v9 = *(char **)(v8 + 8 * v7);
      v10 = *(_DWORD *)(v8 + 8 * v7 + 4);
      result = sub_8B17C0((int)Filename, v9);
      if ( !result && a3 == v10 )
        break;
      if ( ++v7 >= *(this + 3) )
        return result;
    }
    (*(void (__thiscall **)(int, char *))(*(_DWORD *)dword_BA7D98 + 4))(dword_BA7D98, v9);
    result = --*(this + 3);
    v11 = *(this + 2);
    *(_DWORD *)(v11 + 8 * v7) = *(_DWORD *)(v11 + 8 * result);
    *(_DWORD *)(v11 + 8 * v7 + 4) = *(_DWORD *)(v11 + 8 * result + 4);
  }
  return result;
}
