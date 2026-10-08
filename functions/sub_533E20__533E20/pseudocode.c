void __thiscall sub_533E20(int this)
{
  int v2; // esi
  char *v3; // edi
  int v4; // eax

  if ( *(_BYTE *)(this + 0xC) ) /*0x533e23*/
  {
    v2 = *(_DWORD *)&MEMORY[0xB33E90][0xF00]; /*0x533e2d*/
    v3 = (char *)(*(_DWORD *)&MEMORY[0xB33E90][0xF00] + 0x10); /*0x533e34*/
    v4 = sub_533D30(*(_DWORD *)(this + 8), v3); /*0x533e39*/
    *v3 = 0; /*0x533e41*/
    *(_DWORD *)(v2 + 0xC) = v4; /*0x533e44*/
    *(_DWORD *)(v2 + 8) = 0; /*0x533e47*/
    *(_BYTE *)(this + 0xC) = 0; /*0x533e4f*/
  }
}
