// Returns the first bhk collision object found on object or recursively beneath its NiNode children. This is structural traversal, independent of node names.
void *__cdecl NiAVObject_FindBhkCollisionObjectRecursive(NiAVObject *object)
{
  void *result; // eax
  NiObject *v2; // eax
  NiObject *v3; // edi
  unsigned int m_uiRefCount_high; // ebp
  unsigned int v5; // esi
  NiAVObject *v6; // eax

  result = 0; /*0x480345*/
  if ( object ) /*0x480349*/
  {
    result = (void *)NiAVObject_GetBhkCollisionObject((int)object); /*0x48034d*/
    if ( !result ) /*0x480359*/
    {
      v2 = object->vtbl->super.Unk_02(object); /*0x480363*/
      v3 = v2; /*0x480365*/
      if ( v2 ) /*0x480369*/
      {
        m_uiRefCount_high = HIWORD(v2[0x16].members.m_uiRefCount); /*0x48036c*/
        v5 = 0; /*0x480373*/
        if ( HIWORD(v2[0x16].members.m_uiRefCount) ) /*0x48036c*/
        {
          do /*0x4803aa*/
          {
            if ( HIWORD(v3[0x16].members.m_uiRefCount) > v5 ) /*0x480389*/
              v6 = *((NiAVObject **)&v3[0x16].__vftable->super.Destructor + v5); /*0x480395*/
            else
              v6 = 0; /*0x48038b*/
            result = NiAVObject_FindBhkCollisionObjectRecursive(v6); /*0x480399*/
            if ( result ) /*0x4803a3*/
              break; /*0x4803a3*/
            ++v5; /*0x4803a5*/
          }
          while ( v5 < m_uiRefCount_high ); /*0x4803aa*/
        }
        else
        {
          return 0; /*0x4803b3*/
        }
      }
      else
      {
        return 0; /*0x4803b9*/
      }
    }
  }
  return result; /*0x4803af*/
}
