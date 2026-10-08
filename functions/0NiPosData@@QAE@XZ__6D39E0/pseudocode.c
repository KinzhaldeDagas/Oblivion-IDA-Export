void __thiscall NiPosData::NiPosData(NiPosData *this, int a2, int a3, int a4)
{
  int *v5; // edi
  NiObject *v6; // eax
  NiObject *v7; // esi
  int v8; // ecx

  if ( a3 ) /*0x6d3a0d*/
  {
    v5 = (int *)((char *)this + 0x18); /*0x6d3a12*/
    if ( !*((_DWORD *)this + 6) ) /*0x6d3a0f*/
    {
      v6 = (NiObject *)FormHeapAlloc(0x18u); /*0x6d3a19*/
      v7 = v6; /*0x6d3a1e*/
      if ( v6 ) /*0x6d3a2d*/
      {
        NiObject_constr(v6); /*0x6d3a31*/
        v7->__vftable = (NiObjectVtbl *)&NiPosData::`vftable'; /*0x6d3a36*/
        v7[1].__vftable = 0; /*0x6d3a3c*/
        v7[1].members.m_uiRefCount = 0; /*0x6d3a3f*/
        v7[2].__vftable = 0; /*0x6d3a42*/
        LOBYTE(v7[2].members.m_uiRefCount) = 0; /*0x6d3a45*/
      }
      else
      {
        v7 = 0; /*0x6d3a4a*/
      }
      NiSmartPointer_Set__((Ni2DBuffer **)this + 6, (Ni2DBuffer *)v7); /*0x6d3a57*/
    }
    sub_6D9D00(*v5, a2, a3, a4); /*0x6d3a6d*/
    *((_DWORD *)this + 7) = 0; /*0x6d3a72*/
  }
  else
  {
    v8 = *((_DWORD *)this + 6); /*0x6d3a77*/
    if ( v8 ) /*0x6d3a7c*/
      sub_6D9D00(v8, 0, 0, 0); /*0x6d3a81*/
  }
}
