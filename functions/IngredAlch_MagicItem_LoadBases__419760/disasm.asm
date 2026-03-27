0x419760: mov     eax, [esp+arg_4]
0x419764: cmp     eax, 4C444F4Dh
0x419769: push    esi
0x41976A: mov     esi, ecx
0x41976C: jg      short loc_4197CB
0x41976E: jz      short loc_4197D9
0x419770: cmp     eax, 41544144h
0x419775: jz      short loc_4197B6
0x419777: cmp     eax, 42444F4Dh
0x41977C: jz      short loc_4197D9
0x41977E: cmp     eax, 49524353h
0x419783: jnz     loc_419835
0x419789: mov     ecx, [esp+4+a2]
0x41978D: lea     eax, [esp+4+arg_4]
0x419791: push    eax
0x419792: mov     [esp+8+arg_4], 0
0x41979A: call    TESFile_GetChunkData4
0x41979F: mov     ecx, [esp+4+arg_4]
0x4197A3: lea     edx, [esi-24h]
0x4197A6: mov     [esi+44h], ecx
0x4197A9: push    edx
0x4197AA: lea     ecx, [esi+40h]
0x4197AD: call    TESScriptableForm_Link
0x4197B2: pop     esi
0x4197B3: retn    8
0x4197B6: mov     eax, [esp+4+a2]
0x4197BA: push    0; a4
0x4197BC: push    0; Dst
0x4197BE: push    eax; a2
0x4197BF: lea     ecx, [esi-24h]; this
0x4197C2: call    TESForm_LoadGenericComponents
0x4197C7: pop     esi
0x4197C8: retn    8
0x4197CB: cmp     eax, 4E4F4349h
0x4197D0: jz      short loc_419809
0x4197D2: cmp     eax, 54444F4Dh
0x4197D7: jnz     short loc_419835
0x4197D9: lea     ecx, [esi-24h]
0x4197DC: test    ecx, ecx
0x4197DE: jz      short loc_4197F5
0x4197E0: mov     edx, [esp+4+a2]
0x4197E4: lea     eax, [esi+1Ch]
0x4197E7: push    edx
0x4197E8: push    eax
0x4197E9: call    TESModel_Load
0x4197EE: add     esp, 8
0x4197F1: pop     esi
0x4197F2: retn    8
0x4197F5: mov     edx, [esp+4+a2]
0x4197F9: xor     eax, eax
0x4197FB: push    edx
0x4197FC: push    eax
0x4197FD: call    TESModel_Load
0x419802: add     esp, 8
0x419805: pop     esi
0x419806: retn    8
0x419809: lea     eax, [esi-24h]
0x41980C: test    eax, eax
0x41980E: jz      short loc_419825
0x419810: mov     ecx, [esp+4+a2]
0x419814: lea     eax, [esi+34h]
0x419817: push    ecx
0x419818: push    eax
0x419819: call    TESTexture_Load
0x41981E: add     esp, 8
0x419821: pop     esi
0x419822: retn    8
0x419825: mov     ecx, [esp+4+a2]
0x419829: xor     eax, eax
0x41982B: push    ecx
0x41982C: push    eax
0x41982D: call    TESTexture_Load
0x419832: add     esp, 8
0x419835: pop     esi
0x419836: retn    8
