// Verified QueuedTree vtable override at slot +0x30, homologous in role to Fallout QueuedTree::UseDistant3D. Oblivion builds a NiTriShape/STBB billboard and NiBillboardNode through TESObjectTREE_BuildDistantBillboard(false), applies shader properties, then invokes the owning queued-tree callback. Fallout instead builds TESObjectTREE distant geometry and prepares a DistantLOD shader object. This is not a QueuedTreeBillboard method.
void *__thiscall QueuedTree_UseDistant3D(QueuedTreeBillboard *this)
{
  float *v2; // eax
  void *result; // eax
  void *v4; // edi
  NiAVObject *v5; // esi
  const char *m_pcName; // eax
  NiProperty *NiPropertyByID; // eax

  v2 = (float *)(*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 8) + 0x170))(*((_DWORD *)this + 8)); /*0x437e6f*/
  result = sub_4BA780(v2, 0); /*0x437e75*/
  v4 = result; /*0x437e7a*/
  if ( result ) /*0x437e7e*/
  {
    if ( *((_WORD *)result + 0x5B) ) /*0x437e80*/
      v5 = **((NiAVObject ***)result + 0x2C); /*0x437e95*/
    else
      v5 = 0; /*0x437e8b*/
    m_pcName = v5[1].members.super.m_pcName; /*0x437e97*/
    *((_WORD *)m_pcName + 0x17) = *((_WORD *)m_pcName + 0x17) & 0xFFF | 0x4000; /*0x437eb2*/
    *((_BYTE *)m_pcName + 0x30) = 0x11; /*0x437eb6*/
    *((_BYTE *)m_pcName + 0x31) = 0x1F; /*0x437eba*/
    BSShaderManager_AssignShadersRecursive(v5, 1u, 1, 1); /*0x437ebe*/
    NiPropertyByID = NiNode_GetNiPropertyByID((NiNode *)v5, 4); /*0x437eca*/
    if ( NiPropertyByID ) /*0x437ed2*/
    {
      NiPropertyByID[1].members.super.m_uiRefCount |= (unsigned int)&loc_402000; /*0x437ed4*/
      NiPropertyByID[1].members.m_controller = 0; /*0x437edb*/
    }
    return (*(void *(__thiscall **)(QueuedTreeBillboard *, void *))(*(_DWORD *)this + 0x34))(this, v4); /*0x437eea*/
  }
  return result; /*0x437eec*/
}
