int __thiscall sub_727C40(int this, int a2, int a3)
{
  int result; // eax
  int v4; // edx

  result = a2; /*0x727c40*/
  if ( a2 || !*(_BYTE *)(this + 0xC) ) /*0x727c48*/
  {
    v4 = a3; /*0x727c55*/
  }
  else
  {
    result = *(_DWORD *)(this + 8); /*0x727c4d*/
    v4 = *(_DWORD *)(this + 4); /*0x727c50*/
  }
  if ( !*(_BYTE *)(this + 0xD) ) /*0x727c59*/
    return ((int (__thiscall *)(NiDX9Renderer *, int, int))renderer->__vftable->super.Unk_3D)(renderer, result, v4); /*0x727c70*/
  return result; /*0x727c73*/
}
