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

  v11 = (int *)a1[0x1B];
  v17 = 0;
  if ( !v11 )
  {
    sub_45D450(a1, a10);
    v11 = (int *)a1[0x1B];
    v17 = 1;
  }
  v20 = 0;
  while ( v11 )
  {
    if ( !v11[1] && !*v11 )
      break;
    v12 = *v11;
    if ( sub_459570(*v11, &v19, 0, 0) )
      goto LABEL_13;
    v13 = (char *)Savegame_Rename(a1, a2, a3, a4, a5, a6, a7, a8, a9, v12, 0, 2);
    v14 = (int)v13;
    if ( v13 )
    {
      if ( v13[0x24] )
      {
        v15 = sub_45DBC0((int)a1, a2, a3, a4, a5, a6, a7, a8, a9, v13, 0);
        if ( v15 )
        {
          sub_45D5F0(a1, v12, v12, v15, &v19, 0, &v18, 0, (float *)&v22, v23, &v21, 0);
          (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v14 + 0xC))(v14, 0, BSFile_FilePos_Beg);
          BSFile_Flush(v14);
LABEL_13:
          if ( v19 > v20 )
            v20 = v19;
          goto LABEL_15;
        }
      }
    }
    v19 = 0;
    if ( v14 )
      BSFile_Flush(v14);
LABEL_15:
    v11 = (int *)v11[1];
  }
  if ( v17 )
    sub_459400(a1, a10);
  *((_BYTE *)a1 + 0x71) = 0x7D;
  *((_BYTE *)a1 + 0x7C) = 0x7D;
  result = v20 + 1;
  *((_BYTE *)a1 + 0x70) = 0;
  a1[0x22] = result;
  return result;
}
