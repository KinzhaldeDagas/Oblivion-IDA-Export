void __thiscall sub_8C5340(void *this, int a2)
{
  hkPackedNiTriStripsShape *v3; // eax
  hkPackedNiTriStripsShape *v4; // esi

  if ( a2 )
  {
    v3 = (hkPackedNiTriStripsShape *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(
                                       dword_BA7D98,
                                       0x40,
                                       0x24);
    *((_WORD *)v3 + 2) = 0x40;
    v4 = hkPackedNiTriStripsShape::hkPackedNiTriStripsShape(v3, a2);
    (*(void (__thiscall **)(void *, hkPackedNiTriStripsShape *))(*(_DWORD *)this + 0x4C))(this, v4);
    if ( *((_WORD *)v4 + 2) )
    {
      if ( !--*((_WORD *)v4 + 3) )
        (**(void (__thiscall ***)(hkPackedNiTriStripsShape *, int))v4)(v4, 1);
    }
    (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 0x7C))(this, a2);
  }
}
