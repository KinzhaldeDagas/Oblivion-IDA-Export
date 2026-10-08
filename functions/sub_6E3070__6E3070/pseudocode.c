NiObject *__thiscall sub_6E3070(_DWORD *this, int a2)
{
  NiObject *v3; // eax

  v3 = (NiObject *)FormHeapAlloc(0x18u); /*0x6e3098*/
  if ( v3 ) /*0x6e30ae*/
    return sub_6D29E0(v3, *(float *)(*(this + 0x11) + 0xC)); /*0x6e30c4*/
  else
    return 0; /*0x6e30dc*/
}
