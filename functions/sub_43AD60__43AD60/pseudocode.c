LONG __thiscall sub_43AD60(volatile LONG *this)
{
  int v2; // eax
  int v3; // eax
  IOManager *v4; // edi
  int v6[4]; // [esp-4h] [ebp-10h] BYREF

  v2 = *((_DWORD *)this + 9);
  if ( v2 )
  {
    sub_4A1F90((_DWORD **)dword_B35300, v2, *((_DWORD *)this + 0xA));
  }
  else
  {
    v3 = *((_DWORD *)this + 8);
    if ( v3 )
      (*(void (__thiscall **)(UInt32, int, _DWORD))(*(_DWORD *)dword_B35300 + 8))(
        dword_B35300,
        v3,
        *((_DWORD *)this + 0xA));
  }
  (*(void (__thiscall **)(volatile LONG *))(*this + 0x28))(this);
  v4 = ioManager;
  v6[0] = (int)this;
  v6[3] = (int)v6;
  InterlockedIncrement(this + 2);
  return sub_43A5F0(&v4->members.taskQueue->vtbl, v6[0]);
}
