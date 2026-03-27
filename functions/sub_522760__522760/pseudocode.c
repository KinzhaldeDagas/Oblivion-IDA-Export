void *__thiscall sub_522760(_BYTE *this)
{
  bool v2; // zf
  int v3; // eax
  _BYTE *v4; // ecx
  char AVi; // al

  v2 = TESActorBase_IsFemale(this) == 1;
  v3 = *((_DWORD *)this + 0x3A);
  v4 = (_BYTE *)(v3 + 0x80);
  if ( !v2 )
    v4 = (_BYTE *)(v3 + 0x74);
  AVi = TESAttributes_GetAVi(v4, 6);
  return TESAttributes_SetAVi(this + 0x88, 6, AVi);
}
