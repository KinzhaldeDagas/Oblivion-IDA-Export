int __thiscall sub_77F840(_DWORD *this, int a2)
{
  int v3; // edi
  int result; // eax

  *(this + 0x3FF) = a2;
  if ( a2 )
  {
    v3 = *(_DWORD *)(a2 + 0x280);
    result = *(this + 0x3FE);
    if ( result )
      result = (*(int (__stdcall **)(_DWORD))(*(_DWORD *)result + 8))(*(this + 0x3FE));
    *(this + 0x3FE) = v3;
    if ( v3 )
      return (*(int (__stdcall **)(int))(*(_DWORD *)v3 + 4))(v3);
  }
  else
  {
    result = *(this + 0x3FE);
    if ( result )
      result = (*(int (__stdcall **)(_DWORD))(*(_DWORD *)result + 8))(*(this + 0x3FE));
    *(this + 0x3FE) = 0;
  }
  return result;
}
