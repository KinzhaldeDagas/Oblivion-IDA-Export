void __thiscall sub_4C6730(int this, char a2, int a3)
{
  int v4; // ebx
  int v5; // edi
  TESObjectCELL *v6; // ecx
  unsigned int v7; // esi
  NiNode *NiNode; // eax
  int v9; // eax
  int v10; // ebp
  int v11; // ecx
  int v12; // eax
  int v13; // esi
  NiProperty *NiPropertyByID; // eax
  NiProperty *v15; // esi
  BOOL v16; // eax
  int v17; // eax
  int v18; // ebx
  int v19; // eax
  int v20; // ebx
  int v21; // eax
  int v22; // ebx
  int v23; // eax
  int *v24; // edi
  int v25; // ebx
  int v26; // eax
  int v27; // ebx
  int v28; // eax
  int *v29; // ebp
  int v30; // ebx
  int v31; // eax
  int v32; // ebx
  _DWORD **v33; // eax
  int v34; // ebx
  _DWORD **v35; // eax
  char v36; // di
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // eax
  int v43; // eax
  char v44; // bp
  _BYTE **v45; // eax
  char v46; // si
  _BYTE **v47; // eax
  char v48; // al
  int v50; // [esp+24h] [ebp-7Ch]
  BSShaderProperty *v51; // [esp+28h] [ebp-78h]
  int v52; // [esp+2Ch] [ebp-74h]
  int *v53; // [esp+30h] [ebp-70h]
  int *v54; // [esp+34h] [ebp-6Ch]
  int *v55; // [esp+38h] [ebp-68h]
  char v56; // [esp+38h] [ebp-68h]
  int *v57; // [esp+3Ch] [ebp-64h]
  char v58; // [esp+3Ch] [ebp-64h]
  int *v59; // [esp+40h] [ebp-60h]
  char v60; // [esp+40h] [ebp-60h]
  int *v61; // [esp+44h] [ebp-5Ch]
  char v62; // [esp+44h] [ebp-5Ch]
  int *v63; // [esp+48h] [ebp-58h]
  char v64; // [esp+48h] [ebp-58h]
  int v65; // [esp+4Ch] [ebp-54h] BYREF
  int v66; // [esp+50h] [ebp-50h] BYREF
  int v67; // [esp+54h] [ebp-4Ch] BYREF
  int v68; // [esp+58h] [ebp-48h] BYREF
  int v69; // [esp+5Ch] [ebp-44h] BYREF
  int v70; // [esp+60h] [ebp-40h] BYREF
  int v71; // [esp+64h] [ebp-3Ch] BYREF
  int v72; // [esp+68h] [ebp-38h] BYREF
  int v73; // [esp+6Ch] [ebp-34h] BYREF
  int v74; // [esp+70h] [ebp-30h] BYREF
  int v75; // [esp+74h] [ebp-2Ch] BYREF
  int v76; // [esp+78h] [ebp-28h] BYREF
  int v77; // [esp+7Ch] [ebp-24h] BYREF
  int v78; // [esp+80h] [ebp-20h] BYREF
  int v79; // [esp+84h] [ebp-1Ch] BYREF
  int v80; // [esp+88h] [ebp-18h] BYREF
  int v81; // [esp+8Ch] [ebp-14h] BYREF
  int v82; // [esp+90h] [ebp-10h] BYREF
  int v83; // [esp+9Ch] [ebp-4h]

  v4 = 0;
  if ( **(_DWORD **)(this + 0x24) )
  {
    v5 = 0;
    v50 = 0;
    do
    {
      v6 = *(TESObjectCELL **)(this + 0x20);
      if ( v6 )
      {
        v7 = v5 + 2;
        NiNode = TESObjectCELL_GetNiNode_(v6);
        if ( NiNode
          && NiNode->members.children.end > v7
          && (v9 = *((_DWORD *)&NiNode->members.children.data->vtbl + v7)) != 0
          && *(_WORD *)(v9 + 0xB6) )
        {
          v10 = **(_DWORD **)(v9 + 0xB0);
        }
        else
        {
          v10 = 0;
        }
        v52 = v10;
        if ( v10 )
        {
          if ( a2 )
          {
            if ( *(_WORD *)(v10 + 0xB6) )
            {
              v11 = **(_DWORD **)(v10 + 0xB0);
              if ( v11 )
              {
                v12 = (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 0xC))(v11);
                v13 = v12;
                if ( v12 )
                {
                  sub_72A0F0(
                    (float *)(*(_DWORD *)(v12 + 0xB4) + 0xC),
                    *(unsigned __int16 *)(*(_DWORD *)(v12 + 0xB4) + 8),
                    *(float **)(*(_DWORD *)(v12 + 0xB4) + 0x1C));
                  *(_WORD *)(*(_DWORD *)(v13 + 0xB4) + 0x2E) |= 0xFu;
                  NiPropertyByID = NiNode_GetNiPropertyByID((NiNode *)v13, 4);
                  v15 = NiPropertyByID;
                  v16 = NiPropertyByID
                     && (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) >= 5
                     && (*((int (__thiscall **)(NiProperty *))v15->vtbl + 0x15))(v15) <= 0xA;
                  v51 = v16 ? (BSShaderProperty *)v15 : 0;
                  if ( v51 )
                  {
                    v17 = *(_DWORD *)(*(_DWORD *)(this + 0x24) + 4 * v5 + 0x30);
                    if ( *(_DWORD *)(v17 + 0x1C) )
                    {
                      v53 = sub_4C1670(*(_DWORD **)(v17 + 0x1C), &v82);
                      v18 = v4 | 1;
                    }
                    else
                    {
                      v73 = 0;
                      v53 = &v73;
                      v18 = v4 | 2;
                    }
                    v19 = *(_DWORD *)(*(_DWORD *)(this + 0x24) + 4 * v5 + 0x30);
                    if ( *(_DWORD *)(v19 + 0x18) )
                    {
                      v54 = sub_4C1670(*(_DWORD **)(v19 + 0x18), &v81);
                      v20 = v18 | 4;
                    }
                    else
                    {
                      v72 = 0;
                      v54 = &v72;
                      v20 = v18 | 8;
                    }
                    v21 = *(_DWORD *)(*(_DWORD *)(this + 0x24) + 4 * v5 + 0x30);
                    if ( *(_DWORD *)(v21 + 0x14) )
                    {
                      v55 = sub_4C1670(*(_DWORD **)(v21 + 0x14), &v80);
                      v22 = v20 | 0x10;
                    }
                    else
                    {
                      v71 = 0;
                      v55 = &v71;
                      v22 = v20 | 0x20;
                    }
                    v23 = *(_DWORD *)(*(_DWORD *)(this + 0x24) + 4 * v5 + 0x30);
                    if ( *(_DWORD *)(v23 + 0x10) )
                    {
                      v24 = sub_4C1670(*(_DWORD **)(v23 + 0x10), &v79);
                      v25 = v22 | 0x40;
                    }
                    else
                    {
                      v70 = 0;
                      v24 = &v70;
                      v25 = v22 | 0x80;
                    }
                    v26 = *(_DWORD *)(*(_DWORD *)(this + 0x24) + 4 * v50 + 0x30);
                    if ( *(_DWORD *)(v26 + 0xC) )
                    {
                      v57 = sub_4C1670(*(_DWORD **)(v26 + 0xC), &v78);
                      v27 = v25 | 0x100;
                    }
                    else
                    {
                      v69 = 0;
                      v57 = &v69;
                      v27 = v25 | 0x200;
                    }
                    v28 = *(_DWORD *)(*(_DWORD *)(this + 0x24) + 4 * v50 + 0x30);
                    if ( *(_DWORD *)(v28 + 8) )
                    {
                      v29 = sub_4C1670(*(_DWORD **)(v28 + 8), &v77);
                      v30 = v27 | 0x400;
                    }
                    else
                    {
                      v68 = 0;
                      v29 = &v68;
                      v30 = v27 | 0x800;
                    }
                    v31 = *(_DWORD *)(*(_DWORD *)(this + 0x24) + 4 * v50 + 0x30);
                    if ( *(_DWORD *)(v31 + 4) )
                    {
                      v59 = sub_4C1670(*(_DWORD **)(v31 + 4), &v76);
                      v32 = v30 | 0x1000;
                    }
                    else
                    {
                      v67 = 0;
                      v59 = &v67;
                      v32 = v30 | 0x2000;
                    }
                    v33 = *(_DWORD ***)(*(_DWORD *)(this + 0x24) + 4 * v50 + 0x30);
                    if ( *v33 )
                    {
                      v61 = sub_4C1670(*v33, &v75);
                      v34 = v32 | 0x4000;
                    }
                    else
                    {
                      v66 = 0;
                      v61 = &v66;
                      v34 = v32 | 0x8000;
                    }
                    v35 = (_DWORD **)(*(_DWORD *)(this + 0x24) + 4 * v50 + 0x20);
                    if ( *v35 )
                    {
                      v63 = sub_4C1670(*v35, &v74);
                      v83 = 0x10;
                      v4 = v34 | 0x10000;
                    }
                    else
                    {
                      v65 = 0;
                      v63 = &v65;
                      v83 = 0x11;
                      v4 = v34 | 0x20000;
                    }
                    sub_7D8BA0((int)v51, *v63, *v61, *v59, *v29, *v57, *v24, *v55, *v54, *v53);
                    v83 = 0x10;
                    if ( (v4 & 0x20000) != 0 )
                    {
                      v4 &= ~0x20000u;
                      sub_7016A0((NiD3DVertexShader *)&v65);
                    }
                    v83 = 0xF;
                    if ( (v4 & 0x10000) != 0 )
                    {
                      v4 &= ~0x10000u;
                      sub_7016A0((NiD3DVertexShader *)&v74);
                    }
                    v83 = 0xE;
                    if ( (v4 & 0x8000) != 0 )
                    {
                      v4 &= ~0x8000u;
                      sub_7016A0((NiD3DVertexShader *)&v66);
                    }
                    v83 = 0xD;
                    if ( (v4 & 0x4000) != 0 )
                    {
                      v4 &= ~0x4000u;
                      sub_7016A0((NiD3DVertexShader *)&v75);
                    }
                    v83 = 0xC;
                    if ( (v4 & 0x2000) != 0 )
                    {
                      v4 &= ~0x2000u;
                      sub_7016A0((NiD3DVertexShader *)&v67);
                    }
                    v83 = 0xB;
                    if ( (v4 & 0x1000) != 0 )
                    {
                      v4 &= ~0x1000u;
                      sub_7016A0((NiD3DVertexShader *)&v76);
                    }
                    v83 = 0xA;
                    if ( (v4 & 0x800) != 0 )
                    {
                      v4 &= ~0x800u;
                      sub_7016A0((NiD3DVertexShader *)&v68);
                    }
                    v83 = 9;
                    if ( (v4 & 0x400) != 0 )
                    {
                      v4 &= ~0x400u;
                      sub_7016A0((NiD3DVertexShader *)&v77);
                    }
                    v83 = 8;
                    if ( (v4 & 0x200) != 0 )
                    {
                      v4 &= ~0x200u;
                      sub_7016A0((NiD3DVertexShader *)&v69);
                    }
                    v83 = 7;
                    if ( (v4 & 0x100) != 0 )
                    {
                      v4 &= ~0x100u;
                      sub_7016A0((NiD3DVertexShader *)&v78);
                    }
                    v83 = 6;
                    if ( (char)v4 < 0 )
                    {
                      v4 &= ~0x80u;
                      sub_7016A0((NiD3DVertexShader *)&v70);
                    }
                    v83 = 5;
                    if ( (v4 & 0x40) != 0 )
                    {
                      v4 &= ~0x40u;
                      sub_7016A0((NiD3DVertexShader *)&v79);
                    }
                    v83 = 4;
                    if ( (v4 & 0x20) != 0 )
                    {
                      v4 &= ~0x20u;
                      sub_7016A0((NiD3DVertexShader *)&v71);
                    }
                    v83 = 3;
                    if ( (v4 & 0x10) != 0 )
                    {
                      v4 &= ~0x10u;
                      sub_7016A0((NiD3DVertexShader *)&v80);
                    }
                    v83 = 2;
                    if ( (v4 & 8) != 0 )
                    {
                      v4 &= ~8u;
                      sub_7016A0((NiD3DVertexShader *)&v72);
                    }
                    v83 = 1;
                    if ( (v4 & 4) != 0 )
                    {
                      v4 &= ~4u;
                      sub_7016A0((NiD3DVertexShader *)&v81);
                    }
                    v36 = 0;
                    v83 = 0;
                    if ( (v4 & 2) != 0 )
                    {
                      v4 &= ~2u;
                      sub_7016A0((NiD3DVertexShader *)&v73);
                    }
                    v83 = 0xFFFFFFFF;
                    if ( (v4 & 1) != 0 )
                    {
                      v4 &= ~1u;
                      sub_7016A0((NiD3DVertexShader *)&v82);
                    }
                    v37 = *(_DWORD *)(*(_DWORD *)(this + 0x24) + 4 * v50 + 0x30);
                    if ( *(_DWORD *)(v37 + 0x1C) )
                      v64 = sub_4C8D20(*(_BYTE **)(v37 + 0x1C));
                    else
                      v64 = 0;
                    v38 = *(_DWORD *)(*(_DWORD *)(this + 0x24) + 4 * v50 + 0x30);
                    if ( *(_DWORD *)(v38 + 0x18) )
                      v62 = sub_4C8D20(*(_BYTE **)(v38 + 0x18));
                    else
                      v62 = 0;
                    v39 = *(_DWORD *)(*(_DWORD *)(this + 0x24) + 4 * v50 + 0x30);
                    if ( *(_DWORD *)(v39 + 0x14) )
                      v60 = sub_4C8D20(*(_BYTE **)(v39 + 0x14));
                    else
                      v60 = 0;
                    v40 = *(_DWORD *)(*(_DWORD *)(this + 0x24) + 4 * v50 + 0x30);
                    if ( *(_DWORD *)(v40 + 0x10) )
                      v58 = sub_4C8D20(*(_BYTE **)(v40 + 0x10));
                    else
                      v58 = 0;
                    v41 = *(_DWORD *)(*(_DWORD *)(this + 0x24) + 4 * v50 + 0x30);
                    if ( *(_DWORD *)(v41 + 0xC) )
                      v56 = sub_4C8D20(*(_BYTE **)(v41 + 0xC));
                    else
                      v56 = 0;
                    v42 = *(_DWORD *)(*(_DWORD *)(this + 0x24) + 4 * v50 + 0x30);
                    if ( *(_DWORD *)(v42 + 8) )
                      v36 = sub_4C8D20(*(_BYTE **)(v42 + 8));
                    v43 = *(_DWORD *)(*(_DWORD *)(this + 0x24) + 4 * v50 + 0x30);
                    if ( *(_DWORD *)(v43 + 4) )
                      v44 = sub_4C8D20(*(_BYTE **)(v43 + 4));
                    else
                      v44 = 0;
                    v45 = *(_BYTE ***)(*(_DWORD *)(this + 0x24) + 4 * v50 + 0x30);
                    if ( *v45 )
                      v46 = sub_4C8D20(*v45);
                    else
                      v46 = 0;
                    v47 = (_BYTE **)(*(_DWORD *)(this + 0x24) + 4 * v50 + 0x20);
                    if ( *v47 )
                      v48 = sub_4C8D20(*v47);
                    else
                      v48 = 0;
                    sub_7D7400((int)v51, v48, v46, v44, v36, v56, v58, v60, v62, v64, 0);
                    sub_7E24C0(v51);
                    v10 = v52;
                    v5 = v50;
                  }
                }
              }
            }
          }
          NiAVObject_UpdateNiAVObject((NiAVObject *)v10, 0.0, 0);
          if ( a2 )
          {
            NiNode_UpdateDynamicEffectState((NiNode *)v10);
            NiAVObject_InitializePropertyState((NiAVObject *)v10);
          }
        }
      }
      v50 = ++v5;
    }
    while ( v5 < 4 );
    if ( a2 )
      sub_4C5BA0(this, TES->CellBorders);
  }
  else
  {
    sub_4C64E0((TESObjectCELL **)this);
    sub_4C5640(this);
  }
}
