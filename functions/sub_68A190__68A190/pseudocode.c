TESObjectCELL *__thiscall sub_68A190(_DWORD *this)
{
  int v1; // ecx
  void *v3; // ecx

  v1 = *(this + 1); /*0x68a190*/
  if ( !v1 ) /*0x68a195*/
    return 0; /*0x68a19c*/
  if ( *(_BYTE *)(v1 + 4) ) /*0x68b180*/
    return 0; /*0x68b180*/
  v3 = *(void **)v1; /*0x68b186*/
  if ( !v3 ) /*0x68b18a*/
    return 0; /*0x68b191*/
  return (TESObjectCELL *)Shared_GetDwordAtOffset40(v3); /*0x68a19e*/
}
