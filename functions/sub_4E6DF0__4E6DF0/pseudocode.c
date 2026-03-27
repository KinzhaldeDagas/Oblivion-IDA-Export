char *__cdecl sub_4E6DF0(float *a1, TESWorldSpace *CurrentWorldspace, _DWORD *a3, _DWORD *a4)
{
  int v4; // eax
  signed int v5; // ebp
  int v6; // ebx
  signed int v7; // edi
  _DWORD *CellAtCellCoord; // eax
  _DWORD *v9; // eax
  _DWORD *v10; // esi
  int v12; // [esp+4h] [ebp-14h]
  int v13; // [esp+8h] [ebp-10h]
  signed int v14; // [esp+Ch] [ebp-Ch]
  signed int v15; // [esp+Ch] [ebp-Ch]
  int v16; // [esp+10h] [ebp-8h]
  int v17; // [esp+10h] [ebp-8h]
  char *v18; // [esp+14h] [ebp-4h]

  v18 = 0;
  *a3 = 0;
  if ( !CurrentWorldspace )
    CurrentWorldspace = TES::GetCurrentWorldspace(TES);
  v14 = (int)*a1;
  v16 = (int)a1[1];
  v13 = v14 % 0x1000 == 0;
  v12 = v16 % 0x1000 == 0;
  v4 = v14 >> 0xC;
  v15 = v16 >> 0xC;
  v17 = 0;
  v5 = v4;
  do
  {
    v6 = 0;
    v7 = v15;
    while ( 1 )
    {
      CellAtCellCoord = (_DWORD *)TESWorldSpace::GetCellAtCellCoord(CurrentWorldspace, v5, v7);
      if ( CellAtCellCoord )
      {
        v9 = (_DWORD *)sub_4AF170(CellAtCellCoord);
        v10 = v9;
        if ( v9 )
        {
          if ( v9 != a4 )
          {
            v18 = sub_4E6D60(v9, a1);
            if ( v18 )
              break;
          }
        }
      }
      ++v6;
      --v7;
      if ( v6 > v12 )
        goto LABEL_12;
    }
    *a3 = v10;
LABEL_12:
    if ( v18 )
      break;
    --v5;
    ++v17;
  }
  while ( v17 <= v13 );
  return v18;
}
