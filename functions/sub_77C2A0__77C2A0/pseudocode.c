char __thiscall sub_77C2A0(_DWORD *this, NiGeometry *arg0, Atmosphere *a2)
{
  NiAVObject *PointerAtOffset08; // eax
  NiAVObject *v6; // eax

  if ( a2 ) /*0x77c2aa*/
    InterlockedIncrement((volatile LONG *)&a2->super); /*0x77c2b0*/
  if ( !((unsigned __int8 (__thiscall *)(Atmosphere *, _DWORD))a2->__vftbl[3].GetObjectNode)(a2, *(this + 5)) ) /*0x77c2c1*/
  {
    PointerAtOffset08 = Shared_GetPointerAtOffset08(a2); /*0x77c2c9*/
    sub_738460(1, 0, "Initialize on %s failed\n", (const char *)PointerAtOffset08); /*0x77c2d8*/
    if ( !InterlockedDecrement((volatile LONG *)&a2->super) ) /*0x77c2e4*/
      ((void (__thiscall *)(Atmosphere *, int))a2->__vftbl->GetObjectNode)(a2, 1); /*0x77c2f6*/
    return 0; /*0x77c2f6*/
  }
  if ( ((unsigned __int8 (__thiscall *)(Atmosphere *, NiGeometry *))a2->__vftbl[2].GetObjectNode)(a2, arg0) ) /*0x77c309*/
  {
    NiGeometry_SetShader(arg0, (BSShader *)a2); /*0x77c34a*/
    if ( !InterlockedDecrement((volatile LONG *)&a2->super) ) /*0x77c353*/
      ((void (__thiscall *)(Atmosphere *, int))a2->__vftbl->GetObjectNode)(a2, 1); /*0x77c365*/
    return 1; /*0x77c368*/
  }
  else
  {
    v6 = Shared_GetPointerAtOffset08(a2); /*0x77c311*/
    sub_738460(1, 0, "SetupGeometry on %s failed\n", (const char *)v6); /*0x77c320*/
    if ( InterlockedDecrement((volatile LONG *)&a2->super) ) /*0x77c32c*/
      return 0; /*0x77c2fc*/
    ((void (__thiscall *)(Atmosphere *, int))a2->__vftbl->GetObjectNode)(a2, 1); /*0x77c33e*/
    return 0; /*0x77c341*/
  }
}
