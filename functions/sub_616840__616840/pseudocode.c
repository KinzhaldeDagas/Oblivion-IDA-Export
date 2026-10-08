char __usercall sub_616840@<al>(double a1@<st1>, double a2@<st0>, void ***a3, int a4, char a5, int a6, signed int *a7)
{
  char result; // al
  signed int v8; // edi
  int v9; // ecx
  int *v10; // eax
  int v11; // eax
  int *v12; // eax
  int v13; // ecx
  CHAR *v14; // eax
  float v15; // [esp+4h] [ebp-F4h]
  CHAR *v16; // [esp+8h] [ebp-F0h]
  int v17; // [esp+Ch] [ebp-ECh]
  int v18; // [esp+20h] [ebp-D8h]
  int v19; // [esp+24h] [ebp-D4h]
  float v20; // [esp+28h] [ebp-D0h]
  char v21[200]; // [esp+2Ch] [ebp-CCh] BYREF

  result = a5; /*0x616854*/
  v8 = *a7; /*0x616876*/
  v19 = *a7; /*0x616878*/
  if ( a5 ) /*0x61687c*/
    v18 = 0xA; /*0x61687e*/
  else
    v18 = 0x500 - iDebugTextLeftRightOffset; /*0x616893*/
  if ( a3 )
  {
    v9 = (int)*a3; /*0x6168b6*/
    if ( *a3 )
    {
      if ( a3[1] )
      {
        v10 = *(int **)(4 /*0x6168cd*/
                      * (*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>, double@<st1>))(*(_DWORD *)v9 + 0x18))(
                          v9,
                          a2,
                          a1)
                      + 0xB037AC);
        if ( v10 ) /*0x6168d6*/
          v11 = *v10; /*0x6168d8*/
        else
          v11 = 0; /*0x6168dc*/
        v17 = v11; /*0x6168e1*/
        v16 = sub_488DF0((EntryData *)a3[1]); /*0x6168e7*/
        _sprintf(v21, "%s Magic: %s (%s)", a4, v16, v17);
      }
      else
      {
        v12 = *(int **)(4 /*0x6168fc*/
                      * (*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>, double@<st1>))(*(_DWORD *)v9 + 0x18))(
                          v9,
                          a2,
                          a1)
                      + 0xB037AC);
        if ( v12 ) /*0x616905*/
          v13 = *v12; /*0x616907*/
        else
          v13 = 0; /*0x61690b*/
        v14 = (CHAR *)(*a3)[1]; /*0x61690f*/
        if ( !v14 ) /*0x616914*/
          v14 = EmptyString; /*0x616916*/
        _sprintf(v21, "%s Magic: %s (%s)", a4, v14, v13);
      }
      v15 = (float)v19; /*0x61693e*/
      v20 = (float)v18; /*0x6168a4*/
      result = InterfaceMgr_DebugTextLine(v21, v20, v15, 2 * (a5 == 0) + 1, 0xFFFFFFFF); /*0x61694e*/
      v8 += a6; /*0x616956*/
    }
  }
  *a7 = v8; /*0x616964*/
  return result; /*0x61695d*/
}
