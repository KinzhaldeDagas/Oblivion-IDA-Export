LONG __thiscall sub_8827E0(BSShaderPPLightingProperty *this, BSShaderPPLightingProperty *clone, void *cloneProcess)
{
  int v4; // edi
  LONG (__stdcall *v5)(volatile LONG *); // ebp
  int v6; // eax
  LONG result; // eax
  int v8; // edi
  int v9; // esi

  BSShaderPPLightingProperty_CopyCloneMembers(this, clone, cloneProcess); /*0x8827f0*/
  v4 = *((_DWORD *)clone + 0x5A); /*0x8827f5*/
  v5 = InterlockedDecrement; /*0x882801*/
  if ( v4 != *((_DWORD *)this + 0x5A) ) /*0x882807*/
  {
    if ( v4 ) /*0x88280b*/
    {
      if ( !v5((volatile LONG *)(v4 + 4)) ) /*0x882811*/
        (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x882823*/
    }
    v6 = *((_DWORD *)this + 0x5A); /*0x882825*/
    *((_DWORD *)clone + 0x5A) = v6; /*0x88282d*/
    if ( v6 ) /*0x882833*/
      InterlockedIncrement((volatile LONG *)(v6 + 4)); /*0x882839*/
  }
  *((_DWORD *)clone + 0x56) = *((_DWORD *)this + 0x56); /*0x882845*/
  *((_DWORD *)clone + 0x57) = *((_DWORD *)this + 0x57); /*0x882851*/
  result = *((_DWORD *)this + 0x58); /*0x882857*/
  *((_DWORD *)clone + 0x58) = result; /*0x88285d*/
  *((_DWORD *)clone + 0x59) = *((_DWORD *)this + 0x59); /*0x882869*/
  v8 = *((_DWORD *)clone + 0x5B); /*0x88286f*/
  if ( v8 != *((_DWORD *)this + 0x5B) ) /*0x88287b*/
  {
    if ( v8 ) /*0x88287f*/
    {
      result = v5((volatile LONG *)(v8 + 4)); /*0x882885*/
      if ( !result ) /*0x882889*/
        result = (**(int (__thiscall ***)(int, int))v8)(v8, 1); /*0x882897*/
    }
    v9 = *((_DWORD *)this + 0x5B); /*0x882899*/
    *((_DWORD *)clone + 0x5B) = v9; /*0x8828a1*/
    if ( v9 ) /*0x8828a7*/
      return InterlockedIncrement((volatile LONG *)(v9 + 4)); /*0x8828ad*/
  }
  return result; /*0x8828b3*/
}
