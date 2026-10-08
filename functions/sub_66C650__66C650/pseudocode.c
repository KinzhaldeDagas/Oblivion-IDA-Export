void __thiscall sub_66C650(Concurrency::details::SchedulerBase *this)
{
  bool v2; // zf

  if ( *((_BYTE *)this + 0x589) ) /*0x66c653*/
  {
    if ( (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 0x2D0))(*((_DWORD *)this + 0x16)) == 0xFFFFFFFF /*0x66c679*/
      && !(*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 0x2E4))(*((_DWORD *)this + 0x16)) )
    {
      v2 = *((_BYTE *)this + 0x58A) == 0; /*0x66c67f*/
      *((_BYTE *)this + 0x589) = 0; /*0x66c685*/
      if ( !v2 ) /*0x66c68b*/
        TogglePOV((PlayerCharacter *)this, 1u); /*0x66c691*/
      *((_BYTE *)this + 0x58A) = 0; /*0x66c696*/
    }
  }
}
