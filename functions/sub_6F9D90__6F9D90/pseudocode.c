char __thiscall sub_6F9D90(Ni2DBuffer **this)
{
  BSNodeReferences *v2; // eax
  Ni2DBuffer *v3; // eax
  char v4; // al
  int v5; // edi
  char v6; // bl

  if ( *(this + 0x122) ) /*0x6f9db6*/
  {
    v2 = (BSNodeReferences *)FormHeapAlloc(0x18u); /*0x6f9dc1*/
    if ( v2 ) /*0x6f9dd7*/
      v3 = (Ni2DBuffer *)BSNodeReferences::BSNodeReferences(v2); /*0x6f9ddb*/
    else
      v3 = 0; /*0x6f9de2*/
    NiSmartPointer_Set__(this + 0x123, v3); /*0x6f9df5*/
    sub_713E50(this, (int)*(this + 0x123)); /*0x6f9dff*/
  }
  v4 = sub_714B20((NiTStringTemplateMap<NiTPointerMap<char const *,unsigned short>,unsigned short> *)this); /*0x6f9e06*/
  v5 = (int)*(this + 0x123); /*0x6f9e0b*/
  v6 = v4; /*0x6f9e13*/
  if ( v5 ) /*0x6f9e15*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) ) /*0x6f9e1b*/
      (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x6f9e31*/
    *(this + 0x123) = 0; /*0x6f9e33*/
  }
  return v6; /*0x6f9e3f*/
}
