int __thiscall sub_5BE6F0(signed int *this, HINSTANCE hinstDLL, float fdwReason, void *a4)
{
  int v4; // eax
  HINSTANCE hinstDLLa; // [esp+4h] [ebp+4h]
  DWORD fdwReasona; // [esp+8h] [ebp+8h]

  *(float *)&fdwReasona = fdwReason - (double)*(this + 0x39);
  sub_98598A(this);
  v4 = Double_To_SInt32(*(float *)&fdwReasona * dbl_A30DC8);
  hinstDLLa = (HINSTANCE)v4;
  if ( v4 < 1 )
    v4 = Double_To_SInt32((double)v4 + dbl_A56CA0);
  if ( (unsigned int)(v4 - 0x2D) > 0x10D )
    return DllMain(hinstDLLa, fdwReasona, a4);
  if ( v4 >= 0x87 )
    return v4 >= 0xE1 ? 0 : 3;
  return 2;
}
