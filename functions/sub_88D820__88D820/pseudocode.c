int __thiscall sub_88D820(hkVector4 **this, hkVector4 *a2)
{
  hkVector4 *v3; // edi
  int result; // eax
  hkVector4 v5; // xmm0

  if ( this && (v3 = *(this + 2)) != 0 )
  {
    sub_89F570(this);
    *a2 = v3[7];
    a2[1] = v3[8];
    return sub_89F570(this);
  }
  else
  {
    v5 = stru_BA7A40;
    *a2 = stru_BA7A40;
    a2[1] = v5;
  }
  return result;
}
