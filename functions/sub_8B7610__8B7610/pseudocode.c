int __thiscall sub_8B7610(NiRenderer *this, signed int a2)
{
  int v2; // edi
  int result; // eax

  v2 = a2;
  sub_8A25C0(this, a2);
  result = ((int (__thiscall *)(NiRenderer *, signed int *))this->__vftable->ValidateRenderTargetGroup)(this, &a2);
  if ( result )
    return sub_8E83B0(v2, result + 4);
  return result;
}
