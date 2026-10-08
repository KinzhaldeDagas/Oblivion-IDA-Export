int __thiscall sub_6AB850(_DWORD *this, int a2)
{
  _DWORD *v2; // ecx
  _DWORD **v4; // [esp+0h] [ebp-4h] BYREF

  v4 = (_DWORD **)this; /*0x6ab850*/
  if ( bSoundEnabled_Audio ) /*0x6ab851*/
  {
    v2 = (_DWORD *)*(this + 0xC0); /*0x6ab85e*/
    v4 = 0; /*0x6ab869*/
    NiTMap_GetAt(v2, a2, &v4); /*0x6ab871*/
    if ( v4 ) /*0x6ab87b*/
      sub_6B6AA0(v4); /*0x6ab87d*/
  }
  return 0; /*0x6ab885*/
}
