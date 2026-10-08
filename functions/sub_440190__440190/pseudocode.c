void __thiscall sub_440190(Sky **this, TESObjectCELL *a2)
{
  Sky *v3; // ecx
  bool HasFlag80; // al
  Sky *v5; // ecx

  v3 = *(this + 0x17); /*0x440193*/
  if ( v3->unk0DC ) /*0x440196*/
  {
    if ( a2 ) /*0x4401a6*/
    {
      if ( TESObjectCELL_IsInterior(a2) ) /*0x4401aa*/
      {
        HasFlag80 = TESObjectCELL_HasFlag80(a2); /*0x4401b5*/
        v5 = *(this + 0x17); /*0x4401bc*/
        if ( HasFlag80 ) /*0x4401bf*/
          Sky__SetMode(v5, 2u); /*0x4401c3*/
        else
          Sky__SetMode(v5, 1u); /*0x4401cf*/
      }
      else
      {
        Sky__SetMode(*(this + 0x17), 3u); /*0x4401de*/
      }
    }
    else
    {
      Sky__SetMode(v3, 3u); /*0x4401f2*/
    }
  }
}
