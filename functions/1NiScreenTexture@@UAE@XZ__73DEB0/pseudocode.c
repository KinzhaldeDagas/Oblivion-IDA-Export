// Pass225: NiScreenTexture destructor asks renderer to purge +0x1C buffer cache, then releases +0x14 texturing property and record array.
void __thiscall NiScreenTexture::~NiScreenTexture(NiScreenTexture *this)
{
  int v2; // edi

  *(_DWORD *)this = &NiScreenTexture::`vftable'; /*0x73ded9*/
  sub_7014E0((int)this); /*0x73dee8*/
  v2 = *((_DWORD *)this + 5); /*0x73deed*/
  if ( v2 ) /*0x73defa*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) ) /*0x73df00*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x73df16*/
  }
  FormHeapFree(*((_DWORD *)this + 2)); /*0x73df1c*/
  NiRefObject_destr(this); /*0x73df2e*/
}
