void __thiscall sub_956B20(int *this, float a2)
{
  int v2; // edx
  int v3; // esi
  int v4; // esi
  int v5; // esi
  int v6; // esi
  int v7; // esi

  v2 = *this - 1; /*0x956b22*/
  if ( *this < 4 ) /*0x956b2c*/
  {
LABEL_11:
    while ( v2 >= 0 ) /*0x956bf6*/
    {
      v7 = *(this + 2) + 4 * v2; /*0x956bfb*/
      if ( !*(_DWORD *)v7 ) /*0x956bfe*/
        break; /*0x956c02*/
      if ( *(float *)(*(_DWORD *)v7 + 0xC) >= (double)a2 ) /*0x956c10*/
        break; /*0x956c10*/
      *(this + 3) = *(_DWORD *)v7; /*0x956c14*/
      *(_DWORD *)v7 = 0; /*0x956c17*/
      --v2; /*0x956c20*/
      --*this; /*0x956c21*/
    }
  }
  else
  {
    while ( 1 ) /*0x956b35*/
    {
      v3 = *(this + 2) + 4 * v2; /*0x956b35*/
      if ( !*(_DWORD *)v3 ) /*0x956b38*/
        break; /*0x956b38*/
      if ( *(float *)(*(_DWORD *)v3 + 0xC) >= (double)a2 ) /*0x956b4e*/
        break; /*0x956b4e*/
      *(this + 3) = *(_DWORD *)v3; /*0x956b56*/
      *(_DWORD *)v3 = 0; /*0x956b59*/
      --*this; /*0x956b5f*/
      v4 = *(this + 2) + 4 * v2 - 4; /*0x956b64*/
      if ( !*(_DWORD *)v4 ) /*0x956b68*/
        break; /*0x956b68*/
      if ( *(float *)(*(_DWORD *)v4 + 0xC) >= (double)a2 ) /*0x956b7e*/
        break; /*0x956b7e*/
      *(this + 3) = *(_DWORD *)v4; /*0x956b86*/
      *(_DWORD *)v4 = 0; /*0x956b89*/
      --*this; /*0x956b8f*/
      v5 = *(this + 2) + 4 * v2 - 8; /*0x956b94*/
      if ( !*(_DWORD *)v5 ) /*0x956b98*/
        break; /*0x956b98*/
      if ( *(float *)(*(_DWORD *)v5 + 0xC) >= (double)a2 ) /*0x956bae*/
        break; /*0x956bae*/
      *(this + 3) = *(_DWORD *)v5; /*0x956bb2*/
      *(_DWORD *)v5 = 0; /*0x956bb5*/
      --*this; /*0x956bbb*/
      v6 = *(this + 2) + 4 * v2 - 0xC; /*0x956bc0*/
      if ( !*(_DWORD *)v6 || *(float *)(*(_DWORD *)v6 + 0xC) >= (double)a2 ) /*0x956bd6*/
        break; /*0x956bd6*/
      *(this + 3) = *(_DWORD *)v6; /*0x956bda*/
      *(_DWORD *)v6 = 0; /*0x956bdd*/
      v2 -= 4; /*0x956be6*/
      --*this; /*0x956bec*/
      if ( v2 < 3 ) /*0x956bee*/
        goto LABEL_11; /*0x956bee*/
    }
  }
}
