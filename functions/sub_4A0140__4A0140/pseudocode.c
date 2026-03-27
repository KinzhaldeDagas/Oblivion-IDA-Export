void __thiscall sub_4A0140(NiNode *this, NiCullingProcess *a2)
{
  NiAccumulator *accumulator; // esi
  _DWORD *v4; // eax
  char v5; // al
  NiAccumulator *v6; // eax

  accumulator = g_Renderer->member.super.accumulator;
  if ( accumulator )
  {
    v4 = (_DWORD *)(*(int (__thiscall **)(NiAccumulator *))(*(_DWORD *)accumulator + 4))(g_Renderer->member.super.accumulator);
    if ( v4 )
    {
      while ( v4 != dword_B42CEC )
      {
        v4 = (_DWORD *)v4[1];
        if ( !v4 )
          goto LABEL_5;
      }
      v5 = 1;
    }
    else
    {
LABEL_5:
      v5 = 0;
    }
    v6 = v5 != 0 ? accumulator : 0;
    accumulator = v6;
    if ( v6 )
      *((_BYTE *)v6 + 0x21E0) = 0;
  }
  NiNode::OnVisible(this, a2);
  if ( accumulator )
    *((_BYTE *)accumulator + 0x21E0) = 1;
}
