char __thiscall sub_8A6410(int this)
{
  int v1; // eax
  int v2; // ecx

  v1 = *(_DWORD *)(this + 0x54);
  if ( (!v1 || !*(_BYTE *)(v1 + 0x28)) && !*(_BYTE *)(this + 0x91) )
  {
    v2 = *(_DWORD *)(this + 8);
    if ( v2 )
      LOBYTE(v1) = sub_8CBC00(v2, v1);
  }
  return v1;
}
