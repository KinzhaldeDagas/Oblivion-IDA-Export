char __thiscall SettingCollectionMap_LoadAllSettings(_DWORD *this)
{
  char v2; // bl
  unsigned int v3; // edx
  unsigned int v4; // eax
  _DWORD *v5; // ecx
  MEF_U32PointerMapEntry32 *v6; // eax
  MEF_U32PointerMapEntry32 *position; // [esp+8h] [ebp-Ch] BYREF
  void *valueOut; // [esp+Ch] [ebp-8h] BYREF
  unsigned int keyOut; // [esp+10h] [ebp-4h] BYREF

  v2 = *(this + 0x42) != 0; /*0x4a829e*/
  if ( !*(this + 0x42) ) /*0x4a8297*/
    return 0; /*0x4a8322*/
  v3 = *(this + 0x44); /*0x4a82a5*/
  v4 = 0; /*0x4a82b3*/
  if ( v3 ) /*0x4a82b7*/
  {
    v5 = (_DWORD *)*(this + 0x45); /*0x4a82bc*/
    while ( !*v5 ) /*0x4a82c3*/
    {
      ++v4; /*0x4a82c5*/
      ++v5; /*0x4a82c8*/
      if ( v4 >= v3 ) /*0x4a82cd*/
        goto LABEL_6; /*0x4a82cd*/
    }
    v6 = *(MEF_U32PointerMapEntry32 **)(*(this + 0x45) + 4 * v4); /*0x4a831b*/
  }
  else
  {
LABEL_6:
    v6 = 0; /*0x4a82cf*/
  }
  position = v6; /*0x4a82d3*/
  while ( position ) /*0x4a82d7*/
  {
    NiTMap_U32Pointer_GetNextEntry((MEF_U32PointerMapLayout32 *)(this + 0x43), &position, &keyOut, &valueOut); /*0x4a82f1*/
    if ( valueOut ) /*0x4a82fc*/
      v2 &= (*(int (__thiscall **)(_DWORD *, void *))(*this + 0x10))(this, valueOut); /*0x4a8308*/
  }
  return v2; /*0x4a8313*/
}
