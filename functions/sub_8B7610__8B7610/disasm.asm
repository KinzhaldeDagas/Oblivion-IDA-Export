0x8B7610: push    esi
0x8B7611: push    edi
0x8B7612: mov     edi, [esp+8+arg_0]
0x8B7616: push    edi
0x8B7617: mov     esi, ecx
0x8B7619: call    sub_8A25C0
0x8B761E: mov     eax, [esi]
0x8B7620: mov     edx, [eax+74h]
0x8B7623: lea     ecx, [esp+8+arg_0]
0x8B7627: push    ecx
0x8B7628: mov     ecx, esi
0x8B762A: call    edx
0x8B762C: test    eax, eax
0x8B762E: jz      short loc_8B763D
0x8B7630: add     eax, 4
0x8B7633: push    eax
0x8B7634: push    edi
0x8B7635: call    sub_8E83B0
0x8B763A: add     esp, 8
0x8B763D: pop     edi
0x8B763E: pop     esi
0x8B763F: retn    4
