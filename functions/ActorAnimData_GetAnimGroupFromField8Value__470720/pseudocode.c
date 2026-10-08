// ActorAnimData key-field reader. Normalizes encoded slot values and returns the active animation key/group stored for that slot.
unsigned __int16 __thiscall ActorAnimData_GetAnimGroupFromField8Value(ActorAnimData *this, int slot)
{
  int v2; // eax

  if ( slot == 5 ) /*0x470729*/
  {
    return this->animsMapKey[0]; /*0x47073f*/
  }
  else if ( slot == 6 ) /*0x47072e*/
  {
    LOWORD(v2) = this->animsMapKey[3]; /*0x470735*/
  }
  else
  {
    LOWORD(v2) = this->animsMapKey[slot]; /*0x470747*/
  }
  return v2; /*0x47073a*/
}
