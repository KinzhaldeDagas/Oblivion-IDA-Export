int __cdecl strncmp(const char *Str1, const char *Str2, size_t MaxCount)
{
  const char *v4; // ecx
  const char *v5; // eax
  char v6; // dl
  char v7; // dl
  char v8; // dl
  char v9; // dl
  int v10; // eax
  int v11; // ecx
  unsigned int v12; // [esp+4h] [ebp-4h]

  v12 = 0; /*0x98416a*/
  if ( !(_DWORD)MaxCount ) /*0x984174*/
    return 0; /*0x984176*/
  if ( (unsigned int)MaxCount <= 4 ) /*0x984181*/
  {
    v4 = Str2; /*0x9841f8*/
    v5 = Str1; /*0x9841fb*/
    goto LABEL_23; /*0x9841fe*/
  }
  v4 = Str2; /*0x98418a*/
  v5 = Str1; /*0x98418d*/
  do /*0x9841cc*/
  {
    v6 = *v5; /*0x984190*/
    v5 += 4; /*0x984192*/
    v4 += 4; /*0x984195*/
    if ( !v6 || v6 != v4[0xFFFFFFFC] ) /*0x98419f*/
    {
      v10 = *((unsigned __int8 *)v5 + 0xFFFFFFFC); /*0x9841ee*/
      v11 = *((unsigned __int8 *)v4 + 0xFFFFFFFC); /*0x9841f2*/
      return v10 - v11; /*0x9841f6*/
    }
    v7 = v5[0xFFFFFFFD]; /*0x9841a1*/
    if ( !v7 || v7 != v4[0xFFFFFFFD] ) /*0x9841ab*/
    {
      v10 = *((unsigned __int8 *)v5 + 0xFFFFFFFD); /*0x9841e4*/
      v11 = *((unsigned __int8 *)v4 + 0xFFFFFFFD); /*0x9841e8*/
      return v10 - v11; /*0x9841ec*/
    }
    v8 = v5[0xFFFFFFFE]; /*0x9841ad*/
    if ( !v8 || v8 != v4[0xFFFFFFFE] ) /*0x9841b7*/
    {
      v10 = *((unsigned __int8 *)v5 + 0xFFFFFFFE); /*0x9841da*/
      v11 = *((unsigned __int8 *)v4 + 0xFFFFFFFE); /*0x9841de*/
      return v10 - v11; /*0x9841e2*/
    }
    v9 = v5[0xFFFFFFFF]; /*0x9841b9*/
    if ( !v9 || v9 != v4[0xFFFFFFFF] ) /*0x9841c3*/
    {
      v10 = *((unsigned __int8 *)v5 + 0xFFFFFFFF); /*0x9841d0*/
      v11 = *((unsigned __int8 *)v4 + 0xFFFFFFFF); /*0x9841d4*/
      return v10 - v11; /*0x9841d8*/
    }
    v12 += 4; /*0x9841c5*/
  }
  while ( v12 < (int)MaxCount - 4 ); /*0x9841cc*/
  while ( 1 ) /*0x98420f*/
  {
LABEL_23:
    if ( v12 >= (unsigned int)MaxCount ) /*0x984212*/
      return 0; /*0x984219*/
    if ( !*v5 || *v5 != *v4 ) /*0x984208*/
      break; /*0x984208*/
    ++v5; /*0x98420a*/
    ++v4; /*0x98420b*/
    ++v12; /*0x98420c*/
  }
  v10 = *(unsigned __int8 *)v5; /*0x98421a*/
  v11 = *(unsigned __int8 *)v4; /*0x98421d*/
  return v10 - v11; /*0x984217*/
}
