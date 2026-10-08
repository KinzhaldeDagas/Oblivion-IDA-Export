int __thiscall sub_629EE0(HighProcess *this, int a2)
{
  int result; // eax
  int v4; // ecx

  this->Unk_30(this, 1); /*0x629eee*/
  result = ((int (__thiscall *)(HighProcess *, int))this->Unk_2D)(this, a2); /*0x629eff*/
  if ( a2 ) /*0x629f03*/
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x380))(a2); /*0x629f0f*/
    if ( result ) /*0x629f13*/
    {
      v4 = *(_DWORD *)(result + 0x58); /*0x629f15*/
      if ( v4 ) /*0x629f1a*/
        return (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 0x194))(v4, result); /*0x629f2a*/
    }
  }
  return result; /*0x629f1f*/
}
