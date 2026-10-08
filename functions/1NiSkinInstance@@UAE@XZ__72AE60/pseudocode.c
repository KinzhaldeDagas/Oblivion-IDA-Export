void __thiscall NiSkinInstance::~NiSkinInstance(NiSkinInstance *this)
{
  int v2; // edi
  LONG (__stdcall *v3)(volatile LONG *); // ebx
  int v4; // edi

  *(_DWORD *)this = &NiSkinInstance::`vftable'; /*0x72ae8a*/
  FormHeapFree(*((_DWORD *)this + 5)); /*0x72ae9c*/
  sub_701520((int)this); /*0x72aea2*/
  v2 = *((_DWORD *)this + 3); /*0x72aea7*/
  v3 = InterlockedDecrement; /*0x72aeaa*/
  if ( v2 ) /*0x72aeba*/
  {
    if ( !v3((volatile LONG *)(v2 + 4)) ) /*0x72aec0*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x72aed2*/
  }
  v4 = *((_DWORD *)this + 2); /*0x72aed4*/
  if ( v4 ) /*0x72aede*/
  {
    if ( !v3((volatile LONG *)(v4 + 4)) ) /*0x72aee4*/
      (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x72aef6*/
  }
  NiRefObject_destr(this); /*0x72af02*/
}
