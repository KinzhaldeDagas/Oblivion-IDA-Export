void __thiscall ExtraLight::~ExtraLight(ExtraLight *this)
{
  int *v2; // edi
  int v3; // esi

  *(_DWORD *)this = &ExtraLight::`vftable';
  v2 = *((int **)this + 3);
  if ( v2 )
  {
    v3 = *v2;
    if ( *v2 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
      {
        if ( v3 )
          (**(void (__thiscall ***)(int, int))v3)(v3, 1);
      }
    }
    FormHeapFree((unsigned int)v2);
  }
  *(_DWORD *)this = &BSExtraData::`vftable';
}
