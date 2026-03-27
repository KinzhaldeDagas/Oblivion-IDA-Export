0x504F70: push    esi
0x504F71: mov     esi, [esp+4+arg_8]
0x504F75: test    esi, esi
0x504F77: jz      loc_505014
0x504F7D: mov     eax, [esi]
0x504F7F: mov     edx, [eax+154h]
0x504F85: mov     ecx, esi
0x504F87: call    edx
0x504F89: test    eax, eax
0x504F8B: jz      loc_505014
0x504F91: mov     eax, [esi]
0x504F93: mov     edx, [eax+154h]
0x504F99: mov     ecx, esi
0x504F9B: call    edx
0x504F9D: xor     esi, esi
0x504F9F: test    eax, eax
0x504FA1: jz      short loc_504FAE
0x504FA3: mov     edx, [eax]
0x504FA5: mov     ecx, eax
0x504FA7: mov     eax, [edx+8]
0x504FAA: call    eax
0x504FAC: mov     esi, eax
0x504FAE: push    edi
0x504FAF: push    esi
0x504FB0: call    sub_4E26F0
0x504FB5: mov     edi, [esp+0Ch+arg_18]
0x504FB9: movzx   ecx, al
0x504FBC: mov     [esp+0Ch+arg_8], ecx
0x504FC0: add     esp, 4
0x504FC3: fild    [esp+8+arg_8]
0x504FC7: fst     qword ptr [edi]
0x504FC9: fldz
0x504FCB: fucompp
0x504FCD: fnstsw  ax
0x504FCF: test    ah, 44h
0x504FD2: jnp     short loc_504FF1
0x504FD4: mov     ecx, esi; this
0x504FD6: call    NiAVObject_InitializePropertyState
0x504FDB: mov     ecx, esi
0x504FDD: call    NiNode_UpdateDynamicEffectState
0x504FE2: fldz
0x504FE4: push    1; a3
0x504FE6: push    ecx
0x504FE7: mov     ecx, esi; this
0x504FE9: fstp    [esp+10h+a2]; a2
0x504FEC: call    NiAVObject_UpdateNiAVObject
0x504FF1: cmp     byte ptr ds:0B361ACh, 0
0x504FF8: jz      short loc_50500F
0x504FFA: fld     qword ptr [edi]
0x504FFC: sub     esp, 8
0x504FFF: fstp    qword ptr [esp+10h+a2]
0x505002: push    offset aAddflames0_2f; "AddFlames >> %0.2f"
0x505007: call    Interface_ConsolePrint
0x50500C: add     esp, 0Ch
0x50500F: pop     edi
0x505010: mov     al, 1
0x505012: pop     esi
0x505013: retn
0x505014: mov     al, 1
0x505016: pop     esi
0x505017: retn
