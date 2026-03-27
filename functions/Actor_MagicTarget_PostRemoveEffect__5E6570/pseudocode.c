int __thiscall Actor_MagicTarget_PostRemoveEffect(MagicTarget *this, int a2)
{
  int result; // eax

  result = a2;
  if ( a2 )
  {
    if ( *((_DWORD *)this + 0xFFFFFFFC) )
    {
      result = Magic_GetShieldType(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a2 + 0xC) + 0x1C) + 0x98));
      if ( result )
        return (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0xFFFFFFFC) + 0x450))(*((_DWORD *)this + 0xFFFFFFFC));
    }
  }
  return result;
}
