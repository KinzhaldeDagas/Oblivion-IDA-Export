char __thiscall sub_51FFD0(_BYTE *this, int a2)
{
  char v3; // bl
  int v4; // eax
  int v5; // eax
  int IsFemale; // eax
  bool v8; // zf

  v3 = 0;
  if ( !a2 )
    return v3;
  v4 = *(_DWORD *)(a2 + 0xE8);
  if ( !v4 )
    return v3;
  v5 = v4 + 0x8C;
  if ( !v5 )
    return v3;
  while ( *(_BYTE **)v5 != this )
  {
    v5 = *(_DWORD *)(v5 + 4);
    if ( !v5 )
      return 0;
  }
  IsFemale = TESActorBase_IsFemale((_BYTE *)a2);
  if ( !IsFemale )
  {
    v8 = (*(this + 0x48) & 2) == 0;
LABEL_11:
    if ( v8 )
      return 1;
    return v3;
  }
  if ( IsFemale == 1 )
  {
    v8 = (*(this + 0x48) & 4) == 0;
    goto LABEL_11;
  }
  return v3;
}
