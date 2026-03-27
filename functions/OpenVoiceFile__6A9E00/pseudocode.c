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

  v22 = a2;
  strcpy(Str, a3);
  CanOpenFileWithMode_Indirect = NiFile_CanOpenFileWithMode_Indirect(Str, 0);
  v6 = strstr(Str, ".wav");
  if ( v6 )
  {
    v6[1] = 0x6D;
    v6[2] = 0x70;
    v6[3] = 0x33;
  }
  if ( !(unsigned __int8)NiFile_CanOpenFileWithMode_Indirect(Str, 0) )
  {
    if ( !CanOpenFileWithMode_Indirect )
      PrintError("MP3 file '%s' not found", Str);
    return 0;
  }
  v7 = (_DWORD *)FormHeapAlloc(0x1Cu);
  v39 = 0;
  if ( v7 )
    v8 = sub_6B45C0(v7, Str);
  else
    v8 = 0;
  v9 = *((_BYTE *)v8 + 0x18) == 0;
  v39 = 0xFFFFFFFF;
  if ( v9 || !*v8 )
  {
    PrintError("MP3 file '%s' is not compatible with current decoder.", a3);
    sub_6B31D0(v8);
    FormHeapFree((unsigned int)v8);
    return 0;
  }
  v10 = (int *)FormHeapAlloc(0x413Cu);
  v39 = 1;
  if ( v10 )
    v11 = (unsigned int **)sub_6B1D40(v10, (int)v8);
  else
    v11 = 0;
  v30 = 0;
  v31 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v32 = 0;
  v29 = 0x24;
  v28 = 0;
  v12 = *(_DWORD *)(v8[1] + 8);
  v25 = 2 * v12;
  v23[1] = 1;
  v23[0] = 1;
  v24 = v12;
  v27 = 0x10;
  v26 = 2;
  v39 = 0xFFFFFFFF;
  v30 = ((a4 & 2) != 0 ? 0x20010 : 0) | 0xA0;
  v13 = 9 * **v11;
  v34 = dword_A78FC4;
  v35 = dword_A78FC8;
  v36 = dword_A78FCC;
  v37 = dword_A78FD0;
  v33 = v23;
  v31 = v13 << 8;
  v19 = ((unsigned int)(v13 << 8) >> 1) / (v12 / 0x3E8);
  if ( !*(this + 2) )
  {
LABEL_17:
    sub_6B31D0(v8);
    FormHeapFree((unsigned int)v8);
    sub_6B3500(v11);
    FormHeapFree((unsigned int)v11);
    return 0;
  }
  if ( (*(int (__stdcall **)(_DWORD, int *, int *, _DWORD))(*(_DWORD *)*(this + 2) + 0xC))(*(this + 2), &v29, v22, 0) < 0 )
  {
    PrintError("CreateSoundBuffer failed while playing voice %s", a3);
    goto LABEL_17;
  }
  v14 = *v22;
  v20 = 0;
  v21 = 0;
  if ( (*(int (__stdcall **)(int, _DWORD, _DWORD, char **, int *, _DWORD, _DWORD, int))(*(_DWORD *)v14 + 0x2C))(
         v14,
         0,
         0,
         &v20,
         &v21,
         0,
         0,
         2) < 0 )
    goto LABEL_17;
  v18 = v20;
  for ( i = (const void *)sub_6B3AE0(v11); i; i = (const void *)sub_6B3AE0(v11) )
  {
    v16 = v18;
    v18 += 0x900;
    qmemcpy(v16, i, 0x900u);
  }
  (*(void (__stdcall **)(int, char *, int, _DWORD, _DWORD))(*(_DWORD *)v14 + 0x4C))(v14, v20, v21, 0, 0);
  sub_6B31D0(v8);
  FormHeapFree((unsigned int)v8);
  sub_6B3500(v11);
  FormHeapFree((unsigned int)v11);
  return v19;
}
