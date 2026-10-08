bool __thiscall sub_6606A0(_DWORD *this)
{
  _DWORD *v1; // esi
  bool i; // bl

  v1 = (_DWORD *)*(this + 0x16B); /*0x6606a2*/
  for ( i = 0; v1; v1 = (_DWORD *)v1[1] ) /*0x6606ac*/
  {
    if ( !*v1 ) /*0x6606b0*/
      break; /*0x6606b4*/
    if ( i ) /*0x6606b8*/
      break; /*0x6606b8*/
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)*v1 + 0x190))(*v1) ) /*0x6606c2*/
    {
      if ( *v1 ) /*0x6606c8*/
        i = Actor_IsGuardClass((Actor *)*v1); /*0x6606d7*/
    }
  }
  return i; /*0x6606e0*/
}
