void __thiscall sub_8A14F0(_DWORD *this, int a2)
{
  int v3; // ecx
  int v4; // ebx
  int i; // esi
  int v6; // eax
  int v7; // eax
  int v8; // ecx

  if ( this && (v3 = *(this + 2)) != 0 ) /*0x8a14fe*/
    v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 0x1C))(v3); /*0x8a1507*/
  else
    v4 = 0; /*0x8a150b*/
  for ( i = 0; i < v4; ++i ) /*0x8a1511*/
  {
    if ( this && (v6 = *(this + 2)) != 0 && (v7 = *(_DWORD *)(*(_DWORD *)(v6 + 0x10) + 8 * i)) != 0 ) /*0x8a152b*/
      v8 = *(_DWORD *)(v7 + 8); /*0x8a152d*/
    else
      v8 = 0; /*0x8a1532*/
    if ( v8 ) /*0x8a1536*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v8 + 0x90))(v8, a2); /*0x8a1541*/
  }
}
