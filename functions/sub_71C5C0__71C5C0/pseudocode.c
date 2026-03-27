void __cdecl sub_71C5C0(unsigned int a1, int a2, int a3, _DWORD *a4, int a5, int *a6, int a7)
{
  int v7; // edi
  unsigned __int8 *v8; // eax
  unsigned int v9; // esi
  unsigned __int8 *v10; // edx
  unsigned int v11; // ecx
  _BYTE *v12; // eax
  char v13; // bl
  char v14; // si
  unsigned int v15; // edx
  unsigned __int8 *v16; // eax
  unsigned int v17; // ebp
  int v18; // edi
  unsigned int v19; // ebp
  int v20; // edi
  int v21; // ebp
  int v23; // edi
  unsigned __int8 *v24; // ecx
  unsigned int v25; // edx
  int v26; // [esp+10h] [ebp-74h]
  char v27; // [esp+14h] [ebp-70h]
  char v28; // [esp+18h] [ebp-6Ch]
  int v29; // [esp+1Ch] [ebp-68h]
  char v30; // [esp+20h] [ebp-64h]
  char v31; // [esp+24h] [ebp-60h]
  int v32; // [esp+28h] [ebp-5Ch]
  unsigned int v33; // [esp+2Ch] [ebp-58h]
  char *v34; // [esp+30h] [ebp-54h]
  char *v35; // [esp+34h] [ebp-50h]
  char *v36; // [esp+38h] [ebp-4Ch]
  unsigned __int8 *v37; // [esp+3Ch] [ebp-48h]
  unsigned int i; // [esp+40h] [ebp-44h]
  _BYTE v39[3]; // [esp+44h] [ebp-40h]
  char v40[4]; // [esp+47h] [ebp-3Dh] BYREF
  char v41[4]; // [esp+4Bh] [ebp-39h] BYREF
  char v42[53]; // [esp+4Fh] [ebp-35h] BYREF

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
  v37 = v10;
  v26 = *a6;
  v30 = *((_BYTE *)a6 + 0x16);
  v32 = a6[2];
  v31 = *((_BYTE *)a6 + 0x12);
  v13 = *((_BYTE *)a6 + 0x14);
  v14 = *((_BYTE *)a6 + 0x10);
  v28 = *((_BYTE *)a6 + 0x11);
  v27 = *((_BYTE *)a6 + 0x15);
  v29 = a6[1];
  v34 = &v40[-v7];
  v15 = a6[3] & (0xFFu >> *((_BYTE *)a6 + 0x17) << *((_BYTE *)a6 + 0x13));
  v35 = &v41[-v7];
  v33 = 0;
  v16 = (unsigned __int8 *)(v7 + 1);
  v36 = &v42[-v7];
  do
  {
    *(_DWORD *)&v39[4 * v33] = v15
                             | v29 & (*v16 >> v27 << v28)
                             | v32 & (v16[1] >> v30 << v31)
                             | v26 & (v16[0xFFFFFFFF] >> v13 << v14);
    v17 = v16[8];
    *(_DWORD *)&v16[(_DWORD)v34] = v15
                                 | v32 & (v16[5] >> v30 << v31)
                                 | v29 & (v16[4] >> v27 << v28)
                                 | v26 & (v16[3] >> v13 << v14);
    v18 = v32 & (v16[9] >> v30 << v31) | v29 & (v17 >> v27 << v28) | v26 & (v16[7] >> v13 << v14);
    v19 = v16[0xC];
    *(_DWORD *)&v16[(_DWORD)v35] = v15 | v18;
    v20 = v29 & (v19 >> v27 << v28) | v26 & (v16[0xB] >> v13 << v14);
    v21 = v16[0xD] >> v30;
    v16 += 0x10;
    *(_DWORD *)&v16[(_DWORD)v36 - 0x10] = v15 | v32 & (v21 << v31) | v20;
    v33 += 4;
  }
  while ( v33 < 0x10 );
  if ( a2 )
  {
    v23 = a2;
    v24 = v37;
    do
    {
      if ( a1 )
      {
        v25 = a1;
        do
        {
          *a4++ = *(_DWORD *)&v39[4 * *v24++];
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
