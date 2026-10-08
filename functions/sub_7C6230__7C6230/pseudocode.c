// Search the native ShadowSceneNode full-light list for a ShadowSceneLight whose backing NiLight identity matches the supplied source.
ShadowSceneLight_DecodedLayout *__thiscall ShadowSceneNode_FindFullLightBySource(
        ShadowSceneNode_DecodedLayout *self,
        void *backingLight)
{
  int v2; // ebx
  _DWORD *fullListHead_E8; // edi
  ShadowSceneLight_DecodedLayout *v4; // ebp
  void (__thiscall ***v5)(_DWORD, int); // esi
  char v7; // [esp+13h] [ebp-5h]
  int v8; // [esp+14h] [ebp-4h] BYREF

  v2 = 0; /*0x7c6235*/
  v8 = 0; /*0x7c6239*/
  fullListHead_E8 = self->fullListHead_E8; /*0x7c623d*/
  if ( !fullListHead_E8 ) /*0x7c6245*/
    return 0; /*0x7c62ab*/
  while ( 1 ) /*0x7c6247*/
  {
    v4 = (ShadowSceneLight_DecodedLayout *)fullListHead_E8[2]; /*0x7c6247*/
    fullListHead_E8 = (_DWORD *)*fullListHead_E8; /*0x7c624f*/
    if ( !v4 || (v2 |= 1u, v7 = 1, (void *)*ShadowSceneLight_GetLightRef(v4, &v8) != backingLight) ) /*0x7c626d*/
      v7 = 0; /*0x7c626f*/
    if ( (v2 & 1) != 0 ) /*0x7c6277*/
    {
      v5 = (void (__thiscall ***)(_DWORD, int))v8; /*0x7c6279*/
      v2 &= ~1u; /*0x7c627d*/
      if ( v8 ) /*0x7c6282*/
      {
        if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) ) /*0x7c6288*/
        {
          if ( v5 ) /*0x7c6294*/
            (**v5)(v5, 1); /*0x7c629e*/
        }
      }
    }
    if ( v7 ) /*0x7c62a5*/
      break; /*0x7c62a5*/
    if ( !fullListHead_E8 ) /*0x7c62a9*/
      return 0; /*0x7c62a9*/
  }
  return v4; /*0x7c62ab*/
}
