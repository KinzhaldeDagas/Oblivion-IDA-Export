int __thiscall MagicTarget_GetParentFormID(_DWORD *this)
{
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 0xC))(this) ) /*0x6a2258*/
    return *(this + 0xFFFFFFE9); /*0x6a225e*/
  else
    return *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*this + 4))(this) + 0xC); /*0x6a226c*/
}
