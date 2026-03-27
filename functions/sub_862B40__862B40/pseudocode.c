NiD3DPassVtbl **__userpurge sub_862B40@<eax>(double a1@<st0>, signed int a2, _DWORD *a3, int a4)
{
  NiD3DPassVtbl **v5; // esi
  _DWORD *v6; // ebx
  int v7; // esi
  NiD3DPassVtbl **v8; // esi
  int v9; // esi
  _DWORD *v10; // ebx
  NiRenderedTexture *v11; // eax
  _DWORD *v12; // ebx
  NiRenderedTexture *v13; // eax
  int v14; // esi
  _DWORD *v15; // edi
  NiRenderedTexture *v16; // eax
  NiD3DPassVtbl **v17; // esi
  NiD3DPassVtbl **v18; // esi
  NiD3DPassVtbl **v19; // esi
  int v20; // esi
  int v21; // esi
  _DWORD *v22; // ebp
  NiRenderedTexture *v23; // eax
  int v24; // esi
  _DWORD *v25; // ebp
  NiRenderedTexture *v26; // eax
  int v27; // esi
  int v28; // esi
  int v29; // esi
  _DWORD *v30; // ebx
  NiRenderedTexture *v31; // eax
  int v32; // esi
  _DWORD *v33; // ebx
  NiRenderedTexture *v34; // eax
  int v35; // esi
  NiRenderedTexture *v36; // eax
  int v37; // esi
  int v38; // esi
  int v39; // esi
  int v40; // esi

  if ( a2 > 0x12A )
  {
    switch ( a2 )
    {
      case 0x12D:
        v5 = (NiD3DPassVtbl **)dword_B473DC;
        if ( (_BYTE)a4 )
          goto LABEL_30;
        goto LABEL_31;
      case 0x12E:
        v5 = (NiD3DPassVtbl **)dword_B473E0;
        if ( (_BYTE)a4 )
          goto LABEL_30;
        goto LABEL_31;
      case 0x12F:
        v6 = a3;
        v7 = dword_B473E4;
        dword_B46F98 = a3[0x3C];
        dword_B46F9C = a3[0x3D];
        dword_B46FA0 = a3[0x3E];
        dword_B46FA4 = a3[0x3F];
        if ( (_BYTE)a4 )
          sub_862AD0((NiD3DPassVtbl **)v7, a2, 3);
        else
          sub_862AD0((NiD3DPassVtbl **)v7, a2, 2);
        goto LABEL_47;
      case 0x130:
        v8 = (NiD3DPassVtbl **)dword_B473E8;
        if ( (_BYTE)a4 )
          goto LABEL_17;
        goto LABEL_33;
      case 0x131:
        v9 = dword_B473EC;
        if ( (_BYTE)a4 )
          goto LABEL_19;
        goto LABEL_21;
      case 0x132:
        v9 = dword_B473F0;
        if ( (_BYTE)a4 )
LABEL_19:
          sub_862AD0((NiD3DPassVtbl **)v9, a2, 7);
        else
LABEL_21:
          sub_862AD0((NiD3DPassVtbl **)v9, a2, 6);
        goto LABEL_22;
      case 0x133:
        v14 = dword_B473F4;
        if ( (_BYTE)a4 )
          goto LABEL_37;
        goto LABEL_38;
      case 0x134:
        v14 = dword_B473F8;
        if ( (_BYTE)a4 )
          goto LABEL_37;
        goto LABEL_38;
      case 0x135:
        v5 = (NiD3DPassVtbl **)dword_B473FC;
        if ( (_BYTE)a4 )
          goto LABEL_30;
        goto LABEL_31;
      case 0x136:
        v5 = (NiD3DPassVtbl **)dword_B47400;
        if ( (_BYTE)a4 )
        {
LABEL_30:
          sub_862AD0(v5, a2, 1);
          return v5;
        }
        else
        {
LABEL_31:
          sub_862AD0(v5, a2, 0);
          return v5;
        }
      case 0x137:
        v8 = (NiD3DPassVtbl **)dword_B47404;
        if ( (_BYTE)a4 )
        {
LABEL_17:
          sub_862AD0(v8, a2, 5);
          return v8;
        }
        else
        {
LABEL_33:
          sub_862AD0(v8, a2, 4);
          return v8;
        }
      case 0x138:
        v14 = dword_B47408;
        if ( (_BYTE)a4 )
          goto LABEL_37;
        goto LABEL_38;
      case 0x139:
        v14 = dword_B4740C;
        if ( (_BYTE)a4 )
LABEL_37:
          sub_862AD0((NiD3DPassVtbl **)v14, a2, 9);
        else
LABEL_38:
          sub_862AD0((NiD3DPassVtbl **)v14, a2, 8);
        goto LABEL_39;
      case 0x13A:
        v17 = (NiD3DPassVtbl **)dword_B47410;
        if ( (_BYTE)a4 )
          goto LABEL_41;
        goto LABEL_43;
      case 0x13B:
        v17 = (NiD3DPassVtbl **)dword_B47414;
        if ( (_BYTE)a4 )
        {
LABEL_41:
          sub_862AD0(v17, a2, 0xB);
          return v17;
        }
        else
        {
LABEL_43:
          sub_862AD0(v17, a2, 0xA);
          return v17;
        }
      case 0x13C:
        v6 = a3;
        v7 = dword_B47418;
        dword_B46F98 = a3[0x3C];
        dword_B46F9C = a3[0x3D];
        dword_B46FA0 = a3[0x3E];
        dword_B46FA4 = a3[0x3F];
        if ( (_BYTE)a4 )
          sub_862AD0((NiD3DPassVtbl **)v7, a2, 0xD);
        else
          sub_862AD0((NiD3DPassVtbl **)v7, a2, 0xC);
LABEL_47:
        sub_76C910(*(_DWORD **)(*(_DWORD *)(v7 + 0x24) + 0x10), (NiRenderedTexture *)dword_B430F8);
        sub_76C910(*(_DWORD **)(*(_DWORD *)(v7 + 0x24) + 0x14), (NiRenderedTexture *)v6[0x41]);
        return (NiD3DPassVtbl **)v7;
      case 0x13D:
        v18 = (NiD3DPassVtbl **)dword_B4741C;
        goto LABEL_64;
      case 0x13E:
        v9 = dword_B47420;
        if ( (_BYTE)a4 )
          goto LABEL_50;
        goto LABEL_52;
      case 0x13F:
        v9 = dword_B47424;
        if ( (_BYTE)a4 )
LABEL_50:
          sub_862AD0((NiD3DPassVtbl **)v9, a2, 0x11);
        else
LABEL_52:
          sub_862AD0((NiD3DPassVtbl **)v9, a2, 0x10);
LABEL_22:
        v10 = *(_DWORD **)(*(_DWORD *)(v9 + 0x24) + 0x10);
        v11 = (NiRenderedTexture *)(*(int (__thiscall **)(_DWORD *, int))(*a3 + 0x88))(a3, 1);
        sub_76C910(v10, v11);
        v12 = *(_DWORD **)(*(_DWORD *)(v9 + 0x24) + 0x14);
        v13 = (NiRenderedTexture *)(*(int (__thiscall **)(_DWORD *, int))(*a3 + 0x8C))(a3, 1);
        sub_76C910(v12, v13);
        return (NiD3DPassVtbl **)v9;
      case 0x140:
        v14 = dword_B47428;
        if ( (_BYTE)a4 )
          goto LABEL_71;
        goto LABEL_72;
      case 0x141:
        v14 = dword_B4742C;
        if ( (_BYTE)a4 )
          goto LABEL_71;
        goto LABEL_72;
      case 0x142:
        v19 = (NiD3DPassVtbl **)dword_B47430;
        goto LABEL_59;
      case 0x143:
        v19 = (NiD3DPassVtbl **)dword_B47434;
LABEL_59:
        if ( (_BYTE)a4 )
          sub_862AD0(v19, a2, 0xB);
        else
          sub_862AD0(v19, a2, 0xA);
        return v19;
      case 0x144:
        v18 = (NiD3DPassVtbl **)dword_B47438;
LABEL_64:
        if ( (_BYTE)a4 )
          sub_862AD0(v18, a2, 0xF);
        else
          sub_862AD0(v18, a2, 0xE);
        return v18;
      case 0x145:
        v14 = dword_B4743C;
        if ( (_BYTE)a4 )
          goto LABEL_71;
        goto LABEL_72;
      case 0x146:
        v14 = dword_B47440;
        if ( (_BYTE)a4 )
LABEL_71:
          sub_862AD0((NiD3DPassVtbl **)v14, a2, 0x13);
        else
LABEL_72:
          sub_862AD0((NiD3DPassVtbl **)v14, a2, 0x12);
LABEL_39:
        v15 = *(_DWORD **)(*(_DWORD *)(v14 + 0x24) + 0x18);
        v16 = (NiRenderedTexture *)(*(int (__thiscall **)(_DWORD *, _DWORD))(*a3 + 0x90))(a3, 0);
        sub_76C910(v15, v16);
        return (NiD3DPassVtbl **)v14;
      case 0x147:
        v20 = dword_B47444;
        goto LABEL_80;
      case 0x148:
        v20 = dword_B47448;
        goto LABEL_80;
      case 0x149:
        v20 = dword_B4744C;
        goto LABEL_80;
      case 0x14A:
        v20 = dword_B47450;
        goto LABEL_80;
      case 0x14B:
        v20 = dword_B47454;
        goto LABEL_80;
      case 0x14C:
        v20 = dword_B47458;
        goto LABEL_80;
      case 0x14D:
        v20 = dword_B4745C;
LABEL_80:
        sub_862660(v20, (int)a3, a2);
        sub_862730(v20, a3, 0);
        return (NiD3DPassVtbl **)v20;
      case 0x14E:
        return (NiD3DPassVtbl **)dword_B47460;
      case 0x14F:
        return (NiD3DPassVtbl **)dword_B47464;
      case 0x150:
        return (NiD3DPassVtbl **)dword_B47468;
      case 0x151:
        return (NiD3DPassVtbl **)dword_B4746C;
      case 0x152:
        v21 = dword_B47470;
        v22 = **(_DWORD ***)(dword_B47470 + 0x24);
        v23 = (NiRenderedTexture *)(*(int (__thiscall **)(_DWORD *, _DWORD))(*a3 + 0x88))(a3, 0);
        sub_76C910(v22, v23);
        sub_76C910(*(_DWORD **)(*(_DWORD *)(v21 + 0x24) + 4), (NiRenderedTexture *)dword_B43128);
        sub_862600(v21, 2u);
        sub_8627C0(a3);
        *(float *)&dword_B46DE8 = a1;
        flt_B46FD8 = *(float *)&dword_B46DE8;
        return (NiD3DPassVtbl **)v21;
      case 0x153:
        v24 = dword_B47474;
        v25 = **(_DWORD ***)(dword_B47474 + 0x24);
        v26 = (NiRenderedTexture *)(*(int (__thiscall **)(_DWORD *, _DWORD))(*a3 + 0x88))(a3, 0);
        sub_76C910(v25, v26);
        sub_76C910(*(_DWORD **)(*(_DWORD *)(v24 + 0x24) + 4), (NiRenderedTexture *)dword_B43128);
        sub_862600(v24, 2u);
        sub_8627C0(a3);
        *(float *)&dword_B46DE8 = a1;
        flt_B46FD8 = *(float *)&dword_B46DE8;
        return (NiD3DPassVtbl **)v24;
      case 0x154:
        v29 = dword_B47478;
        v30 = **(_DWORD ***)(dword_B47478 + 0x24);
        v31 = (NiRenderedTexture *)(*(int (__thiscall **)(_DWORD *, _DWORD))(*a3 + 0x88))(a3, 0);
        sub_76C910(v30, v31);
        sub_862600(v29, 1u);
        return (NiD3DPassVtbl **)v29;
      case 0x155:
        v32 = dword_B4747C;
        v33 = **(_DWORD ***)(dword_B4747C + 0x24);
        v34 = (NiRenderedTexture *)(*(int (__thiscall **)(_DWORD *, _DWORD))(*a3 + 0x88))(a3, 0);
        sub_76C910(v33, v34);
        sub_862600(v32, 1u);
        return (NiD3DPassVtbl **)v32;
      case 0x156:
        v35 = dword_B47480;
        goto LABEL_92;
      case 0x157:
        v35 = dword_B47484;
        goto LABEL_92;
      case 0x158:
        v35 = dword_B47488;
LABEL_92:
        if ( (*(int (__thiscall **)(_DWORD *, _DWORD))(*a3 + 0x8C))(a3, 0) )
        {
          v36 = (NiRenderedTexture *)(*(int (__thiscall **)(_DWORD *, _DWORD))(*a3 + 0x8C))(a3, 0);
          sub_76C910(**(_DWORD ***)(v35 + 0x24), v36);
          sub_862600(v35, 1u);
        }
        else
        {
          sub_76C910(**(_DWORD ***)(v35 + 0x24), (NiRenderedTexture *)dword_B430DC);
          sub_862600(v35, 1u);
        }
        return (NiD3DPassVtbl **)v35;
      case 0x159:
        v37 = dword_B4748C;
        sub_862600(dword_B4748C, 0);
        return (NiD3DPassVtbl **)v37;
      case 0x15A:
        v38 = dword_B47490;
        sub_862600(dword_B47490, 0);
        return (NiD3DPassVtbl **)v38;
      case 0x15B:
        v39 = dword_B47494;
        sub_862600(dword_B47494, 0);
        return (NiD3DPassVtbl **)v39;
      case 0x15C:
        v40 = dword_B47498;
        sub_862600(dword_B47498, 0);
        return (NiD3DPassVtbl **)v40;
      case 0x15D:
        sub_862600(dword_B4749C, 0);
        return (NiD3DPassVtbl **)def_862B9C(a2, a3, a4);
      case 0x15E:
        v27 = dword_B474A0;
        sub_7FED20(a3, dword_B474A0);
        return (NiD3DPassVtbl **)v27;
      case 0x15F:
        v28 = dword_B474A4;
        sub_7FED20(a3, dword_B474A4);
        return (NiD3DPassVtbl **)v28;
      default:
        goto LABEL_103;
    }
  }
  if ( a2 == 0x12A )
    return (NiD3DPassVtbl **)dword_B473D0[0];
  if ( a2 == 4 )
    return (NiD3DPassVtbl **)dword_B473D4;
  if ( a2 != 5 )
LABEL_103:
    JUMPOUT(0x86331F);
  return (NiD3DPassVtbl **)dword_B473D8;
}
