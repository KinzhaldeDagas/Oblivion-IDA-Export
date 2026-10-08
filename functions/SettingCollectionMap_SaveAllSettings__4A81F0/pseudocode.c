char __thiscall SettingCollectionMap_SaveAllSettings(_DWORD *this)
{
  char v2; // bl
  unsigned int v3; // edx
  unsigned int v4; // eax
  _DWORD *v5; // ecx
  MEF_U32PointerMapEntry32 *v6; // eax
  MEF_U32PointerMapEntry32 *position; // [esp+8h] [ebp-Ch] BYREF
  void *valueOut; // [esp+Ch] [ebp-8h] BYREF
  unsigned int keyOut; // [esp+10h] [ebp-4h] BYREF

  v2 = *(this + 0x42) != 0; /*0x4a81fe*/
  if ( !*(this + 0x42) ) /*0x4a81f7*/
    return 0; /*0x4a8282*/
  v3 = *(this + 0x44); /*0x4a8205*/
  v4 = 0; /*0x4a8213*/
  if ( v3 ) /*0x4a8217*/
  {
    v5 = (_DWORD *)*(this + 0x45); /*0x4a821c*/
    while ( !*v5 ) /*0x4a8223*/
    {
      ++v4; /*0x4a8225*/
      ++v5; /*0x4a8228*/
      if ( v4 >= v3 ) /*0x4a822d*/
        goto LABEL_6; /*0x4a822d*/
    }
    v6 = *(MEF_U32PointerMapEntry32 **)(*(this + 0x45) + 4 * v4); /*0x4a827b*/
  }
  else
  {
LABEL_6:
    v6 = 0; /*0x4a822f*/
  }
  position = v6; /*0x4a8233*/
  while ( position ) /*0x4a8237*/
  {
    NiTMap_U32Pointer_GetNextEntry((MEF_U32PointerMapLayout32 *)(this + 0x43), &position, &keyOut, &valueOut); /*0x4a8251*/
    if ( valueOut ) /*0x4a825c*/
      v2 &= (*(int (__thiscall **)(_DWORD *, void *))(*this + 0xC))(this, valueOut); /*0x4a8268*/
  }
  return v2; /*0x4a8273*/
}
