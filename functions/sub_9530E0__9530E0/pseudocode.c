int __thiscall sub_9530E0(_DWORD *this, int a2, int a3)
{
  int v3; // eax
  int v4; // eax
  int v5; // edx

  if ( a3 ) /*0x9530e7*/
  {
    if ( a3 == 1 ) /*0x9530ea*/
    {
      v3 = a2 + *(this + 2); /*0x9530ff*/
    }
    else
    {
      if ( a3 != 2 ) /*0x9530ed*/
        goto LABEL_8; /*0x9530ed*/
      v3 = *(this + 3) - a2; /*0x9530f2*/
    }
  }
  else
  {
    v3 = a2; /*0x953103*/
  }
  *(this + 2) = v3; /*0x953107*/
LABEL_8:
  v4 = *(this + 2); /*0x95310a*/
  v5 = *(this + 3); /*0x95310d*/
  if ( v4 <= v5 ) /*0x953112*/
    *(this + 3) = v5; /*0x95311c*/
  else
    *(this + 3) = v4; /*0x953114*/
  return 0; /*0x953119*/
}
