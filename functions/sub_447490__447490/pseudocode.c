// Animation Sound: note resolver. Looks up the note token in global sound map off_B06164 and accepts only entries whose form/type byte is 0x0A; returns the sound entry or 0.
int __stdcall SoundMap_ResolveAnimSoundNote(_BYTE *a1)
{
  int result; // eax
  int v2; // [esp+0h] [ebp-4h] BYREF

  v2 = 0; /*0x447497*/
  if ( !a1 ) /*0x44749e*/
    return 0; /*0x44749e*/
  if ( !*a1 ) /*0x4474a0*/
    return 0; /*0x4474a0*/
  if ( !NiTMap_GetAt(&off_B06164, (int)a1, &v2) ) /*0x4474af*/
    return 0; /*0x4474af*/
  result = v2; /*0x4474b8*/
  if ( !v2 || *(_BYTE *)(v2 + 4) != 0xA ) /*0x4474c3*/
    return 0; /*0x4474c5*/
  return result; /*0x4474c8*/
}
