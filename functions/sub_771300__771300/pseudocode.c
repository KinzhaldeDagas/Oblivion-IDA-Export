void __cdecl sub_771300(int (*a1)(), unsigned int a2)
{
  int v2; // esi
  int (*v3)(); // ecx
  int (*v4)(); // eax

  v2 = *(_DWORD *)(*(_DWORD *)(unk_B42700 + 4) + 4 * (_DWORD)a1); /*0x771313*/
  if ( !a2 ) /*0x771317*/
  {
    a1 = nullsub_return0_0arg; /*0x771323*/
    NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)(v2 + 4), 0, &a1); /*0x77132b*/
    return; /*0x771332*/
  }
  if ( (unsigned int)a1 > 3 ) /*0x771336*/
  {
    if ( a1 == (int (*)())4 ) /*0x7713b5*/
    {
      switch ( a2 ) /*0x7713ca*/
      {
        case 1u: /*0x7713ca*/
        case 2u: /*0x7713ca*/
        case 6u: /*0x7713ca*/
        case 7u: /*0x7713ca*/
        case 8u: /*0x7713ca*/
        case 0xAu: /*0x7713ca*/
        case 0xBu: /*0x7713ca*/
        case 0xCu: /*0x7713ca*/
        case 0xDu: /*0x7713ca*/
        case 0xEu: /*0x7713ca*/
        case 0xFu: /*0x7713ca*/
        case 0x11u: /*0x7713ca*/
        case 0x12u: /*0x7713ca*/
        case 0x13u: /*0x7713ca*/
          goto LABEL_44;
        case 3u: /*0x7713ca*/
        case 4u: /*0x7713ca*/
        case 0x1Du: /*0x7713ca*/
        case 0x1Eu: /*0x7713ca*/
        case 0x1Fu: /*0x7713ca*/
        case 0x20u: /*0x7713ca*/
          v4 = (int (*)())sub_76EEB0; /*0x77140d*/
          goto LABEL_45; /*0x771412*/
        case 5u: /*0x7713ca*/
          v4 = (int (*)())sub_76F0D0; /*0x7713d1*/
          goto LABEL_45; /*0x7713d6*/
        case 9u: /*0x7713ca*/
          v4 = (int (*)())sub_76F0D0; /*0x7713db*/
          goto LABEL_45; /*0x7713e0*/
        case 0x10u: /*0x7713ca*/
          v4 = (int (*)())sub_76F110; /*0x7713e5*/
          goto LABEL_45; /*0x7713ea*/
        case 0x14u: /*0x7713ca*/
          v4 = (int (*)())sub_76F1C0; /*0x7713ef*/
          goto LABEL_45; /*0x7713f4*/
        case 0x15u: /*0x7713ca*/
        case 0x16u: /*0x7713ca*/
        case 0x17u: /*0x7713ca*/
        case 0x18u: /*0x7713ca*/
          v4 = (int (*)())sub_76F2A0; /*0x7713f9*/
          goto LABEL_45; /*0x7713fe*/
        case 0x19u: /*0x7713ca*/
        case 0x1Au: /*0x7713ca*/
        case 0x1Bu: /*0x7713ca*/
        case 0x1Cu: /*0x7713ca*/
          v4 = (int (*)())sub_76F3B0; /*0x771403*/
          goto LABEL_45; /*0x771408*/
        default:
          goto LABEL_47;
      }
    }
    if ( a1 == (int (*)())6 || a1 == (int (*)())7 ) /*0x77141f*/
    {
      switch ( a2 ) /*0x771484*/
      {
        case 1u: /*0x771484*/
        case 2u: /*0x771484*/
        case 3u: /*0x771484*/
        case 4u: /*0x771484*/
          v4 = (int (*)())sub_7701E0; /*0x77148b*/
          goto LABEL_45; /*0x771490*/
        case 5u: /*0x771484*/
        case 6u: /*0x771484*/
        case 7u: /*0x771484*/
        case 8u: /*0x771484*/
          v4 = (int (*)())sub_770300; /*0x771492*/
          goto LABEL_45; /*0x771497*/
        case 9u: /*0x771484*/
        case 0xAu: /*0x771484*/
        case 0xBu: /*0x771484*/
        case 0xCu: /*0x771484*/
          v4 = (int (*)())sub_770420; /*0x771499*/
          goto LABEL_45; /*0x77149e*/
        case 0xDu: /*0x771484*/
        case 0xEu: /*0x771484*/
        case 0xFu: /*0x771484*/
        case 0x10u: /*0x771484*/
          v4 = (int (*)())sub_770540; /*0x7714a0*/
          goto LABEL_45; /*0x7714a5*/
        case 0x11u: /*0x771484*/
        case 0x12u: /*0x771484*/
        case 0x13u: /*0x771484*/
        case 0x14u: /*0x771484*/
          v4 = (int (*)())sub_770640; /*0x7714a7*/
          goto LABEL_45; /*0x7714ac*/
        case 0x15u: /*0x771484*/
        case 0x16u: /*0x771484*/
        case 0x17u: /*0x771484*/
        case 0x18u: /*0x771484*/
          v4 = (int (*)())sub_770740; /*0x7714ae*/
          goto LABEL_45; /*0x7714b3*/
        case 0x19u: /*0x771484*/
        case 0x1Au: /*0x771484*/
        case 0x1Bu: /*0x771484*/
        case 0x1Cu: /*0x771484*/
          v4 = (int (*)())sub_770860; /*0x7714b5*/
          goto LABEL_45; /*0x7714ba*/
        case 0x1Du: /*0x771484*/
        case 0x1Eu: /*0x771484*/
        case 0x1Fu: /*0x771484*/
        case 0x20u: /*0x771484*/
LABEL_44:
          v4 = nullsub_return0_0arg; /*0x7714bc*/
          goto LABEL_45; /*0x7714bc*/
        default:
          goto LABEL_47;
      }
    }
    if ( a1 == (int (*)())5 ) /*0x771424*/
    {
      switch ( a2 ) /*0x77143d*/
      {
        case 1u: /*0x77143d*/
        case 2u: /*0x77143d*/
        case 3u: /*0x77143d*/
        case 4u: /*0x77143d*/
          v4 = (int (*)())sub_770980; /*0x771444*/
          goto LABEL_45; /*0x771449*/
        case 5u: /*0x77143d*/
        case 6u: /*0x77143d*/
        case 7u: /*0x77143d*/
        case 8u: /*0x77143d*/
          v4 = (int (*)())sub_770AB0; /*0x77144b*/
          goto LABEL_45; /*0x771450*/
        case 9u: /*0x77143d*/
        case 0xAu: /*0x77143d*/
        case 0xBu: /*0x77143d*/
        case 0xCu: /*0x77143d*/
          v4 = (int (*)())sub_770BB0; /*0x771452*/
          goto LABEL_45; /*0x771457*/
        case 0xDu: /*0x77143d*/
        case 0xEu: /*0x77143d*/
        case 0xFu: /*0x77143d*/
        case 0x10u: /*0x77143d*/
          v4 = (int (*)())sub_770CB0; /*0x771459*/
          goto LABEL_45; /*0x77145e*/
        case 0x11u: /*0x77143d*/
        case 0x12u: /*0x77143d*/
        case 0x13u: /*0x77143d*/
        case 0x14u: /*0x77143d*/
          v4 = (int (*)())sub_770DB0; /*0x771460*/
          goto LABEL_45; /*0x771465*/
        case 0x15u: /*0x77143d*/
        case 0x16u: /*0x77143d*/
        case 0x17u: /*0x77143d*/
        case 0x18u: /*0x77143d*/
          v4 = (int (*)())sub_770EB0; /*0x771467*/
          goto LABEL_45; /*0x77146c*/
        case 0x19u: /*0x77143d*/
        case 0x1Au: /*0x77143d*/
        case 0x1Bu: /*0x77143d*/
        case 0x1Cu: /*0x77143d*/
          v4 = (int (*)())sub_770FA0; /*0x77146e*/
          goto LABEL_45; /*0x771473*/
        case 0x1Du: /*0x77143d*/
        case 0x1Eu: /*0x77143d*/
        case 0x1Fu: /*0x77143d*/
        case 0x20u: /*0x77143d*/
          goto LABEL_44;
        default:
          break;
      }
    }
LABEL_47:
    JUMPOUT(0x7714D7); /*0x7714d7*/
  }
  v3 = (int (*)())(a2 - 1); /*0x771338*/
  switch ( a2 ) /*0x77134b*/
  {
    case 1u: /*0x77134b*/
    case 2u: /*0x77134b*/
    case 3u: /*0x77134b*/
    case 4u: /*0x77134b*/
      if ( v3 == a1 ) /*0x771354*/
      {
        v4 = (int (*)())sub_76E610; /*0x771356*/
      }
      else if ( (unsigned int)v3 < (unsigned int)a1 ) /*0x771360*/
      {
LABEL_15:
        v4 = (int (*)())sub_76E4B0; /*0x7713a8*/
      }
      else
      {
        v4 = (int (*)())sub_76E430; /*0x771362*/
      }
      break; /*0x77135b*/
    case 5u: /*0x77134b*/
    case 6u: /*0x77134b*/
    case 7u: /*0x77134b*/
    case 8u: /*0x77134b*/
      v4 = (int (*)())sub_76E800; /*0x77136c*/
      break; /*0x771371*/
    case 9u: /*0x77134b*/
    case 0xAu: /*0x77134b*/
    case 0xBu: /*0x77134b*/
    case 0xCu: /*0x77134b*/
      v4 = (int (*)())sub_76E910; /*0x771376*/
      break; /*0x77137b*/
    case 0xDu: /*0x77134b*/
    case 0xEu: /*0x77134b*/
    case 0xFu: /*0x77134b*/
    case 0x10u: /*0x77134b*/
      v4 = (int (*)())sub_76EA10; /*0x771380*/
      break; /*0x771385*/
    case 0x11u: /*0x77134b*/
    case 0x12u: /*0x77134b*/
    case 0x13u: /*0x77134b*/
    case 0x14u: /*0x77134b*/
      v4 = (int (*)())sub_76EB40; /*0x77138a*/
      break; /*0x77138f*/
    case 0x15u: /*0x77134b*/
    case 0x16u: /*0x77134b*/
    case 0x17u: /*0x77134b*/
    case 0x18u: /*0x77134b*/
      v4 = (int (*)())sub_76EC60; /*0x771394*/
      break; /*0x771399*/
    case 0x19u: /*0x77134b*/
    case 0x1Au: /*0x77134b*/
    case 0x1Bu: /*0x77134b*/
    case 0x1Cu: /*0x77134b*/
      v4 = (int (*)())sub_76ED90; /*0x77139e*/
      break; /*0x7713a3*/
    case 0x1Du: /*0x77134b*/
    case 0x1Eu: /*0x77134b*/
    case 0x1Fu: /*0x77134b*/
    case 0x20u: /*0x77134b*/
      goto LABEL_15;
    default:
      goto LABEL_47;
  }
LABEL_45:
  a1 = v4; /*0x7714c1*/
  if ( !v4 ) /*0x7714c7*/
    goto LABEL_47; /*0x7714c7*/
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)(v2 + 4), a2, &a1); /*0x7714d2*/
  def_77134B(); /*0x7714d3*/
}
