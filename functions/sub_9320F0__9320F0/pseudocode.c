bool __cdecl sub_9320F0(int a1, int a2, _DWORD *a3, const void **a4)
{
  _DWORD *v4; // ebx
  bool result; // al
  _DWORD *v6; // edi
  _DWORD *v7; // eax
  _DWORD *v8; // ebp
  const void *v9; // edi
  const void *v10; // ebx
  signed int v11; // eax
  int v12; // eax
  char *v13; // ecx
  char *v14; // edi
  bool v15; // cc
  int v16; // [esp+10h] [ebp-14h]
  int v17; // [esp+14h] [ebp-10h]
  _DWORD *v18; // [esp+18h] [ebp-Ch]
  bool v19; // [esp+1Ch] [ebp-8h] BYREF
  bool v20; // [esp+20h] [ebp-4h] BYREF

  v4 = a3; /*0x9320f4*/
  result = 0; /*0x9320fc*/
  v17 = 0; /*0x932106*/
  if ( (int)a3[1] <= 0 ) /*0x93210a*/
  {
LABEL_21:
    a4[1] = 0; /*0x932244*/
  }
  else
  {
    v16 = 0; /*0x932110*/
    while ( 1 ) /*0x932124*/
    {
      a4[1] = 0; /*0x932124*/
      v6 = (_DWORD *)(v16 + *v4); /*0x93212c*/
      v18 = v6; /*0x932136*/
      if ( ((unsigned int)a4[2] & 0x3FFFFFFF) == 0 ) /*0x93213a*/
        sub_8A6E40(a4, 1, 0x10); /*0x93214c*/
      v7 = *a4; /*0x932154*/
      a4[1] = (const void *)1; /*0x932156*/
      *v7 = *v6; /*0x93215f*/
      v7[1] = v6[1]; /*0x932164*/
      v8 = (_DWORD *)v6[2]; /*0x932167*/
      if ( v8 ) /*0x93216c*/
        break; /*0x93216c*/
LABEL_19:
      v15 = ++v17 < v4[1]; /*0x932223*/
      v16 += 0x14; /*0x932238*/
      if ( !v15 ) /*0x93223c*/
      {
        result = 0; /*0x932242*/
        goto LABEL_21; /*0x932242*/
      }
    }
    while ( 1 ) /*0x932178*/
    {
      if ( *v8 == *v6 && v8[1] == v6[1] && v8[3] == v6[3] ) /*0x93218d*/
      {
        sub_9316C0(&v19, a1, *(_DWORD *)(a2 + 4), 1, (int **)a4); /*0x9321a8*/
        sub_9316C0(&v20, a2, *(_DWORD *)(a1 + 4), 0, (int **)a4); /*0x9321c1*/
        if ( v19 ) /*0x9321cf*/
        {
          result = v20; /*0x9321d1*/
          if ( v20 ) /*0x9321d7*/
            break; /*0x9321d7*/
        }
      }
      v9 = a4[1]; /*0x9321d9*/
      v10 = (char *)v9 + 1; /*0x9321df*/
      v11 = (unsigned int)a4[2] & 0x3FFFFFFF; /*0x9321e2*/
      if ( v11 < (int)v9 + 1 ) /*0x9321e9*/
      {
        v12 = 2 * v11; /*0x9321eb*/
        if ( (int)v10 >= v12 ) /*0x9321ef*/
          v12 = (int)v9 + 1; /*0x9321f1*/
        sub_8A6E40(a4, v12, 0x10); /*0x9321f7*/
      }
      v13 = (char *)*a4; /*0x9321ff*/
      a4[1] = v10; /*0x932201*/
      v14 = &v13[0x10 * (_DWORD)v9]; /*0x93220a*/
      *(_DWORD *)v14 = *v8; /*0x93220c*/
      *((_DWORD *)v14 + 1) = v8[1]; /*0x932211*/
      v8 = (_DWORD *)v8[2]; /*0x932214*/
      if ( !v8 ) /*0x932219*/
      {
        v4 = a3; /*0x93221f*/
        goto LABEL_19; /*0x93221f*/
      }
      v6 = v18; /*0x932174*/
    }
  }
  return result; /*0x932247*/
}
