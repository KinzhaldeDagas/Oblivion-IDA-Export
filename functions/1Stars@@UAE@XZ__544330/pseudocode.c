void __thiscall Stars::~Stars(SkyObject *this)
{
  int v2; // esi
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  int v4; // esi

  this->vtbl = (SkyObjectVtbl *)&Stars::`vftable'; /*0x54435a*/
  v2 = *((_DWORD *)this + 2); /*0x544360*/
  v3 = InterlockedDecrement; /*0x544365*/
  if ( v2 ) /*0x544373*/
  {
    if ( !v3((volatile LONG *)(v2 + 4)) ) /*0x544379*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x54438b*/
    *((_DWORD *)this + 2) = 0; /*0x54438d*/
  }
  v4 = *((_DWORD *)this + 2); /*0x544394*/
  if ( v4 ) /*0x54439e*/
  {
    if ( !v3((volatile LONG *)(v4 + 4)) ) /*0x5443a4*/
      (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x5443b6*/
  }
  SkyObject::~SkyObject(this); /*0x5443c2*/
}
