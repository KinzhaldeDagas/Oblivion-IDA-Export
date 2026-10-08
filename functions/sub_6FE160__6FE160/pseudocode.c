void __thiscall sub_6FE160(unsigned __int16 *this, _DWORD *a2)
{
  unsigned int v3; // eax
  unsigned int v4; // esi
  unsigned int v5; // esi
  unsigned int v6; // ebx
  int v7; // esi
  int v8; // eax

  nullsub_returnvVoid_1arg((int)a2); /*0x6fe16a*/
  v3 = sub_7124D0(a2); /*0x6fe171*/
  v4 = v3; /*0x6fe176*/
  if ( v3 ) /*0x6fe17a*/
  {
    NiTArray_SetSize(this + 4, v3); /*0x6fe180*/
    v5 = v4 >> 1; /*0x6fe185*/
    if ( v5 ) /*0x6fe187*/
    {
      v6 = v5; /*0x6fe189*/
      do /*0x6fe1ba*/
      {
        v7 = sub_7124A0(a2); /*0x6fe199*/
        v8 = sub_7124A0(a2); /*0x6fe19b*/
        if ( v7 ) /*0x6fe1a2*/
        {
          if ( v8 ) /*0x6fe1a6*/
            (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v7 + 0x84))(v7, v8, 0); /*0x6fe1b5*/
        }
        --v6; /*0x6fe1b7*/
      }
      while ( v6 ); /*0x6fe1ba*/
    }
  }
}
