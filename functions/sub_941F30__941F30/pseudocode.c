int __usercall sub_941F30@<eax>(int a1@<ebx>, const void **a2, unsigned __int8 *a3, int **a4, int a5)
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

  v5 = sub_940CF0((int)a3);
  v6 = *(float **)a1;
  v17 = v5;
  v19 = sub_940CE0(a3);
  result = *(_DWORD *)(a1 + 4);
  if ( result )
  {
    sub_941B90(1, a2);
    switch ( v19 )
    {
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
      case 0xA:
      case 0xB:
      case 0xC:
      case 0xD:
      case 0xE:
      case 0xF:
      case 0x10:
      case 0x11:
      case 0x12:
      case 0x14:
        if ( v19 < 0xC || (*(_DWORD *)Args = 1, v19 > 0x12) )
          *(_DWORD *)Args = 0x10;
        for ( i = 0; i < *(_DWORD *)(a1 + 4); ++i )
        {
          if ( i % *(_DWORD *)Args )
            sub_8BBD90(a4, 0x20);
          else
            sub_8BBEE0((int)a4, off_AA22F0, *a2);
          sub_941760(v19, a5, a4, v6);
          v6 = (float *)((char *)v6 + v17);
        }
        break;
      case 0x13:
        sub_8BBEE0((int)a4, "<!-- zero array %s -->", *(const char **)a3);
        break;
      case 0x19:
        for ( j = 0; j < *(_DWORD *)(a1 + 4); ++j )
        {
          v9 = (_DWORD *)sub_90D1F0(a3);
          sub_941CE0(a2, v9, (int)v6, (int)a4, a5);
          v6 = (float *)((char *)v6 + v17);
        }
        break;
      case 0x1C:
        v10 = 0;
        while ( v10 < *(_DWORD *)(a1 + 4) )
        {
          (*(void (__thiscall **)(int, char *, _DWORD))(*(_DWORD *)a5 + 0x10))(a5, Args, *(_DWORD *)v6);
          (*(void (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)a5 + 0x10))(a5, &v19, *((_DWORD *)v6 + 1));
          ++v10;
          v11 = word_A36430;
          if ( v10 >= *(_DWORD *)(a1 + 4) )
            v11 = EmptyString;
          sub_8BBEE0((int)a4, "(%s %s%s)", *(const char **)Args, (const char *)v19, v11);
          v6 = (float *)((char *)v6 + v17);
          v12 = (char *)(v19 - 0xC);
          v13 = *(_DWORD *)(v19 - 4) - 1;
          *(_DWORD *)(v19 - 0xC + 8) = v13;
          if ( v13 < 0 )
            sub_8B1930(v12);
          v14 = (_DWORD *)(*(_DWORD *)Args - 0xC);
          v15 = *(_DWORD *)(*(_DWORD *)Args - 4) - 1;
          *(_DWORD *)(*(_DWORD *)Args - 0xC + 8) = v15;
          if ( v15 < 0 )
            sub_8B1930(v14);
        }
        break;
      default:
        break;
    }
    sub_941B90(0xFFFFFFFF, a2);
    return sub_8BBEE0((int)a4, off_AA22F0, *a2);
  }
  return result;
}
