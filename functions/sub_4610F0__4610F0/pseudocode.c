// Builds embedded ESS screenshot NiSourceTexture and formatted name/level/location/days/date. Optional playtime output is HH:MM:SS.
NiSourceTexture *__userpurge TESSaveLoadGame_BuildSavePreview@<eax>(
        _DWORD *a1@<ecx>,
        double a2@<st7>,
        double a3@<st6>,
        double a4@<st5>,
        double a5@<st4>,
        double a6@<st3>,
        double a7@<st2>,
        double a8@<st1>,
        double a9@<st0>,
        char *a10,
        _DWORD *a11,
        _BYTE *Dst,
        char *a13,
        unsigned int a14,
        char *a15,
        char *a16,
        char *a17,
        _DWORD *a18,
        char a19)
{
  char v19; // bl
  char *v20; // edi
  char *v22; // ebp
  unsigned int v23; // eax
  NiSourceTexture *v25; // ebx
  const char *v26; // edx
  char *v27; // [esp+10h] [ebp-1Ch]
  __int64 v28; // [esp+14h] [ebp-18h] BYREF
  int v29; // [esp+1Ch] [ebp-10h] BYREF
  unsigned __int16 v30; // [esp+22h] [ebp-Ah]
  unsigned __int16 v31; // [esp+24h] [ebp-8h]
  unsigned __int16 v32; // [esp+26h] [ebp-6h]

  v19 = a19; /*0x4610f4*/
  v20 = a10; /*0x4610fd*/
  if ( a19 ) /*0x461103*/
  {
    v27 = a10; /*0x461117*/
    v22 = a10; /*0x46111b*/
  }
  else
  {
    v22 = (char *)TESSaveLoadGame_ResolveSaveFile(a1, a9, a6, a7, a8, a5, a2, a3, a4, (int)a10, 0, 2); /*0x46110f*/
    v27 = v22; /*0x461111*/
  }
  if ( v22 /*0x461133*/
    && v22[0x24]
    && (v23 = TESSaveLoadGame_OpenAndValidateSave((int)a1, a9, a6, a7, a8, a5, a2, a3, a4, v22, 0)) != 0 )
  {
    __asm { fldz } /*0x4611b2*/
    __asm { fstp    dword ptr [esp+30h+var_18] }
    a10 = 0; /*0x4611e0*/
    v25 = TESSaveLoadGame_ReadSaveHeader( /*0x4611ed*/
            a1,
            (char)v22,
            (int)v20,
            v23,
            a11,
            Dst,
            &a10,
            (_BYTE *)a14,
            (float *)&v28,
            &v29,
            &a14,
            a18);
    if ( a13 ) /*0x4611f5*/
      _sprintf(a13, "%s %i", (const char *)stru_B38720, (unsigned __int16)a10); /*0x46120a*/
    if ( a15 ) /*0x461218*/
    {
      __asm { fld     dword ptr [esp+2Ch+var_18] } /*0x46121a*/
      v26 = (const char *)stru_B38730; /*0x46121e*/
      __asm { fnstcw  word ptr [esp+2Ch+arg_0] } /*0x461224*/
      a18 = (_DWORD *)((unsigned __int16)a10 | 0xC00); /*0x461232*/
      __asm /*0x461236*/
      {
        fldcw   word ptr [esp+2Ch+arg_20]
        fistp   [esp+2Ch+var_18]
      }
      __asm { fldcw   word ptr [esp+38h+arg_0] }
      _sprintf(a15, "%s %i", v26, (_DWORD)v28); /*0x46124e*/
    }
    if ( a17 ) /*0x46125c*/
      _sprintf(a17, "%02i:%02i:%02i", a14 / 0x36EE80, a14 % 0x36EE80 / 0xEA60, a14 % 0x36EE80 % 0xEA60 / 0x3E8); /*0x4612a1*/
    if ( a16 ) /*0x4612af*/
      _sprintf(a16, "%d/%d/%02d %02d:%02d", HIWORD(v29), v30, (unsigned __int16)v29, v31, v32); /*0x4612d5*/
    (*(void (__thiscall **)(char *, _DWORD, int))(*(_DWORD *)v27 + 0xC))(v27, 0, BSFile_FilePos_Beg); /*0x4612f0*/
    if ( !a19 ) /*0x4612f7*/
      BSFile_Flush((int)v27); /*0x4612fb*/
    return v25; /*0x461303*/
  }
  else
  {
    if ( a11 ) /*0x46113b*/
      *a11 = 0; /*0x46113d*/
    if ( Dst ) /*0x461149*/
      *Dst = 0; /*0x46114b*/
    if ( a13 ) /*0x461154*/
      *a13 = 0; /*0x461156*/
    if ( a14 ) /*0x46115f*/
      *(_BYTE *)a14 = 0; /*0x461161*/
    if ( a15 ) /*0x46116a*/
      *a15 = 0; /*0x46116c*/
    if ( a16 ) /*0x461175*/
      *a16 = 0; /*0x461177*/
    if ( a17 ) /*0x461180*/
      *a17 = 0; /*0x461182*/
    if ( a18 ) /*0x46118b*/
      *a18 = 0; /*0x46118d*/
    if ( !v19 ) /*0x461195*/
    {
      if ( v22 ) /*0x461199*/
        BSFile_Flush((int)v22); /*0x46119d*/
    }
    return 0; /*0x4611a5*/
  }
}
