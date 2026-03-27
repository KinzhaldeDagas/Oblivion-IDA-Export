int __thiscall sub_727C80(int this, int a2, int a3)
{
  int result; // eax
  int v4; // edx

  result = a2;
  if ( a2 || !*(_BYTE *)(this + 0xC) )
  {
    v4 = a3;
  }
  else
  {
    result = *(_DWORD *)(this + 8);
    v4 = *(_DWORD *)(this + 4);
  }
  if ( !*(_BYTE *)(this + 0xD) )
    return ((int (__thiscall *)(NiDX9Renderer *, int, int))g_Renderer->__vftable->super.Unk_3E)(g_Renderer, result, v4);
  return result;
}
