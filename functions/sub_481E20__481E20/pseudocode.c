unsigned int __thiscall sub_481E20(_DWORD *this)
{
  unsigned int result; // eax
  unsigned int i; // ebx
  unsigned int v4; // edi

  result = *(this + 3); /*0x481e24*/
  for ( i = 0; i < result; ++i ) /*0x481e2b*/
  {
    v4 = 0; /*0x481e30*/
    if ( result ) /*0x481e34*/
    {
      do /*0x481e47*/
        (*(void (__thiscall **)(_DWORD *, unsigned int, unsigned int))(*this + 0x18))(this, i, v4++); /*0x481e3f*/
      while ( v4 < *(this + 3) ); /*0x481e47*/
    }
    result = *(this + 3); /*0x481e49*/
  }
  return result; /*0x481e54*/
}
