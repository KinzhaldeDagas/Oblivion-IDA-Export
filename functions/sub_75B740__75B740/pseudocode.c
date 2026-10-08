int __thiscall sub_75B740(const char **this, _DWORD **a2)
{
  NiObject *v3; // eax
  int v4; // esi
  float z; // edx

  v3 = (NiObject *)FormHeapAlloc(0x38u); /*0x75b746*/
  v4 = (int)v3; /*0x75b74b*/
  if ( v3 ) /*0x75b752*/
  {
    sub_752BF0(v3); /*0x75b756*/
    *(_DWORD *)v4 = &NiPSysBombModifier::`vftable'; /*0x75b75d*/
    *(_DWORD *)(v4 + 0x18) = 0; /*0x75b763*/
    *(float *)(v4 + 0x1C) = stru_B258D0.x; /*0x75b76f*/
    *(float *)(v4 + 0x20) = stru_B258D0.y; /*0x75b778*/
    z = stru_B258D0.z; /*0x75b77b*/
    *(float *)(v4 + 0x28) = 0.0; /*0x75b781*/
    *(float *)(v4 + 0x2C) = 0.0; /*0x75b784*/
    *(float *)(v4 + 0x24) = z; /*0x75b787*/
    *(_DWORD *)(v4 + 0x30) = 0; /*0x75b78a*/
    *(_DWORD *)(v4 + 0x34) = 0; /*0x75b791*/
  }
  else
  {
    v4 = 0; /*0x75b79a*/
  }
  sub_752C40(this, v4, a2); /*0x75b7a4*/
  *(_DWORD *)(v4 + 0x1C) = *(this + 7); /*0x75b7ac*/
  *(_DWORD *)(v4 + 0x20) = *(this + 8); /*0x75b7b2*/
  *(_DWORD *)(v4 + 0x24) = *(this + 9); /*0x75b7b8*/
  *(float *)(v4 + 0x28) = *((float *)this + 0xA); /*0x75b7be*/
  *(float *)(v4 + 0x2C) = *((float *)this + 0xB); /*0x75b7c6*/
  *(_DWORD *)(v4 + 0x30) = *(this + 0xC); /*0x75b7cc*/
  *(_DWORD *)(v4 + 0x34) = *(this + 0xD); /*0x75b7d3*/
  return v4; /*0x75b7d2*/
}
