// Removes an object's geometry from shadow-light receiver lists under the shadow-scene critical section. It obtains the object's node/container through virtual +0x08 and recurses; it does not detach the object from its parent or clear NiNode children.
void __thiscall ShadowSceneNode_RemoveObjectReceivers(void *this, NiAVObject *object)
{
  NiNode *v3; // esi
  char v4; // bl
  DWORD CurrentThreadId; // eax

  if ( object ) /*0x7c5e79*/
  {
    v3 = (NiNode *)object->vtbl->super.Unk_02(object); /*0x7c5e83*/
    if ( v3 ) /*0x7c5e87*/
    {
      v4 = 0; /*0x7c5e8a*/
      if ( unk_B43384 ) /*0x7c5e8c*/
      {
        EnterCriticalSection(&unk_B43400); /*0x7c5e99*/
        CurrentThreadId = GetCurrentThreadId(); /*0x7c5e9f*/
        ++unk_B4347C; /*0x7c5ea5*/
        unk_B43478 = CurrentThreadId; /*0x7c5eac*/
        v4 = 1; /*0x7c5eb1*/
      }
      ShadowSceneNode_RemoveReceiverGeometryRecursive(this, v3); /*0x7c5eb6*/
      if ( v4 ) /*0x7c5ebe*/
      {
        if ( unk_B4347C-- == 1 ) /*0x7c5ec0*/
          unk_B43478 = 0; /*0x7c5ec9*/
        LeaveCriticalSection(&unk_B43400); /*0x7c5edd*/
      }
    }
  }
}
