void __thiscall sub_6D3830(Ni2DBuffer **this, int a2, int a3, int a4)
{
  int *v5; // edi
  NiObject *v6; // eax
  NiObject *v7; // esi
  int v8; // ecx

  if ( a3 )
  {
    v5 = (int *)(this + 4);
    if ( !*(this + 4) )
    {
      v6 = (NiObject *)FormHeapAlloc(0x18u);
      v7 = v6;
      if ( v6 )
      {
        NiObject_constr(v6);
        v7->__vftable = (NiObjectVtbl *)&NiFloatData::`vftable';
        v7[1].__vftable = 0;
        v7[1].members.m_uiRefCount = 0;
        v7[2].__vftable = 0;
        LOBYTE(v7[2].members.m_uiRefCount) = 0;
      }
      else
      {
        v7 = 0;
      }
      NiSmartPointer_Set__(this + 4, (Ni2DBuffer *)v7);
    }
    sub_6E33B0(*v5, a2, a3, a4);
    *(this + 5) = 0;
  }
  else
  {
    v8 = (int)*(this + 4);
    if ( v8 )
      sub_6E33B0(v8, 0, 0, 0);
  }
}
