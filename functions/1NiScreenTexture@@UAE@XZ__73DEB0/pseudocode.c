void __thiscall NiScreenTexture::~NiScreenTexture(NiScreenTexture *this)
{
  int v2; // edi

  *(_DWORD *)this = &NiScreenTexture::`vftable';
  sub_7014E0((int)this);
  v2 = *((_DWORD *)this + 5);
  if ( v2 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
  }
  FormHeapFree(*((_DWORD *)this + 2));
  NiRefObject_destr(this);
}
