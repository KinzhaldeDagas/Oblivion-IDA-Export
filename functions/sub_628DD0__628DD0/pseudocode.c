const char *__thiscall sub_628DD0(void *this)
{
  const char *result; // eax

  switch ( (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x4D0))(this) ) /*0x628ddf*/
  {
    case 0: /*0x628ddf*/
      result = "DEFAULT"; /*0x628de6*/
      break; /*0x628deb*/
    case 1: /*0x628ddf*/
      result = "ACTION"; /*0x628dec*/
      break; /*0x628df1*/
    case 2: /*0x628ddf*/
      result = "SCRIPT"; /*0x628df2*/
      break; /*0x628df7*/
    case 3: /*0x628ddf*/
      result = "COMBAT"; /*0x628df8*/
      break; /*0x628dfd*/
    case 4: /*0x628ddf*/
      result = "DIALOG"; /*0x628dfe*/
      break; /*0x628e03*/
    default:
      JUMPOUT(0x628E04); /*0x628e04*/
  }
  return result; /*0x628deb*/
}
