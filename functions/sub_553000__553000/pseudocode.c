void __thiscall sub_553000(char *this)
{
  _DWORD **v2; // eax
  void (__thiscall ***v3)(_DWORD, int); // ecx
  int v4; // esi
  LONG (__stdcall *v5)(volatile LONG *); // ebp
  int v6; // esi
  int v7; // esi

  v2 = (_DWORD **)g_faceGenManager; /*0x55302a*/
  if ( g_faceGenManager ) /*0x55302a*/
  {
    if ( v2[0x36B] ) /*0x55303b*/
    {
      sub_54F840(v2[0x36B]); /*0x55304a*/
      v3 = *((void (__thiscall ****)(_DWORD, int))g_faceGenManager + 0x36B); /*0x553054*/
      if ( v3 ) /*0x55305c*/
        (**v3)(v3, 1); /*0x553064*/
      *((_DWORD *)g_faceGenManager + 0x36B) = 0; /*0x55306c*/
    }
  }
  v4 = *((_DWORD *)this + 0x36E); /*0x553076*/
  v5 = InterlockedDecrement; /*0x55307e*/
  if ( v4 ) /*0x553089*/
  {
    if ( !v5((volatile LONG *)(v4 + 4)) ) /*0x55308f*/
      (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x5530a1*/
  }
  v6 = *((_DWORD *)this + 0x36D); /*0x5530a3*/
  if ( v6 ) /*0x5530b0*/
  {
    if ( !v5((volatile LONG *)(v6 + 4)) ) /*0x5530b6*/
      (**(void (__thiscall ***)(int, int))v6)(v6, 1); /*0x5530c8*/
  }
  v7 = *((_DWORD *)this + 0x36C); /*0x5530ca*/
  if ( v7 ) /*0x5530d7*/
  {
    if ( !v5((volatile LONG *)(v7 + 4)) ) /*0x5530dd*/
      (**(void (__thiscall ***)(int, int))v7)(v7, 1); /*0x5530ef*/
  }
  sub_551FE0(this + 0xC8); /*0x5530fc*/
  _LN21(this + 0x88, 0x10u, 4, (void (__thiscall *)(void *))sub_552E50); /*0x553116*/
  sub_552F40(this); /*0x553125*/
}
