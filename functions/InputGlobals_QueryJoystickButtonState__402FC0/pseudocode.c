signed int __thiscall InputGlobals::QueryJoystickButtonState(InputGlobal *this, int a2, int a3, int a4)
{
  char *v4; // ecx
  BOOL v5; // esi
  signed int result; // eax

  v4 = (char *)this + 0xA0 * a2;
  v5 = 0;
  switch ( a4 )
  {
    case 0:
      if ( v4[a3 + 0x60] >= 0 )
        goto LABEL_11;
      result = 1;
      break;
    case 1:
      if ( v4[a3 + 0xB0] < 0 || v4[a3 + 0x60] >= 0 )
        goto LABEL_11;
      result = 1;
      break;
    case 2:
      if ( v4[a3 + 0x60] < 0 || v4[a3 + 0xB0] >= 0 )
        goto LABEL_11;
      result = 1;
      break;
    case 3:
      v5 = (char)(v4[a3 + 0x60] ^ v4[a3 + 0xB0]) < 0;
      goto LABEL_11;
    default:
LABEL_11:
      result = v5;
      break;
  }
  return result;
}
