void __thiscall NiScreenPolygon::~NiScreenPolygon(NiScreenPolygon *this)
{
  int v2; // edi

  *(_DWORD *)this = &NiScreenPolygon::`vftable'; /*0x738f99*/
  FormHeapFree(*((_DWORD *)this + 4)); /*0x738fab*/
  FormHeapFree(*((_DWORD *)this + 5)); /*0x738fb4*/
  FormHeapFree(*((_DWORD *)this + 6)); /*0x738fbd*/
  v2 = *((_DWORD *)this + 2); /*0x738fc2*/
  if ( v2 ) /*0x738fca*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) ) /*0x738fd0*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x738fe6*/
  }
  NiRefObject_destr(this); /*0x738ff2*/
}
