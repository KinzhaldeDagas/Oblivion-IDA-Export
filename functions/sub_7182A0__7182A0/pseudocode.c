char *__cdecl sub_7182A0(char *ArgList, int a2)
{
  unsigned int v2; // esi
  char *v3; // edi
  char *result; // eax

  v2 = strlen(ArgList) + 0x16;
  v3 = (char *)FormHeapAlloc(v2);
  switch ( a2 )
  {
    case 0:
      sub_6C5D40(v3, v3, __PAIR64__("%s = ALPHA_ONE", v2), ArgList);
      result = v3;
      break;
    case 1:
      sub_6C5D40(v3, v3, __PAIR64__("%s = ALPHA_ZERO", v2), ArgList);
      result = v3;
      break;
    case 2:
      sub_6C5D40(v3, v3, __PAIR64__("%s = ALPHA_SRCCOLOR", v2), ArgList);
      result = v3;
      break;
    case 3:
      sub_6C5D40(v3, v3, __PAIR64__("%s = ALPHA_INVSRCCOLOR", v2), ArgList);
      result = v3;
      break;
    case 4:
      sub_6C5D40(v3, v3, __PAIR64__("%s = ALPHA_DESTCOLOR", v2), ArgList);
      result = v3;
      break;
    case 5:
      sub_6C5D40(v3, v3, __PAIR64__("%s = ALPHA_INVDESTCOLOR", v2), ArgList);
      result = v3;
      break;
    case 6:
      sub_6C5D40(v3, v3, __PAIR64__("%s = ALPHA_SRCALPHA", v2), ArgList);
      result = v3;
      break;
    case 7:
      sub_6C5D40(v3, v3, __PAIR64__("%s = ALPHA_INVSRCALPHA", v2), ArgList);
      result = v3;
      break;
    case 8:
      sub_6C5D40(v3, v3, __PAIR64__("%s = ALPHA_DESTALPHA", v2), ArgList);
      result = v3;
      break;
    case 9:
      sub_6C5D40(v3, v3, __PAIR64__("%s = ALPHA_INVDESTALPHA", v2), ArgList);
      result = v3;
      break;
    case 0xA:
      sub_6C5D40(v3, v3, __PAIR64__("%s = ALPHA_SRCALPHASAT", v2), ArgList);
      result = def_7182D6();
      break;
    default:
      JUMPOUT(0x7183C9);
  }
  return result;
}
