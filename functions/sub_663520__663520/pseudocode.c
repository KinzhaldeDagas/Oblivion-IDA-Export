void __thiscall sub_663520(LONG this, int a2)
{
  UInt32 *v3; // ecx
  int *v4; // ecx
  _DWORD **sound; // ecx
  unsigned int v6; // edi

  v3 = *(UInt32 **)(this + 0x764); /*0x663524*/
  if ( v3 ) /*0x66352c*/
  {
    if ( SoundHandle::IsPlaying(v3) ) /*0x66352e*/
      sub_6B7240(*(int **)(this + 0x764)); /*0x66353d*/
  }
  v4 = *(int **)(this + 0x764); /*0x663542*/
  if ( v4 && a2 == *(_DWORD *)(this + 0x760) && sub_6B73A0(v4) ) /*0x663558*/
  {
    sound = (_DWORD **)MEMORY[0xB33398]->sound; /*0x663566*/
    if ( sound ) /*0x66356b*/
      sub_6AC3E0(sound, **(_DWORD **)(this + 0x764), this); /*0x663577*/
    sub_6B7190(*(int **)(this + 0x764), 0); /*0x663584*/
  }
  else
  {
    v6 = *(_DWORD *)(this + 0x764); /*0x66358f*/
    if ( v6 ) /*0x663597*/
    {
      sub_6B73E0(*(_DWORD **)(this + 0x764)); /*0x66359b*/
      FormHeapFree(v6); /*0x6635a1*/
      *(_DWORD *)(this + 0x764) = 0; /*0x6635a9*/
      *(_DWORD *)(this + 0x760) = 0; /*0x6635b3*/
    }
    *(_DWORD *)(this + 0x760) = a2; /*0x6635c6*/
    *(_DWORD *)(this + 0x764) = sub_65AC50((_DWORD *)this, a2, 0, 2, 1); /*0x6635d2*/
  }
}
