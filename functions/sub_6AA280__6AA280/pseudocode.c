void __thiscall sub_6AA280(int this)
{
  bool v2; // zf
  int v3; // ecx
  unsigned int v4; // edx
  unsigned int v5; // eax
  _DWORD *v6; // edi
  _DWORD *v7; // ecx
  MEF_U32PointerMapEntry32 *v8; // eax
  void *valueOut; // [esp+Ch] [ebp-Ch] BYREF
  MEF_U32PointerMapEntry32 *position; // [esp+10h] [ebp-8h] BYREF
  unsigned int keyOut; // [esp+14h] [ebp-4h] BYREF

  *(_BYTE *)(this + 0xA4) = 0; /*0x6aa286*/
  v2 = bSoundEnabled_Audio == 0; /*0x6aa28d*/
  valueOut = 0; /*0x6aa294*/
  if ( !v2 ) /*0x6aa29c*/
  {
    v3 = *(_DWORD *)(this + 0x300); /*0x6aa29e*/
    v4 = *(_DWORD *)(v3 + 4); /*0x6aa2a4*/
    v5 = 0; /*0x6aa2a7*/
    if ( v4 ) /*0x6aa2ac*/
    {
      v6 = *(_DWORD **)(v3 + 8); /*0x6aa2ae*/
      v7 = v6; /*0x6aa2b1*/
      while ( !*v7 ) /*0x6aa2b6*/
      {
        ++v5; /*0x6aa2b8*/
        ++v7; /*0x6aa2bb*/
        if ( v5 >= v4 ) /*0x6aa2c0*/
          goto LABEL_6; /*0x6aa2c0*/
      }
      v8 = (MEF_U32PointerMapEntry32 *)v6[v5]; /*0x6aa319*/
    }
    else
    {
LABEL_6:
      v8 = 0; /*0x6aa2c2*/
    }
    position = v8; /*0x6aa2c6*/
    while ( position ) /*0x6aa2cb*/
    {
      NiTMap_U32Pointer_GetNextEntry(*(MEF_U32PointerMapLayout32 **)(this + 0x300), &position, &keyOut, &valueOut); /*0x6aa2e5*/
      sub_6B6F20((float *)valueOut, *((float *)valueOut + 0xF)); /*0x6aa2f5*/
    }
  }
  SoundManager_SetMusicVolume(this, *(float *)(this + 0x2F0), 1); /*0x6aa30f*/
}
