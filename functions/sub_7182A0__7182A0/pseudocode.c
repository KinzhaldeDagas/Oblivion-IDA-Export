char *__cdecl sub_7182A0(char *ArgList, int a2)
{
  unsigned int v2; // esi
  char *v3; // edi
  char *result; // eax

  v2 = strlen(ArgList) + 0x16; /*0x7182bb*/
  v3 = (char *)FormHeapAlloc(v2); /*0x7182c4*/
  switch ( a2 ) /*0x7182d6*/
  {
    case 0: /*0x7182d6*/
      sub_6C5D40(v3, v3, __PAIR64__("%s = ALPHA_ONE", v2), ArgList); /*0x7182e5*/
      result = v3; /*0x7182ed*/
      break; /*0x7182f2*/
    case 1: /*0x7182d6*/
      sub_6C5D40(v3, v3, __PAIR64__("%s = ALPHA_ZERO", v2), ArgList); /*0x7182fb*/
      result = v3; /*0x718303*/
      break; /*0x718308*/
    case 2: /*0x7182d6*/
      sub_6C5D40(v3, v3, __PAIR64__("%s = ALPHA_SRCCOLOR", v2), ArgList); /*0x718311*/
      result = v3; /*0x718319*/
      break; /*0x71831e*/
    case 3: /*0x7182d6*/
      sub_6C5D40(v3, v3, __PAIR64__("%s = ALPHA_INVSRCCOLOR", v2), ArgList); /*0x718327*/
      result = v3; /*0x71832f*/
      break; /*0x718334*/
    case 4: /*0x7182d6*/
      sub_6C5D40(v3, v3, __PAIR64__("%s = ALPHA_DESTCOLOR", v2), ArgList); /*0x71833d*/
      result = v3; /*0x718345*/
      break; /*0x71834a*/
    case 5: /*0x7182d6*/
      sub_6C5D40(v3, v3, __PAIR64__("%s = ALPHA_INVDESTCOLOR", v2), ArgList); /*0x718353*/
      result = v3; /*0x71835b*/
      break; /*0x718360*/
    case 6: /*0x7182d6*/
      sub_6C5D40(v3, v3, __PAIR64__("%s = ALPHA_SRCALPHA", v2), ArgList); /*0x718369*/
      result = v3; /*0x718371*/
      break; /*0x718376*/
    case 7: /*0x7182d6*/
      sub_6C5D40(v3, v3, __PAIR64__("%s = ALPHA_INVSRCALPHA", v2), ArgList); /*0x71837f*/
      result = v3; /*0x718387*/
      break; /*0x71838c*/
    case 8: /*0x7182d6*/
      sub_6C5D40(v3, v3, __PAIR64__("%s = ALPHA_DESTALPHA", v2), ArgList); /*0x718395*/
      result = v3; /*0x71839d*/
      break; /*0x7183a2*/
    case 9: /*0x7182d6*/
      sub_6C5D40(v3, v3, __PAIR64__("%s = ALPHA_INVDESTALPHA", v2), ArgList); /*0x7183ab*/
      result = v3; /*0x7183b3*/
      break; /*0x7183b8*/
    case 0xA: /*0x7182d6*/
      sub_6C5D40(v3, v3, __PAIR64__("%s = ALPHA_SRCALPHASAT", v2), ArgList); /*0x7183c1*/
      result = (char *)def_7182D6((int)v3); /*0x7183c7*/
      break; /*0x7183c7*/
    default:
      JUMPOUT(0x7183C9); /*0x7183c9*/
  }
  return result; /*0x7182ef*/
}
