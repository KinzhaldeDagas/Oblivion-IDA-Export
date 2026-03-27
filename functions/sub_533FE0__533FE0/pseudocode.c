int __thiscall sub_533FE0(_DWORD *this)
{
  int v1; // ecx
  int result; // eax

  v1 = *(this + 2);
  if ( !v1 )
    return 0;
  result = *(_DWORD *)(v1 + 0x30);
  if ( result == 0xFFFFFFFF )
    return *(_DWORD *)(v1 + 0x148);
  return result;
}
