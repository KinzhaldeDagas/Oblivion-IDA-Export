NiAVObject *__thiscall sub_749F90(NiGeometry *this, volatile LONG *a2)
{
  NiAVObject *v3; // eax
  NiAVObject *v4; // esi

  v3 = (NiAVObject *)FormHeapAlloc(0xF0u); /*0x749f99*/
  if ( v3 ) /*0x749fa3*/
  {
    v4 = sub_749EE0(v3); /*0x749fac*/
    sub_749A70(this, (int)v4, a2); /*0x749fb6*/
    return v4; /*0x749fbc*/
  }
  else
  {
    sub_749A70(this, 0, a2); /*0x749fcc*/
    return 0; /*0x749fd2*/
  }
}
