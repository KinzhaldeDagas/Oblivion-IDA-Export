__int16 __thiscall sub_6AABD0(_DWORD *this, int *a2, LPSTR pszFileName, __int16 a4, int *a5)
{
  bool v6; // zf
  FileFinder *v8; // edx
  int v9; // ecx
  unsigned int v10; // eax
  LPSTR v11; // edi
  HMMIO v13; // eax
  HMMIO v14; // esi
  MMRESULT (__stdcall *v15)(HMMIO, LPMMCKINFO, const MMCKINFO *, UINT); // edi
  int v16; // eax
  DWORD cksize; // edi
  int v18; // eax
  int v19; // edx
  int v20; // eax
  int v21; // ecx
  int *v22; // eax
  int v23; // ecx
  int v24; // eax
  int v25; // ebp
  int v26; // ebx
  int v27; // edi
  _DWORD *v28; // ebx
  int v29; // eax
  int v30; // ecx
  int v31; // [esp+4Ch] [ebp-210h] BYREF
  int v32; // [esp+50h] [ebp-20Ch] BYREF
  int v33; // [esp+54h] [ebp-208h]
  const char *v34; // [esp+58h] [ebp-204h]
  _DWORD *v35; // [esp+5Ch] [ebp-200h]
  int *v36; // [esp+60h] [ebp-1FCh]
  _DWORD *v37; // [esp+64h] [ebp-1F8h]
  struct _MMCKINFO v38; // [esp+68h] [ebp-1F4h] BYREF
  char pch[4]; // [esp+7Ch] [ebp-1E0h] BYREF
  int v40; // [esp+80h] [ebp-1DCh]
  int v41; // [esp+84h] [ebp-1D8h]
  int v42; // [esp+88h] [ebp-1D4h]
  struct _MMCKINFO pmmcki; // [esp+8Ch] [ebp-1D0h] BYREF
  struct _MMIOINFO v44; // [esp+A0h] [ebp-1BCh] BYREF
  struct _MMIOINFO pmmioinfo; // [esp+E8h] [ebp-174h] BYREF
  _DWORD v46[9]; // [esp+130h] [ebp-12Ch] BYREF
  _DWORD v47[65]; // [esp+154h] [ebp-108h] BYREF

  v6 = *(this + 2) == 0; /*0x6aabee*/
  v37 = this; /*0x6aac01*/
  v36 = a2; /*0x6aac05*/
  v34 = pszFileName; /*0x6aac09*/
  v35 = a5; /*0x6aac0d*/
  if ( v6 ) /*0x6aac11*/
    return 0; /*0x6aac16*/
  _memset((int)&pmmioinfo, 0, sizeof(pmmioinfo)); /*0x6aac28*/
  v8 = MEMORY[0xB33A04]; /*0x6aac2d*/
  v6 = MEMORY[0xB33A04] == 0; /*0x6aac36*/
  pmmioinfo.fccIOProc = 0x564157; /*0x6aac38*/
  pmmioinfo.pIOProc = (LPMMIOPROC)sub_6AAAA0; /*0x6aac43*/
  if ( !v6 ) /*0x6aac4e*/
  {
    if ( v8->vtbl->FindFile(v8, pszFileName, 0, 0, 0xFFFFFFFF) ) /*0x6aac5e*/
    {
      v13 = mmioOpenA(pszFileName, (LPMMIOINFO)&pmmioinfo, 0x10000); /*0x6aad14*/
      goto LABEL_12; /*0x6aad14*/
    }
    v8 = MEMORY[0xB33A04]; /*0x6aac68*/
  }
  v9 = dword_A77130; /*0x6aac73*/
  v47[0] = dword_A7712C; /*0x6aac79*/
  v47[2] = dword_A77134; /*0x6aac85*/
  v47[1] = v9; /*0x6aac8c*/
  v10 = strlen(pszFileName) + 1; /*0x6aac9c*/
  v11 = (char *)&v46[8] + 3; /*0x6aaca7*/
  while ( *++v11 ) /*0x6aacb8*/
    ; /*0x6aacb0*/
  qmemcpy(v11, pszFileName, v10); /*0x6aacbf*/
  if ( !v8 || !v8->vtbl->FindFile(v8, (const char *)v47, 0, 0, 0xFFFFFFFF) ) /*0x6aace5*/
    return 0; /*0x6aace9*/
  v13 = mmioOpenA((LPSTR)v47, (LPMMIOINFO)&pmmioinfo, 0x10000); /*0x6aad04*/
LABEL_12:
  v14 = v13; /*0x6aad1a*/
  if ( !v13 ) /*0x6aad1e*/
    return 0; /*0x6aad80*/
  v15 = mmioDescend; /*0x6aad20*/
  if ( mmioDescend(v13, &pmmcki, 0, 0) == 0x109 /*0x6aad72*/
    || (v38.ckid = 0x20746D66, v15(v14, &v38, &pmmcki, 0x10u) == 0x109)
    || v38.cksize < 0x10
    || (mmioRead(v14, pch, 0x10), *(_WORD *)pch != 1) )
  {
    mmioClose(v14, 0); /*0x6aad77*/
    return 0; /*0x6aad77*/
  }
  mmioAscend(v14, &v38, 0); /*0x6aad8e*/
  v38.ckid = 0x61746164; /*0x6aada1*/
  v15(v14, &v38, &pmmcki, 0x10u); /*0x6aada9*/
  v16 = 0; /*0x6aadb6*/
  cksize = v38.cksize; /*0x6aadc2*/
  memset(&v46[2], 0, 0x1C); /*0x6aadc4*/
  v46[0] = 0x24; /*0x6aadf5*/
  if ( (a4 & 1) != 0 ) /*0x6aae00*/
  {
    v16 = 0x40; /*0x6aae02*/
  }
  else if ( (a4 & 4) != 0 && (a4 & 2) != 0 ) /*0x6aae11*/
  {
    v16 = 0x30010; /*0x6aae13*/
  }
  else if ( (a4 & 0x10A) != 0 || (a4 & 2) != 0 ) /*0x6aae25*/
  {
    v16 = 0x20010; /*0x6aae27*/
  }
  v18 = v16 | 0xA0; /*0x6aae2c*/
  v6 = (*(_BYTE *)(this + 0x2B) & 4) == 0; /*0x6aae31*/
  v46[1] = v18; /*0x6aae38*/
  if ( !v6 ) /*0x6aae3f*/
    v46[1] = v18 | 0x40000; /*0x6aae46*/
  v19 = dword_A78FC8; /*0x6aae4d*/
  v20 = dword_A78FCC; /*0x6aae53*/
  v46[2] = v38.cksize; /*0x6aae58*/
  v46[5] = dword_A78FC4; /*0x6aae65*/
  v21 = dword_A78FD0; /*0x6aae6c*/
  v46[6] = v19; /*0x6aae74*/
  v46[7] = v20; /*0x6aae7b*/
  v46[8] = v21; /*0x6aae82*/
  v46[4] = FormHeapAlloc(0x12u); /*0x6aae92*/
  *(_DWORD *)v46[4] = *(_DWORD *)pch; /*0x6aae99*/
  *(_DWORD *)(v46[4] + 4) = v40; /*0x6aaea6*/
  *(_DWORD *)(v46[4] + 8) = v41; /*0x6aaeb4*/
  *(_DWORD *)(v46[4] + 0xC) = v42; /*0x6aaec2*/
  *(_WORD *)(v46[4] + 0x10) = 0; /*0x6aaecc*/
  v22 = (int *)v37[2]; /*0x6aaf11*/
  v23 = *v22; /*0x6aaf14*/
  v33 = (unsigned __int16)(v46[2] / (*(unsigned __int16 *)(v46[4] + 0xE) >> 3) / (*(_DWORD *)(v46[4] + 4) / 0x3E8u)); /*0x6aaf16*/
  v24 = (*(int (__stdcall **)(int *, _DWORD *, int *, _DWORD))(v23 + 0xC))(v22, v46, v36, 0); /*0x6aaf26*/
  v25 = *v36; /*0x6aaf28*/
  if ( v24 < 0 ) /*0x6aaf2f*/
  {
    if ( (a4 & 2) != 0 && *(_WORD *)&pch[2] > 1u ) /*0x6aaf3f*/
      PrintError("Attempting to play %i channel sound \"%s\" in 3D (must be mono)", *(unsigned __int16 *)&pch[2], v34); /*0x6aaf4f*/
    FormHeapFree(v46[4]); /*0x6aaf5f*/
    mmioClose(v14, 0); /*0x6aaf6a*/
    return 0; /*0x6aaf73*/
  }
  v31 = 0; /*0x6aaf86*/
  v32 = 0; /*0x6aaf8a*/
  if ( (*(int (__stdcall **)(int, _DWORD, DWORD, int *, int *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v25 + 0x2C))( /*0x6aaf9c*/
         v25,
         0,
         cksize,
         &v31,
         &v32,
         0,
         0,
         0) < 0 )
  {
LABEL_43:
    mmioClose(v14, 0); /*0x6ab11a*/
    return 0; /*0x6ab121*/
  }
  v26 = v31; /*0x6aafa2*/
  mmioGetInfo(v14, (LPMMIOINFO)&v44, 0); /*0x6aafac*/
  v27 = 0; /*0x6aafb2*/
  if ( v38.cksize ) /*0x6aafb8*/
  {
    while ( v44.pchNext != v44.pchEndRead || !mmioAdvance(v14, (LPMMIOINFO)&v44, 0) ) /*0x6aafe0*/
    {
      *(_BYTE *)(v27 + v26) = *v44.pchNext++; /*0x6aafef*/
      if ( ++v27 >= v38.cksize ) /*0x6ab001*/
        goto LABEL_39; /*0x6ab001*/
    }
    FormHeapFree(v46[4]); /*0x6ab0f9*/
    (*(void (__stdcall **)(int, int, int, _DWORD, _DWORD))(*(_DWORD *)v25 + 0x4C))(v25, v31, v32, 0, 0); /*0x6ab116*/
    goto LABEL_43; /*0x6ab116*/
  }
LABEL_39:
  (*(void (__stdcall **)(int, int, int, _DWORD, _DWORD))(*(_DWORD *)v25 + 0x4C))(v25, v31, v32, 0, 0); /*0x6ab003*/
  mmioClose(v14, 0); /*0x6ab01d*/
  v28 = v35; /*0x6ab023*/
  if ( v35 ) /*0x6ab029*/
  {
    qmemcpy(v35, v46, 0x24u); /*0x6ab03f*/
    v29 = FormHeapAlloc(0x12u); /*0x6ab041*/
    v30 = v46[4]; /*0x6ab046*/
    v28[4] = v29; /*0x6ab04d*/
    *(_WORD *)(v29 + 0x10) = *(_WORD *)(v30 + 0x10); /*0x6ab054*/
    *(_DWORD *)(v28[4] + 8) = *(_DWORD *)(v46[4] + 8); /*0x6ab065*/
    *(_WORD *)(v28[4] + 0xC) = *(_WORD *)(v46[4] + 0xC); /*0x6ab076*/
    *(_WORD *)(v28[4] + 2) = *(_WORD *)(v46[4] + 2); /*0x6ab088*/
    *(_DWORD *)(v28[4] + 4) = *(_DWORD *)(v46[4] + 4); /*0x6ab099*/
    *(_WORD *)(v28[4] + 0xE) = *(_WORD *)(v46[4] + 0xE); /*0x6ab0aa*/
    *(_WORD *)v28[4] = *(_WORD *)v46[4]; /*0x6ab0be*/
  }
  FormHeapFree(v46[4]); /*0x6ab0c9*/
  return v33; /*0x6ab0d8*/
}
