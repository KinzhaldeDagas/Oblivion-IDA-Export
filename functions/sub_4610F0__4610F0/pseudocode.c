NiSourceTexture *__userpurge sub_4610F0@<eax>(
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
  int v20; // edi
  char *v22; // ebp
  unsigned int v23; // eax
  NiSourceTexture *v25; // ebx
  const char *v26; // edx
  int v27; // [esp+10h] [ebp-1Ch]
  __int64 v28; // [esp+14h] [ebp-18h] BYREF
  int v29; // [esp+1Ch] [ebp-10h] BYREF
  unsigned __int16 v30; // [esp+22h] [ebp-Ah]
  unsigned __int16 v31; // [esp+24h] [ebp-8h]
  unsigned __int16 v32; // [esp+26h] [ebp-6h]

  v19 = a19;
  v20 = (int)a10;
  if ( a19 )
  {
    v27 = (int)a10;
    v22 = a10;
  }
  else
  {
    v22 = (char *)Savegame_Rename(a1, a9, a6, a7, a8, a5, a2, a3, a4, (int)a10, 0, 2);
    v27 = (int)v22;
  }
  if ( v22 && v22[0x24] && (v23 = sub_45DBC0((int)a1, a9, a6, a7, a8, a5, a2, a3, a4, v22, 0)) != 0 )
  {
    __asm { fldz }
    __asm { fstp    dword ptr [esp+30h+var_18] }
    a10 = 0;
    v25 = sub_45D5F0(a1, (char)v22, v20, v23, a11, Dst, &a10, (_BYTE *)a14, (float *)&v28, &v29, &a14, a18);
    if ( a13 )
      _sprintf(a13, "%s %i", (const char *)dword_B38720, (unsigned __int16)a10);
    if ( a15 )
    {
      __asm { fld     dword ptr [esp+2Ch+var_18] }
      v26 = (const char *)dword_B38730;
      __asm { fnstcw  word ptr [esp+2Ch+arg_0] }
      a18 = (_DWORD *)((unsigned __int16)a10 | 0xC00);
      __asm
      {
        fldcw   word ptr [esp+2Ch+arg_20]
        fistp   [esp+2Ch+var_18]
      }
      __asm { fldcw   word ptr [esp+38h+arg_0] }
      _sprintf(a15, "%s %i", v26, (_DWORD)v28);
    }
    if ( a17 )
      _sprintf(a17, "%02i:%02i:%02i", a14 / 0x36EE80, a14 % 0x36EE80 / 0xEA60, a14 % 0x36EE80 % 0xEA60 / 0x3E8);
    if ( a16 )
      _sprintf(a16, "%d/%d/%02d %02d:%02d", HIWORD(v29), v30, (unsigned __int16)v29, v31, v32);
    (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v27 + 0xC))(v27, 0, BSFile_FilePos_Beg);
    if ( !a19 )
      BSFile_Flush(v27);
    return v25;
  }
  else
  {
    if ( a11 )
      *a11 = 0;
    if ( Dst )
      *Dst = 0;
    if ( a13 )
      *a13 = 0;
    if ( a14 )
      *(_BYTE *)a14 = 0;
    if ( a15 )
      *a15 = 0;
    if ( a16 )
      *a16 = 0;
    if ( a17 )
      *a17 = 0;
    if ( a18 )
      *a18 = 0;
    if ( !v19 )
    {
      if ( v22 )
        BSFile_Flush((int)v22);
    }
    return 0;
  }
}
