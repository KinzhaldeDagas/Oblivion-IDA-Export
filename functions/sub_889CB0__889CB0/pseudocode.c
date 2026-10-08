// Raycast data -> hit NiAVObject helper via root collidable at +0x50.
NiAVObject *__thiscall bhkWorldRayCastData_GetHitNiObject(int *this)
{
  if ( *(this + 0x14) ) /*0x889cb0*/
    return bhkCollidable_ResolveNiAVObject(*(this + 0x14)); /*0x889cb8*/
  else
    return 0; /*0x889cc1*/
}
