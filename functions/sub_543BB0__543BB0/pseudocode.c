void __thiscall sub_543BB0(volatile LONG *this, volatile LONG *a2)
{
  unsigned int v3; // eax

  v3 = *((_DWORD *)this + 0x37);
  if ( (v3 < 2 || v3 == 4) && (a2 == (volatile LONG *)3 || a2 == (volatile LONG *)2) )
  {
    sub_543510(this);
  }
  else if ( (v3 == 3 || v3 == 2) && (unsigned int)a2 <= 1 )
  {
    sub_542B50(this, a2, this);
    *((_DWORD *)this + 0x37) = a2;
    return;
  }
  *((_DWORD *)this + 0x37) = a2;
}
