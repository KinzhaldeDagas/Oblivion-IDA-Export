void __thiscall NiSkinData::~NiSkinData(NiSkinData *this)
{
  int v2; // edi

  *(_DWORD *)this = &NiSkinData::`vftable'; /*0x72f1a9*/
  sub_72EFB0(this); /*0x72f1b7*/
  FormHeapFree(*((_DWORD *)this + 0x11)); /*0x72f1c0*/
  v2 = *((_DWORD *)this + 2); /*0x72f1c5*/
  if ( v2 ) /*0x72f1cd*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) ) /*0x72f1d3*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x72f1e9*/
  }
  NiRefObject_destr(this); /*0x72f1f5*/
}
