void __thiscall sub_66C650(Concurrency::details::SchedulerBase *this)
{
  bool v2; // zf

  if ( *((_BYTE *)this + 0x589) )
  {
    if ( (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 0x2D0))(*((_DWORD *)this + 0x16)) == 0xFFFFFFFF
      && !(*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 0x2E4))(*((_DWORD *)this + 0x16)) )
    {
      v2 = *((_BYTE *)this + 0x58A) == 0;
      *((_BYTE *)this + 0x589) = 0;
      if ( !v2 )
        TogglePOV((PlayerCharacter *)this, 1u);
      *((_BYTE *)this + 0x58A) = 0;
    }
  }
}
