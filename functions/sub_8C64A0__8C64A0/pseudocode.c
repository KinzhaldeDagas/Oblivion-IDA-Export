void __thiscall sub_8C64A0(void *this, int a2)
{
  FreeEntry *v3; // eax
  unsigned __int8 v4; // cl
  hkNiTriStripsShape *v5; // eax
  hkNiTriStripsShape *v6; // esi
  int v7; // [esp+0h] [ebp-1Ch]

  if ( a2 ) /*0x8c64cb*/
  {
    v3 = j_MemoryHeap_Alloc(&FormHeap, a2, 0x100000050uLL, v7); /*0x8c64d6*/
    v4 = 0x10 - ((unsigned __int8)v3 & 0xF); /*0x8c64e2*/
    v5 = (hkNiTriStripsShape *)((char *)v3 + v4); /*0x8c64e7*/
    *((_BYTE *)v5 + 0xFFFFFFFF) = v4; /*0x8c64e9*/
    v6 = hkNiTriStripsShape::hkNiTriStripsShape(v5, a2); /*0x8c6500*/
    (*(void (__thiscall **)(void *, hkNiTriStripsShape *))(*(_DWORD *)this + 0x4C))(this, v6); /*0x8c6512*/
    if ( *((_WORD *)v6 + 2) ) /*0x8c6514*/
    {
      if ( !--*((_WORD *)v6 + 3) ) /*0x8c6520*/
        (**(void (__thiscall ***)(hkNiTriStripsShape *, int))v6)(v6, 1); /*0x8c6531*/
    }
    (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 0x7C))(this, a2); /*0x8c653b*/
  }
}
