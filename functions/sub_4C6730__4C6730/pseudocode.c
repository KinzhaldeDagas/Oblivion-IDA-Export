void __thiscall sub_4C6730(int this, char a2, int a3)
{
  int v4; // ebx
  int v5; // edi
  void *v6; // ecx
  unsigned int v7; // esi
  _DWORD *ObjectPointerAt_054; // eax
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
  int *p_slot; // [esp+48h] [ebp-58h]
  char v64; // [esp+48h] [ebp-58h]
  void *slot; // [esp+4Ch] [ebp-54h] BYREF
  void *v66; // [esp+50h] [ebp-50h] BYREF
  void *v67; // [esp+54h] [ebp-4Ch] BYREF
  void *v68; // [esp+58h] [ebp-48h] BYREF
  void *v69; // [esp+5Ch] [ebp-44h] BYREF
  void *v70; // [esp+60h] [ebp-40h] BYREF
  void *v71; // [esp+64h] [ebp-3Ch] BYREF
  void *v72; // [esp+68h] [ebp-38h] BYREF
  void *v73; // [esp+6Ch] [ebp-34h] BYREF
  void *v74; // [esp+70h] [ebp-30h] BYREF
  void *v75; // [esp+74h] [ebp-2Ch] BYREF
  void *v76; // [esp+78h] [ebp-28h] BYREF
  void *v77; // [esp+7Ch] [ebp-24h] BYREF
  void *v78; // [esp+80h] [ebp-20h] BYREF
  void *v79; // [esp+84h] [ebp-1Ch] BYREF
  void *v80; // [esp+88h] [ebp-18h] BYREF
  void *v81; // [esp+8Ch] [ebp-14h] BYREF
  void *v82; // [esp+90h] [ebp-10h] BYREF
  int v83; // [esp+9Ch] [ebp-4h]

  v4 = 0; /*0x4c6760*/
  if ( **(_DWORD **)(this + 0x24) )
  {
    v5 = 0; /*0x4c6771*/
    v50 = 0; /*0x4c6773*/
    do
    {
      v6 = *(void **)(this + 0x20); /*0x4c677b*/
      if ( v6 )
      {
        v7 = v5 + 2; /*0x4c678f*/
        ObjectPointerAt_054 = GetObjectPointerAt_054(v6); /*0x4c6792*/
        if ( ObjectPointerAt_054 /*0x4c67b3*/
          && *((unsigned __int16 *)ObjectPointerAt_054 + 0x5B) > v7
          && (v9 = *(_DWORD *)(ObjectPointerAt_054[0x2C] + 4 * v7)) != 0
          && *(_WORD *)(v9 + 0xB6) )
        {
          v10 = **(_DWORD **)(v9 + 0xB0); /*0x4c67c3*/
        }
        else
        {
          v10 = 0; /*0x4c67c7*/
        }
        v52 = v10; /*0x4c67cb*/
        if ( v10 )
        {
          if ( a2 )
          {
            if ( *(_WORD *)(v10 + 0xB6) )
            {
              v11 = **(_DWORD **)(v10 + 0xB0); /*0x4c67f7*/
              if ( v11 )
              {
                v12 = (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 0xC))(v11); /*0x4c6806*/
                v13 = v12; /*0x4c6808*/
                if ( v12 )
                {
                  NiSphere_ComputeFromVertices( /*0x4c6827*/
                    (NiSphere *)(*(_DWORD *)(v12 + 0xB4) + 0xC),
                    *(unsigned __int16 *)(*(_DWORD *)(v12 + 0xB4) + 8),
                    *(const NiPoint3 **)(*(_DWORD *)(v12 + 0xB4) + 0x1C));
                  *(_WORD *)(*(_DWORD *)(v13 + 0xB4) + 0x2E) |= 0xFu; /*0x4c6832*/
                  NiPropertyByID = NiNode_GetNiPropertyByID((NiNode *)v13, 4); /*0x4c683b*/
                  v15 = NiPropertyByID; /*0x4c6840*/
                  v16 = NiPropertyByID /*0x4c6862*/
                     && (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) >= 5
                     && (*((int (__thiscall **)(NiProperty *))v15->vtbl + 0x15))(v15) <= 0xA;
                  v51 = v16 ? (BSShaderProperty *)v15 : 0;
                  if ( v51 ) /*0x4c6875*/
                  {
                    v17 = *(_DWORD *)(*(_DWORD *)(this + 0x24) + 4 * v5 + 0x30); /*0x4c6882*/
                    if ( *(_DWORD *)(v17 + 0x1C) ) /*0x4c6886*/
                    {
                      v53 = sub_4C1670(*(_DWORD **)(v17 + 0x1C), &v82); /*0x4c689c*/
                      v18 = v4 | 1; /*0x4c68a0*/
                    }
                    else
                    {
                      v73 = 0; /*0x4c68a5*/
                      v53 = (int *)&v73; /*0x4c68b1*/
                      v18 = v4 | 2; /*0x4c68b5*/
                    }
                    v19 = *(_DWORD *)(*(_DWORD *)(this + 0x24) + 4 * v5 + 0x30); /*0x4c68bf*/
                    if ( *(_DWORD *)(v19 + 0x18) ) /*0x4c68c5*/
                    {
                      v54 = sub_4C1670(*(_DWORD **)(v19 + 0x18), &v81); /*0x4c68da*/
                      v20 = v18 | 4; /*0x4c68de*/
                    }
                    else
                    {
                      v72 = 0; /*0x4c68e3*/
                      v54 = (int *)&v72; /*0x4c68eb*/
                      v20 = v18 | 8; /*0x4c68ef*/
                    }
                    v21 = *(_DWORD *)(*(_DWORD *)(this + 0x24) + 4 * v5 + 0x30); /*0x4c68f5*/
                    if ( *(_DWORD *)(v21 + 0x14) ) /*0x4c68f9*/
                    {
                      v55 = sub_4C1670(*(_DWORD **)(v21 + 0x14), &v80); /*0x4c690e*/
                      v22 = v20 | 0x10; /*0x4c6912*/
                    }
                    else
                    {
                      v71 = 0; /*0x4c6917*/
                      v55 = (int *)&v71; /*0x4c691f*/
                      v22 = v20 | 0x20; /*0x4c6923*/
                    }
                    v23 = *(_DWORD *)(*(_DWORD *)(this + 0x24) + 4 * v5 + 0x30); /*0x4c6929*/
                    if ( *(_DWORD *)(v23 + 0x10) ) /*0x4c692d*/
                    {
                      v24 = sub_4C1670(*(_DWORD **)(v23 + 0x10), &v79); /*0x4c693f*/
                      v25 = v22 | 0x40; /*0x4c6941*/
                    }
                    else
                    {
                      v70 = 0; /*0x4c6946*/
                      v24 = (int *)&v70; /*0x4c694e*/
                      v25 = v22 | 0x80; /*0x4c6952*/
                    }
                    v26 = *(_DWORD *)(*(_DWORD *)(this + 0x24) + 4 * v50 + 0x30); /*0x4c6963*/
                    if ( *(_DWORD *)(v26 + 0xC) ) /*0x4c6967*/
                    {
                      v57 = sub_4C1670(*(_DWORD **)(v26 + 0xC), &v78); /*0x4c697a*/
                      v27 = v25 | 0x100; /*0x4c697e*/
                    }
                    else
                    {
                      v69 = 0; /*0x4c6986*/
                      v57 = (int *)&v69; /*0x4c6992*/
                      v27 = v25 | 0x200; /*0x4c6996*/
                    }
                    v28 = *(_DWORD *)(*(_DWORD *)(this + 0x24) + 4 * v50 + 0x30); /*0x4c699f*/
                    if ( *(_DWORD *)(v28 + 8) ) /*0x4c69a3*/
                    {
                      v29 = sub_4C1670(*(_DWORD **)(v28 + 8), &v77); /*0x4c69b6*/
                      v30 = v27 | 0x400; /*0x4c69b8*/
                    }
                    else
                    {
                      v68 = 0; /*0x4c69c0*/
                      v29 = (int *)&v68; /*0x4c69c8*/
                      v30 = v27 | 0x800; /*0x4c69cc*/
                    }
                    v31 = *(_DWORD *)(*(_DWORD *)(this + 0x24) + 4 * v50 + 0x30); /*0x4c69d9*/
                    if ( *(_DWORD *)(v31 + 4) ) /*0x4c69dd*/
                    {
                      v59 = sub_4C1670(*(_DWORD **)(v31 + 4), &v76); /*0x4c69f0*/
                      v32 = v30 | 0x1000; /*0x4c69f4*/
                    }
                    else
                    {
                      v67 = 0; /*0x4c69fc*/
                      v59 = (int *)&v67; /*0x4c6a08*/
                      v32 = v30 | 0x2000; /*0x4c6a0c*/
                    }
                    v33 = *(_DWORD ***)(*(_DWORD *)(this + 0x24) + 4 * v50 + 0x30); /*0x4c6a19*/
                    if ( *v33 ) /*0x4c6a1d*/
                    {
                      v61 = sub_4C1670(*v33, &v75); /*0x4c6a2e*/
                      v34 = v32 | 0x4000; /*0x4c6a32*/
                    }
                    else
                    {
                      v66 = 0; /*0x4c6a3a*/
                      v61 = (int *)&v66; /*0x4c6a46*/
                      v34 = v32 | 0x8000; /*0x4c6a4a*/
                    }
                    v35 = (_DWORD **)(*(_DWORD *)(this + 0x24) + 4 * v50 + 0x20); /*0x4c6a5c*/
                    if ( *v35 ) /*0x4c6a57*/
                    {
                      p_slot = sub_4C1670(*v35, &v74); /*0x4c6a6e*/
                      v83 = 0x10; /*0x4c6a72*/
                      v4 = v34 | 0x10000; /*0x4c6a7d*/
                    }
                    else
                    {
                      slot = 0; /*0x4c6a85*/
                      p_slot = (int *)&slot; /*0x4c6a91*/
                      v83 = 0x11; /*0x4c6a95*/
                      v4 = v34 | 0x20000; /*0x4c6aa0*/
                    }
                    sub_7D8BA0((int)v51, *p_slot, *v61, *v59, *v29, *v57, *v24, *v55, *v54, *v53); /*0x4c6b01*/
                    v83 = 0x10; /*0x4c6b0c*/
                    if ( (v4 & 0x20000) != 0 ) /*0x4c6b17*/
                    {
                      v4 &= ~0x20000u; /*0x4c6b19*/
                      NiPointerSlot_Release(&slot); /*0x4c6b27*/
                    }
                    v83 = 0xF; /*0x4c6b32*/
                    if ( (v4 & 0x10000) != 0 ) /*0x4c6b3d*/
                    {
                      v4 &= ~0x10000u; /*0x4c6b3f*/
                      NiPointerSlot_Release(&v74); /*0x4c6b4d*/
                    }
                    v83 = 0xE; /*0x4c6b58*/
                    if ( (v4 & 0x8000) != 0 ) /*0x4c6b63*/
                    {
                      v4 &= ~0x8000u; /*0x4c6b65*/
                      NiPointerSlot_Release(&v66); /*0x4c6b73*/
                    }
                    v83 = 0xD; /*0x4c6b7e*/
                    if ( (v4 & 0x4000) != 0 ) /*0x4c6b89*/
                    {
                      v4 &= ~0x4000u; /*0x4c6b8b*/
                      NiPointerSlot_Release(&v75); /*0x4c6b99*/
                    }
                    v83 = 0xC; /*0x4c6ba4*/
                    if ( (v4 & 0x2000) != 0 ) /*0x4c6baf*/
                    {
                      v4 &= ~0x2000u; /*0x4c6bb1*/
                      NiPointerSlot_Release(&v67); /*0x4c6bbf*/
                    }
                    v83 = 0xB; /*0x4c6bca*/
                    if ( (v4 & 0x1000) != 0 ) /*0x4c6bd5*/
                    {
                      v4 &= ~0x1000u; /*0x4c6bd7*/
                      NiPointerSlot_Release(&v76); /*0x4c6be5*/
                    }
                    v83 = 0xA; /*0x4c6bf0*/
                    if ( (v4 & 0x800) != 0 ) /*0x4c6bfb*/
                    {
                      v4 &= ~0x800u; /*0x4c6bfd*/
                      NiPointerSlot_Release(&v68); /*0x4c6c0b*/
                    }
                    v83 = 9; /*0x4c6c16*/
                    if ( (v4 & 0x400) != 0 ) /*0x4c6c21*/
                    {
                      v4 &= ~0x400u; /*0x4c6c23*/
                      NiPointerSlot_Release(&v77); /*0x4c6c31*/
                    }
                    v83 = 8; /*0x4c6c3c*/
                    if ( (v4 & 0x200) != 0 ) /*0x4c6c47*/
                    {
                      v4 &= ~0x200u; /*0x4c6c49*/
                      NiPointerSlot_Release(&v69); /*0x4c6c57*/
                    }
                    v83 = 7; /*0x4c6c62*/
                    if ( (v4 & 0x100) != 0 ) /*0x4c6c6d*/
                    {
                      v4 &= ~0x100u; /*0x4c6c6f*/
                      NiPointerSlot_Release(&v78); /*0x4c6c7d*/
                    }
                    v83 = 6; /*0x4c6c84*/
                    if ( (char)v4 < 0 ) /*0x4c6c8f*/
                    {
                      v4 &= ~0x80u; /*0x4c6c91*/
                      NiPointerSlot_Release(&v70); /*0x4c6c9f*/
                    }
                    v83 = 5; /*0x4c6ca7*/
                    if ( (v4 & 0x40) != 0 ) /*0x4c6cb2*/
                    {
                      v4 &= ~0x40u; /*0x4c6cb4*/
                      NiPointerSlot_Release(&v79); /*0x4c6cbf*/
                    }
                    v83 = 4; /*0x4c6cc7*/
                    if ( (v4 & 0x20) != 0 ) /*0x4c6cd2*/
                    {
                      v4 &= ~0x20u; /*0x4c6cd4*/
                      NiPointerSlot_Release(&v71); /*0x4c6cdf*/
                    }
                    v83 = 3; /*0x4c6ce7*/
                    if ( (v4 & 0x10) != 0 ) /*0x4c6cf2*/
                    {
                      v4 &= ~0x10u; /*0x4c6cf4*/
                      NiPointerSlot_Release(&v80); /*0x4c6d02*/
                    }
                    v83 = 2; /*0x4c6d0a*/
                    if ( (v4 & 8) != 0 ) /*0x4c6d15*/
                    {
                      v4 &= ~8u; /*0x4c6d17*/
                      NiPointerSlot_Release(&v72); /*0x4c6d22*/
                    }
                    v83 = 1; /*0x4c6d2a*/
                    if ( (v4 & 4) != 0 ) /*0x4c6d35*/
                    {
                      v4 &= ~4u; /*0x4c6d37*/
                      NiPointerSlot_Release(&v81); /*0x4c6d45*/
                    }
                    v36 = 0; /*0x4c6d4a*/
                    v83 = 0; /*0x4c6d4f*/
                    if ( (v4 & 2) != 0 ) /*0x4c6d56*/
                    {
                      v4 &= ~2u; /*0x4c6d58*/
                      NiPointerSlot_Release(&v73); /*0x4c6d63*/
                    }
                    v83 = 0xFFFFFFFF; /*0x4c6d6b*/
                    if ( (v4 & 1) != 0 ) /*0x4c6d76*/
                    {
                      v4 &= ~1u; /*0x4c6d7f*/
                      NiPointerSlot_Release(&v82); /*0x4c6d82*/
                    }
                    v37 = *(_DWORD *)(*(_DWORD *)(this + 0x24) + 4 * v50 + 0x30); /*0x4c6d92*/
                    if ( *(_DWORD *)(v37 + 0x1C) ) /*0x4c6d96*/
                      v64 = sub_4C8D20(*(_BYTE **)(v37 + 0x1C)); /*0x4c6da6*/
                    else
                      v64 = 0; /*0x4c6dac*/
                    v38 = *(_DWORD *)(*(_DWORD *)(this + 0x24) + 4 * v50 + 0x30); /*0x4c6db3*/
                    if ( *(_DWORD *)(v38 + 0x18) ) /*0x4c6db7*/
                      v62 = sub_4C8D20(*(_BYTE **)(v38 + 0x18)); /*0x4c6dc7*/
                    else
                      v62 = 0; /*0x4c6dcd*/
                    v39 = *(_DWORD *)(*(_DWORD *)(this + 0x24) + 4 * v50 + 0x30); /*0x4c6dd4*/
                    if ( *(_DWORD *)(v39 + 0x14) ) /*0x4c6dd8*/
                      v60 = sub_4C8D20(*(_BYTE **)(v39 + 0x14)); /*0x4c6de8*/
                    else
                      v60 = 0; /*0x4c6dee*/
                    v40 = *(_DWORD *)(*(_DWORD *)(this + 0x24) + 4 * v50 + 0x30); /*0x4c6df5*/
                    if ( *(_DWORD *)(v40 + 0x10) ) /*0x4c6df9*/
                      v58 = sub_4C8D20(*(_BYTE **)(v40 + 0x10)); /*0x4c6e09*/
                    else
                      v58 = 0; /*0x4c6e0f*/
                    v41 = *(_DWORD *)(*(_DWORD *)(this + 0x24) + 4 * v50 + 0x30); /*0x4c6e16*/
                    if ( *(_DWORD *)(v41 + 0xC) ) /*0x4c6e1a*/
                      v56 = sub_4C8D20(*(_BYTE **)(v41 + 0xC)); /*0x4c6e2a*/
                    else
                      v56 = 0; /*0x4c6e30*/
                    v42 = *(_DWORD *)(*(_DWORD *)(this + 0x24) + 4 * v50 + 0x30); /*0x4c6e37*/
                    if ( *(_DWORD *)(v42 + 8) ) /*0x4c6e3b*/
                      v36 = sub_4C8D20(*(_BYTE **)(v42 + 8)); /*0x4c6e48*/
                    v43 = *(_DWORD *)(*(_DWORD *)(this + 0x24) + 4 * v50 + 0x30); /*0x4c6e4e*/
                    if ( *(_DWORD *)(v43 + 4) ) /*0x4c6e52*/
                      v44 = sub_4C8D20(*(_BYTE **)(v43 + 4)); /*0x4c6e60*/
                    else
                      v44 = 0; /*0x4c6e65*/
                    v45 = *(_BYTE ***)(*(_DWORD *)(this + 0x24) + 4 * v50 + 0x30); /*0x4c6e6e*/
                    if ( *v45 ) /*0x4c6e72*/
                      v46 = sub_4C8D20(*v45); /*0x4c6e7e*/
                    else
                      v46 = 0; /*0x4c6e83*/
                    v47 = (_BYTE **)(*(_DWORD *)(this + 0x24) + 4 * v50 + 0x20); /*0x4c6e95*/
                    if ( *v47 ) /*0x4c6e90*/
                      v48 = sub_4C8D20(*v47); /*0x4c6e9d*/
                    else
                      v48 = 0; /*0x4c6ea7*/
                    sub_7D7400((int)v51, v48, v46, v44, v36, v56, v58, v60, v62, v64, 0); /*0x4c6ecc*/
                    BSShaderProperty_ClearRenderPassLists(v51); /*0x4c6ed5*/
                    v10 = v52; /*0x4c6eda*/
                    v5 = v50; /*0x4c6ede*/
                  }
                }
              }
            }
          }
          NiAVObject_UpdateNiAVObject((NiAVObject *)v10, 0.0, 0); /*0x4c6eec*/
          if ( a2 ) /*0x4c6ef9*/
          {
            NiNode_UpdateDynamicEffectState((NiNode *)v10); /*0x4c6efd*/
            NiAVObject_InitializePropertyState((NiAVObject *)v10); /*0x4c6f04*/
          }
        }
      }
      v50 = ++v5; /*0x4c6f0f*/
    }
    while ( v5 < 4 );
    if ( a2 ) /*0x4c6f21*/
      sub_4C5BA0(this, MEMORY[0xB333A0]->CellBorders); /*0x4c6f32*/
  }
  else
  {
    sub_4C64E0((TESObjectCELL **)this); /*0x4c6f39*/
    sub_4C5640(this); /*0x4c6f40*/
  }
}
