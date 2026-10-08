// Recursively traverses a NiAVObject hierarchy. For each geometry object lacking property type 0, allocates a 0x1C NiAlphaProperty, sets flags bit 0, and attaches it. Non-geometry nodes recurse through children.
void __cdecl NiAVObject_EnsureAlphaPropertyRecursive(NiAVObject *object)
{
  NiAlphaProperty *v1; // eax
  BSShaderProperty *v2; // eax
  NiObject *v3; // eax
  NiObject *v4; // edi
  int m_uiRefCount_high; // eax
  int v6; // esi
  NiAVObject *i; // eax

  if ( object ) /*0x481598*/
  {
    if ( object->vtbl->super.Unk_03((NiObject *)object) ) /*0x4815a5*/
    {
      if ( !NiNode_GetNiPropertyByID((NiNode *)object, 0) ) /*0x4815af*/
      {
        v1 = (NiAlphaProperty *)FormHeapAlloc(0x1Cu); /*0x4815be*/
        if ( v1 ) /*0x4815d4*/
          v2 = (BSShaderProperty *)NiAlphaProperty_ctor(v1); /*0x4815d8*/
        else
          v2 = 0; /*0x4815df*/
        v2->member.super.flags |= 1u; /*0x4815e1*/
        sub_405680((NiNode *)object, v2); /*0x4815f1*/
      }
    }
    else
    {
      v3 = object->vtbl->super.Unk_02(object); /*0x48160d*/
      v4 = v3; /*0x48160f*/
      if ( v3 ) /*0x481613*/
      {
        m_uiRefCount_high = HIWORD(v3[0x16].members.m_uiRefCount); /*0x481615*/
        v6 = 0; /*0x48161c*/
        if ( HIWORD(v4[0x16].members.m_uiRefCount) ) /*0x481615*/
        {
          if ( m_uiRefCount_high ) /*0x481624*/
            goto LABEL_12; /*0x481624*/
          for ( i = 0; ; i = *((NiAVObject **)&v4[0x16].__vftable->super.Destructor + v6) ) /*0x481626*/
          {
            NiAVObject_EnsureAlphaPropertyRecursive(i); /*0x481634*/
            if ( HIWORD(v4[0x16].members.m_uiRefCount) <= (unsigned int)++v6 ) /*0x481648*/
              break; /*0x481648*/
LABEL_12:
            ; /*0x48162a*/
          }
        }
      }
    }
  }
}
