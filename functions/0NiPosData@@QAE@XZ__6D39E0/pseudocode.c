void __thiscall NiPosData::NiPosData(NiPosData *this, int a2, int a3, int a4)
{
  int *v5; // edi
  NiObject *v6; // eax
  NiObject *v7; // esi
  int v8; // ecx

  if ( a3 )
  {
    v5 = (int *)((char *)this + 0x18);
    if ( !*((_DWORD *)this + 6) )
    {
      v6 = (NiObject *)FormHeapAlloc(0x18u);
      v7 = v6;
      if ( v6 )
      {
        NiObject_constr(v6);
        v7->__vftable = (NiObjectVtbl *)&NiPosData::`vftable';
        v7[1].__vftable = 0;
        v7[1].members.m_uiRefCount = 0;
        v7[2].__vftable = 0;
        LOBYTE(v7[2].members.m_uiRefCount) = 0;
      }
      else
      {
        v7 = 0;
      }
      NiSmartPointer_Set__((Ni2DBuffer **)this + 6, (Ni2DBuffer *)v7);
    }
    sub_6D9D00(*v5, a2, a3, a4);
    *((_DWORD *)this + 7) = 0;
  }
  else
  {
    v8 = *((_DWORD *)this + 6);
    if ( v8 )
      sub_6D9D00(v8, 0, 0, 0);
  }
}
