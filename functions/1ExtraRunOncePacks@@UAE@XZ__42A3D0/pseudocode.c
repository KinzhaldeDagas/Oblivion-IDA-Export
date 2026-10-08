void __thiscall ExtraRunOncePacks::~ExtraRunOncePacks(ExtraRunOncePacks *this)
{
  unsigned int *v2; // esi
  _DWORD *v3; // esi
  int v4; // edi

  v2 = *((unsigned int **)this + 3); /*0x42a3d4*/
  for ( *(_DWORD *)this = &ExtraRunOncePacks::`vftable'; v2; v2 = (unsigned int *)v2[1] ) /*0x42a3df*/
  {
    if ( !*v2 ) /*0x42a3e1*/
      break; /*0x42a3e5*/
    FormHeapFree(*v2); /*0x42a3e8*/
  }
  v3 = *((_DWORD **)this + 3); /*0x42a3f7*/
  if ( v3[1] ) /*0x42a3fa*/
  {
    do /*0x42a415*/
    {
      v4 = *(_DWORD *)(v3[1] + 4); /*0x42a404*/
      FormHeapFree(v3[1]); /*0x42a408*/
      v3[1] = v4; /*0x42a412*/
    }
    while ( v4 ); /*0x42a415*/
  }
  *v3 = 0; /*0x42a418*/
  FormHeapFree(*((_DWORD *)this + 3)); /*0x42a422*/
  *(_DWORD *)this = &BSExtraData::`vftable'; /*0x42a42b*/
}
