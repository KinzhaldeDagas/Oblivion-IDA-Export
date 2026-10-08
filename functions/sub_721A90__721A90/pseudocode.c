char *__cdecl sub_721A90(char *ArgList, int a2)
{
  unsigned int v2; // esi
  char *v3; // edi
  char *result; // eax

  v2 = strlen(ArgList) + 0x16; /*0x721aab*/
  v3 = (char *)FormHeapAlloc(v2); /*0x721ab4*/
  switch ( a2 ) /*0x721ac6*/
  {
    case 0: /*0x721ac6*/
      sub_6C5D40(v3, v3, __PAIR64__("%s = ALWAYS_FACE_CAMERA", v2), ArgList); /*0x721ad5*/
      result = v3; /*0x721add*/
      break; /*0x721ae2*/
    case 1: /*0x721ac6*/
      sub_6C5D40(v3, v3, __PAIR64__("%s = ROTATE_ABOUT_UP", v2), ArgList); /*0x721aeb*/
      result = v3; /*0x721af3*/
      break; /*0x721af8*/
    case 2: /*0x721ac6*/
      sub_6C5D40(v3, v3, __PAIR64__("%s = RIGID_FACE_CAMERA", v2), ArgList); /*0x721b01*/
      result = v3; /*0x721b09*/
      break; /*0x721b0e*/
    case 3: /*0x721ac6*/
      sub_6C5D40(v3, v3, __PAIR64__("%s = ALWAYS_FACE_CENTER", v2), ArgList); /*0x721b17*/
      result = v3; /*0x721b1f*/
      break; /*0x721b24*/
    case 4: /*0x721ac6*/
      sub_6C5D40(v3, v3, __PAIR64__("%s = RIGID_FACE_CENTER", v2), ArgList); /*0x721b2d*/
      result = v3; /*0x721b35*/
      break; /*0x721b3a*/
    case 5: /*0x721ac6*/
      sub_6C5D40(v3, v3, __PAIR64__("%s = BSROTATE_ABOUT_UP", v2), ArgList); /*0x721b43*/
      result = (char *)def_721AC6((int)v3); /*0x721b49*/
      break; /*0x721b49*/
    default:
      JUMPOUT(0x721B4B); /*0x721b4b*/
  }
  return result; /*0x721adf*/
}
