char __thiscall sub_71ACE0(int this, int a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(*(_DWORD *)(a2 + 0xAC) + 8); /*0x71acec*/
  if ( (*(_BYTE *)(v2 + 0x18) & 1) == 0 /*0x71ad18*/
    || *(_BYTE *)(this + 0x34) && (*(_WORD *)(v2 + 0x18) & 0x2000) != 0
    || (*(_BYTE *)(a2 + 0x18) & 0x40) != 0 )
  {
    (*(void (__stdcall **)(NiDX9Renderer *))(*(_DWORD *)a2 + 0x84))(renderer); /*0x71ad36*/
    return 0; /*0x71ad38*/
  }
  else
  {
    NiTPointerList__AddTail((BSTextureManager *)(this + 0xC), (void **)&a2); /*0x71ad22*/
    return 1; /*0x71ad27*/
  }
}
