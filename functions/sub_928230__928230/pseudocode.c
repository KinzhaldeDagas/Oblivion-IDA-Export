int __thiscall sub_928230(_WORD *this)
{
  int result; // eax

  result = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x18, 0x29); /*0x92823f*/
  *(_WORD *)(result + 4) = 0x18; /*0x928242*/
  *(_WORD *)(result + 6) = 1; /*0x928248*/
  *(_DWORD *)result = &off_AA1948; /*0x92824e*/
  *(_DWORD *)(result + 0x10) = 0x49742400; /*0x928254*/
  *(_DWORD *)(result + 0x14) = 0xC9742400; /*0x92825b*/
  *(_DWORD *)(result + 8) = 0; /*0x928264*/
  *(_DWORD *)(result + 0xC) = 0; /*0x928267*/
  *(_WORD *)(result + 4) = *(this + 2); /*0x92826e*/
  *(_WORD *)(result + 6) = *(this + 3); /*0x928276*/
  *(_DWORD *)(result + 8) = *((_DWORD *)this + 2); /*0x92827d*/
  *(_DWORD *)(result + 0xC) = *((_DWORD *)this + 3); /*0x928283*/
  *(_DWORD *)(result + 0x10) = *((_DWORD *)this + 4); /*0x928289*/
  *(_DWORD *)(result + 0x14) = *((_DWORD *)this + 5); /*0x92828f*/
  return result; /*0x928292*/
}
