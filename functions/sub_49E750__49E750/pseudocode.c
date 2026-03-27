NiAVObject *__stdcall sub_49E750(int a1, float a2)
{
  NiTriShapeData *v2; // eax
  NiAVObject *v3; // esi
  PlayerCharacter *v4; // eax
  float v5; // ecx
  float *pos; // eax
  float v7; // eax

  v2 = sub_49D2A0(a2, a2, 0x400, 1, 1, COERCE_FLOAT(1));
  v3 = sub_498F70((NiScreenElementsData *)v2);
  v4 = TESDataHandler_g_PlayerRef;
  if ( TESDataHandler_g_PlayerRef )
  {
    v5 = v4->super.super.super.super.pos[0];
    pos = v4->super.super.super.super.pos;
    v3->members.m_localTransform.pos.x = v5;
    v3->members.m_localTransform.pos.y = pos[1];
    v7 = pos[2];
  }
  else
  {
    v7 = 0.0;
    v3->members.m_localTransform.pos.x = 0.0;
    v3->members.m_localTransform.pos.y = 0.0;
  }
  v3->members.m_localTransform.pos.z = v7;
  (*(void (__thiscall **)(int, NiAVObject *, int))(*(_DWORD *)value + 0x84))(value, v3, 1);
  NiNode_UpdateDynamicEffectState((NiNode *)v3);
  sub_7B8940(v3, 0x11, 0, 1);
  return v3;
}
