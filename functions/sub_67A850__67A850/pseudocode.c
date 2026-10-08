void __thiscall sub_67A850(int *this)
{
  int *v2; // edi
  int v3; // esi
  int v4; // edi
  int *v5; // [esp-4h] [ebp-Ch]

  v2 = (int *)*(this + 1); /*0x67a854*/
  if ( v2 ) /*0x67a859*/
  {
    v5 = (int *)*(this + 1); /*0x67a85e*/
    *(this + 1) = v2[1]; /*0x67a85f*/
    OB_NiSmartPointer_Assign_010201A0(this, v5); /*0x67a862*/
    v3 = *v2; /*0x67a867*/
    if ( *v2 ) /*0x67a867*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x67a871*/
      {
        if ( v3 ) /*0x67a87d*/
          (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x67a887*/
      }
    }
    FormHeapFree((unsigned int)v2); /*0x67a88a*/
  }
  else
  {
    v4 = *this; /*0x67a895*/
    if ( *this ) /*0x67a895*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) ) /*0x67a89f*/
      {
        if ( v4 ) /*0x67a8ab*/
          (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x67a8b5*/
      }
      *this = 0; /*0x67a8b7*/
    }
  }
}
