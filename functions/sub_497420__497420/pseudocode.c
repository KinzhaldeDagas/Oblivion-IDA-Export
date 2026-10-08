// ODismemberment: authoritative blend-collision getter. Reuses NiAVObject_GetBhkCollisionObject and accepts objects whose class chain includes bhkBlendCollisionObject.
int __cdecl NiAVObject_GetBhkBlendCollisionObject(int a1)
{
  int result; // eax
  int v2; // esi
  NiRTTI *v3; // eax

  result = NiAVObject_GetBhkCollisionObject(a1); /*0x497426*/
  v2 = result; /*0x49742b*/
  if ( result ) /*0x497432*/
  {
    v3 = (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)result + 4))(result); /*0x49743d*/
    if ( v3 ) /*0x497441*/
    {
      while ( v3 != &MEMORY[0xBA7A20] ) /*0x497448*/
      {
        v3 = v3->parent; /*0x49744a*/
        if ( !v3 ) /*0x49744f*/
          return 0; /*0x49744f*/
      }
      return v2; /*0x497461*/
    }
    else
    {
      return 0; /*0x497451*/
    }
  }
  return result; /*0x497434*/
}
