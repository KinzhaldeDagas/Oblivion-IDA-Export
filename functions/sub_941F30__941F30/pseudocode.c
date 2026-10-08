int __usercall sub_941F30@<eax>(int a1@<ebx>, const void **a2, unsigned __int8 *a3, int **a4, void *a5)
{
  int v5; // eax
  float *v6; // esi
  int result; // eax
  int j; // edi
  _DWORD *v9; // eax
  int v10; // edi
  const char *v11; // eax
  char *v12; // ecx
  int v13; // eax
  _DWORD *v14; // ecx
  int v15; // eax
  int i; // [esp+Ch] [ebp-10h]
  int v17; // [esp+10h] [ebp-Ch]
  char Args[4]; // [esp+14h] [ebp-8h] BYREF
  int v19; // [esp+18h] [ebp-4h] BYREF

  v5 = sub_940CF0((int)a3); /*0x941f40*/
  v6 = *(float **)a1; /*0x941f45*/
  v17 = v5; /*0x941f49*/
  v19 = sub_940CE0(a3); /*0x941f52*/
  result = *(_DWORD *)(a1 + 4); /*0x941f56*/
  if ( result ) /*0x941f5b*/
  {
    sub_941B90(1, a2); /*0x941f6a*/
    switch ( v19 ) /*0x941f86*/
    {
      case 1: /*0x941f86*/
      case 2: /*0x941f86*/
      case 3: /*0x941f86*/
      case 4: /*0x941f86*/
      case 5: /*0x941f86*/
      case 6: /*0x941f86*/
      case 7: /*0x941f86*/
      case 8: /*0x941f86*/
      case 9: /*0x941f86*/
      case 0xA: /*0x941f86*/
      case 0xB: /*0x941f86*/
      case 0xC: /*0x941f86*/
      case 0xD: /*0x941f86*/
      case 0xE: /*0x941f86*/
      case 0xF: /*0x941f86*/
      case 0x10: /*0x941f86*/
      case 0x11: /*0x941f86*/
      case 0x12: /*0x941f86*/
      case 0x14: /*0x941f86*/
        if ( v19 < 0xC || (*(_DWORD *)Args = 1, v19 > 0x12) ) /*0x941f9d*/
          *(_DWORD *)Args = 0x10; /*0x941f9f*/
        for ( i = 0; i < *(_DWORD *)(a1 + 4); ++i ) /*0x941fb4*/
        {
          if ( i % *(_DWORD *)Args ) /*0x941fc5*/
            sub_8BBD90(a4, 0x20); /*0x941fee*/
          else
            sub_8BBEE0((int)a4, off_AA22F0, *a2); /*0x941fde*/
          sub_941760(v19, (int)a5, a4, v6); /*0x941ffd*/
          v6 = (float *)((char *)v6 + v17); /*0x94200d*/
        }
        break; /*0x942016*/
      case 0x13: /*0x941f86*/
        sub_8BBEE0((int)a4, "<!-- zero array %s -->", *(const char **)a3); /*0x94202e*/
        break; /*0x942036*/
      case 0x19: /*0x941f86*/
        for ( j = 0; j < *(_DWORD *)(a1 + 4); ++j ) /*0x942042*/
        {
          v9 = (_DWORD *)sub_90D1F0(a3); /*0x942053*/
          sub_941CE0(a2, v9, (int)v6, (int)a4, a5); /*0x94205c*/
          v6 = (float *)((char *)v6 + v17); /*0x94206b*/
        }
        break; /*0x942070*/
      case 0x1C: /*0x941f86*/
        v10 = 0; /*0x94207a*/
        while ( v10 < *(_DWORD *)(a1 + 4) ) /*0x94207e*/
        {
          (*(void (__thiscall **)(void *, char *, _DWORD))(*(_DWORD *)a5 + 0x10))(a5, Args, *(_DWORD *)v6); /*0x942091*/
          (*(void (__thiscall **)(void *, int *, _DWORD))(*(_DWORD *)a5 + 0x10))(a5, &v19, *((_DWORD *)v6 + 1)); /*0x9420a2*/
          ++v10; /*0x9420a8*/
          v11 = word_A36430; /*0x9420ab*/
          if ( v10 >= *(_DWORD *)(a1 + 4) ) /*0x9420b0*/
            v11 = EmptyString; /*0x9420b2*/
          sub_8BBEE0((int)a4, "(%s %s%s)", *(const char **)Args, (const char *)v19, v11); /*0x9420cc*/
          v6 = (float *)((char *)v6 + v17); /*0x9420d1*/
          v12 = (char *)(v19 - 0xC); /*0x9420dc*/
          v13 = *(_DWORD *)(v19 - 4) - 1; /*0x9420e2*/
          *(_DWORD *)(v19 - 0xC + 8) = v13; /*0x9420e3*/
          if ( v13 < 0 ) /*0x9420e6*/
            sub_8B1930(v12); /*0x9420e8*/
          v14 = (_DWORD *)(*(_DWORD *)Args - 0xC); /*0x9420f4*/
          v15 = *(_DWORD *)(*(_DWORD *)Args - 4) - 1; /*0x9420f7*/
          *(_DWORD *)(*(_DWORD *)Args - 0xC + 8) = v15; /*0x9420f8*/
          if ( v15 < 0 ) /*0x9420fb*/
            sub_8B1930(v14); /*0x9420fd*/
        }
        break; /*0x942105*/
      default:
        break;
    }
    sub_941B90(0xFFFFFFFF, a2); /*0x94210b*/
    return sub_8BBEE0((int)a4, off_AA22F0, *a2); /*0x942124*/
  }
  return result; /*0x94212c*/
}
