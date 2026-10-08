int __cdecl sub_773960(signed int *a1, int *a2)
{
  int v2; // edx
  int v3; // esi
  int result; // eax

  v2 = *a1; /*0x773964*/
  v3 = a1[1]; /*0x77396a*/
  if ( *a1 == 6 ) /*0x77396d*/
    v2 = 2; /*0x77396f*/
  if ( v3 == 3 ) /*0x773977*/
    v3 = 0; /*0x773979*/
  if ( v2 && v2 != 5 || v3 ) /*0x77398a*/
  {
    if ( (!v2 || v2 == 5) && (v3 == 1 || v3 == 2) ) /*0x7739a6*/
    {
      result = a2[7]; /*0x7739a8*/
      if ( result ) /*0x7739ad*/
        return result; /*0x7739ad*/
    }
  }
  else
  {
    result = a2[6]; /*0x77398c*/
    if ( result ) /*0x773991*/
      return result; /*0x773991*/
  }
  switch ( v2 ) /*0x7739bc*/
  {
    case 0: /*0x7739bc*/
    case 3: /*0x7739bc*/
    case 5: /*0x7739bc*/
      if ( v3 < 0 ) /*0x7739c5*/
        goto LABEL_22; /*0x7739c5*/
      if ( v3 <= 1 ) /*0x7739ca*/
      {
        result = a2[8]; /*0x7739da*/
        if ( !result ) /*0x7739df*/
          goto LABEL_22; /*0x7739df*/
      }
      else
      {
        if ( v3 != 2 ) /*0x7739cf*/
          goto LABEL_22; /*0x7739cf*/
        result = a2[9]; /*0x7739d1*/
        if ( !result ) /*0x7739d6*/
          goto LABEL_22; /*0x7739d6*/
      }
      return result; /*0x7739d6*/
    case 1: /*0x7739bc*/
LABEL_22:
      if ( !v3 ) /*0x7739ea*/
        goto LABEL_43; /*0x7739ea*/
      if ( v3 == 1 ) /*0x7739f3*/
        goto LABEL_52; /*0x7739f3*/
      if ( v3 != 2 ) /*0x7739fc*/
        return 0; /*0x7739fc*/
      goto LABEL_53; /*0x7739fc*/
    case 2: /*0x7739bc*/
      goto LABEL_33;
    case 4: /*0x7739bc*/
      result = a2[0xD]; /*0x773a07*/
      if ( result ) /*0x773a0c*/
        return result; /*0x773a0c*/
      if ( v3 ) /*0x773a14*/
      {
        result = a2[0xC]; /*0x773a2a*/
        if ( result ) /*0x773a2f*/
          return result; /*0x773a2f*/
        result = a2[0xB]; /*0x773a35*/
        if ( result ) /*0x773a3a*/
          return result; /*0x773a3a*/
      }
      else
      {
        result = a2[0xB]; /*0x773a16*/
        if ( result ) /*0x773a1b*/
          return result; /*0x773a1b*/
        result = a2[0xC]; /*0x773a21*/
        if ( result ) /*0x773a26*/
          return result; /*0x773a26*/
      }
LABEL_33:
      if ( v3 ) /*0x773a45*/
      {
        if ( v3 == 1 ) /*0x773a4a*/
          goto LABEL_46; /*0x773a4a*/
        if ( v3 == 2 ) /*0x773a4f*/
        {
          result = a2[5]; /*0x773a55*/
          goto LABEL_49; /*0x773a58*/
        }
        return 0; /*0x773a4f*/
      }
      result = a2[2]; /*0x773a5a*/
      if ( !result ) /*0x773a5f*/
      {
        result = a2[5]; /*0x773a65*/
        if ( !result ) /*0x773a6a*/
        {
          result = a2[1]; /*0x773a70*/
          if ( !result ) /*0x773a75*/
          {
            result = *a2; /*0x773a7b*/
            goto LABEL_47; /*0x773a7d*/
          }
        }
      }
      return result; /*0x773a75*/
    case 7: /*0x7739bc*/
      if ( v3 ) /*0x773a81*/
      {
        result = a2[0xF]; /*0x773ac9*/
        if ( result ) /*0x773ace*/
          return result; /*0x773ace*/
LABEL_52:
        result = a2[3]; /*0x773ad4*/
        if ( !result ) /*0x773ad9*/
        {
LABEL_53:
          result = a2[4]; /*0x773adf*/
          if ( result ) /*0x773ae4*/
            return result; /*0x773ae4*/
          result = a2[5]; /*0x773ae6*/
LABEL_55:
          if ( !result ) /*0x773aeb*/
            return 0; /*0x773b61*/
          return result; /*0x773b61*/
        }
      }
      else
      {
        result = a2[0xE]; /*0x773a83*/
        if ( result ) /*0x773a88*/
          return result; /*0x773a88*/
LABEL_43:
        result = a2[1]; /*0x773a8e*/
        if ( !result ) /*0x773a93*/
        {
          result = *a2; /*0x773a99*/
          if ( !*a2 ) /*0x773a99*/
          {
            result = a2[2]; /*0x773aa3*/
            if ( !result ) /*0x773aa8*/
            {
LABEL_46:
              result = a2[5]; /*0x773aae*/
LABEL_47:
              if ( result ) /*0x773ab3*/
                return result; /*0x773ab3*/
              result = a2[3]; /*0x773ab9*/
LABEL_49:
              if ( result ) /*0x773abe*/
                return result; /*0x773abe*/
              result = a2[4]; /*0x773ac4*/
              goto LABEL_55; /*0x773ac7*/
            }
          }
        }
      }
      break; /*0x773ac7*/
    case 8: /*0x7739bc*/
      result = a2[0x10]; /*0x773aef*/
      if ( !result ) /*0x773af4*/
      {
        result = a2[0x13]; /*0x773af6*/
        if ( !result ) /*0x773afb*/
          goto LABEL_59; /*0x773afb*/
      }
      return result; /*0x773afb*/
    case 9: /*0x7739bc*/
      result = a2[0x13]; /*0x773b1b*/
      if ( result ) /*0x773b20*/
        return result; /*0x773b20*/
      result = a2[0x14]; /*0x773b22*/
      if ( result ) /*0x773b27*/
        return result; /*0x773b27*/
      result = a2[0x15]; /*0x773b29*/
      if ( result ) /*0x773b2e*/
        return result; /*0x773b2e*/
      result = a2[0x10]; /*0x773b30*/
      goto LABEL_68; /*0x773b30*/
    case 0xA: /*0x7739bc*/
LABEL_59:
      result = a2[0x11]; /*0x773afd*/
      if ( !result ) /*0x773b02*/
      {
        result = a2[0x14]; /*0x773b04*/
        if ( !result ) /*0x773b09*/
          goto LABEL_61; /*0x773b09*/
      }
      return result; /*0x773b09*/
    case 0xB: /*0x7739bc*/
      result = a2[0x14]; /*0x773b47*/
      if ( result ) /*0x773b4c*/
        return result; /*0x773b4c*/
      result = a2[0x15]; /*0x773b4e*/
LABEL_68:
      if ( result ) /*0x773b35*/
        return result; /*0x773b35*/
      result = a2[0x11]; /*0x773b37*/
      if ( result ) /*0x773b3c*/
        return result; /*0x773b3c*/
      result = a2[0x12]; /*0x773b3e*/
      if ( result ) /*0x773b43*/
        return result; /*0x773b43*/
      return 0; /*0x773b43*/
    case 0xC: /*0x7739bc*/
LABEL_61:
      result = a2[0x12]; /*0x773b0b*/
      if ( result ) /*0x773b10*/
        return result; /*0x773b10*/
      result = a2[0x15]; /*0x773b12*/
      if ( result ) /*0x773b17*/
        return result; /*0x773b17*/
      return 0; /*0x773b17*/
    case 0xD: /*0x7739bc*/
      result = a2[0x15]; /*0x773b53*/
      if ( !result ) /*0x773b58*/
      {
        result = a2[0x12]; /*0x773b5a*/
        if ( !result ) /*0x773b5f*/
          return 0; /*0x773b5f*/
      }
      return result; /*0x773b5f*/
    default:
      return 0;
  }
  return result; /*0x773993*/
}
