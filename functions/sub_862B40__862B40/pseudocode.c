// Resolve an Oblivion Lighting30 selector to its pooled NiD3DPass and configure stages. The switch accepts concrete selectors only through 0x15F. SimpleShadow 0x14E..0x151 resolve to pools[36..39]; mode-5 casters 0x154/0x155 resolve to pools[42]/[43]. The default path returns null, so stock inherited selectors 0x177..0x17A cannot create a Lighting30 pass.
NiD3DPass *__thiscall Lighting30Shader_ResolveSelectorStages(
        NiD3DShader *this,
        unsigned int selector,
        BSShaderProperty *property,
        unsigned int variant)
{
  double v4; // st7
  NiD3DPass *v5; // esi
  NiD3DPass *result; // eax
  NiD3DPass *v7; // esi
  BSShaderProperty *v8; // ebx
  NiD3DPass *v9; // esi
  NiD3DPass *v10; // esi
  NiD3DPass *v11; // esi
  NiD3DTextureStage *Texture; // ebx
  NiRenderedTexture *v13; // eax
  NiD3DTextureStage *Unk08; // ebx
  NiRenderedTexture *v15; // eax
  NiD3DPass *v16; // esi
  NiD3DTextureStage *Stage; // edi
  NiRenderedTexture *v18; // eax
  NiD3DPass *v19; // esi
  NiD3DPass *v20; // esi
  NiD3DPass *v21; // esi
  NiD3DPass *v22; // esi
  NiD3DPass *v23; // esi
  NiD3DTextureStage *v24; // ebp
  NiRenderedTexture *v25; // eax
  NiD3DPass *v26; // esi
  NiD3DTextureStage *v27; // ebp
  NiRenderedTexture *v28; // eax
  NiD3DPass *v29; // esi
  NiD3DPass *v30; // esi
  NiD3DPass *v31; // esi
  NiD3DTextureStage *v32; // ebx
  NiRenderedTexture *v33; // eax
  NiD3DPass *v34; // esi
  NiD3DTextureStage *v35; // ebx
  NiRenderedTexture *v36; // eax
  int v37; // esi
  NiRenderedTexture *v38; // eax
  NiD3DPass *v39; // esi
  NiD3DPass *v40; // esi
  NiD3DPass *v41; // esi
  NiD3DPass *v42; // esi

  v5 = 0; /*0x862b46*/
  if ( (int)selector > 0x12A ) /*0x862b50*/
  {
    switch ( selector ) /*0x862b9c*/
    {
      case 0x12Du: /*0x862b9c*/
        v7 = (NiD3DPass *)unk_B473DC; /*0x862ba8*/
        if ( (_BYTE)variant ) /*0x862bb0*/
          goto LABEL_30; /*0x862bb0*/
        goto LABEL_31; /*0x862bb0*/
      case 0x12Eu: /*0x862b9c*/
        v7 = (NiD3DPass *)unk_B473E0; /*0x862bcd*/
        if ( (_BYTE)variant ) /*0x862bd5*/
          goto LABEL_30; /*0x862bd5*/
        goto LABEL_31; /*0x862bd5*/
      case 0x12Fu: /*0x862b9c*/
        v8 = property; /*0x862bf2*/
        v9 = (NiD3DPass *)unk_B473E4; /*0x862bfc*/
        unk_B46F98 = *(_DWORD *)&property[2].member.super.flags; /*0x862c02*/
        unk_B46F9C = property[2].member.passInfo; /*0x862c0e*/
        unk_B46FA0 = LODWORD(property[2].member.alpha); /*0x862c1a*/
        unk_B46FA4 = property[2].member.lastRenderPassState; /*0x862c26*/
        if ( (_BYTE)variant ) /*0x862c2e*/
          sub_862AD0(&v9->__vftable, selector, 3); /*0x862c32*/
        else
          sub_862AD0(&v9->__vftable, selector, 2); /*0x862c39*/
        goto LABEL_47; /*0x862c32*/
      case 0x130u: /*0x862b9c*/
        v10 = (NiD3DPass *)unk_B473E8; /*0x862c43*/
        if ( (_BYTE)variant ) /*0x862c4b*/
          goto LABEL_17; /*0x862c4b*/
        goto LABEL_33; /*0x862c4b*/
      case 0x131u: /*0x862b9c*/
        v11 = (NiD3DPass *)unk_B473EC; /*0x862c68*/
        if ( (_BYTE)variant ) /*0x862c70*/
          goto LABEL_19; /*0x862c70*/
        goto LABEL_21; /*0x862c70*/
      case 0x132u: /*0x862b9c*/
        v11 = (NiD3DPass *)unk_B473F0; /*0x862c7b*/
        if ( (_BYTE)variant ) /*0x862c83*/
LABEL_19:
          sub_862AD0(&v11->__vftable, selector, 7); /*0x862c72*/
        else
LABEL_21:
          sub_862AD0(&v11->__vftable, selector, 6); /*0x862c89*/
        goto LABEL_22; /*0x862c8d*/
      case 0x133u: /*0x862b9c*/
        v16 = (NiD3DPass *)unk_B473F4; /*0x862cdc*/
        if ( (_BYTE)variant ) /*0x862ce4*/
          goto LABEL_37; /*0x862ce4*/
        goto LABEL_38; /*0x862ce4*/
      case 0x134u: /*0x862b9c*/
        v16 = (NiD3DPass *)unk_B473F8; /*0x862cf6*/
        if ( (_BYTE)variant ) /*0x862cfe*/
          goto LABEL_37; /*0x862cfe*/
        goto LABEL_38; /*0x862cfe*/
      case 0x135u: /*0x862b9c*/
        v7 = (NiD3DPass *)unk_B473FC; /*0x862d10*/
        if ( (_BYTE)variant ) /*0x862d18*/
          goto LABEL_30; /*0x862d18*/
        goto LABEL_31; /*0x862d18*/
      case 0x136u: /*0x862b9c*/
        v7 = (NiD3DPass *)unk_B47400; /*0x862d31*/
        if ( (_BYTE)variant ) /*0x862d39*/
        {
LABEL_30:
          sub_862AD0(&v7->__vftable, selector, 1); /*0x862d3b*/
          return v7; /*0x862d46*/
        }
        else
        {
LABEL_31:
          sub_862AD0(&v7->__vftable, selector, 0); /*0x862d4d*/
          return v7; /*0x862d58*/
        }
      case 0x137u: /*0x862b9c*/
        v10 = (NiD3DPass *)unk_B47404; /*0x862d64*/
        if ( (_BYTE)variant ) /*0x862d6c*/
        {
LABEL_17:
          sub_862AD0(&v10->__vftable, selector, 5); /*0x862c51*/
          return v10; /*0x862c5c*/
        }
        else
        {
LABEL_33:
          sub_862AD0(&v10->__vftable, selector, 4); /*0x862d80*/
          return v10; /*0x862d8b*/
        }
      case 0x138u: /*0x862b9c*/
        v16 = (NiD3DPass *)unk_B47408; /*0x862d97*/
        if ( (_BYTE)variant ) /*0x862d9f*/
          goto LABEL_37; /*0x862d9f*/
        goto LABEL_38; /*0x862d9f*/
      case 0x139u: /*0x862b9c*/
        v16 = (NiD3DPass *)unk_B4740C; /*0x862daa*/
        if ( (_BYTE)variant ) /*0x862db2*/
LABEL_37:
          sub_862AD0(&v16->__vftable, selector, 9); /*0x862db4*/
        else
LABEL_38:
          sub_862AD0(&v16->__vftable, selector, 8); /*0x862db8*/
        goto LABEL_39; /*0x862db6*/
      case 0x13Au: /*0x862b9c*/
        v19 = (NiD3DPass *)unk_B47410; /*0x862ded*/
        if ( (_BYTE)variant ) /*0x862df5*/
          goto LABEL_41; /*0x862df5*/
        goto LABEL_43; /*0x862df5*/
      case 0x13Bu: /*0x862b9c*/
        v19 = (NiD3DPass *)unk_B47414; /*0x862e0e*/
        if ( (_BYTE)variant ) /*0x862e16*/
        {
LABEL_41:
          sub_862AD0(&v19->__vftable, selector, 0xB); /*0x862df7*/
          return v19; /*0x862e02*/
        }
        else
        {
LABEL_43:
          sub_862AD0(&v19->__vftable, selector, 0xA); /*0x862e2a*/
          return v19; /*0x862e35*/
        }
      case 0x13Cu: /*0x862b9c*/
        v8 = property; /*0x862e41*/
        v9 = (NiD3DPass *)unk_B47418; /*0x862e4b*/
        unk_B46F98 = *(_DWORD *)&property[2].member.super.flags; /*0x862e51*/
        unk_B46F9C = property[2].member.passInfo; /*0x862e5d*/
        unk_B46FA0 = LODWORD(property[2].member.alpha); /*0x862e69*/
        unk_B46FA4 = property[2].member.lastRenderPassState; /*0x862e75*/
        if ( (_BYTE)variant ) /*0x862e7d*/
          sub_862AD0(&v9->__vftable, selector, 0xD); /*0x862e81*/
        else
          sub_862AD0(&v9->__vftable, selector, 0xC); /*0x862e87*/
LABEL_47:
        NiD3DTextureStage_SetTexture((NiD3DTextureStage *)v9->Stages.data[1].Texture, (NiRenderedTexture *)unk_B430F8); /*0x862e8c*/
        NiD3DTextureStage_SetTexture( /*0x862eaa*/
          (NiD3DTextureStage *)v9->Stages.data[1].Unk08,
          (NiRenderedTexture *)v8[2].member.passes.start);
        return v9; /*0x862eb5*/
      case 0x13Du: /*0x862b9c*/
        v20 = (NiD3DPass *)unk_B4741C; /*0x862eb8*/
        goto LABEL_64; /*0x862ebe*/
      case 0x13Eu: /*0x862b9c*/
        v11 = (NiD3DPass *)unk_B47420; /*0x862ec8*/
        if ( (_BYTE)variant ) /*0x862ed0*/
          goto LABEL_50; /*0x862ed0*/
        goto LABEL_52; /*0x862ed0*/
      case 0x13Fu: /*0x862b9c*/
        v11 = (NiD3DPass *)unk_B47424; /*0x862edb*/
        if ( (_BYTE)variant ) /*0x862ee3*/
LABEL_50:
          sub_862AD0(&v11->__vftable, selector, 0x11); /*0x862ed2*/
        else
LABEL_52:
          sub_862AD0(&v11->__vftable, selector, 0x10); /*0x862ee9*/
LABEL_22:
        Texture = (NiD3DTextureStage *)v11->Stages.data[1].Texture; /*0x862c92*/
        v13 = (NiRenderedTexture *)(*((int (__thiscall **)(BSShaderProperty *, int))property->vtbl + 0x22))(property, 1); /*0x862ca8*/
        NiD3DTextureStage_SetTexture(Texture, v13); /*0x862cad*/
        Unk08 = (NiD3DTextureStage *)v11->Stages.data[1].Unk08; /*0x862cb7*/
        v15 = (NiRenderedTexture *)(*((int (__thiscall **)(BSShaderProperty *, int))property->vtbl + 0x23))(property, 1); /*0x862cc4*/
        NiD3DTextureStage_SetTexture(Unk08, v15); /*0x862cc9*/
        return v11; /*0x862cd4*/
      case 0x140u: /*0x862b9c*/
        v16 = (NiD3DPass *)unk_B47428; /*0x862f3c*/
        if ( (_BYTE)variant ) /*0x862f44*/
          goto LABEL_71; /*0x862f44*/
        goto LABEL_72; /*0x862f44*/
      case 0x141u: /*0x862b9c*/
        v16 = (NiD3DPass *)unk_B4742C; /*0x862f56*/
        if ( (_BYTE)variant ) /*0x862f5e*/
          goto LABEL_71; /*0x862f5e*/
        goto LABEL_72; /*0x862f5e*/
      case 0x142u: /*0x862b9c*/
        v21 = (NiD3DPass *)unk_B47430; /*0x862f6b*/
        goto LABEL_59; /*0x862f71*/
      case 0x143u: /*0x862b9c*/
        v21 = (NiD3DPass *)unk_B47434; /*0x862f73*/
LABEL_59:
        if ( (_BYTE)variant ) /*0x862f80*/
          sub_862AD0(&v21->__vftable, selector, 0xB); /*0x862f86*/
        else
          sub_862AD0(&v21->__vftable, selector, 0xA); /*0x862f98*/
        return v21; /*0x862f91*/
      case 0x144u: /*0x862b9c*/
        v20 = (NiD3DPass *)unk_B47438; /*0x862fa6*/
LABEL_64:
        if ( (_BYTE)variant ) /*0x862fb3*/
          sub_862AD0(&v20->__vftable, selector, 0xF); /*0x862fb9*/
        else
          sub_862AD0(&v20->__vftable, selector, 0xE); /*0x862fcb*/
        return v20; /*0x862fc4*/
      case 0x145u: /*0x862b9c*/
        v16 = (NiD3DPass *)unk_B4743C; /*0x862fde*/
        if ( (_BYTE)variant ) /*0x862fe6*/
          goto LABEL_71; /*0x862fe6*/
        goto LABEL_72; /*0x862fe6*/
      case 0x146u: /*0x862b9c*/
        v16 = (NiD3DPass *)unk_B47440; /*0x862ff1*/
        if ( (_BYTE)variant ) /*0x862ff9*/
LABEL_71:
          sub_862AD0(&v16->__vftable, selector, 0x13); /*0x862ffb*/
        else
LABEL_72:
          sub_862AD0(&v16->__vftable, selector, 0x12); /*0x862fff*/
LABEL_39:
        Stage = (NiD3DTextureStage *)v16->Stages.data[2].Stage; /*0x862dc1*/
        v18 = (NiRenderedTexture *)(*((int (__thiscall **)(BSShaderProperty *, _DWORD))property->vtbl + 0x24))( /*0x862dd5*/
                                     property,
                                     0);
        NiD3DTextureStage_SetTexture(Stage, v18); /*0x862dda*/
        return v16; /*0x862de5*/
      case 0x147u: /*0x862b9c*/
        v22 = (NiD3DPass *)unk_B47444; /*0x86302f*/
        goto LABEL_80; /*0x863035*/
      case 0x148u: /*0x862b9c*/
        v22 = (NiD3DPass *)unk_B47448; /*0x863037*/
        goto LABEL_80; /*0x86303d*/
      case 0x149u: /*0x862b9c*/
        v22 = (NiD3DPass *)unk_B4744C; /*0x86303f*/
        goto LABEL_80; /*0x863045*/
      case 0x14Au: /*0x862b9c*/
        v22 = (NiD3DPass *)unk_B47450; /*0x863047*/
        goto LABEL_80; /*0x86304d*/
      case 0x14Bu: /*0x862b9c*/
        v22 = (NiD3DPass *)unk_B47454; /*0x86304f*/
        goto LABEL_80; /*0x863055*/
      case 0x14Cu: /*0x862b9c*/
        v22 = (NiD3DPass *)unk_B47458; /*0x863057*/
        goto LABEL_80; /*0x86305d*/
      case 0x14Du: /*0x862b9c*/
        v22 = (NiD3DPass *)unk_B4745C; /*0x86305f*/
LABEL_80:
        sub_862660((int)v22, (int)property, selector); /*0x863065*/
        sub_862730((int)v22, property, 0); /*0x863079*/
        return v22; /*0x863084*/
      case 0x14Eu: /*0x862b9c*/
        return unk_B47460; /*0x863093*/
      case 0x14Fu: /*0x862b9c*/
        return unk_B47464; /*0x8630a2*/
      case 0x150u: /*0x862b9c*/
        return unk_B47468; /*0x8630b1*/
      case 0x151u: /*0x862b9c*/
        return unk_B4746C; /*0x8630c0*/
      case 0x152u: /*0x862b9c*/
        v23 = (NiD3DPass *)unk_B47470; /*0x8630c3*/
        v24 = **(NiD3DTextureStage ***)(unk_B47470 + 0x24); /*0x8630d2*/
        v25 = (NiRenderedTexture *)(*((int (__thiscall **)(BSShaderProperty *, _DWORD))property->vtbl + 0x22))( /*0x8630de*/
                                     property,
                                     0);
        NiD3DTextureStage_SetTexture(v24, v25); /*0x8630e3*/
        NiD3DTextureStage_SetTexture((NiD3DTextureStage *)v23->Stages.data->Texture, (NiRenderedTexture *)unk_B43128); /*0x8630f5*/
        sub_862600((int)v23, 2u); /*0x8630ff*/
        sub_8627C0(property); /*0x863107*/
        flt_B46DE8[0] = v4; /*0x86310c*/
        g_Lighting30_MaterialLightParameters[0] = flt_B46DE8[0]; /*0x86311a*/
        return v23; /*0x863124*/
      case 0x153u: /*0x862b9c*/
        v26 = (NiD3DPass *)unk_B47474; /*0x863127*/
        v27 = **(NiD3DTextureStage ***)(unk_B47474 + 0x24); /*0x863136*/
        v28 = (NiRenderedTexture *)(*((int (__thiscall **)(BSShaderProperty *, _DWORD))property->vtbl + 0x22))( /*0x863142*/
                                     property,
                                     0);
        NiD3DTextureStage_SetTexture(v27, v28); /*0x863147*/
        NiD3DTextureStage_SetTexture((NiD3DTextureStage *)v26->Stages.data->Texture, (NiRenderedTexture *)unk_B43128); /*0x863159*/
        sub_862600((int)v26, 2u); /*0x863163*/
        sub_8627C0(property); /*0x86316b*/
        flt_B46DE8[0] = v4; /*0x863170*/
        g_Lighting30_MaterialLightParameters[0] = flt_B46DE8[0]; /*0x86317e*/
        return v26; /*0x863188*/
      case 0x154u: /*0x862b9c*/
        v31 = (NiD3DPass *)unk_B47478; /*0x8631c3*/
        v32 = **(NiD3DTextureStage ***)(unk_B47478 + 0x24); /*0x8631d2*/
        v33 = (NiRenderedTexture *)(*((int (__thiscall **)(BSShaderProperty *, _DWORD))property->vtbl + 0x22))( /*0x8631dc*/
                                     property,
                                     0);
        NiD3DTextureStage_SetTexture(v32, v33); /*0x8631e1*/
        sub_862600((int)v31, 1u); /*0x8631eb*/
        return v31; /*0x8631f6*/
      case 0x155u: /*0x862b9c*/
        v34 = (NiD3DPass *)unk_B4747C; /*0x8631f9*/
        v35 = **(NiD3DTextureStage ***)(unk_B4747C + 0x24); /*0x863208*/
        v36 = (NiRenderedTexture *)(*((int (__thiscall **)(BSShaderProperty *, _DWORD))property->vtbl + 0x22))( /*0x863212*/
                                     property,
                                     0);
        NiD3DTextureStage_SetTexture(v35, v36); /*0x863217*/
        sub_862600((int)v34, 1u); /*0x863221*/
        return v34; /*0x86322c*/
      case 0x156u: /*0x862b9c*/
        v37 = unk_B47480; /*0x86322f*/
        goto LABEL_92; /*0x86322f*/
      case 0x157u: /*0x862b9c*/
        v37 = unk_B47484; /*0x86329a*/
        goto LABEL_92; /*0x8632a0*/
      case 0x158u: /*0x862b9c*/
        v37 = unk_B47488; /*0x8632a2*/
LABEL_92:
        if ( (*((int (__thiscall **)(BSShaderProperty *, _DWORD))property->vtbl + 0x23))(property, 0) ) /*0x863245*/
        {
          v38 = (NiRenderedTexture *)(*((int (__thiscall **)(BSShaderProperty *, _DWORD))property->vtbl + 0x23))( /*0x863257*/
                                       property,
                                       0);
          NiD3DTextureStage_SetTexture(**(NiD3DTextureStage ***)(v37 + 0x24), v38); /*0x86325f*/
        }
        else
        {
          NiD3DTextureStage_SetTexture( /*0x863282*/
            **(NiD3DTextureStage ***)(v37 + 0x24),
            (NiRenderedTexture *)LODWORD(flt_B430DC[0]));
        }
        sub_862600(v37, 1u); /*0x863269*/
        result = (NiD3DPass *)v37; /*0x863270*/
        break; /*0x863274*/
      case 0x159u: /*0x862b9c*/
        v39 = (NiD3DPass *)unk_B4748C; /*0x8632aa*/
        sub_862600(unk_B4748C, 0); /*0x8632b5*/
        result = v39; /*0x8632bc*/
        break; /*0x8632c0*/
      case 0x15Au: /*0x862b9c*/
        v40 = (NiD3DPass *)unk_B47490; /*0x8632c3*/
        sub_862600(unk_B47490, 0); /*0x8632ce*/
        result = v40; /*0x8632d5*/
        break; /*0x8632d9*/
      case 0x15Bu: /*0x862b9c*/
        v41 = (NiD3DPass *)unk_B47494; /*0x8632dc*/
        sub_862600(unk_B47494, 0); /*0x8632e7*/
        result = v41; /*0x8632ee*/
        break; /*0x8632f2*/
      case 0x15Cu: /*0x862b9c*/
        v42 = (NiD3DPass *)unk_B47498; /*0x8632f5*/
        sub_862600(unk_B47498, 0); /*0x863300*/
        result = v42; /*0x863307*/
        break; /*0x86330b*/
      case 0x15Du: /*0x862b9c*/
        v5 = (NiD3DPass *)unk_B4749C; /*0x86330e*/
        sub_862600(unk_B4749C, 0); /*0x863319*/
        return v5; /*0x863319*/
      case 0x15Eu: /*0x862b9c*/
        v29 = (NiD3DPass *)unk_B474A0; /*0x86318b*/
        sub_7FED20(property, unk_B474A0); /*0x863199*/
        result = v29; /*0x8631a0*/
        break; /*0x8631a4*/
      case 0x15Fu: /*0x862b9c*/
        v30 = (NiD3DPass *)unk_B474A4; /*0x8631a7*/
        sub_7FED20(property, unk_B474A4); /*0x8631b5*/
        result = v30; /*0x8631bc*/
        break; /*0x8631c0*/
      default:
        return v5;                              // Concrete Lighting30 selector switch covers selector-0x12D <= 0x32, i.e. through 0x15F. Higher selectors use the null default.
    }
  }
  else
  {
    switch ( selector ) /*0x862b52*/
    {
      case 0x12Au: /*0x862b52*/
        return (NiD3DPass *)unk_B473D0[0]; /*0x862b85*/
      case 4u: /*0x862b52*/
        return (NiD3DPass *)unk_B473D4; /*0x862b77*/
      case 5u: /*0x862b52*/
        return (NiD3DPass *)unk_B473D8; /*0x862b69*/
      default:
        return v5; /*0x86331f*/
    }
  }
  return result; /*0x862b68*/
}
