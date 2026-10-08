BSStringT *__stdcall Magic_CastFailureMsg(BSStringT *a1, int a2)
{
  BSStringT *result; // eax

  switch ( a2 ) /*0x41a4c8*/
  {
    case 1: /*0x41a4c8*/
      BSStringT_constr_str(a1, (char *)MEMORY[0xB33524].value); /*0x41a4db*/
      result = a1; /*0x41a4e0*/
      break; /*0x41a4e4*/
    case 2: /*0x41a4c8*/
      BSStringT_constr_str(a1, (char *)MEMORY[0xB33534].value); /*0x41a525*/
      result = a1; /*0x41a52a*/
      break; /*0x41a52e*/
    case 3: /*0x41a4c8*/
      BSStringT_constr_str(a1, (char *)MEMORY[0xB3352C].value); /*0x41a4f4*/
      result = a1; /*0x41a4f9*/
      break; /*0x41a4fd*/
    case 4: /*0x41a4c8*/
      BSStringT_constr_str(a1, (char *)MEMORY[0xB3353C].value); /*0x41a50d*/
      result = a1; /*0x41a512*/
      break; /*0x41a516*/
    case 5: /*0x41a4c8*/
      BSStringT_constr_str(a1, (char *)MEMORY[0xB33544].value); /*0x41a53e*/
      result = a1; /*0x41a543*/
      break; /*0x41a547*/
    case 6: /*0x41a4c8*/
      BSStringT_constr_str(a1, (char *)MEMORY[0xB3354C].value); /*0x41a557*/
      result = a1; /*0x41a55c*/
      break; /*0x41a560*/
    default:
      JUMPOUT(0x41A563); /*0x41a563*/
  }
  return result; /*0x41a4e4*/
}
