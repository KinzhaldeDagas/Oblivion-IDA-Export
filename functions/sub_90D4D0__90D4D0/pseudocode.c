int __userpurge sub_90D4D0@<eax>(int *a1@<ecx>, int a2@<ebx>, int a3, int a4)
{
  int v5; // esi
  unsigned int v6; // eax
  int v7; // ebp
  int v8; // ebx
  int v9; // eax
  const char *v10; // edx
  int v11; // eax
  int v12; // eax
  const char *v13; // ebp
  bool v14; // cc
  int v15; // esi
  const char *v16; // eax
  int v17; // esi
  int v18; // ebp
  int v19; // eax
  _DWORD *v20; // ecx
  int v21; // eax
  int v22; // eax
  bool v24; // [esp+13h] [ebp-85h] BYREF
  int v25; // [esp+14h] [ebp-84h]
  const char *v26; // [esp+18h] [ebp-80h]
  int v27; // [esp+1Ch] [ebp-7Ch] BYREF
  const char *v28; // [esp+20h] [ebp-78h]
  int v29; // [esp+24h] [ebp-74h]
  int v30[3]; // [esp+28h] [ebp-70h] BYREF
  int v31; // [esp+34h] [ebp-64h] BYREF
  int v32; // [esp+38h] [ebp-60h]
  unsigned int v33; // [esp+3Ch] [ebp-5Ch]
  int v34; // [esp+40h] [ebp-58h]
  int v35; // [esp+44h] [ebp-54h]
  unsigned int v36; // [esp+48h] [ebp-50h]
  int v37; // [esp+4Ch] [ebp-4Ch]
  int v38; // [esp+50h] [ebp-48h]
  unsigned int v39; // [esp+54h] [ebp-44h]
  int v40; // [esp+58h] [ebp-40h]
  int v41; // [esp+5Ch] [ebp-3Ch]
  unsigned int v42; // [esp+60h] [ebp-38h]
  int v43; // [esp+64h] [ebp-34h]
  int v44[4]; // [esp+68h] [ebp-30h] BYREF
  int v45; // [esp+78h] [ebp-20h]
  int v46[3]; // [esp+8Ch] [ebp-Ch] BYREF

  sub_941EC0((int)v44, a2);
  v28 = sub_940EF0(a1, off_B30594);
  v5 = sub_8B0D00(a1 + 5);
  sub_8B0D80(a1 + 5, &v24, v5);
  while ( v24 )
  {
    if ( sub_8B0D30(a1 + 5, v5) == 0xFFFFFFFF )
    {
      v6 = sub_8B0D20(a1 + 5, v5);
      sub_941B70(v44, v6);
    }
    v5 = sub_8B0D50(a1 + 5, v5);
    sub_8B0D80(a1 + 5, &v24, v5);
  }
  if ( !*(_BYTE *)(a4 + 8) )
  {
    v7 = 0;
    if ( a1[3] > 0 )
    {
      v8 = 0;
      do
      {
        v9 = a1[2];
        v10 = *(const char **)(v9 + v8 + 0x10);
        v11 = v8 + v9;
        if ( v10 == v28 )
          sub_941B70(v44, *(_DWORD *)(v11 + 8));
        ++v7;
        v8 += 0x18;
      }
      while ( v7 < a1[3] );
    }
  }
  v31 = 0;
  v32 = 0;
  v33 = 0x80000000;
  v34 = 0;
  v35 = 0;
  v36 = 0x80000000;
  v37 = 0;
  v38 = 0;
  v39 = 0x80000000;
  v40 = 0;
  v41 = 0;
  v42 = 0x80000000;
  v43 = 0;
  sub_8BBF50(v30, a3);
  sub_8BBEE0((int)v30, "<?xml version=\"1.0\" encoding=\"utf-8\"?>\n<hkpackfile classversion=\"2\">\n");
  sub_941DB0((const void **)v44, 1);
  v12 = a1[9];
  v13 = 0;
  v26 = 0;
  if ( v12 > 0 )
  {
    do
    {
      if ( *(_BYTE *)(a4 + 8) || v13 != v28 )
      {
        sub_8BBEE0((int)v30, "\n\t<hksection name=\"%s\">\n", *(const char **)(a1[8] + 4 * (_DWORD)v13));
        sub_941DB0((const void **)v44, 1);
        v14 = a1[3] <= 0;
        v29 = 0;
        if ( !v14 )
        {
          v25 = 0;
          do
          {
            v15 = a1[2];
            v16 = *(const char **)(v15 + v25 + 0x10);
            v17 = v25 + v15;
            if ( v16 == v13 )
            {
              sub_941DD0(v44, &v27, *(_DWORD *)(v17 + 8));
              v18 = v27;
              v19 = sub_90D1E0(*(void **)(v17 + 4));
              sub_941BF0(v44, a3, v18, v19);
              sub_9428A0((int)v44, a3, *(_DWORD *)v17, *(_DWORD *)(v17 + 4), (int)&v31);
              sub_941C90((const void **)v44, a3);
              sub_8BBEE0((int)v30, "\n");
              v20 = (_DWORD *)(v27 - 0xC);
              v32 = 0;
              v35 = 0;
              v38 = 0;
              v41 = 0;
              v21 = *(_DWORD *)(v27 - 0xC + 8) - 1;
              *(_DWORD *)(v27 - 0xC + 8) = v21;
              if ( v21 < 0 )
                sub_8B1930(v20);
              v13 = v26;
            }
            v14 = ++v29 < a1[3];
            v25 += 0x18;
          }
          while ( v14 );
        }
        sub_941DB0((const void **)v44, 0xFFFFFFFF);
        sub_8BBEE0((int)v30, "\n\t</hksection>");
      }
      v22 = a1[9];
      v26 = ++v13;
    }
    while ( (int)v13 < v22 );
  }
  sub_941DB0((const void **)v44, 0xFFFFFFFF);
  sub_8BBEE0((int)v30, "\n\n</hkpackfile>\n");
  sub_8BC000(v30);
  sub_941400(&v31);
  sub_8B0E60(v46);
  if ( v45 >= 0 )
    sub_8A75D0(
      *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C),
      (_DWORD *)v44[2],
      v45 & 0x3FFFFFFF,
      0x14);
  return 0;
}
