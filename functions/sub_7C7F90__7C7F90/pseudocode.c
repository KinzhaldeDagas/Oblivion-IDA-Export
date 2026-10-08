// Lock-protected wrapper for recursive point-light registration/removal across a NiNode subtree.
void __thiscall ShadowSceneNode_RegisterOrRemovePointLightsInSubtree(
        ShadowSceneNode_DecodedLayout *self,
        NiNode *root,
        bool removeExisting)
{
  char v4; // bl
  DWORD CurrentThreadId; // eax

  if ( root ) /*0x7c7f9a*/
  {
    v4 = 0; /*0x7c7f9d*/
    if ( unk_B43384 ) /*0x7c7f9f*/
    {
      EnterCriticalSection(&unk_B43400); /*0x7c7fac*/
      CurrentThreadId = GetCurrentThreadId(); /*0x7c7fb2*/
      ++unk_B4347C; /*0x7c7fb8*/
      unk_B43478 = CurrentThreadId; /*0x7c7fbf*/
      v4 = 1; /*0x7c7fc4*/
    }
    ShadowSceneNode_RegisterOrRemovePointLightsRecursive(self, root, removeExisting); /*0x7c7fce*/
    if ( v4 ) /*0x7c7fd6*/
    {
      if ( unk_B4347C-- == 1 ) /*0x7c7fd8*/
        unk_B43478 = 0; /*0x7c7fe1*/
      LeaveCriticalSection(&unk_B43400); /*0x7c7ff0*/
    }
  }
}
