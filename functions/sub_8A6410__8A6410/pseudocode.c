char __thiscall sub_8A6410(int this)
{
  int v1; // eax
  int v2; // ecx

  v1 = *(_DWORD *)(this + 0x54); /*0x8a6410*/
  if ( (!v1 || !*(_BYTE *)(v1 + 0x28)) && !*(_BYTE *)(this + 0x91) ) /*0x8a641e*/
  {
    v2 = *(_DWORD *)(this + 8); /*0x8a6428*/
    if ( v2 ) /*0x8a642d*/
      LOBYTE(v1) = sub_8CBC00(v2, v1); /*0x8a6431*/
  }
  return v1; /*0x8a6439*/
}
