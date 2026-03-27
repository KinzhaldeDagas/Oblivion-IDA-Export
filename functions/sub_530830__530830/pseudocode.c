char __thiscall sub_530830(int this, _BYTE *a2, int a3, Actor *a4, TESObjectREFR *a5)
{
  unsigned __int8 **v7; // ecx
  int v8; // eax

  if ( (*(_DWORD *)(this + 8) & 0x20) != 0 || !a3 || (*(_BYTE *)(this + 0x25) & 4) != 0 && *(_BYTE *)(this + 0x22) )
    return 0;
  v7 = (unsigned __int8 **)(a3 + 0x50);
  if ( !*(_DWORD *)(a3 + 0x54) && !*v7 )
    return sub_56A510((unsigned __int8 **)(this + 0x18), a4, a5, a2, 0);
  v8 = this + 0x18;
  if ( *(_DWORD *)(v8 + 4) || *(_DWORD *)v8 )
    return sub_56A510(v7, a4, a5, a2, (unsigned __int8 **)v8);
  else
    return sub_56A510(v7, a4, a5, a2, 0);
}
