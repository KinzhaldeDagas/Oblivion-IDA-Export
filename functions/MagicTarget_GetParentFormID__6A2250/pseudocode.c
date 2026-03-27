int __thiscall MagicTarget_GetParentFormID(_DWORD *this)
{
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 0xC))(this) )
    return *(this + 0xFFFFFFE9);
  else
    return *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*this + 4))(this) + 0xC);
}
