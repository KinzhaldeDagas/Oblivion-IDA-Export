void __cdecl sub_71C980(unsigned int a1, int a2, int a3, _DWORD *a4, int a5, int *a6, int a7)
{
  int v7; // ebp
  unsigned __int8 *v8; // eax
  unsigned int v9; // esi
  unsigned __int8 *v10; // edx
  unsigned int v11; // ecx
  _BYTE *v12; // eax
  char v13; // si
  int v14; // edi
  char v15; // dl
  unsigned __int8 *v16; // eax
  unsigned int v17; // ebp
  int v18; // ebx
  int v19; // ebp
  int v20; // ebx
  unsigned int v21; // ebp
  int v23; // edi
  unsigned __int8 *v24; // ecx
  unsigned int v25; // edx
  char v26; // [esp+10h] [ebp-7Ch]
  char v27; // [esp+14h] [ebp-78h]
  int v28; // [esp+18h] [ebp-74h]
  char v29; // [esp+1Ch] [ebp-70h]
  char v30; // [esp+20h] [ebp-6Ch]
  int v31; // [esp+24h] [ebp-68h]
  char v32; // [esp+28h] [ebp-64h]
  char v33; // [esp+2Ch] [ebp-60h]
  int v34; // [esp+30h] [ebp-5Ch]
  unsigned int v35; // [esp+34h] [ebp-58h]
  char *v36; // [esp+38h] [ebp-54h]
  char *v37; // [esp+3Ch] [ebp-50h]
  char *v38; // [esp+40h] [ebp-4Ch]
  unsigned __int8 *v39; // [esp+44h] [ebp-48h]
  unsigned int i; // [esp+48h] [ebp-44h]
  _BYTE v41[2]; // [esp+4Ch] [ebp-40h]
  char v42[4]; // [esp+4Eh] [ebp-3Eh] BYREF
  char v43[4]; // [esp+52h] [ebp-3Ah] BYREF
  char v44[54]; // [esp+56h] [ebp-36h] BYREF

  v7 = *(_DWORD *)(a5 + 0x14);
  v8 = (unsigned __int8 *)FormHeapAlloc(a2 * a1);
  v9 = a2 * (a1 >> 1);
  v10 = v8;
  v11 = 0;
  for ( i = (unsigned int)v8; v11 < v9; v8 = v12 + 1 )
  {
    *v8 = *(_BYTE *)(v11 + a7) >> 4;
    v12 = v8 + 1;
    *v12 = *(_BYTE *)(v11 + a7) & 0xF;
    ++v11;
  }
  v32 = *((_BYTE *)a6 + 0x17);
  v33 = *((_BYTE *)a6 + 0x13);
  v34 = a6[3];
  v29 = *((_BYTE *)a6 + 0x16);
  v13 = *((_BYTE *)a6 + 0x10);
  v14 = *a6;
  v30 = *((_BYTE *)a6 + 0x12);
  v31 = a6[2];
  v26 = *((_BYTE *)a6 + 0x15);
  v27 = *((_BYTE *)a6 + 0x11);
  v36 = &v42[-v7];
  v37 = &v43[-v7];
  v39 = v10;
  v15 = *((_BYTE *)a6 + 0x14);
  v28 = a6[1];
  v35 = 0;
  v16 = (unsigned __int8 *)(v7 + 2);
  v38 = &v44[-v7];
  do
  {
    *(_DWORD *)&v41[4 * v35] = v31 & (*v16 >> v29 << v30)
                             | v34 & (v16[1] >> v32 << v33)
                             | v28 & (v16[0xFFFFFFFF] >> v26 << v27)
                             | v14 & (v16[0xFFFFFFFE] >> v15 << v13);
    v17 = v16[7];
    *(_DWORD *)&v16[(_DWORD)v36] = v34 & (v16[5] >> v32 << v33)
                                 | v31 & (v16[4] >> v29 << v30)
                                 | v28 & (v16[3] >> v26 << v27)
                                 | v14 & (v16[2] >> v15 << v13);
    v18 = v31 & (v16[8] >> v29 << v30) | v28 & (v17 >> v26 << v27) | v14 & (v16[6] >> v15 << v13);
    v19 = v16[9] >> v32 << v33;
    v16 += 0x10;
    v20 = v34 & v19 | v18;
    v21 = v16[0xFFFFFFFB];
    *(_DWORD *)&v16[(_DWORD)v37 - 0x10] = v20;
    *(_DWORD *)&v16[(_DWORD)v38 - 0x10] = v34 & (v16[0xFFFFFFFD] >> v32 << v33)
                                        | v31 & (v16[0xFFFFFFFC] >> v29 << v30)
                                        | v28 & (v21 >> v26 << v27)
                                        | v14 & (v16[0xFFFFFFFA] >> v15 << v13);
    v35 += 4;
  }
  while ( v35 < 0x10 );
  if ( a2 )
  {
    v23 = a2;
    v24 = v39;
    do
    {
      if ( a1 )
      {
        v25 = a1;
        do
        {
          *a4++ = *(_DWORD *)&v41[4 * *v24++];
          --v25;
        }
        while ( v25 );
      }
      --v23;
    }
    while ( v23 );
  }
  FormHeapFree(i);
}
