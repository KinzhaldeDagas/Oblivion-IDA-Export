void __thiscall sub_4A0140(NiNode *this, NiCullingProcess *a2)
{
  NiAccumulator *accumulator; // esi
  NiRTTI *v4; // eax
  char v5; // al
  NiAccumulator *v6; // eax

  accumulator = renderer->member.super.accumulator; /*0x4a0146*/
  if ( accumulator )
  {
    v4 = (NiRTTI *)(*(int (__thiscall **)(NiAccumulator *))(*(_DWORD *)accumulator + 4))(renderer->member.super.accumulator); /*0x4a0157*/
    if ( v4 ) /*0x4a015b*/
    {
      while ( v4 != &stru_B42CEC ) /*0x4a0165*/
      {
        v4 = v4->parent; /*0x4a0167*/
        if ( !v4 ) /*0x4a016c*/
          goto LABEL_5; /*0x4a016c*/
      }
      v5 = 1; /*0x4a019d*/
    }
    else
    {
LABEL_5:
      v5 = 0; /*0x4a016e*/
    }
    v6 = v5 != 0 ? accumulator : 0;
    accumulator = v6; /*0x4a0176*/
    if ( v6 ) /*0x4a0178*/
      *((_BYTE *)v6 + 0x21E0) = 0; /*0x4a017a*/
  }
  NiNode::OnVisible(this, a2); /*0x4a0188*/
  if ( accumulator ) /*0x4a018f*/
    *((_BYTE *)accumulator + 0x21E0) = 1; /*0x4a0191*/
}
