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

  v6 = *(this + 2) == 0;
  v37 = this;
  v36 = a2;
  v34 = pszFileName;
  v35 = a5;
  if ( v6 )
    return 0;
  _memset(&pmmioinfo, 0, sizeof(pmmioinfo));
  v8 = OBSE_g_FileFinder;
  v6 = OBSE_g_FileFinder == 0;
  pmmioinfo.fccIOProc = 0x564157;
  pmmioinfo.pIOProc = (LPMMIOPROC)sub_6AAAA0;
  if ( !v6 )
  {
    if ( v8->vtbl->FindFile(v8, pszFileName, 0, 0, 0xFFFFFFFF) )
    {
      v13 = mmioOpenA(pszFileName, (LPMMIOINFO)&pmmioinfo, 0x10000);
      goto LABEL_12;
    }
    v8 = OBSE_g_FileFinder;
  }
  v9 = dword_A77130;
  v47[0] = dword_A7712C;
  v47[2] = dword_A77134;
  v47[1] = v9;
  v10 = strlen(pszFileName) + 1;
  v11 = (char *)&v46[8] + 3;
  while ( *++v11 )
    ;
  qmemcpy(v11, pszFileName, v10);
  if ( !v8 || !v8->vtbl->FindFile(v8, (const char *)v47, 0, 0, 0xFFFFFFFF) )
    return 0;
  v13 = mmioOpenA((LPSTR)v47, (LPMMIOINFO)&pmmioinfo, 0x10000);
LABEL_12:
  v14 = v13;
  if ( !v13 )
    return 0;
  v15 = mmioDescend;
  if ( mmioDescend(v13, &pmmcki, 0, 0) == 0x109
    || (v38.ckid = 0x20746D66, v15(v14, &v38, &pmmcki, 0x10u) == 0x109)
    || v38.cksize < 0x10
    || (mmioRead(v14, pch, 0x10), *(_WORD *)pch != 1) )
  {
    mmioClose(v14, 0);
    return 0;
  }
  mmioAscend(v14, &v38, 0);
  v38.ckid = 0x61746164;
  v15(v14, &v38, &pmmcki, 0x10u);
  v16 = 0;
  cksize = v38.cksize;
  memset(&v46[2], 0, 0x1C);
  v46[0] = 0x24;
  if ( (a4 & 1) != 0 )
  {
    v16 = 0x40;
  }
  else if ( (a4 & 4) != 0 && (a4 & 2) != 0 )
  {
    v16 = 0x30010;
  }
  else if ( (a4 & 0x10A) != 0 || (a4 & 2) != 0 )
  {
    v16 = 0x20010;
  }
  v18 = v16 | 0xA0;
  v6 = (*(_BYTE *)(this + 0x2B) & 4) == 0;
  v46[1] = v18;
  if ( !v6 )
    v46[1] = v18 | 0x40000;
  v19 = dword_A78FC8;
  v20 = dword_A78FCC;
  v46[2] = v38.cksize;
  v46[5] = dword_A78FC4;
  v21 = dword_A78FD0;
  v46[6] = v19;
  v46[7] = v20;
  v46[8] = v21;
  v46[4] = FormHeapAlloc(0x12u);
  *(_DWORD *)v46[4] = *(_DWORD *)pch;
  *(_DWORD *)(v46[4] + 4) = v40;
  *(_DWORD *)(v46[4] + 8) = v41;
  *(_DWORD *)(v46[4] + 0xC) = v42;
  *(_WORD *)(v46[4] + 0x10) = 0;
  v22 = (int *)v37[2];
  v23 = *v22;
  v33 = (unsigned __int16)(v46[2] / (*(unsigned __int16 *)(v46[4] + 0xE) >> 3) / (*(_DWORD *)(v46[4] + 4) / 0x3E8u));
  v24 = (*(int (__stdcall **)(int *, _DWORD *, int *, _DWORD))(v23 + 0xC))(v22, v46, v36, 0);
  v25 = *v36;
  if ( v24 < 0 )
  {
    if ( (a4 & 2) != 0 && *(_WORD *)&pch[2] > 1u )
      PrintError("Attempting to play %i channel sound \"%s\" in 3D (must be mono)", *(unsigned __int16 *)&pch[2], v34);
    FormHeapFree(v46[4]);
    mmioClose(v14, 0);
    return 0;
  }
  v31 = 0;
  v32 = 0;
  if ( (*(int (__stdcall **)(int, _DWORD, DWORD, int *, int *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v25 + 0x2C))(
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
    mmioClose(v14, 0);
    return 0;
  }
  v26 = v31;
  mmioGetInfo(v14, (LPMMIOINFO)&v44, 0);
  v27 = 0;
  if ( v38.cksize )
  {
    while ( v44.pchNext != v44.pchEndRead || !mmioAdvance(v14, (LPMMIOINFO)&v44, 0) )
    {
      *(_BYTE *)(v27 + v26) = *v44.pchNext++;
      if ( ++v27 >= v38.cksize )
        goto LABEL_39;
    }
    FormHeapFree(v46[4]);
    (*(void (__stdcall **)(int, int, int, _DWORD, _DWORD))(*(_DWORD *)v25 + 0x4C))(v25, v31, v32, 0, 0);
    goto LABEL_43;
  }
LABEL_39:
  (*(void (__stdcall **)(int, int, int, _DWORD, _DWORD))(*(_DWORD *)v25 + 0x4C))(v25, v31, v32, 0, 0);
  mmioClose(v14, 0);
  v28 = v35;
  if ( v35 )
  {
    qmemcpy(v35, v46, 0x24u);
    v29 = FormHeapAlloc(0x12u);
    v30 = v46[4];
    v28[4] = v29;
    *(_WORD *)(v29 + 0x10) = *(_WORD *)(v30 + 0x10);
    *(_DWORD *)(v28[4] + 8) = *(_DWORD *)(v46[4] + 8);
    *(_WORD *)(v28[4] + 0xC) = *(_WORD *)(v46[4] + 0xC);
    *(_WORD *)(v28[4] + 2) = *(_WORD *)(v46[4] + 2);
    *(_DWORD *)(v28[4] + 4) = *(_DWORD *)(v46[4] + 4);
    *(_WORD *)(v28[4] + 0xE) = *(_WORD *)(v46[4] + 0xE);
    *(_WORD *)v28[4] = *(_WORD *)v46[4];
  }
  FormHeapFree(v46[4]);
  return v33;
}
