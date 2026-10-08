int __thiscall sub_727C80(int this, int a2, int a3)
{
  int result; // eax
  int v4; // edx

  result = a2; /*0x727c80*/
  if ( a2 || !*(_BYTE *)(this + 0xC) ) /*0x727c88*/
  {
    v4 = a3; /*0x727c95*/
  }
  else
  {
    result = *(_DWORD *)(this + 8); /*0x727c8d*/
    v4 = *(_DWORD *)(this + 4); /*0x727c90*/
  }
  if ( !*(_BYTE *)(this + 0xD) ) /*0x727c99*/
    return ((int (__thiscall *)(NiDX9Renderer *, int, int))renderer->__vftable->super.Unk_3E)(renderer, result, v4); /*0x727cb0*/
  return result; /*0x727cb3*/
}
