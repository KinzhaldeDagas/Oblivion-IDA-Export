int __thiscall TESActorBase_SetAutoCalc(_BYTE *this, char a2)
{
  _DWORD *v2; // ecx
  int result; // eax

  if ( *(this + 4) == 0x23 )
  {
    v2 = this + 0x24;
    if ( a2 )
      v2[1] |= 0x10u;
    else
      v2[1] &= ~0x10u;
    return (*(int (__thiscall **)(_DWORD *, int))(*v2 + 0x50))(v2, 0x10);
  }
  return result;
}
