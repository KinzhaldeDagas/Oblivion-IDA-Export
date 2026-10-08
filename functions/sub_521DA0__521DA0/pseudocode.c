void __thiscall sub_521DA0(_DWORD *this)
{
  LONG (__stdcall *v2)(volatile LONG *); // ebp
  int v3; // esi
  int v4; // esi

  if ( !sub_45A500(g_TESSaveLoadGame) ) /*0x521da9*/
  {
    v2 = InterlockedDecrement; /*0x521db3*/
    v3 = *(this + 0x75); /*0x521dba*/
    if ( v3 ) /*0x521dc9*/
    {
      if ( !v2((volatile LONG *)(v3 + 4)) ) /*0x521dcf*/
        (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x521de1*/
      *(this + 0x75) = 0; /*0x521de3*/
    }
    OB_NiSmartPointer_Assign_010201A0(this + 0x76, this + 0x75); /*0x521df0*/
    v4 = *(this + 0x77); /*0x521df5*/
    if ( v4 ) /*0x521dfd*/
    {
      if ( !v2((volatile LONG *)(v4 + 4)) ) /*0x521e03*/
        (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x521e15*/
      *(this + 0x77) = 0; /*0x521e17*/
    }
  }
  *((_WORD *)this + 0xF0) = 0xFF; /*0x521e24*/
  j_TESForm_ClearComponentReferences((TESForm *)this); /*0x521e30*/
}
