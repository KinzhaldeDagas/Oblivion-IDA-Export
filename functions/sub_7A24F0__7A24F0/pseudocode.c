void __thiscall sub_7A24F0(_DWORD *this, int a2)
{
  double v3; // st7

  if ( a2 )
  {
    if ( a2 != 1 )
      *(this + 0x12) = a2;
  }
  else
  {
    sub_78EA30(0xFFFFFFFF);
    v3 = sub_78EA00(fConstant_2, flt_A8C690);
    *(this + 0x12) = Double_To_SInt32(v3);
  }
}
