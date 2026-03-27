0x50BFF0: fldz
0x50BFF2: push    esi
0x50BFF3: mov     esi, [esp+4+arg_8]
0x50BFF7: test    esi, esi
0x50BFF9: push    edi
0x50BFFA: mov     edi, [esp+8+arg_18]
0x50BFFE: fstp    qword ptr [edi]
0x50C000: mov     [esp+8+arg_18], 0
0x50C008: jz      short loc_50C047
0x50C00A: mov     ecx, esi; this
0x50C00C: call    TESObjectREFR_IsPersistent?
0x50C011: test    al, al
0x50C013: jnz     short loc_50C032
0x50C015: mov     eax, [esi]
0x50C017: mov     edx, [eax+170h]
0x50C01D: mov     ecx, esi
0x50C01F: call    edx
0x50C021: movzx   eax, byte ptr [eax+4]
0x50C025: push    eax
0x50C026: call    TESContainer_IsInventoryItemType
0x50C02B: add     esp, 4
0x50C02E: test    al, al
0x50C030: jnz     short loc_50C047
0x50C032: mov     eax, [esi+0Ch]
0x50C035: lea     ecx, [esp+8+arg_18]
0x50C039: push    edi
0x50C03A: push    ecx
0x50C03B: mov     [esp+10h+arg_18], eax
0x50C03F: call    sub_4F9FB0
0x50C044: add     esp, 8
0x50C047: cmp     byte ptr ds:0B361ACh, 0
0x50C04E: pop     edi
0x50C04F: pop     esi
0x50C050: jz      short loc_50C064
0x50C052: mov     edx, [esp+arg_18]
0x50C056: push    edx
0x50C057: push    offset aGetself08x; "GetSelf >> (%08x)"
0x50C05C: call    Interface_ConsolePrint
0x50C061: add     esp, 8
0x50C064: mov     al, 1
0x50C066: retn
