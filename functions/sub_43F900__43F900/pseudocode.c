int __thiscall sub_43F900(_DWORD **this)
{
  int result; // eax
  unsigned int v3; // ebx
  unsigned int v4; // ecx
  GridEntry *v5; // eax
  unsigned int v6; // edi
  unsigned int v7; // ebx
  int v8; // esi
  GridEntry *GridEntry; // eax
  int v10; // esi
  int v11; // [esp+8h] [ebp-Ch]
  unsigned int v12; // [esp+Ch] [ebp-8h]
  unsigned int v13; // [esp+10h] [ebp-4h]

  result = 0;
  v3 = (unsigned int)uGridsToLoad >> 1;
  v4 = 0;
  v11 = 0;
  v12 = v3;
  v13 = 0;
  if ( v3 )
  {
    while ( v4 )
    {
      v6 = v4 + v3;
      v7 = v3 - v4;
      v8 = v7;
      if ( v7 <= v6 )
      {
        while ( 1 )
        {
          GridEntry = GetGridEntry((GridCellArray *)*(this + 2), v8, v6);
          if ( GridEntry )
          {
            if ( GridEntry->cell && (GridEntry->cell->members.flags0 & 2) != 0 )
              break;
          }
          GridEntry = GetGridEntry((GridCellArray *)*(this + 2), v8, v7);
          if ( GridEntry )
          {
            if ( GridEntry->cell && (GridEntry->cell->members.flags0 & 2) != 0 )
              break;
          }
          if ( ++v8 > v6 )
            goto LABEL_17;
        }
        v11 = (int)GridEntry;
      }
LABEL_17:
      result = v11;
      if ( v11 )
        return result;
      v10 = v7 + 1;
      if ( v7 + 1 < v6 )
      {
        while ( 1 )
        {
          v5 = GetGridEntry((GridCellArray *)*(this + 2), v7, v10);
          if ( v5 )
          {
            if ( v5->cell && (v5->cell->members.flags0 & 2) != 0 )
              break;
          }
          v5 = GetGridEntry((GridCellArray *)*(this + 2), v6, v10);
          if ( v5 )
          {
            if ( v5->cell && (v5->cell->members.flags0 & 2) != 0 )
              break;
          }
          if ( ++v10 >= v6 )
            goto LABEL_26;
        }
        v3 = v12;
LABEL_31:
        v11 = (int)v5;
LABEL_32:
        result = v11;
        if ( v11 )
          return result;
        goto LABEL_27;
      }
LABEL_26:
      v3 = v12;
LABEL_27:
      v4 = ++v13;
      if ( v13 >= v3 )
        return 0;
    }
    v5 = GetGridEntry((GridCellArray *)*(this + 2), v3, v3);
    if ( v5 && v5->cell && (v5->cell->members.flags0 & 2) != 0 )
      goto LABEL_31;
    goto LABEL_32;
  }
  return result;
}
