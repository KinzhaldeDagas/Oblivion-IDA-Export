char __thiscall sub_6437B0(void *this, int a2)
{
  if ( !(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x380))(a2) )
    return 0;
  (*(void (__thiscall **)(void *, int, int))(*(_DWORD *)this + 0x188))(this, a2, 1);
  return 1;
}
