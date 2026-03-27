CHAR *__thiscall sub_51E1E0(_DWORD *this)
{
  CHAR *result; // eax

  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 0x30))(this) )
    return 0;
  result = (CHAR *)*(this + 0x45);
  if ( !result )
  {
    result = EmptyString;
    if ( !EmptyString )
      return (CHAR *)TESActorBaseData_GetBloodTexturePath();
  }
  if ( !*result )
    return (CHAR *)TESActorBaseData_GetBloodTexturePath();
  return result;
}
