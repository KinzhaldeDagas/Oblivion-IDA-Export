signed int __thiscall ActiveEffect_Base_IsBoundObjWearable(_DWORD *this)
{
  int v1; // eax
  char v2; // al

  v1 = *(this + 0xC); /*0x68d9f0*/
  if ( v1 && ((v2 = *(_BYTE *)(v1 + 4), v2 == 0x14) || v2 == 0x16) ) /*0x68da00*/
    return ActiveEffect_Base_IsBoundObjWearable_::Return_true(); /*0x68da01*/
  else
    return ActiveEffect_Base_IsBoundObjWearable_::Return_false(); /*0x68d9f5*/
}
