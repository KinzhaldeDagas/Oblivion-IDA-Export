unsigned int __usercall sub_464320@<eax>(
        _DWORD *a1@<ecx>,
        double a2@<st0>,
        double a3@<st3>,
        double a4@<st2>,
        double a5@<st1>,
        double a6@<st4>,
        double a7@<st7>,
        double a8@<st6>,
        double a9@<st5>,
        int a10@<edx>)
{
  int *v11; // ebx
  int v12; // ebp
  char *v13; // eax
  int v14; // esi
  unsigned int v15; // eax
  unsigned int result; // eax
  char v17; // [esp+Bh] [ebp-25h]
  int v18; // [esp+Ch] [ebp-24h] BYREF
  int v19; // [esp+10h] [ebp-20h] BYREF
  unsigned int v20; // [esp+14h] [ebp-1Ch]
  int v21; // [esp+18h] [ebp-18h] BYREF
  int v22; // [esp+1Ch] [ebp-14h] BYREF
  int v23[4]; // [esp+20h] [ebp-10h] BYREF

  v11 = (int *)a1[0x1B]; /*0x464327*/
  v17 = 0; /*0x46432c*/
  if ( !v11 ) /*0x464331*/
  {
    TESSaveLoadGame_EnumerateSaveFiles(a1, a10); /*0x464333*/
    v11 = (int *)a1[0x1B]; /*0x464338*/
    v17 = 1; /*0x46433b*/
  }
  v20 = 0; /*0x464342*/
  while ( v11 ) /*0x46434a*/
  {
    if ( !v11[1] && !*v11 ) /*0x46435b*/
      break; /*0x46435b*/
    v12 = *v11; /*0x464361*/
    if ( sub_459570(*v11, &v19, 0, 0) ) /*0x46436f*/
      goto LABEL_13; /*0x464376*/
    v13 = (char *)TESSaveLoadGame_ResolveSaveFile(a1, a2, a3, a4, a5, a6, a7, a8, a9, v12, 0, 2); /*0x46437f*/
    v14 = (int)v13; /*0x464384*/
    if ( v13 ) /*0x464388*/
    {
      if ( v13[0x24] ) /*0x46438a*/
      {
        v15 = TESSaveLoadGame_OpenAndValidateSave((int)a1, a2, a3, a4, a5, a6, a7, a8, a9, v13, 0); /*0x464395*/
        if ( v15 ) /*0x46439c*/
        {
          TESSaveLoadGame_ReadSaveHeader(a1, v12, v12, v15, &v19, 0, &v18, 0, (float *)&v22, v23, &v21, 0); /*0x4643d6*/
          (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v14 + 0xC))(v14, 0, BSFile_FilePos_Beg); /*0x4643ea*/
          BSFile_Flush(v14); /*0x4643ee*/
LABEL_13:
          if ( v19 > v20 ) /*0x4643fb*/
            v20 = v19; /*0x4643fd*/
          goto LABEL_15; /*0x4643fd*/
        }
      }
    }
    v19 = 0; /*0x4643a0*/
    if ( v14 ) /*0x4643a8*/
      BSFile_Flush(v14); /*0x4643ac*/
LABEL_15:
    v11 = (int *)v11[1]; /*0x464401*/
  }
  if ( v17 ) /*0x464413*/
    sub_459400(a1, a10); /*0x464417*/
  *((_BYTE *)a1 + 0x71) = 0x7D; /*0x46441e*/
  *((_BYTE *)a1 + 0x7C) = 0x7D; /*0x464421*/
  result = v20 + 1; /*0x464428*/
  *((_BYTE *)a1 + 0x70) = 0; /*0x46442b*/
  a1[0x22] = result; /*0x46442f*/
  return result; /*0x464435*/
}
