char __thiscall sub_4C3C50(TESObjectCELL **this, float *a2)
{
  char result; // al
  _BYTE v4[24]; // [esp+4h] [ebp-50h] BYREF
  int v5; // [esp+1Ch] [ebp-38h]
  int v6; // [esp+40h] [ebp-14h]

  result = sub_4C3030(this, (int)v4, a2, 0); /*0x4c3c64*/
  if ( result ) /*0x4c3c6b*/
    return *(_BYTE *)(v6 + *(&(*(this + 9))->members.super.modlist.data->errorState + v5)); /*0x4c3c85*/
  return result; /*0x4c3c6d*/
}
