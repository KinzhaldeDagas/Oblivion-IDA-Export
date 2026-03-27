char __thiscall sub_477E50(ActorAnimData *this, PlayerCharacter *a2)
{
  if ( !sub_476380(this) )
    return 0;
  *(_DWORD *)(this->unkC8[1] + 0x28) = a2;
  HighPRocess_DoAction_____(a2, 0xB, *(_DWORD *)(this->unkC8[1] + 0x10));
  return 1;
}
