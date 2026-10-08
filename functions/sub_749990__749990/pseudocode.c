TESForm *__thiscall sub_749990(_DWORD *this, volatile LONG *payload)
{
  int v2; // esi
  _DWORD *v4; // edi
  LONG v5; // eax
  TESForm *result; // eax

  v2 = (int)payload; /*0x749992*/
  v4 = (_DWORD *)*(this + 0x32); /*0x749999*/
  if ( v4 ) /*0x7499a1*/
  {
    do /*0x7499f2*/
    {
      if ( *(_DWORD *)(v4[2] + 0xC) > *((_DWORD *)payload + 3) ) /*0x7499ec*/
      {
        InterlockedIncrement(payload + 1); /*0x749a49*/
        NiTRefPointerList_InsertBeforePosition(this + 0x31, (int)v4, (int *)&payload); /*0x749a5b*/
        v5 = InterlockedDecrement((volatile LONG *)(v2 + 4)); /*0x749a61*/
        goto LABEL_6; /*0x749a68*/
      }
      v4 = (_DWORD *)*v4; /*0x7499ee*/
    }
    while ( v4 ); /*0x7499f2*/
    InterlockedIncrement(payload + 1); /*0x7499fc*/
    NiTRefPointerList__AddTail(this + 0x31, (int *)&payload); /*0x749a0d*/
    if ( InterlockedDecrement((volatile LONG *)(v2 + 4)) ) /*0x749a13*/
      goto LABEL_12; /*0x749a1b*/
    goto LABEL_11; /*0x749a1b*/
  }
  if ( payload ) /*0x7499a9*/
    InterlockedIncrement(payload + 1); /*0x7499af*/
  NiTRefPointerList__AddHead((MEF_RefList32 *)(this + 0x31), (void **)&payload); /*0x7499c0*/
  if ( v2 ) /*0x7499c7*/
  {
    v5 = InterlockedDecrement((volatile LONG *)(v2 + 4)); /*0x7499cd*/
LABEL_6:
    if ( !v5 ) /*0x7499d5*/
LABEL_11:
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x749a1d*/
  }
LABEL_12:
  result = sub_412D30(this + 0x35, *(_DWORD *)(v2 + 8), (TESForm *)v2); /*0x749a27*/
  *(_DWORD *)(v2 + 0x10) = this; /*0x749a38*/
  return result; /*0x749a37*/
}
