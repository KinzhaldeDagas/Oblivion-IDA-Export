NiAVObject *__thiscall sub_8978D0(_DWORD *this, NiTransform *local)
{
  NiAVObject *result; // eax
  NiAVObject *v4; // ebx
  NiNode *m_parent; // eax
  NiTransform *v6; // esi
  float v7; // edx
  float v8; // eax
  NiPoint3 *p_pos; // ebx
  int v10; // [esp+14h] [ebp-A4h]
  _DWORD v12[13]; // [esp+1Ch] [ebp-9Ch] BYREF
  NiTransform parent; // [esp+50h] [ebp-68h] BYREF
  NiTransform out; // [esp+84h] [ebp-34h] BYREF

  result = Shared_GetPointerAtOffset08((Atmosphere *)this); /*0x8978de*/
  v4 = result; /*0x8978e3*/
  if ( result ) /*0x8978e7*/
  {
    m_parent = result->members.m_parent; /*0x8978f0*/
    if ( (*(_BYTE *)(this + 3) & 8) != 0 ) /*0x897902*/
    {
      if ( m_parent ) /*0x897906*/
      {
        sub_718A80((float *)&m_parent->members.super.m_worldTransform, &parent); /*0x897910*/
        v6 = NiTransform_Compose(&parent, &out, local); /*0x897927*/
      }
      else
      {
        v6 = local; /*0x89792b*/
      }
      qmemcpy(v12, v6, sizeof(v12)); /*0x897936*/
      v7 = *(float *)&v12[0xA]; /*0x897938*/
      v8 = *(float *)&v12[0xB]; /*0x89793c*/
      qmemcpy(&v4->members.m_localTransform, v12, 0x24u); /*0x89794c*/
      LODWORD(v4->members.m_localTransform.pos.x) = v12[9]; /*0x897952*/
      v4->members.m_localTransform.pos.y = v7; /*0x897955*/
      v4->members.m_localTransform.pos.z = v8; /*0x897958*/
    }
    v10 = 0; /*0x897962*/
    if ( unk_BA7A90 ) /*0x89795b*/
    {
      v10 = 3; /*0x89796c*/
LABEL_14:
      qmemcpy(&v4->members.m_worldTransform, local, 0x28u); /*0x8979c6*/
      p_pos = &v4->members.m_worldTransform.pos; /*0x8979d7*/
      p_pos->y = local->pos.y; /*0x8979e2*/
      p_pos->z = local->pos.z; /*0x8979e8*/
      result = (NiAVObject *)unk_BA7A88; /*0x8979eb*/
      if ( unk_BA7A88 ) /*0x8979eb*/
      {
        if ( (*(_BYTE *)(this + 3) & 4) != 0 ) /*0x897a01*/
          return (NiAVObject *)((int (__cdecl *)(_DWORD *, int))result)(this, v10); /*0x897a09*/
      }
      return result; /*0x897a09*/
    }
    if ( !sub_897490((int)&v4->members.m_worldTransform, (int *)local, flt_A37080) ) /*0x897985*/
      v10 = 2; /*0x897991*/
    result = (NiAVObject *)sub_8904E0(&v4->members.m_worldTransform.pos.x, &local->pos.x, flt_A34BA0); /*0x8979ae*/
    if ( !(_BYTE)result ) /*0x8979b8*/
      v10 |= 1u; /*0x8979ba*/
    if ( v10 ) /*0x8979c4*/
      goto LABEL_14; /*0x8979c4*/
  }
  return result; /*0x897a10*/
}
