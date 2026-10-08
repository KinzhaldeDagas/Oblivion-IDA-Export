// Queued file/tree child cancel/update helper: forwards a2 to children in slot +0x1C before generic IO cleanup.
char __thiscall sub_434C60(int *this, int a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  unsigned int i; // esi
  int v6; // ecx

  v3 = *(this + 7); /*0x434c68*/
  if ( v3 ) /*0x434c6d*/
  {
    v4 = *(unsigned __int16 *)(v3 + 0xA); /*0x434c70*/
    for ( i = 0; i < v4; ++i ) /*0x434c70*/
    {
      v6 = *(_DWORD *)(*(_DWORD *)(*(this + 7) + 4) + 4 * i); /*0x434c86*/
      if ( v6 ) /*0x434c8b*/
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 0x1C))(v6, a2); /*0x434c93*/
    }
  }
  return sub_432820(MEMORY[0xB33A10], this, a2); /*0x434cab*/
}
