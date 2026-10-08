void __thiscall NiBoolData::NiBoolData(NiBoolData *this, int a2, int a3, int a4)
{
  _DWORD **v5; // edi
  NiObject *v6; // eax
  NiObject *v7; // esi
  _DWORD *v8; // ecx

  if ( a4 ) /*0x74fa1a*/
  {
    v5 = (_DWORD **)((char *)this + 0x10); /*0x74fa20*/
    if ( !*((_DWORD *)this + 4) ) /*0x74fa1c*/
    {
      v6 = (NiObject *)FormHeapAlloc(0x18u); /*0x74fa28*/
      v7 = v6; /*0x74fa2d*/
      if ( v6 ) /*0x74fa34*/
      {
        NiObject_constr(v6); /*0x74fa38*/
        v7->__vftable = (NiObjectVtbl *)&NiBoolData::`vftable'; /*0x74fa3d*/
        v7[1].__vftable = 0; /*0x74fa43*/
        v7[1].members.m_uiRefCount = 0; /*0x74fa46*/
        v7[2].__vftable = 0; /*0x74fa49*/
        LOBYTE(v7[2].members.m_uiRefCount) = 0; /*0x74fa4c*/
      }
      else
      {
        v7 = 0; /*0x74fa51*/
      }
      NiSmartPointer_Set__((Ni2DBuffer **)this + 4, (Ni2DBuffer *)v7); /*0x74fa56*/
    }
    sub_6E88C0(*v5, a2, a4, a3); /*0x74fa6d*/
    *((_DWORD *)this + 5) = 0; /*0x74fa73*/
  }
  else
  {
    v8 = *((_DWORD **)this + 4); /*0x74fa7b*/
    if ( v8 ) /*0x74fa80*/
      sub_6E88C0(v8, 0, 0, 0); /*0x74fa85*/
  }
}
