void __thiscall sub_4102C0(float *this)
{
  if ( *(_DWORD *)this )
    BinkClose(*(_DWORD *)this);
  if ( *((_DWORD *)this + 2) )
    sub_410110(*((_DWORD **)this + 2));
  *this = 0.0;
  *(this + 5) = 1.0;
  *(this + 1) = 0.0;
  *(this + 2) = 0.0;
  *(this + 6) = 0.0;
  *(this + 3) = 0.0;
  *(this + 4) = 0.0;
  *(this + 7) = 0.0;
  *(this + 8) = 0.0;
  *((_BYTE *)this + 0x24) = 0;
}
