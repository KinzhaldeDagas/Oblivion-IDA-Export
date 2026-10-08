void __thiscall sub_6D3830(Ni2DBuffer **this, int a2, int a3, int a4)
{
  int *v5; // edi
  NiObject *v6; // eax
  NiObject *v7; // esi
  int v8; // ecx

  if ( a3 ) /*0x6d385d*/
  {
    v5 = (int *)(this + 4); /*0x6d3862*/
    if ( !*(this + 4) ) /*0x6d385f*/
    {
      v6 = (NiObject *)FormHeapAlloc(0x18u); /*0x6d3869*/
      v7 = v6; /*0x6d386e*/
      if ( v6 ) /*0x6d387d*/
      {
        NiObject_constr(v6); /*0x6d3881*/
        v7->__vftable = (NiObjectVtbl *)&NiFloatData::`vftable'; /*0x6d3886*/
        v7[1].__vftable = 0; /*0x6d388c*/
        v7[1].members.m_uiRefCount = 0; /*0x6d388f*/
        v7[2].__vftable = 0; /*0x6d3892*/
        LOBYTE(v7[2].members.m_uiRefCount) = 0; /*0x6d3895*/
      }
      else
      {
        v7 = 0; /*0x6d389a*/
      }
      NiSmartPointer_Set__(this + 4, (Ni2DBuffer *)v7); /*0x6d38a7*/
    }
    sub_6E33B0(*v5, a2, a3, a4); /*0x6d38bd*/
    *(this + 5) = 0; /*0x6d38c2*/
  }
  else
  {
    v8 = (int)*(this + 4); /*0x6d38c7*/
    if ( v8 ) /*0x6d38cc*/
      sub_6E33B0(v8, 0, 0, 0); /*0x6d38d1*/
  }
}
