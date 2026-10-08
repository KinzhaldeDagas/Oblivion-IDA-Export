unsigned int __thiscall sub_726850(char *this, int a2, int a3, int a4, int a5, unsigned __int16 a6)
{
  int v6; // ebp
  int v7; // eax
  void (__cdecl *v8)(int, char *, int, int *, int); // eax
  int v9; // ecx
  unsigned int v10; // edi
  unsigned int i; // esi
  int v13; // eax
  unsigned int j; // ecx
  int v15; // edx
  int v16; // edx
  int v17; // eax
  unsigned int v18; // ecx
  int v19; // esi
  unsigned int v20; // edi
  void (__cdecl *v21)(int, unsigned int *, int, int *, int); // eax
  void (__cdecl *v22)(int, int *, unsigned int, int *, int); // eax
  unsigned int result; // eax
  unsigned int v24; // edi
  unsigned int v25; // ebx
  unsigned int k; // esi
  int v27; // eax
  void (__cdecl *v28)(int, unsigned int *, int, int *, int); // edx
  void (__cdecl *v29)(int, int *, unsigned int, int *, int); // eax
  int v30; // edx
  unsigned int m; // ecx
  int v32; // [esp-28h] [ebp-250h]
  int v33; // [esp-28h] [ebp-250h]
  int v34; // [esp-14h] [ebp-23Ch]
  int v35; // [esp-14h] [ebp-23Ch]
  int v36; // [esp+10h] [ebp-218h] BYREF
  unsigned int v37; // [esp+14h] [ebp-214h]
  unsigned int v38; // [esp+18h] [ebp-210h] BYREF
  unsigned int v39; // [esp+1Ch] [ebp-20Ch] BYREF
  char *v40; // [esp+20h] [ebp-208h]
  int v41; // [esp+24h] [ebp-204h]
  int v42[32]; // [esp+28h] [ebp-200h]
  _DWORD v43[32]; // [esp+A8h] [ebp-180h]
  int v44[32]; // [esp+128h] [ebp-100h] BYREF
  int v45[32]; // [esp+1A8h] [ebp-80h] BYREF

  v6 = a2; /*0x726858*/
  v7 = *(_DWORD *)(a2 + 0x220); /*0x72685f*/
  v40 = this; /*0x72686e*/
  v34 = v7; /*0x726878*/
  v8 = *(void (__cdecl **)(int, char *, int, int *, int))(v7 + 8); /*0x726879*/
  v36 = 4; /*0x72687c*/
  v8(v34, this + 4, 4, &v36, 1); /*0x726884*/
  v9 = a5; /*0x726886*/
  v10 = 0; /*0x72688d*/
  v37 = 0; /*0x726894*/
  if ( a5 ) /*0x726898*/
  {
    do /*0x7268ba*/
    {
      if ( *(_DWORD *)(a4 + 0x14) == a3 ) /*0x7268ab*/
        v42[v10++] = a4; /*0x7268ad*/
      a4 += 0x1C; /*0x7268b4*/
      --v9; /*0x7268b7*/
    }
    while ( v9 ); /*0x7268ba*/
    v37 = v10; /*0x7268bc*/
  }
  for ( i = 0; i < v10; ++i ) /*0x7268c4*/
  {
    v13 = v42[i]; /*0x7268c6*/
    for ( j = 0; j < i; ++j ) /*0x7268ce*/
    {
      v15 = v42[j]; /*0x7268d0*/
      if ( *(_DWORD *)(v15 + 0x18) > *(_DWORD *)(v13 + 0x18) ) /*0x7268da*/
      {
        v42[j] = v13; /*0x7268dc*/
        v13 = v15; /*0x7268e0*/
      }
    }
    v42[i] = v13; /*0x7268e9*/
  }
  v16 = v42[0]; /*0x7268f4*/
  v17 = 1; /*0x7268fa*/
  v43[0] = 0; /*0x726901*/
  v45[0] = 0; /*0x726908*/
  v38 = 1; /*0x72690f*/
  v18 = 1; /*0x726913*/
  if ( v10 > 1 ) /*0x726915*/
  {
    do /*0x726954*/
    {
      v19 = v42[v18]; /*0x726923*/
      v20 = *(_DWORD *)(v19 + 0x18); /*0x72692d*/
      if ( v20 > *(_DWORD *)(v16 + 0x18) + (unsigned int)a6 * *(_DWORD *)(v16 + 0x10) ) /*0x726932*/
      {
        v43[v17] = v18; /*0x726934*/
        v45[v17++] = v20; /*0x72693b*/
        v38 = v17; /*0x726945*/
        v16 = v19; /*0x726949*/
      }
      v10 = v37; /*0x72694b*/
      ++v18; /*0x72694f*/
    }
    while ( v18 < v37 ); /*0x726954*/
    v6 = a2; /*0x726956*/
  }
  v43[v17] = v10; /*0x726969*/
  v35 = *(_DWORD *)(v6 + 0x220); /*0x72697c*/
  v21 = *(void (__cdecl **)(int, unsigned int *, int, int *, int))(v35 + 8); /*0x72697d*/
  v36 = 4; /*0x726980*/
  v21(v35, &v38, 4, &v36, 1); /*0x726984*/
  v32 = *(_DWORD *)(v6 + 0x220); /*0x7269a7*/
  v22 = *(void (__cdecl **)(int, int *, unsigned int, int *, int))(v32 + 8); /*0x7269a8*/
  v36 = 4; /*0x7269ab*/
  v22(v32, v45, 4 * v38, &v36, 1); /*0x7269af*/
  result = 0; /*0x7269b1*/
  v37 = 0; /*0x7269ba*/
  if ( v38 ) /*0x7269be*/
  {
    v41 = a6; /*0x7269cc*/
    while ( 1 ) /*0x7269d6*/
    {
      v24 = v43[result]; /*0x7269d6*/
      v25 = v43[result + 1]; /*0x7269dd*/
      v36 = 0; /*0x7269e6*/
      for ( k = v24; k < v25; ++k ) /*0x7269f0*/
        sub_725DE0((_DWORD *)v42[k], (int)v44, (int)&v36, 0x20); /*0x726a05*/
      v27 = *(_DWORD *)(v6 + 0x220); /*0x726a15*/
      v39 = v36; /*0x726a22*/
      v28 = *(void (__cdecl **)(int, unsigned int *, int, int *, int))(v27 + 8); /*0x726a26*/
      v36 = 4; /*0x726a35*/
      v28(v27, &v39, 4, &v36, 1); /*0x726a39*/
      v33 = *(_DWORD *)(v6 + 0x220); /*0x726a5c*/
      v29 = *(void (__cdecl **)(int, int *, unsigned int, int *, int))(v33 + 8); /*0x726a5d*/
      v36 = 4; /*0x726a60*/
      v29(v33, v44, 4 * v39, &v36, 1); /*0x726a64*/
      v30 = 0; /*0x726a81*/
      for ( m = 0; m < v39; ++m ) /*0x726a87*/
        v30 += v44[m]; /*0x726a90*/
      (*(void (__cdecl **)(_DWORD, int, int, int *, unsigned int))(*(_DWORD *)(v6 + 0x220) + 8))( /*0x726ab4*/
        *(_DWORD *)(v6 + 0x220),
        *((_DWORD *)v40 + 2) + *(_DWORD *)(v42[v24] + 0x18),
        v30 * v41,
        v44,
        v39);
      result = ++v37; /*0x726aba*/
      if ( v37 >= v38 ) /*0x726ac8*/
        break; /*0x726ac8*/
      result = v37; /*0x7269d2*/
    }
  }
  return result; /*0x726ace*/
}
