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

  if ( (a4 & 1) == 0 && ArchiveManager_IsFileInArchives_(a3, a5) ) /*0x431839*/
    return 2; /*0x43184a*/
  if ( (a4 & 2) == 0 && _access(a3, 0) != 0xFFFFFFFF ) /*0x431862*/
    return 1; /*0x431869*/
  HIDWORD(v15) = a2; /*0x431871*/
  if ( (a4 & 4) != 0 ) /*0x431872*/
    return 0; /*0x431872*/
  v7 = *((unsigned __int16 *)this + 8); /*0x431878*/
  v8 = 0; /*0x43187c*/
  v16 = v7; /*0x431880*/
  if ( !v7 ) /*0x431884*/
    return 0; /*0x431947*/
  while ( 1 ) /*0x4318af*/
  {
    LODWORD(v15) = strlen(*(const char **)(*(this + 2) + 4 * v8)); /*0x4318af*/
    if ( _strnicmp(a3, *(const char **)(*(this + 2) + 4 * v8), v15) ) /*0x4318b2*/
      break; /*0x4318b2*/
LABEL_16:
    if ( ++v8 >= v7 ) /*0x431927*/
      return 0; /*0x431927*/
  }
  v9 = *(char **)(*(this + 2) + 4 * v8); /*0x4318c1*/
  v10 = v17; /*0x4318c4*/
  do /*0x4318d4*/
  {
    v11 = *v9; /*0x4318c8*/
    *v10++ = *v9++; /*0x4318ca*/
  }
  while ( v11 ); /*0x4318d4*/
  v12 = strlen(a3) + 1; /*0x4318e7*/
  v13 = (char *)&v16 + 3; /*0x4318ef*/
  while ( *++v13 ) /*0x4318fa*/
    ; /*0x4318f2*/
  qmemcpy(v13, a3, v12); /*0x431901*/
  if ( _access(v17, 0) == 0xFFFFFFFF ) /*0x43191c*/
  {
    v7 = v16; /*0x43191e*/
    goto LABEL_16; /*0x43191e*/
  }
  strcpy(a3, v17); /*0x43194e*/
  return 1; /*0x431930*/
}
