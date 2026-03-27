int __thiscall sub_782BF0(_DWORD *this, int a2)
{
  int v3; // edi
  int v4; // eax
  int result; // eax

  *(this + 8) = a2;
  if ( a2 )
  {
    v3 = *(_DWORD *)(a2 + 0x280);
    v4 = *(this + 7);
    if ( v4 )
      (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v4 + 8))(*(this + 7));
    *(this + 7) = v3;
    if ( v3 )
      (*(void (__stdcall **)(int))(*(_DWORD *)v3 + 4))(v3);
    result = *(_DWORD *)(*(this + 8) + 0x8AC);
    *(this + 9) = result;
  }
  else
  {
    result = *(this + 7);
    *(this + 9) = 0;
    if ( result )
      result = (*(int (__stdcall **)(int))(*(_DWORD *)result + 8))(result);
    *(this + 7) = 0;
  }
  return result;
}
