void __thiscall sub_4D7470(_BYTE *this)
{
  unsigned int i; // esi

  if ( *(_BYTE *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 0x170))(this) + 4) == 0x20 ) /*0x4d7481*/
  {
    if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 0x170))(this) ) /*0x4d748d*/
    {
      for ( i = 0; i < 0x1E; ++i ) /*0x4d7494*/
        sub_4D7300(this, i, 0); /*0x4d749b*/
    }
  }
}
