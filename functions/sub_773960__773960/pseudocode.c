int __cdecl sub_773960(signed int *a1, int *a2)
{
  int v2; // edx
  int v3; // esi
  int result; // eax

  v2 = *a1;
  v3 = a1[1];
  if ( *a1 == 6 )
    v2 = 2;
  if ( v3 == 3 )
    v3 = 0;
  if ( v2 && v2 != 5 || v3 )
  {
    if ( (!v2 || v2 == 5) && (v3 == 1 || v3 == 2) )
    {
      result = a2[7];
      if ( result )
        return result;
    }
  }
  else
  {
    result = a2[6];
    if ( result )
      return result;
  }
  switch ( v2 )
  {
    case 0:
    case 3:
    case 5:
      if ( v3 < 0 )
        goto LABEL_22;
      if ( v3 <= 1 )
      {
        result = a2[8];
        if ( !result )
          goto LABEL_22;
      }
      else
      {
        if ( v3 != 2 )
          goto LABEL_22;
        result = a2[9];
        if ( !result )
          goto LABEL_22;
      }
      return result;
    case 1:
LABEL_22:
      if ( !v3 )
        goto LABEL_43;
      if ( v3 == 1 )
        goto LABEL_52;
      if ( v3 != 2 )
        return 0;
      goto LABEL_53;
    case 2:
      goto LABEL_33;
    case 4:
      result = a2[0xD];
      if ( result )
        return result;
      if ( v3 )
      {
        result = a2[0xC];
        if ( result )
          return result;
        result = a2[0xB];
        if ( result )
          return result;
      }
      else
      {
        result = a2[0xB];
        if ( result )
          return result;
        result = a2[0xC];
        if ( result )
          return result;
      }
LABEL_33:
      if ( v3 )
      {
        if ( v3 == 1 )
          goto LABEL_46;
        if ( v3 == 2 )
        {
          result = a2[5];
          goto LABEL_49;
        }
        return 0;
      }
      result = a2[2];
      if ( !result )
      {
        result = a2[5];
        if ( !result )
        {
          result = a2[1];
          if ( !result )
          {
            result = *a2;
            goto LABEL_47;
          }
        }
      }
      return result;
    case 7:
      if ( v3 )
      {
        result = a2[0xF];
        if ( result )
          return result;
LABEL_52:
        result = a2[3];
        if ( !result )
        {
LABEL_53:
          result = a2[4];
          if ( result )
            return result;
          result = a2[5];
LABEL_55:
          if ( !result )
            return 0;
          return result;
        }
      }
      else
      {
        result = a2[0xE];
        if ( result )
          return result;
LABEL_43:
        result = a2[1];
        if ( !result )
        {
          result = *a2;
          if ( !*a2 )
          {
            result = a2[2];
            if ( !result )
            {
LABEL_46:
              result = a2[5];
LABEL_47:
              if ( result )
                return result;
              result = a2[3];
LABEL_49:
              if ( result )
                return result;
              result = a2[4];
              goto LABEL_55;
            }
          }
        }
      }
      break;
    case 8:
      result = a2[0x10];
      if ( !result )
      {
        result = a2[0x13];
        if ( !result )
          goto LABEL_59;
      }
      return result;
    case 9:
      result = a2[0x13];
      if ( result )
        return result;
      result = a2[0x14];
      if ( result )
        return result;
      result = a2[0x15];
      if ( result )
        return result;
      result = a2[0x10];
      goto LABEL_68;
    case 0xA:
LABEL_59:
      result = a2[0x11];
      if ( !result )
      {
        result = a2[0x14];
        if ( !result )
          goto LABEL_61;
      }
      return result;
    case 0xB:
      result = a2[0x14];
      if ( result )
        return result;
      result = a2[0x15];
LABEL_68:
      if ( result )
        return result;
      result = a2[0x11];
      if ( result )
        return result;
      result = a2[0x12];
      if ( result )
        return result;
      return 0;
    case 0xC:
LABEL_61:
      result = a2[0x12];
      if ( result )
        return result;
      result = a2[0x15];
      if ( result )
        return result;
      return 0;
    case 0xD:
      result = a2[0x15];
      if ( !result )
      {
        result = a2[0x12];
        if ( !result )
          return 0;
      }
      return result;
    default:
      return 0;
  }
  return result;
}
