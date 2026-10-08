void __thiscall sub_8A4070(int *this, int incoming)
{
  int v3; // ebp
  int *v4; // edi
  int v5; // eax
  bool v6; // zf
  _DWORD *v7; // eax
  int *v8[7]; // [esp-4h] [ebp-28h] BYREF
  unsigned int v9; // [esp+20h] [ebp-4h]

  v3 = incoming; /*0x8a4098*/
  v9 = 0; /*0x8a409e*/
  if ( incoming ) /*0x8a40a6*/
  {
    if ( *this ) /*0x8a40ac*/
    {
      v4 = (int *)FormHeapAlloc(8u); /*0x8a40b8*/
      v8[5] = v4; /*0x8a40bd*/
      LOBYTE(v9) = 1; /*0x8a40c3*/
      if ( v4 ) /*0x8a40c8*/
      {
        v5 = *this; /*0x8a40ca*/
        v6 = *this == 0; /*0x8a40cc*/
        v8[6] = (int *)v8; /*0x8a40d1*/
        v8[0] = (int *)v5; /*0x8a40d5*/
        if ( !v6 ) /*0x8a40d7*/
          InterlockedIncrement((volatile LONG *)(v5 + 4)); /*0x8a40dd*/
        v7 = sub_532DF0(v4, (int)v8[0]); /*0x8a40e5*/
      }
      else
      {
        v7 = 0; /*0x8a40ec*/
      }
      v7[1] = *(this + 1); /*0x8a40f5*/
      LOBYTE(v9) = 0; /*0x8a40f8*/
      *(this + 1) = (int)v7; /*0x8a40fd*/
      v8[0] = &incoming; /*0x8a4100*/
    }
    else
    {
      v8[0] = &incoming; /*0x8a4107*/
    }
    OB_NiSmartPointer_Assign_010201A0(this, v8[0]); /*0x8a410a*/
    v9 = 0xFFFFFFFF; /*0x8a4113*/
    if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x8a411b*/
      (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x8a412e*/
  }
}
