// Pass223: Default NiTexturingProperty producer for global 0x00B3F974, consumed by NiPropertyState slot 6.
LONG sub_705240()
{
  NiTexturingProperty *v0; // eax
  NiTexturingProperty *v1; // esi
  LONG result; // eax
  int (__thiscall ***v3)(_DWORD, int); // edi

  v0 = (NiTexturingProperty *)FormHeapAlloc(0x30u); /*0x705265*/
  if ( v0 ) /*0x70527b*/
    v1 = NiTexturingProperty::NiTexturingProperty(v0); /*0x705284*/
  else
    v1 = 0; /*0x705288*/
  result = unk_B3F974; /*0x70528a*/
  if ( (NiTexturingProperty *)unk_B3F974 != v1 ) /*0x705299*/
  {
    if ( result ) /*0x70529d*/
    {
      v3 = (int (__thiscall ***)(_DWORD, int))unk_B3F974; /*0x70529f*/
      result = InterlockedDecrement((volatile LONG *)(result + 4)); /*0x7052a5*/
      if ( !result ) /*0x7052ad*/
        result = (**v3)(v3, 1); /*0x7052bb*/
    }
    unk_B3F974 = (int)v1; /*0x7052bf*/
    if ( v1 ) /*0x7052c5*/
      return InterlockedIncrement((volatile LONG *)&v1->super); /*0x7052cb*/
  }
  return result; /*0x7052d1*/
}
