int __usercall sub_746720@<eax>(int a1@<eax>, int a2, int a3, int a4)
{
  int v4; // ecx
  int v5; // ebx
  int v6; // edx
  int v7; // ecx
  int v8; // edx
  int v9; // ecx
  int v10; // edx
  int v11; // ecx
  int v12; // edx
  int v13; // ecx
  int v14; // edx
  int v15; // ecx
  int v16; // edx
  int i; // edi
  int v18; // ecx
  int v19; // edx
  unsigned __int16 v20; // si
  int v21; // edx
  int v22; // ecx
  int v23; // edx
  int v24; // eax

  v4 = *(_DWORD *)(a1 + 0x16B4); /*0x746721*/
  v5 = a4; /*0x74672b*/
  if ( v4 <= 0xB ) /*0x746737*/
  {
    *(_WORD *)(a1 + 0x16B0) |= (a2 - 0x101) << v4; /*0x7467a3*/
    *(_DWORD *)(a1 + 0x16B4) = v4 + 5; /*0x7467ad*/
  }
  else
  {
    v6 = (a2 - 0x101) << v4; /*0x746745*/
    v7 = *(_DWORD *)(a1 + 0x14); /*0x746747*/
    *(_WORD *)(a1 + 0x16B0) |= v6; /*0x74674a*/
    *(_BYTE *)(v7 + *(_DWORD *)(a1 + 8)) = *(_BYTE *)(a1 + 0x16B0); /*0x74675b*/
    *(_BYTE *)(++*(_DWORD *)(a1 + 0x14) + *(_DWORD *)(a1 + 8)) = *(_BYTE *)(a1 + 0x16B1); /*0x74676e*/
    v8 = *(_DWORD *)(a1 + 0x16B4); /*0x746771*/
    ++*(_DWORD *)(a1 + 0x14); /*0x746777*/
    v5 = a4; /*0x74677a*/
    *(_DWORD *)(a1 + 0x16B4) = v8 - 0xB; /*0x746788*/
    *(_WORD *)(a1 + 0x16B0) = (unsigned __int16)(a2 - 0x101) >> (0x10 - v8); /*0x74678e*/
  }
  v9 = *(_DWORD *)(a1 + 0x16B4); /*0x7467b3*/
  if ( v9 <= 0xB ) /*0x7467bc*/
  {
    *(_WORD *)(a1 + 0x16B0) |= (a3 - 1) << v9; /*0x746826*/
    *(_DWORD *)(a1 + 0x16B4) = v9 + 5; /*0x746830*/
  }
  else
  {
    v10 = (a3 - 1) << v9; /*0x7467c7*/
    v11 = *(_DWORD *)(a1 + 0x14); /*0x7467c9*/
    *(_WORD *)(a1 + 0x16B0) |= v10; /*0x7467d0*/
    *(_BYTE *)(v11 + *(_DWORD *)(a1 + 8)) = *(_BYTE *)(a1 + 0x16B0); /*0x7467e1*/
    *(_BYTE *)(++*(_DWORD *)(a1 + 0x14) + *(_DWORD *)(a1 + 8)) = *(_BYTE *)(a1 + 0x16B1); /*0x7467f4*/
    v12 = *(_DWORD *)(a1 + 0x16B4); /*0x7467f7*/
    ++*(_DWORD *)(a1 + 0x14); /*0x7467fd*/
    *(_DWORD *)(a1 + 0x16B4) = v12 - 0xB; /*0x74680e*/
    *(_WORD *)(a1 + 0x16B0) = (unsigned __int16)(a3 - 1) >> (0x10 - v12); /*0x746814*/
  }
  v13 = *(_DWORD *)(a1 + 0x16B4); /*0x746836*/
  if ( v13 <= 0xC ) /*0x74683f*/
  {
    *(_WORD *)(a1 + 0x16B0) |= (v5 - 4) << v13; /*0x7468a1*/
    *(_DWORD *)(a1 + 0x16B4) = v13 + 4; /*0x7468ab*/
  }
  else
  {
    v14 = (v5 - 4) << v13; /*0x746846*/
    v15 = *(_DWORD *)(a1 + 0x14); /*0x746848*/
    *(_WORD *)(a1 + 0x16B0) |= v14; /*0x74684f*/
    *(_BYTE *)(v15 + *(_DWORD *)(a1 + 8)) = *(_BYTE *)(a1 + 0x16B0); /*0x746860*/
    *(_BYTE *)(++*(_DWORD *)(a1 + 0x14) + *(_DWORD *)(a1 + 8)) = *(_BYTE *)(a1 + 0x16B1); /*0x746873*/
    v16 = *(_DWORD *)(a1 + 0x16B4); /*0x746876*/
    ++*(_DWORD *)(a1 + 0x14); /*0x74687c*/
    *(_DWORD *)(a1 + 0x16B4) = v16 - 0xC; /*0x74688d*/
    *(_WORD *)(a1 + 0x16B0) = (unsigned __int16)(v5 - 4) >> (0x10 - v16); /*0x746893*/
  }
  for ( i = 0; i < v5; ++i ) /*0x7468b5*/
  {
    v18 = *(_DWORD *)(a1 + 0x16B4); /*0x7468c0*/
    v19 = (unsigned __int8)byte_A849FC[i]; /*0x7468c9*/
    if ( v18 <= 0xD ) /*0x7468d0*/
    {
      *(_WORD *)(a1 + 0x16B0) |= *(_WORD *)(a1 + 4 * v19 + 0xA76) << v18; /*0x746939*/
      *(_DWORD *)(a1 + 0x16B4) = v18 + 3; /*0x746943*/
    }
    else
    {
      v20 = *(_WORD *)(a1 + 4 * v19 + 0xA76); /*0x7468d2*/
      v21 = v20 << v18; /*0x7468dc*/
      v22 = *(_DWORD *)(a1 + 0x14); /*0x7468de*/
      *(_WORD *)(a1 + 0x16B0) |= v21; /*0x7468e1*/
      *(_BYTE *)(v22 + *(_DWORD *)(a1 + 8)) = *(_BYTE *)(a1 + 0x16B0); /*0x7468f2*/
      *(_BYTE *)(++*(_DWORD *)(a1 + 0x14) + *(_DWORD *)(a1 + 8)) = *(_BYTE *)(a1 + 0x16B1); /*0x746905*/
      v23 = *(_DWORD *)(a1 + 0x16B4); /*0x746908*/
      ++*(_DWORD *)(a1 + 0x14); /*0x74690e*/
      v5 = a4; /*0x746911*/
      *(_DWORD *)(a1 + 0x16B4) = v23 - 0xD; /*0x74691f*/
      *(_WORD *)(a1 + 0x16B0) = v20 >> (0x10 - v23); /*0x746925*/
    }
  }
  v24 = sub_746200(a1, a1 + 0x8C, a2 - 1); /*0x746960*/
  return sub_746200(v24, v24 + 0x980, a3 - 1);
}
