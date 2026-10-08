unsigned int __userpurge sub_57CFE0@<eax>(
        int a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        double a5@<st7>,
        double a6@<st6>,
        double a7@<st5>,
        double a8@<st4>,
        signed int a9,
        char a10)
{
  int v10; // esi
  _DWORD *v11; // ebx
  char v14; // cl
  int v15; // edx
  int *v16; // eax
  int v17; // esi
  _DWORD *v18; // eax
  _DWORD *v19; // ecx
  bool v20; // zf
  int *GlobalScriptStateObj; // eax

  v10 = a1; /*0x57cfe4*/
  v11 = (_DWORD *)(a1 + 0xE0); /*0x57cfed*/
  if ( !*(_DWORD *)(a1 + 0xE0) ) /*0x57cff8*/
    return 0xFFFFFFFF; /*0x57cff8*/
  while ( 2 ) /*0x57d016*/
  {
    if ( a10 ) /*0x57d016*/
      goto LABEL_35; /*0x57d016*/
    v14 = 0; /*0x57d01c*/
    v15 = 0; /*0x57d01e*/
    v16 = (int *)(v10 + 0xE4); /*0x57d020*/
    while ( !v14 || v16[0xFFFFFFFF] <= 0x3E9 ) /*0x57d02d*/
    {
      if ( v16[0xFFFFFFFF] == a9 ) /*0x57d032*/
      {
        v14 = 1; /*0x57d034*/
      }
      else if ( !v14 ) /*0x57d03a*/
      {
        goto LABEL_12; /*0x57d03a*/
      }
      if ( *v16 > 0x3E9 ) /*0x57d03e*/
      {
        ++v15; /*0x57d089*/
        break; /*0x57d08c*/
      }
LABEL_12:
      if ( *v16 == a9 ) /*0x57d042*/
      {
        v14 = 1; /*0x57d044*/
      }
      else if ( !v14 ) /*0x57d04a*/
      {
        goto LABEL_16; /*0x57d04a*/
      }
      if ( v16[1] > 0x3E9 ) /*0x57d04f*/
      {
        v15 += 2; /*0x57d08e*/
        break; /*0x57d091*/
      }
LABEL_16:
      if ( v16[1] == a9 ) /*0x57d054*/
      {
        v14 = 1; /*0x57d056*/
      }
      else if ( !v14 ) /*0x57d05c*/
      {
        goto LABEL_20; /*0x57d05c*/
      }
      if ( v16[2] > 0x3E9 ) /*0x57d061*/
      {
        v15 += 3; /*0x57d093*/
        break; /*0x57d096*/
      }
LABEL_20:
      if ( v16[2] == a9 ) /*0x57d066*/
      {
        v14 = 1; /*0x57d068*/
      }
      else if ( !v14 ) /*0x57d06e*/
      {
        goto LABEL_24; /*0x57d06e*/
      }
      if ( v16[3] > 0x3E9 ) /*0x57d073*/
      {
        v15 += 4; /*0x57d098*/
        break; /*0x57d098*/
      }
LABEL_24:
      if ( v16[3] == a9 ) /*0x57d078*/
        v14 = 1; /*0x57d07a*/
      v15 += 5; /*0x57d07c*/
      v16 += 5; /*0x57d07f*/
      if ( v15 >= 0xA ) /*0x57d085*/
        break; /*0x57d085*/
    }
    if ( !v14 ) /*0x57d09d*/
      return 0xFFFFFFFF; /*0x57d09d*/
    if ( v15 < 0xA && a9 != 3 ) /*0x57d0a7*/
      return 0xFFFFFFFE; /*0x57d11c*/
LABEL_35:
    v17 = 0; /*0x57d0a9*/
    v18 = v11; /*0x57d0ab*/
    v19 = v11; /*0x57d0ad*/
    do /*0x57d0cb*/
    {
      if ( *v18 == a9 ) /*0x57d0b2*/
        ++v19; /*0x57d0b4*/
      v20 = *v19 == 0; /*0x57d0b9*/
      *v18 = *v19; /*0x57d0bb*/
      if ( v20 ) /*0x57d0bd*/
        break; /*0x57d0bd*/
      ++v17; /*0x57d0bf*/
      ++v18; /*0x57d0c2*/
      ++v19; /*0x57d0c5*/
    }
    while ( v17 < 0xA ); /*0x57d0cb*/
    if ( *v11 != 3 || *(_DWORD *)(a1 + 0xE4) ) /*0x57d0d6*/
    {
      if ( v17 <= 0 ) /*0x57d128*/
      {
        if ( a9 == 1 ) /*0x57d159*/
          sub_57CC00(0xE9, a2, a3, a4, a5, a6, a7, a8); /*0x57d15b*/
        *(_BYTE *)(a1 + 8) = 4; /*0x57d16a*/
        if ( a9 == 0x3F3 || a9 == 0x3E9 ) /*0x57d172*/
        {
          unk_B42D54 = 0; /*0x57d18a*/
          return 0; /*0x57d18f*/
        }
        else
        {
          unk_B42D54 = 1; /*0x57d179*/
          return 0; /*0x57d17e*/
        }
      }
      else
      {
        if ( v17 == 1 && (*v11 == 0x3F3 || *v11 == 0x3E9) ) /*0x57d13a*/
          unk_B42D54 = 1; /*0x57d13c*/
        return *(_DWORD *)(a1 + 4 * v17 + 0xDC); /*0x57d147*/
      }
    }
    else
    {
      if ( GetGlobalScriptStateObj__(0) ) /*0x57d0e1*/
      {
        GlobalScriptStateObj = (int *)GetGlobalScriptStateObj__(1); /*0x57d0ef*/
        sub_5859C0(GlobalScriptStateObj, 0xE9, a2, a3, a4); /*0x57d0f9*/
      }
      a10 = 0; /*0x57d0fe*/
      a9 = 3; /*0x57d103*/
      if ( *v11 ) /*0x57d100*/
      {
        v10 = a1; /*0x57d010*/
        continue; /*0x57d010*/
      }
      return 0xFFFFFFFF; /*0x57d10e*/
    }
  }
}
