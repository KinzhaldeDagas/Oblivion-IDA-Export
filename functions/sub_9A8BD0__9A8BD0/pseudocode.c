int __thiscall sub_9A8BD0(_DWORD *this, int a2)
{
  int v3; // edi
  int v4; // eax
  int result; // eax

  *(this + 0xB) = a2;
  if ( a2 )
  {
    v3 = *(_DWORD *)(a2 + 0x280);
    v4 = *(this + 0xA);
    if ( v4 )
      (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v4 + 8))(*(this + 0xA));
    *(this + 0xA) = v3;
    if ( v3 )
      (*(void (__stdcall **)(int))(*(_DWORD *)v3 + 4))(v3);
    result = *(_DWORD *)(*(this + 0xB) + 0x8AC);
    *(this + 0xC) = result;
  }
  else
  {
    result = *(this + 0xA);
    if ( result )
      result = (*(int (__stdcall **)(_DWORD))(*(_DWORD *)result + 8))(*(this + 0xA));
    *(this + 0xA) = 0;
    *(this + 0xC) = 0;
  }
  return result;
}
