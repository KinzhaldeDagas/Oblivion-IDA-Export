0x49E750: sub     esp, 0Ch
0x49E753: fld     [esp+0Ch+arg_4]
0x49E757: push    esi
0x49E758: push    1; float
0x49E75A: push    1; int
0x49E75C: push    1; int
0x49E75E: push    400h; int
0x49E763: sub     esp, 8
0x49E766: fst     [esp+28h+var_24]; float
0x49E76A: mov     esi, ecx
0x49E76C: fstp    [esp+28h+var_28]; float
0x49E76F: call    sub_49D2A0
0x49E774: push    eax
0x49E775: mov     ecx, esi
0x49E777: call    sub_498F70
0x49E77C: fldz
0x49E77E: mov     esi, eax
0x49E780: fst     [esp+10h+var_C]
0x49E784: mov     eax, ds:0B333C4h
0x49E789: fst     [esp+10h+var_8]
0x49E78D: test    eax, eax
0x49E78F: fstp    [esp+10h+var_4]
0x49E793: jz      short loc_49E7A9
0x49E795: mov     ecx, [eax+2Ch]
0x49E798: add     eax, 2Ch ; ','
0x49E79B: mov     [esi+54h], ecx
0x49E79E: mov     edx, [eax+4]
0x49E7A1: mov     [esi+58h], edx
0x49E7A4: mov     eax, [eax+8]
0x49E7A7: jmp     short loc_49E7BB
0x49E7A9: mov     ecx, [esp+10h+var_C]
0x49E7AD: mov     edx, [esp+10h+var_8]
0x49E7B1: mov     eax, [esp+10h+var_4]
0x49E7B5: mov     [esi+54h], ecx
0x49E7B8: mov     [esi+58h], edx
0x49E7BB: mov     [esi+5Ch], eax
0x49E7BE: mov     ecx, ds:0B35230h
0x49E7C4: mov     edx, [ecx]
0x49E7C6: mov     eax, [edx+84h]
0x49E7CC: push    1
0x49E7CE: push    esi
0x49E7CF: call    eax
0x49E7D1: mov     ecx, esi
0x49E7D3: call    NiNode_UpdateDynamicEffectState
0x49E7D8: push    1
0x49E7DA: push    0
0x49E7DC: push    11h
0x49E7DE: push    esi
0x49E7DF: call    sub_7B8940
0x49E7E4: add     esp, 10h
0x49E7E7: mov     eax, esi
0x49E7E9: pop     esi
0x49E7EA: add     esp, 0Ch
0x49E7ED: retn    8
