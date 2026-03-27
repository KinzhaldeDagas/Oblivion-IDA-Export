void __thiscall sub_769B60(NiDX9Renderer *this, NiGeometry *a2)
{
  NiNode *m_parent; // esi
  char v3; // bl
  signed int m_flags; // ebp
  int v5; // eax

  if ( a2 )
  {
    m_parent = a2->member.super.m_parent;
    v3 = sub_777F10((NiGeometryBufferData *)m_parent);
    m_parent->vtbl = (NiNodeVtbl *)0x1400000;
    sub_777F70((NiGeometryBufferData *)m_parent, 1u);
    m_flags = a2->member.super.m_flags;
    v5 = *(_DWORD *)m_parent->members.super.super.super.m_uiRefCount;
    if ( v3 )
    {
      if ( !(*(unsigned __int8 (**)(void))(v5 + 0x20))() )
      {
        if ( !(_WORD)m_flags )
        {
LABEL_8:
          a2->member.super.m_flags = 0;
          return;
        }
LABEL_7:
        sub_767EA0(this, (UInt32)a2, m_flags);
        goto LABEL_8;
      }
    }
    else
    {
      (*(void (__stdcall **)(NiNode *, _DWORD))(v5 + 0x1C))(m_parent, 0);
      m_parent->members.super.m_localTransform.rot.data[0][1] = 0.0;
    }
    m_flags = 0xF;
    goto LABEL_7;
  }
}
