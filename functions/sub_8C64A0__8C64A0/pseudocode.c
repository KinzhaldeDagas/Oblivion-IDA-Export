void __thiscall sub_8C64A0(void *this, int a2)
{
  FreeEntry *v3; // eax
  unsigned __int8 v4; // cl
  hkNiTriStripsShape *v5; // eax
  hkNiTriStripsShape *v6; // esi
  int v7; // [esp+0h] [ebp-1Ch]

  if ( a2 )
  {
    v3 = j_MemoryHeap_Alloc(&FormHeap, a2, 0x100000050uLL, v7);
    v4 = 0x10 - ((unsigned __int8)v3 & 0xF);
    v5 = (hkNiTriStripsShape *)((char *)v3 + v4);
    *((_BYTE *)v5 + 0xFFFFFFFF) = v4;
    v6 = hkNiTriStripsShape::hkNiTriStripsShape(v5, a2);
    (*(void (__thiscall **)(void *, hkNiTriStripsShape *))(*(_DWORD *)this + 0x4C))(this, v6);
    if ( *((_WORD *)v6 + 2) )
    {
      if ( !--*((_WORD *)v6 + 3) )
        (**(void (__thiscall ***)(hkNiTriStripsShape *, int))v6)(v6, 1);
    }
    (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 0x7C))(this, a2);
  }
}
