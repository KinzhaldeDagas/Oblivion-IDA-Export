void __thiscall ReanimateEffect_PreLoad(_DWORD **this, int a2)
{
  nullsub_returnvVoid_1arg(a2); /*0x6a3939*/
  if ( (int)*(this + 0xF) < 0x32 ) /*0x6a3942*/
  {
    if ( a2 ) /*0x6a3946*/
    {
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x154))(a2) ) /*0x6a3952*/
      {
        if ( *(this + 0xE) ) /*0x6a3958*/
          (*(void (__thiscall **)(_DWORD, int))(**(this + 0xE) + 0x9C))(*(this + 0xE), 1); /*0x6a3973*/
      }
    }
  }
}
