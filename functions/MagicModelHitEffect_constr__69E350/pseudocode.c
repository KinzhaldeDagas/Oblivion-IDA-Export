NiObject *__thiscall MagicModelHitEffect_constr(NiObject *this)
{
  int v2; // edi
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  int v4; // edi

  MagicHitEffect_constr(this); /*0x69e37b*/
  this->__vftable = (NiObjectVtbl *)&MagicModelHitEffect::`vftable';// Verified (Oblivion): constructor initializes a 0x38-byte derived object. Base occupies 0x00..0x27; +0x29 is player third-person state (verified by read/write in visual placement); +0x2C is state-dependent model path/serialized payload; +0x30 is a refcounted NiAVObject model root; +0x34 remains Unknown. Fallout's MagicModelHitEffect is 0x3C and has separate pFilename/spObject/spTarget/LoadedDataSubBuffer members, so its layout cannot be copied onto Oblivion. /*0x69e382*/
  *((_DWORD *)this + 0xC) = 0; /*0x69e38c*/
  *((_DWORD *)this + 0xD) = 0; /*0x69e38f*/
  v2 = *((_DWORD *)this + 0xC); /*0x69e392*/
  v3 = InterlockedDecrement; /*0x69e397*/
  if ( v2 ) /*0x69e3a2*/
  {
    if ( !v3((volatile LONG *)(v2 + 4)) ) /*0x69e3a8*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x69e3ba*/
    *((_DWORD *)this + 0xC) = 0; /*0x69e3bc*/
  }
  v4 = *((_DWORD *)this + 0xD); /*0x69e3bf*/
  if ( v4 ) /*0x69e3c4*/
  {
    if ( !v3((volatile LONG *)(v4 + 4)) ) /*0x69e3ca*/
      (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x69e3dc*/
    *((_DWORD *)this + 0xD) = 0; /*0x69e3de*/
  }
  *((_BYTE *)this + 0x29) = 0;                  // Verified (Oblivion): derived model byte +0x29 is cleared in construction and later updated/read by model visual placement. Its precise boolean/perspective meaning is Probable. /*0x69e3e1*/
  *((_DWORD *)this + 0xB) = 0; /*0x69e3e4*/
  *((_BYTE *)this + 0x28) = 0; /*0x69e3e7*/
  return this; /*0x69e3ec*/
}
