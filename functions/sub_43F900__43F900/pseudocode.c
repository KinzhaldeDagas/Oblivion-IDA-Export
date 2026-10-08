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

  result = 0; /*0x43f90a*/
  v3 = (unsigned int)uGridsToLoad >> 1; /*0x43f90f*/
  v4 = 0; /*0x43f911*/
  v11 = 0; /*0x43f913*/
  v12 = v3; /*0x43f917*/
  v13 = 0; /*0x43f91b*/
  if ( v3 ) /*0x43f91f*/
  {
    while ( v4 ) /*0x43f929*/
    {
      v6 = v4 + v3; /*0x43f95b*/
      v7 = v3 - v4; /*0x43f95e*/
      v8 = v7; /*0x43f962*/
      if ( v7 <= v6 ) /*0x43f964*/
      {
        while ( 1 ) /*0x43f96b*/
        {
          GridEntry = GetGridEntry((GridCellArray *)*(this + 2), v8, v6); /*0x43f96b*/
          if ( GridEntry ) /*0x43f972*/
          {
            if ( GridEntry->cell && (GridEntry->cell->members.flags0 & 2) != 0 ) /*0x43f983*/
              break; /*0x43f983*/
          }
          GridEntry = GetGridEntry((GridCellArray *)*(this + 2), v8, v7); /*0x43f98a*/
          if ( GridEntry ) /*0x43f991*/
          {
            if ( GridEntry->cell && (GridEntry->cell->members.flags0 & 2) != 0 ) /*0x43f9a2*/
              break; /*0x43f9a2*/
          }
          if ( ++v8 > v6 ) /*0x43f9a9*/
            goto LABEL_17; /*0x43f9a9*/
        }
        v11 = (int)GridEntry; /*0x43f9ad*/
      }
LABEL_17:
      result = v11; /*0x43f9b1*/
      if ( v11 ) /*0x43f9b7*/
        return result; /*0x43f9b7*/
      v10 = v7 + 1; /*0x43f9b9*/
      if ( v7 + 1 < v6 ) /*0x43f9be*/
      {
        while ( 1 ) /*0x43f9c5*/
        {
          v5 = GetGridEntry((GridCellArray *)*(this + 2), v7, v10); /*0x43f9c5*/
          if ( v5 ) /*0x43f9cc*/
          {
            if ( v5->cell && (v5->cell->members.flags0 & 2) != 0 ) /*0x43f9dd*/
              break; /*0x43f9dd*/
          }
          v5 = GetGridEntry((GridCellArray *)*(this + 2), v6, v10); /*0x43f9e4*/
          if ( v5 ) /*0x43f9eb*/
          {
            if ( v5->cell && (v5->cell->members.flags0 & 2) != 0 ) /*0x43f9fc*/
              break; /*0x43f9fc*/
          }
          if ( ++v10 >= v6 ) /*0x43fa03*/
            goto LABEL_26; /*0x43fa03*/
        }
        v3 = v12; /*0x43fa28*/
LABEL_31:
        v11 = (int)v5; /*0x43fa2c*/
LABEL_32:
        result = v11; /*0x43fa30*/
        if ( v11 ) /*0x43fa36*/
          return result; /*0x43fa36*/
        goto LABEL_27; /*0x43fa36*/
      }
LABEL_26:
      v3 = v12; /*0x43fa05*/
LABEL_27:
      v4 = ++v13; /*0x43fa09*/
      if ( v13 >= v3 ) /*0x43fa16*/
        return 0; /*0x43fa1c*/
    }
    v5 = GetGridEntry((GridCellArray *)*(this + 2), v3, v3); /*0x43f930*/
    if ( v5 && v5->cell && (v5->cell->members.flags0 & 2) != 0 ) /*0x43f950*/
      goto LABEL_31; /*0x43f950*/
    goto LABEL_32; /*0x43f950*/
  }
  return result; /*0x43fa22*/
}
