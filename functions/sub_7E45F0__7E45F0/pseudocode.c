// Verified (Oblivion): clones and attaches the effect's scenegraph property, then returns it only when it is ParticleShaderProperty (virtual subtype ID 0xE). This supplies the concrete type stored at MagicShaderHitEffect +0x3C.
ParticleShaderProperty *__cdecl NiNode_CreateAttachedParticleShaderProperty(void *targetNode, void *secondaryNode)
{
  NiAVObject *v2; // edi
  NiObject *v3; // eax
  NiAVObject *v4; // esi
  const char *m_pcName; // ecx
  int v6; // ebx
  int v7; // ebp
  double v8; // st7
  NiProperty *NiPropertyByID; // eax
  NiProperty *v10; // esi
  ParticleShaderProperty *v11; // esi
  float targetNodea; // [esp+34h] [ebp+4h]
  float targetNodeb; // [esp+34h] [ebp+4h]

  if ( !targetNode ) /*0x7e45fa*/
    return 0; /*0x7e45fa*/
  v2 = (NiAVObject *)(*(int (__thiscall **)(void *))(*(_DWORD *)targetNode + 8))(targetNode); /*0x7e4607*/
  if ( !v2 ) /*0x7e460b*/
    return 0; /*0x7e46e7*/
  v3 = (NiObject *)sub_7E4120(); /*0x7e4614*/
  v4 = (NiAVObject *)NiObject_CloneWithPointerMap(v3); /*0x7e4620*/
  m_pcName = v4[1].members.super.m_pcName; /*0x7e4622*/
  v6 = *((_DWORD *)m_pcName + 4); /*0x7e462e*/
  v7 = *((_DWORD *)m_pcName + 5); /*0x7e4631*/
  targetNodea = *((float *)secondaryNode + 0xB) + *((float *)secondaryNode + 0xB); /*0x7e4641*/
  v8 = *((float *)m_pcName + 6); /*0x7e4645*/
  if ( targetNodea >= v8 ) /*0x7e4654*/
    v8 = targetNodea; /*0x7e465a*/
  *((_DWORD *)m_pcName + 3) = *((_DWORD *)m_pcName + 3); /*0x7e465c*/
  targetNodeb = v8; /*0x7e465f*/
  *((_DWORD *)m_pcName + 4) = v6; /*0x7e4667*/
  *((_DWORD *)m_pcName + 5) = v7; /*0x7e466a*/
  *((float *)m_pcName + 6) = targetNodeb; /*0x7e4675*/
  ((void (__thiscall *)(NiAVObject *, NiAVObject *, int))v2->vtbl[1].super.super.Destructor)(v2, v4, 1); /*0x7e4685*/
  NiAVObject_UpdateNiAVObject(v2, 0.0, 0); /*0x7e4691*/
  BSShaderManager_AssignShadersRecursive(v4, 0x16u, 0, 1); /*0x7e469d*/
  NiPropertyByID = NiNode_GetNiPropertyByID((NiNode *)v4, 4); /*0x7e46a9*/
  v10 = NiPropertyByID; /*0x7e46ae*/
  if ( NiPropertyByID ) /*0x7e46b2*/
    NiPropertyByID = (NiProperty *)((*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) == 0xE);// Verified (Oblivion): cloned property is retained only when its virtual subtype returns 0xE. The ParticleShaderProperty vtable's +0x54 slot targets ParticleShaderProperty_GetSubtype, which returns 0xE; this directly identifies shaderProperty_3C as ParticleShaderProperty*. /*0x7e46c5*/
  v11 = NiPropertyByID != 0 ? (ParticleShaderProperty *)v10 : 0;
  if ( v11 ) /*0x7e46cf*/
  {
    sub_7E4120(); /*0x7e46d1*/
    ++unk_B46010; /*0x7e46d6*/
  }
  return v11; /*0x7e46e2*/
}
