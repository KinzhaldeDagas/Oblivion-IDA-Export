NiTList_NiProperty *__thiscall sub_7C3240(BSShaderProperty *this, int a2, int a3, int a4, int a5)
{
  __int16 v6; // ax
  _DWORD *v7; // esi
  int v8; // eax
  int v9; // ebx
  int v10; // eax
  int v11; // eax
  _DWORD *v12; // esi
  int v13; // eax
  int v14; // eax
  _DWORD *i; // edi
  int v16; // eax
  int v17; // edi
  NiTList_Entry_NiProperty *v18; // eax
  NiTList_Entry_NiProperty *start; // ecx

  if ( this->member.lastRenderPassState != a3 )
  {
    sub_7E24C0(this);
    if ( byte_B43344 )
      v6 = sub_7ED600(this);
    else
      v6 = 0;
    if ( ShaderPackage < 2 || UseHDR )
    {
      if ( v6 )
      {
        v12 = sub_7ED2A0(this);
        v13 = FormHeapAlloc(0x10u);
        v9 = a2;
        if ( v13 )
          a2 = sub_7E2370(v13, a2, 0x196, 1, 1u, (int)v12);
        else
          a2 = 0;
        goto LABEL_21;
      }
      v14 = FormHeapAlloc(0x10u);
      v9 = a2;
      if ( v14 )
      {
        v10 = sub_7E2370(v14, a2, 0x195, 1, 0, 0);
        goto LABEL_20;
      }
    }
    else
    {
      if ( !v6 )
      {
        v11 = FormHeapAlloc(0x10u);
        v9 = a2;
        if ( v11 )
          v10 = sub_7E2370(v11, a2, 0xC, 1, 0, 0);
        else
          v10 = 0;
        goto LABEL_20;
      }
      v7 = sub_7ED2A0(this);
      v8 = FormHeapAlloc(0x10u);
      v9 = a2;
      if ( v8 )
      {
        v10 = sub_7E2370(v8, a2, 0xD, 1, 1u, (int)v7);
LABEL_20:
        a2 = v10;
LABEL_21:
        sub_6AA320(&this->member.passes.vtlb, &a2);
        if ( ShaderPackage >= 3 && (dword_B42F40 & 0x10) != 0 )
        {
          for ( i = sub_7ED1A0(this); i; i = (_DWORD *)sub_7ED3B0(this) )
          {
            if ( *((_BYTE *)i + 0xF4) )
            {
              v16 = FormHeapAlloc(0x10u);
              a2 = v16;
              if ( v16 )
                v17 = sub_7E2370(v16, v9, 0, 0, 1u, (int)i);
              else
                v17 = 0;
              *(_WORD *)(v17 + 4) = 0x197;
              v18 = (NiTList_Entry_NiProperty *)(*((int (__thiscall **)(NiTList_NiProperty *))this->member.passes.vtlb
                                                 + 1))(&this->member.passes);
              v18->data = (NiProperty *)v17;
              v18->prev = 0;
              v18->next = this->member.passes.start;
              start = this->member.passes.start;
              if ( start )
                start->prev = v18;
              else
                this->member.passes.end = v18;
              ++this->member.passes.numItems;
              this->member.passes.start = v18;
            }
          }
        }
        this->member.lastRenderPassState = a3 | (LOWORD(dword_B42EAC) << 8);
        return &this->member.passes;
      }
    }
    v10 = 0;
    goto LABEL_20;
  }
  return &this->member.passes;
}
