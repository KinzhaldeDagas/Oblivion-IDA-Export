void __thiscall sub_684830(int **this)
{
  int v2; // eax
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  NiAVObject *v4; // esi
  void (__thiscall ***v5)(_DWORD, int); // edi
  int v6; // esi
  int *v7; // ecx
  int v8; // [esp+8h] [ebp-4h] BYREF

  v2 = (int)*(this + 0xA); /*0x684834*/
  if ( v2 ) /*0x684839*/
  {
    v3 = InterlockedDecrement; /*0x684840*/
    v4 = *(NiAVObject **)(v2 + 0x1C); /*0x684847*/
    if ( v4 ) /*0x68484c*/
    {
      ((void (__thiscall *)(NiAVObject *, int *, int))v4->vtbl[1].super.GetType)(v4, &v8, v2); /*0x68485e*/
      if ( v8 ) /*0x684866*/
      {
        v5 = (void (__thiscall ***)(_DWORD, int))v8; /*0x684869*/
        if ( !v3((volatile LONG *)(v8 + 4)) ) /*0x68486f*/
          (**v5)(v5, 1); /*0x684881*/
      }
      NiAVObject_InitializePropertyState(v4); /*0x684886*/
    }
    v6 = (int)*(this + 0xA); /*0x68488b*/
    if ( v6 ) /*0x684890*/
    {
      if ( !v3((volatile LONG *)(v6 + 4)) ) /*0x684896*/
        (**(void (__thiscall ***)(int, int))v6)(v6, 1); /*0x6848a8*/
      *(this + 0xA) = 0; /*0x6848aa*/
    }
    v7 = *(this + 0xC); /*0x6848b1*/
    if ( v7 ) /*0x6848b8*/
      sub_680E20(v7, 0); /*0x6848bc*/
  }
}
