void __thiscall ExtraLight::~ExtraLight(ExtraLight *this)
{
  int *v2; // edi
  int v3; // esi

  *(_DWORD *)this = &ExtraLight::`vftable'; /*0x42b17a*/
  v2 = *((int **)this + 3); /*0x42b180*/
  if ( v2 ) /*0x42b18d*/
  {
    v3 = *v2; /*0x42b18f*/
    if ( *v2 ) /*0x42b18f*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x42b199*/
      {
        if ( v3 ) /*0x42b1a5*/
          (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x42b1af*/
      }
    }
    FormHeapFree((unsigned int)v2); /*0x42b1b2*/
  }
  *(_DWORD *)this = &BSExtraData::`vftable'; /*0x42b1ba*/
}
