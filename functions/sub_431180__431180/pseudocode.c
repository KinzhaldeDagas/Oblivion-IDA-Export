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

  v4 = Str1;
  *a4 = 0;
  _splitpath(FullPath, 0, Dir, 0, 0);
  v5 = Dir;
  v6 = &Dir[strlen(Dir) + 1] - &Dir[1];
  v8 = Dir[v6 - 1] == 0x5C;
  v9 = &Dir[v6 - 1];
  if ( v8 )
    *v9 = v7;
  LODWORD(v14) = 3;
  if ( !strncmp(Str1, a__, v14) )
  {
    HIDWORD(v13) = a1;
    do
    {
      v10 = v5;
      v11 = strlen(v5) - 1;
      if ( v11 > 0 )
      {
        while ( v5[v11] != 0x5C )
        {
          if ( --v11 <= 0 )
            goto LABEL_10;
        }
        v10 = &v5[v11];
      }
LABEL_10:
      if ( v10 )
      {
        *v10 = 0;
        v4 += 3;
      }
      else
      {
        v5 = EmptyString;
      }
      LODWORD(v13) = 3;
    }
    while ( !strncmp(v4, a__, v13) );
    strcat(a4, v5);
    *(_WORD *)&a4[strlen(a4)] = *(_WORD *)SubStr;
    result = strlen(v4) + 1;
    qmemcpy(&a4[strlen(a4)], v4, result);
  }
  else
  {
    strcpy(a4, Str1);
  }
  return result;
}
