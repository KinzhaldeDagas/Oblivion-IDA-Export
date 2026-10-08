void __thiscall sub_49CFB0(int *this)
{
  LONG (__stdcall *v2)(volatile LONG *); // ebp
  void (__thiscall ***v3)(_DWORD, int); // esi
  int v4; // esi
  int v5; // esi
  int v6; // esi
  int v7; // esi
  int v8; // esi
  int v9; // esi
  int v10; // edi

  WaterManager::Destroy_((WaterManager *)this, (int *)1); /*0x49cfe4*/
  v2 = InterlockedDecrement; /*0x49cff0*/
  if ( *(_DWORD *)&MEMORY[0xB33E90][0x13A4] ) /*0x49cfe9*/
  {
    v3 = *(void (__thiscall ****)(_DWORD, int))&MEMORY[0xB33E90][0x13A4]; /*0x49cff8*/
    if ( !v2((volatile LONG *)(*(_DWORD *)&MEMORY[0xB33E90][0x13A4] + 4)) ) /*0x49cffe*/
    {
      if ( v3 ) /*0x49d006*/
        (**v3)(v3, 1); /*0x49d010*/
    }
    *(_DWORD *)&MEMORY[0xB33E90][0x13A4] = 0; /*0x49d012*/
  }
  v4 = *(this + 0x12); /*0x49d01c*/
  if ( v4 ) /*0x49d026*/
  {
    if ( !v2((volatile LONG *)(v4 + 4)) ) /*0x49d02c*/
      (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x49d03e*/
  }
  NiTPointerList<WadingWaterData *>::~NiTPointerList<WadingWaterData *>((NiTPointerList__BSImageSpaceShader *)(this + 0xC)); /*0x49d048*/
  v5 = *(this + 5); /*0x49d04d*/
  if ( v5 ) /*0x49d057*/
  {
    if ( !v2((volatile LONG *)(v5 + 4)) ) /*0x49d05d*/
      (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x49d06f*/
  }
  v6 = *(this + 4); /*0x49d071*/
  if ( v6 ) /*0x49d07b*/
  {
    if ( !v2((volatile LONG *)(v6 + 4)) ) /*0x49d081*/
      (**(void (__thiscall ***)(int, int))v6)(v6, 1); /*0x49d093*/
  }
  v7 = *(this + 3); /*0x49d095*/
  if ( v7 ) /*0x49d09f*/
  {
    if ( !v2((volatile LONG *)(v7 + 4)) ) /*0x49d0a5*/
      (**(void (__thiscall ***)(int, int))v7)(v7, 1); /*0x49d0b7*/
  }
  v8 = *(this + 2); /*0x49d0b9*/
  if ( v8 ) /*0x49d0c3*/
  {
    if ( !v2((volatile LONG *)(v8 + 4)) ) /*0x49d0c9*/
      (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x49d0db*/
  }
  v9 = *(this + 1); /*0x49d0dd*/
  if ( v9 ) /*0x49d0e7*/
  {
    if ( !v2((volatile LONG *)(v9 + 4)) ) /*0x49d0ed*/
      (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x49d0ff*/
  }
  v10 = *this; /*0x49d101*/
  if ( v10 ) /*0x49d10d*/
  {
    if ( !v2((volatile LONG *)(v10 + 4)) ) /*0x49d113*/
      (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x49d125*/
  }
}
