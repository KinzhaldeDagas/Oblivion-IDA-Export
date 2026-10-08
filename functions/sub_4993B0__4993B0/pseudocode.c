void __thiscall sub_4993B0(_BYTE *this)
{
  int v2; // eax
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  int v4; // edi
  int v5; // edi
  int v6; // edi
  int v7; // esi

  if ( !*(this + 0x10) ) /*0x4993dd*/
  {
    if ( *(_DWORD *)this ) /*0x4993ea*/
    {
      v2 = *(_DWORD *)(*(_DWORD *)this + 0x58); /*0x4993f0*/
      if ( v2 ) /*0x4993f5*/
      {
        if ( !(*(int (__thiscall **)(int))(*(_DWORD *)v2 + 8))(v2) ) /*0x4993fe*/
          *(_DWORD *)(*(_DWORD *)(*(_DWORD *)this + 0x58) + 0x288) = 0; /*0x499409*/
      }
    }
  }
  v3 = InterlockedDecrement; /*0x49940f*/
  *((_DWORD *)this + 1) = 0; /*0x499415*/
  v4 = *((_DWORD *)this + 2); /*0x499418*/
  if ( v4 ) /*0x49941d*/
  {
    if ( !v3((volatile LONG *)(v4 + 4)) ) /*0x499423*/
      (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x499435*/
    *((_DWORD *)this + 2) = 0; /*0x499437*/
  }
  v5 = *((_DWORD *)this + 3); /*0x49943a*/
  if ( v5 ) /*0x49943f*/
  {
    if ( !v3((volatile LONG *)(v5 + 4)) ) /*0x499445*/
      (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x499457*/
    *((_DWORD *)this + 3) = 0; /*0x499459*/
  }
  v6 = *((_DWORD *)this + 3); /*0x49945c*/
  if ( v6 ) /*0x499465*/
  {
    if ( !v3((volatile LONG *)(v6 + 4)) ) /*0x49946b*/
      (**(void (__thiscall ***)(int, int))v6)(v6, 1); /*0x49947d*/
  }
  v7 = *((_DWORD *)this + 2); /*0x49947f*/
  if ( v7 ) /*0x49948c*/
  {
    if ( !v3((volatile LONG *)(v7 + 4)) ) /*0x499492*/
      (**(void (__thiscall ***)(int, int))v7)(v7, 1); /*0x4994a4*/
  }
}
