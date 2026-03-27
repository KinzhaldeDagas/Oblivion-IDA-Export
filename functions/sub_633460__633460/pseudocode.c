void __thiscall sub_633460(float *this)
{
  int (*v2)(void); // edx

  if ( *(this + 0x78) > 0.0 )
  {
    v2 = *(int (**)(void))(*(_DWORD *)this + 0x36C);
    *(this + 0x78) = *(this + 0x78) - flt_B33E9C;
    if ( !v2() )
      *((_WORD *)this + 0xFE) |= *((char *)this + 0x1E4);
    if ( *(this + 0x78) <= 0.0 )
      (*(void (__thiscall **)(float *, int, _DWORD))(*(_DWORD *)this + 0x2C4))(this, 0x30, 0);
  }
}
