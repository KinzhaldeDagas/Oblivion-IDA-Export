// Pass224/226: Prepares NiScreenTexture +0x1C geometry buffer and rebuilds from records when pending/update flags require it.
void __thiscall sub_769B60(NiDX9Renderer *this, NiGeometry *a2)
{
  NiNode *m_parent; // esi
  char v3; // bl
  signed int m_flags; // ebp
  int v5; // eax

  if ( a2 ) /*0x769b6c*/
  {
    m_parent = a2->member.super.m_parent; /*0x769b71*/
    v3 = NiGeometryBufferData_HasLiveStreams((NiGeometryBufferData *)m_parent); /*0x769b7f*/
    m_parent->vtbl = (NiNodeVtbl *)0x1400000; /*0x769b81*/
    sub_777F70((NiGeometryBufferData *)m_parent, 1u); /*0x769b87*/
    m_flags = a2->member.super.m_flags; /*0x769b91*/
    v5 = *(_DWORD *)m_parent->members.super.super.super.m_uiRefCount; /*0x769b95*/
    if ( v3 ) /*0x769b97*/
    {
      if ( !(*(unsigned __int8 (**)(void))(v5 + 0x20))() ) /*0x769bb2*/
      {
        if ( !(_WORD)m_flags ) /*0x769bbb*/
        {
LABEL_8:
          a2->member.super.m_flags = 0;         // Pass226: Render preparation clears NiScreenTexture +0x18 pending update mask after consuming or observing it. /*0x769bc8*/
          return; /*0x769bca*/
        }
LABEL_7:
        sub_767EA0(this, (int)a2, m_flags); /*0x769bbd*/
        goto LABEL_8; /*0x769bc3*/
      }
    }
    else
    {
      (*(void (__stdcall **)(NiNode *, _DWORD))(v5 + 0x1C))(m_parent, 0); /*0x769b9f*/
      m_parent->members.super.m_localTransform.rot.data[0][1] = 0.0; /*0x769ba1*/
    }
    m_flags = 0xF; /*0x769ba8*/
    goto LABEL_7; /*0x769bad*/
  }
}
