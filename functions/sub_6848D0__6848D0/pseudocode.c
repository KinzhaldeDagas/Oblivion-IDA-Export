int __thiscall sub_6848D0(_DWORD *this, _OWORD *a2)
{
  _OWORD *v3; // esi
  int result; // eax

  if ( this )
  {
    v3 = (_OWORD *)*(this + 2);
    if ( v3 )
    {
      sub_89F570(this);
      *a2 = v3[7];
      a2[1] = v3[8];
      a2[2] = v3[9];
      a2[3] = v3[0xA];
      return sub_89F570(this);
    }
  }
  return result;
}
