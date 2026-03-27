char __usercall sub_616840@<al>(double a1@<st1>, double a2@<st0>, void ***a3, int a4, char a5, int a6, signed int *a7)
{
  char result; // al
  signed int v9; // edi
  double v10; // st5
  int v11; // ecx
  int *v12; // eax
  int v13; // eax
  int *v14; // eax
  int v15; // ecx
  CHAR *v16; // eax
  float v17; // [esp+4h] [ebp-F4h]
  CHAR *v18; // [esp+8h] [ebp-F0h]
  int v19; // [esp+Ch] [ebp-ECh]
  int v20; // [esp+20h] [ebp-D8h]
  int v21; // [esp+24h] [ebp-D4h]
  float v22; // [esp+28h] [ebp-D0h]
  char v23[200]; // [esp+2Ch] [ebp-CCh] BYREF

  result = a5;
  v9 = *a7;
  v21 = *a7;
  if ( a5 )
    v20 = 0xA;
  else
    v20 = 0x500 - iDebugTextLeftRightOffset;
  v10 = (double)v20;
  if ( a3 )
  {
    v11 = (int)*a3;
    if ( *a3 )
    {
      if ( a3[1] )
      {
        v12 = *(int **)(4
                      * (*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>, double@<st1>))(*(_DWORD *)v11 + 0x18))(
                          v11,
                          a2,
                          a1)
                      + 0xB037AC);
        if ( v12 )
          v13 = *v12;
        else
          v13 = 0;
        v19 = v13;
        v18 = sub_488DF0((EntryData *)a3[1]);
        _sprintf(v23, "%s Magic: %s (%s)", a4, v18, v19);
      }
      else
      {
        v14 = *(int **)(4
                      * (*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>, double@<st1>))(*(_DWORD *)v11 + 0x18))(
                          v11,
                          a2,
                          a1)
                      + 0xB037AC);
        if ( v14 )
          v15 = *v14;
        else
          v15 = 0;
        v16 = (CHAR *)(*a3)[1];
        if ( !v16 )
          v16 = EmptyString;
        _sprintf(v23, "%s Magic: %s (%s)", a4, v16, v15);
      }
      v17 = (float)v21;
      v22 = v10;
      result = InterfaceMgr_DebugTextLine(a4, v10, a1, v22, v23, v22, v17, 2 * (a5 == 0) + 1, 0xFFFFFFFF);
      v9 += a6;
    }
  }
  *a7 = v9;
  return result;
}
