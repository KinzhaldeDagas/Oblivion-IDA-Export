NiTList_NiProperty *__thiscall sub_7F1F00(BSShaderProperty *this, int a2, int a3, _WORD *a4, int a5)
{
  int v6; // ebp
  int v8; // edi
  int v9; // eax
  int v10; // eax
  int v11; // eax

  v6 = a3 | (LOWORD(dword_B42EAC) << 8);
  if ( LOWORD(dword_B42EAC) == 6 )
    return &this->member.unk48;
  if ( this->member.lastRenderPassState != a3 )
  {
    sub_7E24C0(this);
    v8 = *(_DWORD *)(GetShadowSceneNode(this->member.passInfo >> 0x1C) + 0x118);
    if ( (unsigned __int16)sub_7ED600(this) )
    {
      sub_7ED2A0(this);
      v11 = FormHeapAlloc(0x10u);
      a3 = v11;
      if ( v11 )
      {
        v10 = sub_7E2370(v11, a2, 0xE, 1, 2u, v8);
        goto LABEL_10;
      }
    }
    else
    {
      v9 = FormHeapAlloc(0x10u);
      a3 = v9;
      if ( v9 )
      {
        v10 = sub_7E2370(v9, a2, 0xE, 1, 1u, v8);
LABEL_10:
        a2 = v10;
        sub_6AA320(&this->member.passes.vtlb, &a2);
        this->member.lastRenderPassState = v6;
        goto LABEL_11;
      }
    }
    v10 = 0;
    goto LABEL_10;
  }
LABEL_11:
  *a4 = 1;
  return &this->member.passes;
}
