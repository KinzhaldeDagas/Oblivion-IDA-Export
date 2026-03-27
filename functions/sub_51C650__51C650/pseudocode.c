_BYTE *__thiscall sub_51C650(_DWORD *this)
{
  _BYTE *result; // eax

  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 0x28))(this) )
    return 0;
  result = (_BYTE *)(*(int (__thiscall **)(_DWORD *))(*(this + 0x3E) + 0x14))(this + 0x3E);
  if ( !result || !*result )
    return (_BYTE *)TESActorBaseData_GetBloodParticlePath();
  return result;
}
