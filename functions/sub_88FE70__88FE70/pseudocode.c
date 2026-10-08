// TES4 authoritative: listener callback used by 0x894E80 swept integration path. Reads hit collidable/filter at entry+0x28 -> +0x1C, checks low 6 bits for layer 0x14.
hkVector4 *__thiscall bhkCharacterController_SweptHitLayerListener(int this, int a2)
{
  hkVector4 *result; // eax

  result = (hkVector4 *)(*(_DWORD *)(*(_DWORD *)(a2 + 0x28) + 0x1C) & 0x3F);// Extracts collision layer from hit entry+0x28 collidable filter info low 6 bits. /*0x88fe7a*/
  if ( (_BYTE)result == 0x14 ) /*0x88fe7f*/
  {
    ++*(_DWORD *)(this + 0x64);                 // For layer 0x14 hits, increments controller listener counter at proxy+0x254 (this is proxy+0x1F0 here). /*0x88fe81*/
    if ( *(_BYTE *)(this + 0x61) ) /*0x88fe85*/
      return bhkCharacterController_SetObjectVelocityFromWorldVector((_DWORD *)(this - 0x1F0), &g_zeroNiPoint3.x);// For layer 0x14 swept hits, optional proxy+0x251 path writes zero velocity to the low-level collision object through 0x64B3A0; it does not alter the candidate position written by 0x894E80. /*0x88fe99*/
  }
  return result; /*0x88fe9e*/
}
