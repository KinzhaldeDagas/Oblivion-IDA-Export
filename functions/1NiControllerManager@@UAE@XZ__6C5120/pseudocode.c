void __thiscall NiControllerManager::~NiControllerManager(NiControllerManager *this)
{
  _DWORD *v2; // edi
  int v3; // ebp
  char *v4; // eax
  unsigned int v5; // ebp
  char *v6; // eax
  unsigned int v7; // edi

  *(_DWORD *)this = &NiControllerManager::`vftable'; /*0x6c514a*/
  v2 = (_DWORD *)((char *)this + 0x3C); /*0x6c5150*/
  sub_739670((_WORD *)this + 0x1E); /*0x6c515d*/
  *((_DWORD *)this + 0x1E) = 0; /*0x6c5162*/
  v3 = *((_DWORD *)this + 0x1F); /*0x6c5169*/
  if ( v3 ) /*0x6c5173*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x6c5179*/
      (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x6c5190*/
  }
  v4 = *((char **)this + 0x1C); /*0x6c5192*/
  if ( v4 ) /*0x6c519c*/
  {
    v5 = (unsigned int)(v4 + 0xFFFFFFFC); /*0x6c51a1*/
    _LN21(v4, 4u, *((_DWORD *)v4 + 0xFFFFFFFF), (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x6c51ad*/
    FormHeapFree(v5); /*0x6c51b3*/
  }
  NiTStringPointerMap<NiControllerSequence *>::~NiTStringPointerMap<NiControllerSequence *>((_DWORD *)this + 0x16); /*0x6c51c3*/
  FormHeapFree(*((_DWORD *)this + 0x13)); /*0x6c51cc*/
  v6 = (char *)v2[1]; /*0x6c51d1*/
  *v2 = &NiTArray<NiPointer<NiControllerSequence>>::`vftable'; /*0x6c51de*/
  if ( v6 ) /*0x6c51e4*/
  {
    v7 = (unsigned int)(v6 + 0xFFFFFFFC); /*0x6c51e9*/
    _LN21(v6, 4u, *((_DWORD *)v6 + 0xFFFFFFFF), (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x6c51f5*/
    FormHeapFree(v7); /*0x6c51fb*/
  }
  NiPSysResetOnLoopCtlr::~NiPSysResetOnLoopCtlr(this); /*0x6c520d*/
}
