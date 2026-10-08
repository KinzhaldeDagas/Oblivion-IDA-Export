void __thiscall NiPathInterpolator::~NiPathInterpolator(NiPathInterpolator *this)
{
  int v2; // edi
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  int v4; // edi
  int v5; // edi
  int v6; // edi

  *(_DWORD *)this = &NiPathInterpolator::`vftable'; /*0x6dacaa*/
  v2 = *((_DWORD *)this + 6); /*0x6dacb0*/
  v3 = InterlockedDecrement; /*0x6dacb5*/
  if ( v2 ) /*0x6dacc3*/
  {
    if ( !v3((volatile LONG *)(v2 + 4)) ) /*0x6dacc9*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x6dacdb*/
    *((_DWORD *)this + 6) = 0; /*0x6dacdd*/
  }
  v4 = *((_DWORD *)this + 7); /*0x6dace4*/
  if ( v4 ) /*0x6dace9*/
  {
    if ( !v3((volatile LONG *)(v4 + 4)) ) /*0x6dacef*/
      (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x6dad01*/
    *((_DWORD *)this + 7) = 0; /*0x6dad03*/
  }
  FormHeapFree(*((_DWORD *)this + 8)); /*0x6dad0e*/
  v5 = *((_DWORD *)this + 7); /*0x6dad13*/
  if ( v5 ) /*0x6dad20*/
  {
    if ( !v3((volatile LONG *)(v5 + 4)) ) /*0x6dad26*/
      (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x6dad38*/
  }
  v6 = *((_DWORD *)this + 6); /*0x6dad3a*/
  if ( v6 ) /*0x6dad44*/
  {
    if ( !v3((volatile LONG *)(v6 + 4)) ) /*0x6dad4a*/
      (**(void (__thiscall ***)(int, int))v6)(v6, 1); /*0x6dad5c*/
  }
  sub_6EC250(this); /*0x6dad68*/
}
