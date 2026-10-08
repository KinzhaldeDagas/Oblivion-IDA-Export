void __thiscall sub_531E90(int *this, int *a2)
{
  int v3; // ecx
  int v4; // ebx
  int v5; // eax
  int v6; // ecx
  int v7; // esi
  int v8; // eax

  v3 = *this; /*0x531e93*/
  if ( v3 ) /*0x531e9c*/
  {
    (*(void (__thiscall **)(int, int *))(*(_DWORD *)v3 + 0x5C))(v3, a2); /*0x531ea4*/
    if ( a2 ) /*0x531ea8*/
    {
      v4 = *this; /*0x531eab*/
      v5 = sub_8AEB80(0xFFu, 0x2Eu, 0x2Eu, 0x19u); /*0x531eb8*/
      sub_88BB60(a2, v4, v5); /*0x531ec4*/
    }
  }
  v6 = *(this + 1); /*0x531eca*/
  if ( v6 ) /*0x531ecf*/
  {
    (*(void (__thiscall **)(int, int *))(*(_DWORD *)v6 + 0x5C))(v6, a2); /*0x531ed7*/
    if ( a2 ) /*0x531edb*/
    {
      v7 = *(this + 1); /*0x531edd*/
      v8 = sub_8AEB80(0xFFu, 0x2Eu, 0x2Eu, 0x19u); /*0x531eeb*/
      sub_88BB60(a2, v7, v8); /*0x531ef7*/
    }
  }
}
