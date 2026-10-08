void __thiscall sub_8C5340(void *this, int a2)
{
  hkPackedNiTriStripsShape *v3; // eax
  hkPackedNiTriStripsShape *v4; // esi

  if ( a2 ) /*0x8c536b*/
  {
    v3 = (hkPackedNiTriStripsShape *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))( /*0x8c537c*/
                                       unk_BA7D98,
                                       0x40,
                                       0x24);
    *((_WORD *)v3 + 2) = 0x40; /*0x8c537e*/
    v4 = hkPackedNiTriStripsShape::hkPackedNiTriStripsShape(v3, a2); /*0x8c5398*/
    (*(void (__thiscall **)(void *, hkPackedNiTriStripsShape *))(*(_DWORD *)this + 0x4C))(this, v4); /*0x8c53aa*/
    if ( *((_WORD *)v4 + 2) ) /*0x8c53ac*/
    {
      if ( !--*((_WORD *)v4 + 3) ) /*0x8c53b8*/
        (**(void (__thiscall ***)(hkPackedNiTriStripsShape *, int))v4)(v4, 1); /*0x8c53c9*/
    }
    (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 0x7C))(this, a2); /*0x8c53d3*/
  }
}
