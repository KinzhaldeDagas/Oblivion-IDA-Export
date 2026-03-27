char __thiscall sub_42C360(unsigned int *this, unsigned int a2, int a3)
{
  int v3; // esi
  unsigned int v4; // edx
  unsigned int v5; // eax
  unsigned int v6; // eax

  v3 = *(this + 0x52);
  if ( a3 == 1 )
  {
    v4 = *(this + 0x54);
    *(this + 0x52) = v3 + a2;
    if ( v3 + a2 <= v4 )
      goto LABEL_12;
    goto LABEL_11;
  }
  v4 = a2;
  if ( a3 != 2 )
  {
    if ( a2 > *(this + 0x54) )
      v4 = *(this + 0x54);
LABEL_11:
    *(this + 0x52) = v4;
    goto LABEL_12;
  }
  if ( (int)a2 < 0 )
    v4 = -a2;
  v5 = *(this + 0x54);
  if ( v4 > v5 )
    v4 = *(this + 0x54);
  *(this + 0x52) = v5 - v4;
LABEL_12:
  *(this + 5) += *(this + 0x52) - v3;
  v6 = *(this + 5);
  if ( v6 > *(this + 4) )
    LOBYTE(v6) = NiFile_Flush((int)this);
  return v6;
}
