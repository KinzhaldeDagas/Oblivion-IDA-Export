void __thiscall sub_754AC0(NiTriBasedGeomData *this, _DWORD **a2)
{
  _DWORD **v2; // edi
  int v4; // eax
  _DWORD **v5; // ebx

  v2 = a2; /*0x754ac3*/
  sub_75EDA0(this, a2); /*0x754aca*/
  NiTMap_GetAt(*v2, (int)this, &a2); /*0x754ad7*/
  v4 = *(_DWORD *)&this->members.super.format; /*0x754adc*/
  v5 = a2; /*0x754ae1*/
  if ( v4 ) /*0x754ae5*/
  {
    if ( NiTMap_GetAt(*v2, v4, &a2) ) /*0x754aef*/
      v5[0xB] = a2; /*0x754afe*/
    else
      v5[0xB] = *(_DWORD **)&this->members.super.format; /*0x754b08*/
  }
}
