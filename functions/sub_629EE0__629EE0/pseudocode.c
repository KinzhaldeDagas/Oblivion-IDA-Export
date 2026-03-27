int __thiscall sub_629EE0(HighProcess *this, int a2)
{
  int result; // eax
  int v4; // ecx

  this->Unk_30(this, 1);
  result = ((int (__thiscall *)(HighProcess *, int))this->Unk_2D)(this, a2);
  if ( a2 )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x380))(a2);
    if ( result )
    {
      v4 = *(_DWORD *)(result + 0x58);
      if ( v4 )
        return (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 0x194))(v4, result);
    }
  }
  return result;
}
