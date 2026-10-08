int __thiscall sub_6F1940(
        unsigned int *this,
        int a2,
        OB_CBranchChildRef_010201A0 *first,
        unsigned int last,
        OB_CBranchChildRef_010201A0 *destinationLast)
{
  int percentBetweenParentVertices_low; // edx
  int v7; // ebx
  int result; // eax
  unsigned int v9; // ecx
  int v10; // eax
  int v11; // eax
  unsigned int v12; // ecx
  int v13; // eax
  _DWORD *v14; // eax
  _DWORD *v15; // eax
  int v16; // ebx
  int v17; // eax
  int v18; // edi
  OB_CBranchChildRef_010201A0 *v19; // ecx
  unsigned int v20; // edi
  _DWORD *v21; // [esp-1Ch] [ebp-4Ch]
  _DWORD *v22; // [esp-Ch] [ebp-3Ch]
  int v23; // [esp-8h] [ebp-38h]
  int v24; // [esp+0h] [ebp-30h] BYREF
  _DWORD v25[3]; // [esp+10h] [ebp-20h] BYREF
  int v26; // [esp+1Ch] [ebp-14h]
  int *v27; // [esp+20h] [ebp-10h]
  int v28; // [esp+2Ch] [ebp-4h]
  OB_CBranchChildRef_010201A0 *lasta; // [esp+40h] [ebp+10h]
  OB_CBranchChildRef_010201A0 *destinationLasta; // [esp+44h] [ebp+14h]
  OB_CBranchChildRef_010201A0 *destinationLastb; // [esp+44h] [ebp+14h]

  v27 = &v24; /*0x6f1968*/
  percentBetweenParentVertices_low = LODWORD(destinationLast->percentBetweenParentVertices); /*0x6f1972*/
  v7 = *(this + 1); /*0x6f1975*/
  result = destinationLast->childBranch; /*0x6f197a*/
  v25[0] = destinationLast->parentVertexIndex; /*0x6f197d*/
  v25[1] = percentBetweenParentVertices_low; /*0x6f1980*/
  v25[2] = result; /*0x6f1983*/
  if ( v7 ) /*0x6f1986*/
  {
    result = 0x2AAAAAAB * (*(this + 3) - v7); /*0x6f1996*/
    v9 = (int)(*(this + 3) - v7) / 0xC; /*0x6f199f*/
  }
  else
  {
    v9 = 0; /*0x6f1988*/
  }
  if ( last ) /*0x6f19a6*/
  {
    if ( v7 ) /*0x6f19ae*/
      v10 = (int)(*(this + 2) - v7) / 0xC; /*0x6f19c7*/
    else
      v10 = 0; /*0x6f19b0*/
    if ( 0xFFFFFFFF - v10 < last ) /*0x6f19d0*/
      OB_stVector_ThrowLengthError_010201A0(last); /*0x6f19d2*/
    if ( v7 ) /*0x6f19d9*/
      v11 = (int)(*(this + 2) - v7) / 0xC; /*0x6f19f2*/
    else
      v11 = 0; /*0x6f19db*/
    if ( v9 >= last + v11 ) /*0x6f19f8*/
    {
      v19 = (OB_CBranchChildRef_010201A0 *)*(this + 2); /*0x6f1b0e*/
      destinationLastb = v19; /*0x6f1b2a*/
      if ( v19 - first >= last ) /*0x6f1b2d*/
      {
        v20 = last; /*0x6f1ba7*/
        lasta = &v19[-last]; /*0x6f1baf*/
        *(this + 2) = (unsigned int)sub_6F15A0(lasta, v19, v19); /*0x6f1bba*/
        OB_CBranchChildRef_CopyBackwardThunk_010201A0(first, lasta, destinationLastb); /*0x6f1bc3*/
        return (int)OB_stVectorBranchChildRef_FillRange_010201A0(first, &first[v20].parentVertexIndex, v25); /*0x6f1bd0*/
      }
      else
      {
        sub_6F15A0(first, v19, &first[last].parentVertexIndex); /*0x6f1b40*/
        v23 = last - (int)(*(this + 2) - (_DWORD)first) / 0xC; /*0x6f1b62*/
        v22 = (_DWORD *)*(this + 2); /*0x6f1b63*/
        v28 = 2; /*0x6f1b66*/
        sub_6F1380(v22, v23, v25); /*0x6f1b6d*/
        *(this + 2) += 0xC * last; /*0x6f1b75*/
        return (int)OB_stVectorBranchChildRef_FillRange_010201A0(first, (_DWORD *)(*(this + 2) - 0xC * last), v25); /*0x6f1b83*/
      }
    }
    else
    {
      if ( 0xFFFFFFFF - (v9 >> 1) >= v9 ) /*0x6f1a09*/
        v12 = (v9 >> 1) + v9; /*0x6f1a0f*/
      else
        v12 = 0; /*0x6f1a0b*/
      if ( v7 ) /*0x6f1a13*/
        v13 = (int)(*(this + 2) - v7) / 0xC; /*0x6f1a2c*/
      else
        v13 = 0; /*0x6f1a15*/
      if ( v12 < last + v13 ) /*0x6f1a32*/
        v12 = last + sub_6F1080(this); /*0x6f1a3d*/
      v26 = 0xC * v12; /*0x6f1a47*/
      destinationLasta = (OB_CBranchChildRef_010201A0 *)FormHeapAlloc(0xC * v12); /*0x6f1a5d*/
      v21 = (_DWORD *)*(this + 1); /*0x6f1a67*/
      v28 = 0; /*0x6f1a68*/
      v14 = sub_6F11A0(v21, first, destinationLasta); /*0x6f1a6f*/
      v15 = sub_6F1380(v14, last, v25); /*0x6f1a7f*/
      sub_6F11A0(first, (_DWORD *)*(this + 2), v15); /*0x6f1a97*/
      v16 = *(this + 1); /*0x6f1a9c*/
      if ( v16 ) /*0x6f1aa4*/
        v17 = (int)(*(this + 2) - v16) / 0xC; /*0x6f1abd*/
      else
        v17 = 0; /*0x6f1aa6*/
      v18 = v17 + last; /*0x6f1abf*/
      if ( v16 ) /*0x6f1ac3*/
        FormHeapFree(*(this + 1)); /*0x6f1ac6*/
      *(this + 3) = (unsigned int)&destinationLasta[v26 / 0xCu]; /*0x6f1ad9*/
      *(this + 2) = (unsigned int)&destinationLasta[v18]; /*0x6f1adf*/
      *(this + 1) = (unsigned int)destinationLasta; /*0x6f1ae2*/
      return (int)destinationLasta; /*0x6f1ace*/
    }
  }
  return result; /*0x6f1ae5*/
}
