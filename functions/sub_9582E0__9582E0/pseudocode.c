int __usercall sub_9582E0@<eax>(int a1@<ebx>, int a2, int a3, char a4, int a5, int a6, char *a7, const void **a8)
{
  int v8; // eax
  int v9; // ecx
  int v10; // ecx
  int v11; // ebp
  int v12; // ebx
  char *v13; // ecx
  char *v14; // eax
  char *v15; // eax
  int v16; // esi
  int v17; // ecx
  _DWORD *v19; // [esp+10h] [ebp-64h] BYREF
  int v20; // [esp+14h] [ebp-60h]
  unsigned int v21; // [esp+18h] [ebp-5Ch]
  char **v22[4]; // [esp+1Ch] [ebp-58h] BYREF
  _DWORD v23[5]; // [esp+2Ch] [ebp-48h] BYREF
  _DWORD v24[3]; // [esp+40h] [ebp-34h] BYREF
  int v25; // [esp+4Ch] [ebp-28h]
  int v26; // [esp+50h] [ebp-24h]
  unsigned int v27; // [esp+54h] [ebp-20h]
  int v28; // [esp+58h] [ebp-1Ch]
  int v29; // [esp+5Ch] [ebp-18h]
  unsigned int v30; // [esp+60h] [ebp-14h]
  int v31; // [esp+64h] [ebp-10h]
  int v32; // [esp+68h] [ebp-Ch]
  unsigned int v33; // [esp+6Ch] [ebp-8h]
  int v34; // [esp+70h] [ebp-4h]

  sub_942D70((int)v22, a1, (_DWORD *)a3);
  v19 = 0;
  v20 = 0;
  v21 = 0x80000000;
  sub_8BC030(v23, (int)&v19, 1);
  v24[0] = 0;
  v24[1] = 0;
  v24[2] = 0x80000000;
  v25 = 0;
  v26 = 0;
  v27 = 0x80000000;
  v28 = 0;
  v29 = 0;
  v30 = 0x80000000;
  v31 = 0;
  v32 = 0;
  v33 = 0x80000000;
  v34 = 0;
  sub_942D10(v22, (int)v23, a6, a7, (int)v24);
  v8 = (int)a8[1] + v26;
  v9 = (unsigned int)a8[2] & 0x3FFFFFFF;
  if ( v9 < v8 )
  {
    v10 = 2 * v9;
    if ( v8 < v10 )
      v8 = v10;
    sub_8A6E40(a8, v8, 0x18);
  }
  v11 = 0;
  if ( v26 > 0 )
  {
    v12 = 0;
    do
    {
      if ( a8[1] == (const void *)((unsigned int)a8[2] & 0x3FFFFFFF) )
        sub_8A6EE0(a8, 0x18);
      v13 = (char *)a8[1];
      v14 = (char *)*a8;
      a8[1] = v13 + 1;
      v15 = &v14[0x18 * (_DWORD)v13];
      *(_DWORD *)v15 = *(_DWORD *)(v12 + v25);
      *((_DWORD *)v15 + 2) = *(_DWORD *)(v12 + v25 + 4);
      *((_DWORD *)v15 + 3) = 0;
      *((_DWORD *)v15 + 4) = *(_DWORD *)(v12 + v25 + 8);
      *((_DWORD *)v15 + 5) = 0;
      ++v11;
      v12 += 0xC;
    }
    while ( v11 < v26 );
  }
  v16 = sub_958130(v24, a2, a4, a5, (char)a7, 0, (int)v19, v20, *(_BYTE *)(a3 + 1) != BYTE1(dword_B2FDE4));
  sub_941400(v24);
  sub_8BC2E0(v23);
  if ( (v21 & 0x80000000) == 0 )
  {
    v17 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
    if ( !v17 )
      v17 = dword_BA7D9C;
    sub_8A75D0(v17, v19, v21 & 0x3FFFFFFF, 0x14);
  }
  sub_942E10(v22);
  return v16;
}
