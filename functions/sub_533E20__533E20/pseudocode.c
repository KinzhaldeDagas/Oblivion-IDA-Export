void __thiscall sub_533E20(int this)
{
  int v2; // esi
  char *v3; // edi
  int v4; // eax

  if ( *(_BYTE *)(this + 0xC) )
  {
    v2 = dword_B34D90;
    v3 = (char *)(dword_B34D90 + 0x10);
    v4 = sub_533D30(*(_DWORD *)(this + 8), v3);
    *v3 = 0;
    *(_DWORD *)(v2 + 0xC) = v4;
    *(_DWORD *)(v2 + 8) = 0;
    *(_BYTE *)(this + 0xC) = 0;
  }
}
