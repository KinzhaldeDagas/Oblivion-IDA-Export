void __thiscall NiPixelData::~NiPixelData(NiPixelData *this)
{
  int v2; // edi
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  int v4; // edi

  *(_DWORD *)this = &NiPixelData::`vftable'; /*0x70e7da*/
  v2 = *((_DWORD *)this + 0x13); /*0x70e7e0*/
  v3 = InterlockedDecrement; /*0x70e7e5*/
  if ( v2 ) /*0x70e7f3*/
  {
    if ( !v3((volatile LONG *)(v2 + 4)) ) /*0x70e7f9*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x70e80b*/
    *((_DWORD *)this + 0x13) = 0; /*0x70e80d*/
  }
  sub_7322D0((unsigned int *)this); /*0x70e816*/
  v4 = *((_DWORD *)this + 0x13); /*0x70e81b*/
  if ( v4 ) /*0x70e825*/
  {
    if ( !v3((volatile LONG *)(v4 + 4)) ) /*0x70e82b*/
      (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x70e83d*/
  }
  NiRefObject_destr(this); /*0x70e849*/
}
