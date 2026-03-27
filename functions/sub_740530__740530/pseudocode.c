bool __thiscall sub_740530(NiRenderTargetGroup *this, int a2)
{
  bool result; // al

  result = sub_732B80(this, a2);
  if ( result )
  {
    (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 0x17) + 0x24))(*((_DWORD *)this + 0x17), a2);
    return 1;
  }
  return result;
}
