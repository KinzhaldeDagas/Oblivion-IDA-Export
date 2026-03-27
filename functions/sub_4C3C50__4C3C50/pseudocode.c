char __thiscall sub_4C3C50(TESObjectCELL **this, float *a2)
{
  char result; // al
  _BYTE v4[24]; // [esp+4h] [ebp-50h] BYREF
  int v5; // [esp+1Ch] [ebp-38h]
  int v6; // [esp+40h] [ebp-14h]

  result = sub_4C3030(this, (int)v4, a2, 0);
  if ( result )
    return *(_BYTE *)(v6 + *(&(*(this + 9))->members.super.modlist.data->errorState + v5));
  return result;
}
