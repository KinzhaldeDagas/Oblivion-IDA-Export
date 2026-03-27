void __thiscall NiBoolData::NiBoolData(NiBoolData *this, int a2, int a3, int a4)
{
  _DWORD **v5; // edi
  NiObject *v6; // eax
  NiObject *v7; // esi
  _DWORD *v8; // ecx

  if ( a4 )
  {
    v5 = (_DWORD **)((char *)this + 0x10);
    if ( !*((_DWORD *)this + 4) )
    {
      v6 = (NiObject *)FormHeapAlloc(0x18u);
      v7 = v6;
      if ( v6 )
      {
        NiObject_constr(v6);
        v7->__vftable = (NiObjectVtbl *)&NiBoolData::`vftable';
        v7[1].__vftable = 0;
        v7[1].members.m_uiRefCount = 0;
        v7[2].__vftable = 0;
        LOBYTE(v7[2].members.m_uiRefCount) = 0;
      }
      else
      {
        v7 = 0;
      }
      NiSmartPointer_Set__((Ni2DBuffer **)this + 4, (Ni2DBuffer *)v7);
    }
    sub_6E88C0(*v5, a2, a4, a3);
    *((_DWORD *)this + 5) = 0;
  }
  else
  {
    v8 = *((_DWORD **)this + 4);
    if ( v8 )
      sub_6E88C0(v8, 0, 0, 0);
  }
}
