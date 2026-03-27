void __thiscall NiSkinData::~NiSkinData(NiSkinData *this)
{
  int v2; // edi

  *(_DWORD *)this = &NiSkinData::`vftable';
  sub_72EFB0(this);
  FormHeapFree(*((_DWORD *)this + 0x11));
  v2 = *((_DWORD *)this + 2);
  if ( v2 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
  }
  NiRefObject_destr(this);
}
