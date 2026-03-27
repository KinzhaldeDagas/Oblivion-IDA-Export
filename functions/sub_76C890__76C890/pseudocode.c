NiD3DPass **__thiscall sub_76C890(NiD3DPass **this, int *a2)
{
  NiD3DPass *v3; // ecx
  bool v4; // zf
  int v5; // eax

  v3 = *this;
  if ( v3 != (NiD3DPass *)*a2 )
  {
    if ( v3 )
    {
      v4 = v3->RefCount-- == 1;
      if ( v4 )
        sub_7604D0(v3);
    }
    v5 = *a2;
    v4 = *a2 == 0;
    *this = (NiD3DPass *)*a2;
    if ( !v4 )
      ++*(_DWORD *)(v5 + 0x60);
  }
  return this;
}
