int __thiscall sub_5E58D0(_DWORD *this, int a2)
{
  int v2; // ecx
  int result; // eax

  v2 = *(this + 0x16); /*0x5e58d0*/
  if ( v2 ) /*0x5e58d5*/
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)v2 + 0x39C))(v2, a2);// Not a skill-use call: this Actor/Character/Creature helper dispatches one argument through its process object's unrelated +0x39C slot. Player_ModExperience requires actorValue, useIndex, and scale. /*0x5e58df*/
  return result; /*0x5e58e1*/
}
