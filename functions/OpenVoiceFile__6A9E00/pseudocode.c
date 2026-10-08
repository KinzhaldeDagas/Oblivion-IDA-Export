__int16 __thiscall OpenVoiceFile(_DWORD *this, int *a2, const char *a3, char a4)
{
  char CanOpenFileWithMode_Indirect; // bl
  char *v6; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // ebx
  bool v9; // zf
  int *v10; // eax
  unsigned int **v11; // ebp
  unsigned int v12; // edx
  int v13; // ecx
  int v14; // esi
  const void *i; // eax
  void *v16; // edi
  char *v18; // [esp+3Ch] [ebp-164h]
  __int16 v19; // [esp+44h] [ebp-15Ch]
  char *v20; // [esp+48h] [ebp-158h] BYREF
  int v21; // [esp+4Ch] [ebp-154h] BYREF
  int *v22; // [esp+50h] [ebp-150h]
  _WORD v23[2]; // [esp+54h] [ebp-14Ch] BYREF
  unsigned int v24; // [esp+58h] [ebp-148h]
  int v25; // [esp+5Ch] [ebp-144h]
  __int16 v26; // [esp+60h] [ebp-140h]
  __int16 v27; // [esp+62h] [ebp-13Eh]
  __int16 v28; // [esp+64h] [ebp-13Ch]
  int v29; // [esp+68h] [ebp-138h] BYREF
  int v30; // [esp+6Ch] [ebp-134h]
  int v31; // [esp+70h] [ebp-130h]
  int v32; // [esp+74h] [ebp-12Ch]
  _WORD *v33; // [esp+78h] [ebp-128h]
  int v34; // [esp+7Ch] [ebp-124h]
  int v35; // [esp+80h] [ebp-120h]
  int v36; // [esp+84h] [ebp-11Ch]
  int v37; // [esp+88h] [ebp-118h]
  char Str[260]; // [esp+8Ch] [ebp-114h] BYREF
  int v39; // [esp+19Ch] [ebp-4h]

  v22 = a2; /*0x6a9e4d*/
  strcpy(Str, a3); /*0x6a9e57*/
  CanOpenFileWithMode_Indirect = NiFile_CanOpenFileWithMode_Indirect((int)Str, 0); /*0x6a9e83*/
  v6 = strstr(Str, ".wav"); /*0x6a9e85*/
  if ( v6 ) /*0x6a9e8f*/
  {
    v6[1] = 0x6D; /*0x6a9e91*/
    v6[2] = 0x70; /*0x6a9e95*/
    v6[3] = 0x33; /*0x6a9e99*/
  }
  if ( !NiFile_CanOpenFileWithMode_Indirect((int)Str, 0) ) /*0x6a9ea3*/
  {
    if ( !CanOpenFileWithMode_Indirect ) /*0x6a9eb1*/
      PrintError("MP3 file '%s' not found", Str); /*0x6a9ec1*/
    return 0; /*0x6a9ec9*/
  }
  v7 = (_DWORD *)FormHeapAlloc(0x1Cu); /*0x6a9ed0*/
  v39 = 0; /*0x6a9ede*/
  if ( v7 ) /*0x6a9ee5*/
    v8 = sub_6B45C0(v7, Str); /*0x6a9ef3*/
  else
    v8 = 0; /*0x6a9ef7*/
  v9 = *((_BYTE *)v8 + 0x18) == 0; /*0x6a9ef9*/
  v39 = 0xFFFFFFFF; /*0x6a9efd*/
  if ( v9 || !*v8 ) /*0x6a9f0e*/
  {
    PrintError("MP3 file '%s' is not compatible with current decoder.", a3); /*0x6aa11c*/
    sub_6B31D0(v8); /*0x6aa126*/
    FormHeapFree((unsigned int)v8); /*0x6aa12c*/
    return 0; /*0x6aa12c*/
  }
  v10 = (int *)FormHeapAlloc(0x413Cu); /*0x6a9f1b*/
  v39 = 1; /*0x6a9f2e*/
  if ( v10 ) /*0x6a9f35*/
    v11 = (unsigned int **)sub_6B1D40(v10, (int)v8); /*0x6a9f3f*/
  else
    v11 = 0; /*0x6a9f48*/
  v30 = 0; /*0x6a9f50*/
  v31 = 0; /*0x6a9f54*/
  v33 = 0; /*0x6a9f58*/
  v34 = 0; /*0x6a9f5c*/
  v35 = 0; /*0x6a9f60*/
  v36 = 0; /*0x6a9f64*/
  v37 = 0; /*0x6a9f68*/
  v32 = 0; /*0x6a9f6c*/
  v29 = 0x24; /*0x6a9f70*/
  v28 = 0; /*0x6a9f78*/
  v12 = *(_DWORD *)(v8[1] + 8); /*0x6a9f80*/
  v25 = 2 * v12; /*0x6a9f86*/
  v23[1] = 1; /*0x6a9f95*/
  v23[0] = 1; /*0x6a9f9a*/
  v24 = v12; /*0x6a9f9f*/
  v27 = 0x10; /*0x6a9fa3*/
  v26 = 2; /*0x6a9faa*/
  v39 = 0xFFFFFFFF; /*0x6a9fb1*/
  v30 = ((a4 & 2) != 0 ? 0x20010 : 0) | 0xA0;
  v13 = 9 * **v11; /*0x6a9fd1*/
  v34 = dword_A78FC4; /*0x6a9fd9*/
  v35 = dword_A78FC8; /*0x6a9fe2*/
  v36 = dword_A78FCC; /*0x6a9feb*/
  v37 = dword_A78FD0; /*0x6a9ff4*/
  v33 = v23; /*0x6a9ffc*/
  v31 = v13 << 8; /*0x6aa00f*/
  v19 = ((unsigned int)(v13 << 8) >> 1) / (v12 / 0x3E8); /*0x6aa029*/
  if ( !*(this + 2) ) /*0x6aa02d*/
  {
LABEL_17:
    sub_6B31D0(v8); /*0x6aa05b*/
    FormHeapFree((unsigned int)v8); /*0x6aa063*/
    sub_6B3500(v11); /*0x6aa06d*/
    FormHeapFree((unsigned int)v11); /*0x6aa073*/
    return 0; /*0x6aa134*/
  }
  if ( (*(int (__stdcall **)(_DWORD, int *, int *, _DWORD))(*(_DWORD *)*(this + 2) + 0xC))(*(this + 2), &v29, v22, 0) < 0 ) /*0x6aa047*/
  {
    PrintError("CreateSoundBuffer failed while playing voice %s", a3); /*0x6aa053*/
    goto LABEL_17; /*0x6aa053*/
  }
  v14 = *v22; /*0x6aa078*/
  v20 = 0; /*0x6aa089*/
  v21 = 0; /*0x6aa08d*/
  if ( (*(int (__stdcall **)(int, _DWORD, _DWORD, char **, int *, _DWORD, _DWORD, int))(*(_DWORD *)v14 + 0x2C))( /*0x6aa0a0*/
         v14,
         0,
         0,
         &v20,
         &v21,
         0,
         0,
         2) < 0 )
    goto LABEL_17; /*0x6aa0a0*/
  v18 = v20; /*0x6aa0a8*/
  for ( i = (const void *)sub_6B3AE0(v11); i; i = (const void *)sub_6B3AE0(v11) ) /*0x6aa0b3*/
  {
    v16 = v18; /*0x6aa0b5*/
    v18 += 0x900; /*0x6aa0b9*/
    qmemcpy(v16, i, 0x900u); /*0x6aa0c8*/
  }
  (*(void (__stdcall **)(int, char *, int, _DWORD, _DWORD))(*(_DWORD *)v14 + 0x4C))(v14, v20, v21, 0, 0); /*0x6aa0ed*/
  sub_6B31D0(v8); /*0x6aa0f1*/
  FormHeapFree((unsigned int)v8); /*0x6aa0f7*/
  sub_6B3500(v11); /*0x6aa101*/
  FormHeapFree((unsigned int)v11); /*0x6aa107*/
  return v19; /*0x6aa137*/
}
