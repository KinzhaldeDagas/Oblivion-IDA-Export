// CULLING documentation correction 2026-09-27, Oblivion observation: NiNode OnVisible skips its child traversal when its OWN world-bound radius is zero; otherwise iterates child array(+0xB0) to end(+0xB6), skips nulls and calls NiAVObject_Render per child. A geometry guard's zero-radius policy does not imply every zero-radius subtree reaches that guard. Preserve native node traversal; do not derive it from Morrowind.
// GPU world census audit 2026-09-27: ordinary NiNode OnVisible traverses child slots in stored order only when its own world-bound radius is nonzero. Preserve zero-radius ancestor suppression and repeated child occurrences; leaf-only sphere culling is not a complete replacement for this hierarchy behavior.
void __thiscall NiNode::OnVisible(NiNode *this, NiCullingProcess *a2)
{
  unsigned int i; // esi
  NiAVObject *v4; // ecx

  if ( 0.0 != this->members.super.m_kWorldBound.Radius ) /*0x70ab4d*/
  {                                             // Begin ordinary NiNode child loop using child count +0xB6 and child array +0xB0.
    for ( i = 0; i < this->members.children.end; ++i ) /*0x70ab52*/
    {
      v4 = *((NiAVObject **)&this->members.children.data->vtbl + i); /*0x70ab66*/
      if ( v4 ) /*0x70ab6b*/
        NiAVObject_Render(v4, a2);              // NiNode recursively submits each eligible child through NiAVObject visibility/render dispatch; each child retains its own AppCulled test. /*0x70ab6e*/
    }
  }
}
