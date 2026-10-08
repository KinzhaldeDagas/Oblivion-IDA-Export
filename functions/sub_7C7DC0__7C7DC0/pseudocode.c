// Find a native full-list ShadowSceneLight whose backing NiLight identity equals the supplied source, then remove that entry.
void __thiscall ShadowSceneNode_RemoveFullLightBySource(ShadowSceneNode_DecodedLayout *self, void *backingLight)
{
  _DWORD *fullListHead_E8; // ebp
  _DWORD *v3; // esi
  bool v4; // bl
  void (__thiscall ***v5)(_DWORD, int); // edi
  int v6; // [esp+0h] [ebp-8h] BYREF
  int **v7; // [esp+4h] [ebp-4h]

  v7 = (int **)self; /*0x7c7dc8*/
  if ( backingLight ) /*0x7c7dcc*/
  {
    fullListHead_E8 = self->fullListHead_E8; /*0x7c7dcf*/
    if ( fullListHead_E8 ) /*0x7c7dd7*/
    {
      while ( 1 ) /*0x7c7de0*/
      {
        v3 = (_DWORD *)fullListHead_E8[2]; /*0x7c7de0*/
        fullListHead_E8 = (_DWORD *)*fullListHead_E8; /*0x7c7de8*/
        if ( v3 ) /*0x7c7deb*/
        {
          v4 = *ShadowSceneLight_GetLightRef(v3, &v6) == (_DWORD)backingLight; /*0x7c7e03*/
          if ( v6 ) /*0x7c7e08*/
          {
            v5 = (void (__thiscall ***)(_DWORD, int))v6; /*0x7c7e0a*/
            if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) ) /*0x7c7e10*/
              (**v5)(v5, 1); /*0x7c7e26*/
          }
          if ( v4 ) /*0x7c7e2a*/
            break; /*0x7c7e2a*/
        }
        if ( !fullListHead_E8 ) /*0x7c7e2e*/
          return; /*0x7c7e2e*/
      }
      ShadowSceneNode_RemoveFullLight(v7, (LONG)v3);// Remove the matching full-list ShadowSceneLight after backing-source identity comparison. /*0x7c7e3f*/
    }
  }
}
