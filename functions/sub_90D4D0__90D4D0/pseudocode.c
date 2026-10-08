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
  int v13; // ebp
  bool v14; // cc
  int v15; // esi
  int v16; // eax
  int v17; // esi
  const char *v18; // ebp
  const char *v19; // eax
  _DWORD *v20; // ecx
  int v21; // eax
  int v22; // eax
  bool v24; // [esp+13h] [ebp-85h] BYREF
  int v25; // [esp+14h] [ebp-84h]
  int v26; // [esp+18h] [ebp-80h]
  const char *v27; // [esp+1Ch] [ebp-7Ch] BYREF
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

  sub_941EC0((int)v44, a2); /*0x90d4e0*/
  v28 = sub_940EF0(a1, off_B30594); /*0x90d4f7*/
  v5 = sub_8B0D00(a1 + 5); /*0x90d500*/
  sub_8B0D80(a1 + 5, &v24, v5); /*0x90d50a*/
  while ( v24 ) /*0x90d515*/
  {
    if ( sub_8B0D30(a1 + 5, v5) == 0xFFFFFFFF ) /*0x90d522*/
    {
      v6 = sub_8B0D20(a1 + 5, v5); /*0x90d527*/
      sub_941B70((char **)v44, v6); /*0x90d531*/
    }
    v5 = sub_8B0D50(a1 + 5, v5); /*0x90d53e*/
    sub_8B0D80(a1 + 5, &v24, v5); /*0x90d548*/
  }
  if ( !*(_BYTE *)(a4 + 8) ) /*0x90d55c*/
  {
    v7 = 0; /*0x90d568*/
    if ( a1[3] > 0 ) /*0x90d56c*/
    {
      v8 = 0; /*0x90d56e*/
      do /*0x90d597*/
      {
        v9 = a1[2]; /*0x90d570*/
        v10 = *(const char **)(v9 + v8 + 0x10); /*0x90d577*/
        v11 = v8 + v9; /*0x90d57b*/
        if ( v10 == v28 ) /*0x90d57f*/
          sub_941B70((char **)v44, *(_DWORD *)(v11 + 8)); /*0x90d589*/
        ++v7; /*0x90d591*/
        v8 += 0x18; /*0x90d592*/
      }
      while ( v7 < a1[3] ); /*0x90d597*/
    }
  }
  v31 = 0; /*0x90d5aa*/
  v32 = 0; /*0x90d5ae*/
  v33 = 0x80000000; /*0x90d5b2*/
  v34 = 0; /*0x90d5b6*/
  v35 = 0; /*0x90d5ba*/
  v36 = 0x80000000; /*0x90d5be*/
  v37 = 0; /*0x90d5c2*/
  v38 = 0; /*0x90d5c6*/
  v39 = 0x80000000; /*0x90d5ca*/
  v40 = 0; /*0x90d5ce*/
  v41 = 0; /*0x90d5d2*/
  v42 = 0x80000000; /*0x90d5d6*/
  v43 = 0; /*0x90d5da*/
  sub_8BBF50(v30, a3); /*0x90d5de*/
  sub_8BBEE0((int)v30, "<?xml version=\"1.0\" encoding=\"utf-8\"?>\n<hkpackfile classversion=\"2\">\n"); /*0x90d5ed*/
  sub_941DB0((const void **)v44, 1); /*0x90d5fb*/
  v12 = a1[9]; /*0x90d600*/
  v13 = 0; /*0x90d603*/
  v26 = 0; /*0x90d607*/
  if ( v12 > 0 ) /*0x90d60b*/
  {
    do /*0x90d744*/
    {
      if ( *(_BYTE *)(a4 + 8) || (const char *)v13 != v28 ) /*0x90d623*/
      {
        sub_8BBEE0((int)v30, "\n\t<hksection name=\"%s\">\n", *(const char **)(a1[8] + 4 * v13)); /*0x90d63a*/
        sub_941DB0((const void **)v44, 1); /*0x90d648*/
        v14 = a1[3] <= 0; /*0x90d64d*/
        v29 = 0; /*0x90d650*/
        if ( !v14 ) /*0x90d654*/
        {
          v25 = 0; /*0x90d65a*/
          do /*0x90d715*/
          {
            v15 = a1[2]; /*0x90d660*/
            v16 = *(_DWORD *)(v15 + v25 + 0x10); /*0x90d667*/
            v17 = v25 + v15; /*0x90d66b*/
            if ( v16 == v13 ) /*0x90d66f*/
            {
              sub_941DD0(v44, &v27, *(_DWORD *)(v17 + 8)); /*0x90d682*/
              v18 = v27; /*0x90d68a*/
              v19 = (const char *)sub_90D1E0(*(void **)(v17 + 4)); /*0x90d68e*/
              sub_941BF0(v44, a3, v18, v19); /*0x90d69a*/
              sub_9428A0((const char **)v44, a3, *(_DWORD *)v17, *(_DWORD **)(v17 + 4), (int)&v31); /*0x90d6b0*/
              sub_941C90((const char **)v44, a3); /*0x90d6ba*/
              sub_8BBEE0((int)v30, "\n"); /*0x90d6c9*/
              v20 = v27 + 0xFFFFFFF4; /*0x90d6d4*/
              v32 = 0; /*0x90d6d7*/
              v35 = 0; /*0x90d6db*/
              v38 = 0; /*0x90d6df*/
              v41 = 0; /*0x90d6e3*/
              v21 = *(_DWORD *)&v27[0xFFFFFFFC] - 1; /*0x90d6ed*/
              *(_DWORD *)&v27[0xFFFFFFFC] = v21; /*0x90d6ee*/
              if ( v21 < 0 ) /*0x90d6f1*/
                sub_8B1930(v20); /*0x90d6f3*/
              v13 = v26; /*0x90d6f8*/
            }
            v14 = ++v29 < a1[3]; /*0x90d70b*/
            v25 += 0x18; /*0x90d711*/
          }
          while ( v14 ); /*0x90d715*/
        }
        sub_941DB0((const void **)v44, 0xFFFFFFFF); /*0x90d723*/
        sub_8BBEE0((int)v30, "\n\t</hksection>"); /*0x90d732*/
      }
      v22 = a1[9]; /*0x90d73a*/
      v26 = ++v13; /*0x90d740*/
    }
    while ( v13 < v22 ); /*0x90d744*/
  }
  sub_941DB0((const void **)v44, 0xFFFFFFFF); /*0x90d750*/
  sub_8BBEE0((int)v30, "\n\n</hkpackfile>\n"); /*0x90d75f*/
  sub_8BC000(v30); /*0x90d76b*/
  sub_941400(&v31); /*0x90d774*/
  sub_8B0E60(v46); /*0x90d780*/
  if ( v45 >= 0 ) /*0x90d78f*/
    sub_8A75D0( /*0x90d7b3*/
      *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C),
      (_DWORD *)v44[2],
      v45 & 0x3FFFFFFF,
      0x14);
  return 0; /*0x90d78b*/
}
