bool __thiscall sub_54AFB0(_DWORD *this, int a2)
{
  bool result; // al

  switch ( a2 ) /*0x54afb9*/
  {
    case 0: /*0x54afb9*/
      result = *(this + 0x3A) == 0; /*0x54afd1*/
      break; /*0x54afd4*/
    case 1: /*0x54afb9*/
      result = *(this + 0xC) == 0; /*0x54afc4*/
      break; /*0x54afc7*/
    case 2: /*0x54afb9*/
      result = *(this + 0x23) == 0; /*0x54afde*/
      break; /*0x54afe1*/
    case 3: /*0x54afb9*/
      result = *(this + 0x51) == 0; /*0x54afeb*/
      break; /*0x54afee*/
    default:
      JUMPOUT(0x54AFF1); /*0x54aff1*/
  }
  return result; /*0x54afc7*/
}
