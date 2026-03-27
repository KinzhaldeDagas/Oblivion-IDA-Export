void __thiscall sub_563EB0(float *this, float a2, int a3)
{
  if ( byte_B125E8 )
  {
    if ( *(_BYTE *)(sub_55F7E0(1) + 0x20) )
    {
      if ( a2 <= 0.0 || sub_47F7B0(this, dword_B39E00) )
      {
        (*(void (__thiscall **)(float *, _DWORD))(*(_DWORD *)this + 0xE0))(this, LODWORD(a2));
        sub_70A0D0(this, a2, a3);
      }
    }
  }
}
