int __cdecl sub_4A2BA0(int a1, int a2)
{
  int v2; // ebx
  unsigned int i; // edi
  int v5; // esi
  int v6; // eax
  int v7; // eax

  v2 = 0; /*0x4a2ba6*/
  if ( !a1 ) /*0x4a2baa*/
    return 0; /*0x4a2bad*/
  for ( i = 0; *(unsigned __int16 *)(a1 + 0xB6) > i; ++i ) /*0x4a2bb1*/
  {
    v5 = *(_DWORD *)(*(_DWORD *)(a1 + 0xB0) + 4 * i); /*0x4a2bca*/
    if ( v5 ) /*0x4a2bcf*/
    {
      v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 0xC))(v5); /*0x4a2bd8*/
      if ( v6 ) /*0x4a2bdc*/
      {
        if ( (_BYTE)a2 || (*(_BYTE *)(v6 + 0x18) & 1) == 0 ) /*0x4a2be9*/
          v2 += *(unsigned __int16 *)(*(_DWORD *)(v6 + 0xB4) + 8); /*0x4a2bf5*/
      }
      else
      {
        v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 8))(v5); /*0x4a2c05*/
        v2 += sub_4A2BA0(v7, a2); /*0x4a2c10*/
      }
    }
  }
  return v2; /*0x4a2bac*/
}
