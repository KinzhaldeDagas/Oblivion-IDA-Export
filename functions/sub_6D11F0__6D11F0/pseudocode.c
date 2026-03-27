void __thiscall sub_6D11F0(unsigned __int16 *this, int a2, char a3)
{
  int v4; // esi
  int v5; // eax
  float v6; // eax

  v4 = *((_DWORD *)this + 0x14);
  if ( v4 != a2 )
  {
    if ( v4 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) )
        (**(void (__thiscall ***)(int, int))v4)(v4, 1);
    }
    *((_DWORD *)this + 0x14) = a2;
    if ( a2 )
      InterlockedIncrement((volatile LONG *)(a2 + 4));
  }
  v5 = *((_DWORD *)this + 0x14);
  if ( !v5 || (v6 = *(float *)(v5 + 8), v6 == 0.0) )
    sub_6D10F0(this, 0.0);
  else
    sub_6D10F0(this, v6);
  if ( a3 )
    (*(void (__thiscall **)(unsigned __int16 *))(*(_DWORD *)this + 0xA8))(this);
}
