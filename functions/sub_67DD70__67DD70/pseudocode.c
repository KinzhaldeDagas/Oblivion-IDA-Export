int __cdecl sub_67DD70(float *a1, TESObjectREFR *a2)
{
  TESObjectCELL *ParentCell; // eax
  _DWORD *v3; // eax
  int result; // eax
  signed int v5; // ebp
  signed int v6; // ebx
  TESForm *CellFromCoords; // eax
  _DWORD *v8; // eax
  unsigned int v9; // edi
  unsigned int v10; // esi
  TESForm *v11; // eax
  _DWORD *v12; // eax
  int v13; // [esp+8h] [ebp-Ch]

  v13 = 0;
  if ( !a2 )
    return 0;
  if ( sub_4D8B90(a2) )
  {
    ParentCell = TESObjectREFR_GetParentCell(a2);
    v3 = (_DWORD *)sub_4AF170(ParentCell);
    if ( v3 )
      return sub_4E5A10(v3);
    return 0;
  }
  if ( !sub_43F840(TES, a1) )
    return 0;
  v5 = (int)a1[1] >> 0xC;
  v6 = (int)*a1 >> 0xC;
  CellFromCoords = TES_GetCellFromCoords(TES, v6, v5);
  if ( !CellFromCoords
    || (v8 = (_DWORD *)sub_4AF170(CellFromCoords)) == 0
    || (result = sub_4E5A10(v8), (v13 = result) == 0) )
  {
    v9 = 0xFFFFFFFF;
LABEL_10:
    v10 = 0xFFFFFFFF;
    while ( 1 )
    {
      if ( v9 || v10 )
      {
        v11 = TES_GetCellFromCoords(TES, v9 + v6, v10 + v5);
        if ( v11 )
        {
          v12 = (_DWORD *)sub_4AF170(v11);
          if ( v12 )
            v13 = sub_4E5A10(v12);
        }
      }
      result = v13;
      if ( v13 )
        break;
      if ( (int)++v10 >= 2 )
      {
        if ( (int)++v9 < 2 )
          goto LABEL_10;
        return result;
      }
    }
  }
  return result;
}
