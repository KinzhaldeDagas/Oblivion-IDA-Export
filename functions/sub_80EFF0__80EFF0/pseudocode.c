int __thiscall sub_80EFF0(void *this)
{
  int result; // eax

  (*(void (__thiscall **)(void *))(*(_DWORD *)this + 0xA8))(this);
  result = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0xC4))(this);
  if ( ShaderPackage >= 2 )
    return (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0xC8))(this);
  return result;
}
