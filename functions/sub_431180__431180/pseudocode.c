unsigned int __usercall sub_431180@<eax>(int a1@<edi>, char *FullPath, char *Str1, char *a4)
{
  const char *v4; // ebp
  char *v5; // esi
  int v6; // eax
  char v7; // cl
  bool v8; // zf
  char *v9; // eax
  char *v10; // edi
  signed int v11; // eax
  unsigned int result; // eax
  size_t v13; // [esp-8h] [ebp-11Ch]
  size_t v14; // [esp-4h] [ebp-118h]
  char Dir[260]; // [esp+Ch] [ebp-108h] BYREF

  v4 = Str1; /*0x4311a4*/
  *a4 = 0; /*0x4311b8*/
  _splitpath(FullPath, 0, Dir, 0, 0); /*0x4311bb*/
  v5 = Dir; /*0x4311c0*/
  v6 = &Dir[strlen(Dir) + 1] - &Dir[1]; /*0x4311d9*/
  v8 = Dir[v6 - 1] == 0x5C; /*0x4311db*/
  v9 = &Dir[v6 - 1]; /*0x4311e0*/
  if ( v8 ) /*0x4311e4*/
    *v9 = v7; /*0x4311e6*/
  LODWORD(v14) = 3; /*0x4311e8*/
  if ( !strncmp(Str1, a__, v14) ) /*0x4311f0*/
  {
    HIDWORD(v13) = a1; /*0x431200*/
    do /*0x431255*/
    {
      v10 = v5; /*0x431203*/
      v11 = strlen(v5) - 1; /*0x431213*/
      if ( v11 > 0 ) /*0x431218*/
      {
        while ( v5[v11] != 0x5C ) /*0x431224*/
        {
          if ( --v11 <= 0 ) /*0x43122b*/
            goto LABEL_10; /*0x43122b*/
        }
        v10 = &v5[v11]; /*0x43122f*/
      }
LABEL_10:
      if ( v10 ) /*0x431234*/
      {
        *v10 = 0; /*0x431236*/
        v4 += 3; /*0x431239*/
      }
      else
      {
        v5 = EmptyString; /*0x43123e*/
      }
      LODWORD(v13) = 3; /*0x431243*/
    }
    while ( !strncmp(v4, a__, v13) ); /*0x431255*/
    strcat(a4, v5); /*0x431281*/
    *(_WORD *)&a4[strlen(a4)] = *(_WORD *)SubStr; /*0x4312a3*/
    result = strlen(v4) + 1; /*0x4312af*/
    qmemcpy(&a4[strlen(a4)], v4, result); /*0x4312cf*/
  }
  else
  {
    strcpy(a4, Str1); /*0x4312f3*/
  }
  return result; /*0x4312d9*/
}
