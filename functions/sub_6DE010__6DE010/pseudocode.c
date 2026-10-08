void __thiscall sub_6DE010(Ni2DBuffer **this, int a2, int a3, int a4)
{
  Ni2DBuffer **v5; // edi
  NiObject *v6; // eax
  NiObject *v7; // esi
  _DWORD *v8; // ecx

  if ( a3 ) /*0x6de03d*/
  {
    v5 = this + 4; /*0x6de042*/
    if ( !*(this + 4) ) /*0x6de03f*/
    {
      v6 = (NiObject *)FormHeapAlloc(0x18u); /*0x6de049*/
      v7 = v6; /*0x6de04e*/
      if ( v6 ) /*0x6de05d*/
      {
        NiObject_constr(v6); /*0x6de061*/
        v7->__vftable = (NiObjectVtbl *)&NiFloatData::`vftable'; /*0x6de066*/
        v7[1].__vftable = 0; /*0x6de06c*/
        v7[1].members.m_uiRefCount = 0; /*0x6de06f*/
        v7[2].__vftable = 0; /*0x6de072*/
        LOBYTE(v7[2].members.m_uiRefCount) = 0; /*0x6de075*/
      }
      else
      {
        v7 = 0; /*0x6de07a*/
      }
      NiSmartPointer_Set__(this + 4, (Ni2DBuffer *)v7); /*0x6de087*/
    }
    sub_6E3540(*v5, a2, a3, a4); /*0x6de09d*/
    *(this + 5) = 0; /*0x6de0a2*/
  }
  else
  {
    v8 = *(this + 4); /*0x6de0a7*/
    if ( v8 ) /*0x6de0ac*/
      sub_6E3540(v8, 0, 0, 0); /*0x6de0b1*/
  }
}
