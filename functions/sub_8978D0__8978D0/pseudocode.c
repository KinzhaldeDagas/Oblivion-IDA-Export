NiAVObject *__thiscall sub_8978D0(_DWORD *this, NiTransform *a2)
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
  NiTransform v13; // [esp+50h] [ebp-68h] BYREF
  NiTransform v14; // [esp+84h] [ebp-34h] BYREF

  result = sub_452A60((Atmosphere *)this);
  v4 = result;
  if ( result )
  {
    m_parent = result->members.m_parent;
    if ( (*(_BYTE *)(this + 3) & 8) != 0 )
    {
      if ( m_parent )
      {
        sub_718A80((float *)&m_parent->members.super.m_worldTransform, &v13);
        v6 = sub_53D7A0(&v13, &v14, a2);
      }
      else
      {
        v6 = a2;
      }
      qmemcpy(v12, v6, sizeof(v12));
      v7 = *(float *)&v12[0xA];
      v8 = *(float *)&v12[0xB];
      qmemcpy(&v4->members.m_localTransform, v12, 0x24u);
      LODWORD(v4->members.m_localTransform.pos.x) = v12[9];
      v4->members.m_localTransform.pos.y = v7;
      v4->members.m_localTransform.pos.z = v8;
    }
    v10 = 0;
    if ( byte_BA7A90 )
    {
      v10 = 3;
LABEL_14:
      qmemcpy(&v4->members.m_worldTransform, a2, 0x28u);
      p_pos = &v4->members.m_worldTransform.pos;
      p_pos->y = a2->pos.y;
      p_pos->z = a2->pos.z;
      result = (NiAVObject *)dword_BA7A88;
      if ( dword_BA7A88 )
      {
        if ( (*(_BYTE *)(this + 3) & 4) != 0 )
          return (NiAVObject *)((int (__cdecl *)(_DWORD *, int))result)(this, v10);
      }
      return result;
    }
    if ( !sub_897490((int)&v4->members.m_worldTransform, (int *)a2, flt_A37080) )
      v10 = 2;
    result = (NiAVObject *)sub_8904E0(&v4->members.m_worldTransform.pos.x, &a2->pos.x, flt_A34BA0);
    if ( !(_BYTE)result )
      v10 |= 1u;
    if ( v10 )
      goto LABEL_14;
  }
  return result;
}
