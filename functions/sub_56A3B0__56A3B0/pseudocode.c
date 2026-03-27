char __cdecl sub_56A3B0(int a1, float a2, float a3)
{
  char result; // al

  switch ( a1 )
  {
    case 0:
      if ( a3 != a2 )
        goto LABEL_3;
      goto LABEL_14;
    case 1:
      if ( a3 != a2 )
        goto LABEL_14;
      result = 0;
      break;
    case 2:
      if ( a3 < (double)a2 )
        goto LABEL_14;
      result = 0;
      break;
    case 3:
      if ( a3 <= (double)a2 )
        goto LABEL_14;
      result = 0;
      break;
    case 4:
      if ( a3 > (double)a2 )
        goto LABEL_14;
      result = 0;
      break;
    case 5:
      if ( a3 < (double)a2 )
LABEL_3:
        result = 0;
      else
        result = def_56A3B9();
      break;
    default:
LABEL_14:
      JUMPOUT(0x56A435);
  }
  return result;
}
