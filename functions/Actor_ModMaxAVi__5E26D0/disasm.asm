0x5E26D0: push    ebx
0x5E26D1: mov     ebx, [esp+4+arg_0]
0x5E26D5: cmp     ebx, 0Ah
0x5E26D8: push    esi
0x5E26D9: mov     esi, ecx
0x5E26DB: jnz     short loc_5E26F6
0x5E26DD: cmp     [esp+8+arg_4], 0
0x5E26E2: jge     short loc_5E26F6
0x5E26E4: mov     eax, [esi]
0x5E26E6: mov     edx, [eax+278h]
0x5E26EC: call    edx
0x5E26EE: test    al, al
0x5E26F0: jz      loc_5E27F3
0x5E26F6: fild    [esp+8+arg_4]
0x5E26FA: fstp    [esp+8+arg_4]
0x5E26FE: fld     [esp+8+arg_4]
0x5E2702: fld     st
0x5E2704: call    Double_To_SInt32
0x5E2709: mov     [esp+8+arg_4], eax
0x5E270D: fild    [esp+8+arg_4]
0x5E2711: fstp    [esp+8+arg_4]
0x5E2715: fld     [esp+8+arg_4]
0x5E2719: fld     st
0x5E271B: fsubp   st(2), st
0x5E271D: fxch    st(1)
0x5E271F: fcomp   qword ptr ds:0A2FC68h
0x5E2725: fnstsw  ax
0x5E2727: test    ah, 1
0x5E272A: jz      short loc_5E2732
0x5E272C: fsub    qword ptr ds:0A2F928h
0x5E2732: fstp    [esp+8+arg_4]
0x5E2736: push    edi
0x5E2737: fld     [esp+0Ch+arg_4]
0x5E273B: call    Double_To_SInt32
0x5E2740: mov     edi, [esi+58h]
0x5E2743: test    edi, edi
0x5E2745: mov     [esp+0Ch+arg_4], eax
0x5E2749: jz      short loc_5E278E
0x5E274B: mov     eax, [esi]
0x5E274D: mov     edx, [eax+170h]
0x5E2753: push    ebp
0x5E2754: mov     ecx, esi
0x5E2756: xor     ebx, ebx
0x5E2758: call    edx
0x5E275A: mov     ebp, eax
0x5E275C: test    ebp, ebp
0x5E275E: jz      short loc_5E2772
0x5E2760: mov     eax, [esi]
0x5E2762: mov     edx, [eax+190h]
0x5E2768: mov     ecx, esi
0x5E276A: call    edx
0x5E276C: test    al, al
0x5E276E: jz      short loc_5E2772
0x5E2770: mov     ebx, ebp
0x5E2772: mov     ecx, [esp+8+arg_C]
0x5E2776: mov     edx, [esp+8+arg_8]
0x5E277A: mov     eax, [edi]
0x5E277C: mov     eax, [eax+27Ch]
0x5E2782: push    ecx
0x5E2783: push    edx
0x5E2784: push    ebx
0x5E2785: mov     ecx, edi
0x5E2787: call    eax
0x5E2789: mov     ebx, [esp+10h+arg_0]
0x5E278D: pop     ebp
0x5E278E: cmp     ebx, 8
0x5E2791: pop     edi
0x5E2792: jnz     short loc_5E27B4
0x5E2794: cmp     [esp+8+arg_4], 0
0x5E2799: jge     short loc_5E27B4
0x5E279B: fild    [esp+8+arg_4]
0x5E279F: mov     edx, [esi]
0x5E27A1: mov     eax, [esp+8+arg_8]
0x5E27A5: mov     edx, [edx+3B8h]
0x5E27AB: push    ecx
0x5E27AC: fstp    [esp+0Ch+var_C]
0x5E27AF: push    eax
0x5E27B0: mov     ecx, esi
0x5E27B2: call    edx
0x5E27B4: mov     eax, [esi]
0x5E27B6: mov     edx, [eax+40h]
0x5E27B9: push    100000h
0x5E27BE: mov     ecx, esi
0x5E27C0: call    edx
0x5E27C2: lea     eax, [ebx-0Ch]
0x5E27C5: cmp     eax, 14h
0x5E27C8: ja      short loc_5E27F3
0x5E27CA: cmp     ebx, 12h
0x5E27CD: jz      short loc_5E27D4
0x5E27CF: cmp     ebx, 1Bh
0x5E27D2: jnz     short loc_5E27F3
0x5E27D4: lea     ecx, [esi+44h]; this
0x5E27D7: call    ExtraDataList_GetContainerChanges
0x5E27DC: test    eax, eax
0x5E27DE: jz      short loc_5E27E7
0x5E27E0: mov     ecx, eax
0x5E27E2: call    sub_484310
0x5E27E7: mov     edx, [esi]
0x5E27E9: mov     eax, [edx+2C0h]
0x5E27EF: mov     ecx, esi
0x5E27F1: call    eax
0x5E27F3: pop     esi
0x5E27F4: pop     ebx
0x5E27F5: retn    0Ch
