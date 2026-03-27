int __userpurge sub_431800@<eax>(_DWORD *this@<ecx>, int a2@<edi>, char *a3, char a4, int a5)
{
  unsigned int v7; // edi
  int v8; // ebx
  char *v9; // ecx
  char *v10; // edx
  char v11; // al
  unsigned int v12; // eax
  char *v13; // edi
  size_t v15; // [esp-8h] [ebp-124h]
  unsigned int v16; // [esp+10h] [ebp-10Ch] BYREF
  char v17[260]; // [esp+14h] [ebp-108h] BYREF

  if ( (a4 & 1) == 0 && ArchiveManager_IsFileInArchives_(a3, a5) )
    return 2;
  if ( (a4 & 2) == 0 && _access(a3, 0) != 0xFFFFFFFF )
    return 1;
  HIDWORD(v15) = a2;
  if ( (a4 & 4) != 0 )
    return 0;
  v7 = *((unsigned __int16 *)this + 8);
  v8 = 0;
  v16 = v7;
  if ( !v7 )
    return 0;
  while ( 1 )
  {
    LODWORD(v15) = strlen(*(const char **)(*(this + 2) + 4 * v8));
    if ( _strnicmp(a3, *(const char **)(*(this + 2) + 4 * v8), v15) )
      break;
LABEL_16:
    if ( ++v8 >= v7 )
      return 0;
  }
  v9 = *(char **)(*(this + 2) + 4 * v8);
  v10 = v17;
  do
  {
    v11 = *v9;
    *v10++ = *v9++;
  }
  while ( v11 );
  v12 = strlen(a3) + 1;
  v13 = (char *)&v16 + 3;
  while ( *++v13 )
    ;
  qmemcpy(v13, a3, v12);
  if ( _access(v17, 0) == 0xFFFFFFFF )
  {
    v7 = v16;
    goto LABEL_16;
  }
  strcpy(a3, v17);
  return 1;
}
