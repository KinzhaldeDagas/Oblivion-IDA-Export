char __thiscall sub_77C2A0(_DWORD *this, NiGeometry *arg0, BSShader *a2)
{
  NiAVObject *v4; // eax
  NiAVObject *v6; // eax

  if ( a2 )
    InterlockedIncrement((volatile LONG *)&a2->member);
  if ( !((unsigned __int8 (__thiscall *)(BSShader *, _DWORD))a2->__vftable->super.super.SetRenderer)(a2, *(this + 5)) )
  {
    v4 = sub_452A60((Atmosphere *)a2);
    sub_738460(1, 0, "Initialize on %s failed\n", (const char *)v4);
    if ( !InterlockedDecrement((volatile LONG *)&a2->member) )
      a2->__vftable->super.super.super.super.Destructor((NiRefObject *)a2, 1);
    return 0;
  }
  if ( (unsigned __int8)a2->__vftable->super.super.super.UpdateInternalVars((NiShader *)a2, arg0) )
  {
    sub_4EC910(arg0, a2);
    if ( !InterlockedDecrement((volatile LONG *)&a2->member) )
      a2->__vftable->super.super.super.super.Destructor((NiRefObject *)a2, 1);
    return 1;
  }
  else
  {
    v6 = sub_452A60((Atmosphere *)a2);
    sub_738460(1, 0, "SetupGeometry on %s failed\n", (const char *)v6);
    if ( InterlockedDecrement((volatile LONG *)&a2->member) )
      return 0;
    a2->__vftable->super.super.super.super.Destructor((NiRefObject *)a2, 1);
    return 0;
  }
}
