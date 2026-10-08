int *__thiscall sub_557470(int *this, int *a2)
{
  int v4; // ebp
  unsigned int v5; // ecx
  int v7; // edi
  unsigned int v8; // eax
  int v9; // eax
  int v10; // edx
  unsigned int v11; // eax
  int v12; // ecx
  int v13; // eax
  unsigned int v14; // eax
  int v15; // [esp+Ch] [ebp+4h]

  if ( this == a2 ) /*0x55747a*/
    return this; /*0x55747a*/
  v4 = a2[1]; /*0x557481*/
  if ( !v4 || (v5 = (a2[2] - v4) / 6) == 0 ) /*0x55749b*/
  {
    sub_556E30(this); /*0x55749f*/
    return this; /*0x5574a9*/
  }
  v7 = *(this + 1); /*0x5574ad*/
  if ( v7 ) /*0x5574b2*/
    v8 = (*(this + 2) - v7) / 6; /*0x5574c9*/
  else
    v8 = 0; /*0x5574b4*/
  if ( v5 > v8 ) /*0x5574cd*/
  {
    if ( v7 ) /*0x557537*/
      v11 = (*(this + 3) - v7) / 6; /*0x55754e*/
    else
      v11 = 0; /*0x557539*/
    if ( v5 > v11 ) /*0x557552*/
    {
      if ( v7 ) /*0x55757c*/
        FormHeapFree(*(this + 1)); /*0x55757f*/
      v14 = sub_54F700(a2); /*0x557589*/
      if ( !sub_5571B0(this, v14) ) /*0x557598*/
        return this; /*0x557598*/
      v12 = *(this + 1); /*0x55759a*/
      v13 = a2[1]; /*0x55759d*/
    }
    else
    {
      v15 = v4 + 6 * sub_54F700(this); /*0x557565*/
      sub_556C70(v4, v15, v7); /*0x557569*/
      v12 = *(this + 2); /*0x55756e*/
      v13 = v15; /*0x557571*/
    }
    *(this + 2) = sub_6F0130(v13, a2[2], v12); /*0x5575ad*/
    return this; /*0x5575b2*/
  }
  sub_556780(v4, a2[2], v7); /*0x5574e9*/
  v9 = a2[1]; /*0x5574ee*/
  if ( v9 ) /*0x5574f6*/
    v10 = *(this + 1) + 6 * ((a2[2] - v9) / 6); /*0x557527*/
  else
    v10 = *(this + 1); /*0x5574ff*/
  *(this + 2) = v10; /*0x557503*/
  return this; /*0x5574a7*/
}
