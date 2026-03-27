signed int __thiscall ActiveEffect_Base_IsBoundObjWearable(_DWORD *this)
{
  int v1; // eax
  char v2; // al

  v1 = *(this + 0xC);
  if ( v1 && ((v2 = *(_BYTE *)(v1 + 4), v2 == 0x14) || v2 == 0x16) )
    return ActiveEffect_Base_IsBoundObjWearable_::Return_true();
  else
    return ActiveEffect_Base_IsBoundObjWearable_::Return_false();
}
