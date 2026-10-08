NiObject *__thiscall sub_6E4140(_DWORD *this, int a2)
{
  NiObject *v3; // eax

  v3 = (NiObject *)FormHeapAlloc(0x24u); /*0x6e4166*/
  if ( v3 ) /*0x6e417c*/
    return sub_6E38D0( /*0x6e41a2*/
             v3,
             *(_DWORD *)(*(this + 0x11) + 0xC),
             *(_DWORD *)(*(this + 0x11) + 0x10),
             *(_DWORD *)(*(this + 0x11) + 0x14),
             *(_DWORD *)(*(this + 0x11) + 0x18));
  else
    return 0; /*0x6e41ba*/
}
