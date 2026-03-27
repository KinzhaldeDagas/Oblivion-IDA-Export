int __thiscall sub_8B9AE0(NiRenderer *this, unsigned int *a2)
{
  unsigned int *v2; // edi
  int result; // eax

  v2 = a2;
  sub_712A20(a2);
  sub_89D650(this, (signed int)v2);
  result = ((int (__thiscall *)(NiRenderer *, unsigned int **))this->__vftable->ValidateRenderTargetGroup)(this, &a2);
  if ( result )
    *(_DWORD *)(result + 0x48) = 0;
  return result;
}
