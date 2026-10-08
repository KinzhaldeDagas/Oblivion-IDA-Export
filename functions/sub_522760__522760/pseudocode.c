void *__thiscall sub_522760(_BYTE *this)
{
  bool v2; // zf
  int v3; // eax
  _BYTE *v4; // ecx
  char AVi; // al

  v2 = TESActorBase_IsFemale(this) == 1; /*0x522768*/
  v3 = *((_DWORD *)this + 0x3A); /*0x52276b*/
  v4 = (_BYTE *)(v3 + 0x80); /*0x522773*/
  if ( !v2 ) /*0x522779*/
    v4 = (_BYTE *)(v3 + 0x74); /*0x52277b*/
  AVi = TESAttributes_GetAVi(v4, 6); /*0x52277e*/
  return TESAttributes_SetAVi(this + 0x88, 6, AVi); /*0x522794*/
}
