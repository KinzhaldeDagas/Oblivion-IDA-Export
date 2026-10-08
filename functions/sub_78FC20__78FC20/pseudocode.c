// Rotates the 4-byte CBranch-pointer range [first,last) around middle using gcd-cycle moves. Oblivion's fuzzy-volume insertion-sort helper uses it to move an insertion range without allocating.
void __cdecl OB_BranchPtrVector_RotateRange_010201A0(
        OB_CBranch_010201A0 **first,
        OB_CBranch_010201A0 **middle,
        OB_CBranch_010201A0 **last)
{
  int v3; // esi
  int v4; // eax
  int v5; // edi
  int v6; // edx
  OB_CBranch_010201A0 **v7; // ebx
  OB_CBranch_010201A0 **v8; // edx
  _DWORD *v9; // edi
  int v10; // ecx
  OB_CBranch_010201A0 **middlea; // [esp+18h] [ebp+8h]

  v3 = middle - first; /*0x78fc35*/
  v4 = last - first; /*0x78fc3e*/
  v5 = v3; /*0x78fc40*/
  if ( v3 ) /*0x78fc42*/
  {
    do /*0x78fc4d*/
    {
      v6 = v4 % v5; /*0x78fc45*/
      v4 = v5; /*0x78fc47*/
      v5 = v6; /*0x78fc4b*/
    }
    while ( v6 ); /*0x78fc4d*/
  }
  if ( v4 < last - first && v4 > 0 ) /*0x78fc55*/
  {
    v7 = &first[v4]; /*0x78fc57*/
    do /*0x78fcb0*/
    {
      v8 = &v7[v3]; /*0x78fc62*/
      v9 = v7; /*0x78fc67*/
      middlea = (OB_CBranch_010201A0 **)*v7; /*0x78fc69*/
      if ( v8 == last ) /*0x78fc6d*/
        v8 = first; /*0x78fc6f*/
      while ( v8 != v7 ) /*0x78fc75*/
      {
        *v9 = *v8; /*0x78fc79*/
        v10 = last - v8; /*0x78fc7f*/
        v9 = v8; /*0x78fc84*/
        if ( v3 >= v10 ) /*0x78fc86*/
          v8 = &first[v3 - v10]; /*0x78fc9b*/
        else
          v8 += v3; /*0x78fc8f*/
      }
      --v4; /*0x78fca6*/
      v7 += 0xFFFFFFFF; /*0x78fca9*/
      *v9 = middlea; /*0x78fcae*/
    }
    while ( v4 > 0 ); /*0x78fcb0*/
  }
}
