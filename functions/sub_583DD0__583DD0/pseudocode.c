void __thiscall sub_583DD0(_DWORD *this, int a2)
{
  double v3; // st7

  *(this + 3) = a2 - 5;
  if ( a2 - 5 < 0 )
  {
    v3 = sub_57D7A0();
    *(this + 3) = Double_To_SInt32(v3);
  }
}
