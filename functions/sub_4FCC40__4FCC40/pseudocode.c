_DWORD *__thiscall sub_4FCC40(_DWORD *this)
{
  *this = 0; /*0x4fcc50*/
  *(this + 0x81) = 0; /*0x4fcc52*/
  *(this + 0x82) = 0; /*0x4fcc58*/
  *(this + 0x103) = 0; /*0x4fcc5e*/
  *(this + 0x106) = 0; /*0x4fcc64*/
  _memset((int)(this + 1), 0, 0x200u); /*0x4fcc6a*/
  _memset((int)(this + 0x83), 0, 0x200u); /*0x4fcc7c*/
  return this; /*0x4fcc84*/
}
