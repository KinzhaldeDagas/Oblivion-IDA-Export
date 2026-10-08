// Dialogue condition numeric comparator. Operator IDs from operatorAndFlags>>5: 0 ==, 1 !=, 2 >, 3 >=, 4 <, 5 <=.
char __cdecl sub_56A3B0(int a1, float a2, float a3)
{
  char result; // al

  switch ( a1 ) /*0x56a3b9*/
  {
    case 0: /*0x56a3b9*/
      if ( a3 != a2 ) /*0x56a3cf*/
        goto LABEL_3; /*0x56a3cf*/
      goto LABEL_14; /*0x56a3cf*/
    case 1: /*0x56a3b9*/
      if ( a3 != a2 ) /*0x56a3e3*/
        goto LABEL_14; /*0x56a3e3*/
      result = 0; /*0x56a3e5*/
      break; /*0x56a3e7*/
    case 2: /*0x56a3b9*/
      if ( a3 < (double)a2 ) /*0x56a3f7*/
        goto LABEL_14; /*0x56a3f7*/
      result = 0; /*0x56a3f9*/
      break; /*0x56a3fb*/
    case 3: /*0x56a3b9*/
      if ( a3 <= (double)a2 ) /*0x56a40b*/
        goto LABEL_14; /*0x56a40b*/
      result = 0; /*0x56a40d*/
      break; /*0x56a40f*/
    case 4: /*0x56a3b9*/
      if ( a3 > (double)a2 ) /*0x56a41f*/
        goto LABEL_14; /*0x56a41f*/
      result = 0; /*0x56a421*/
      break; /*0x56a423*/
    case 5: /*0x56a3b9*/
      if ( a3 < (double)a2 ) /*0x56a433*/
LABEL_3:
        result = 0; /*0x56a3d1*/
      else
        result = def_56A3B9(); /*0x56a434*/
      break; /*0x56a434*/
    default:
LABEL_14:
      JUMPOUT(0x56A435); /*0x56a435*/
  }
  return result; /*0x56a3d3*/
}
