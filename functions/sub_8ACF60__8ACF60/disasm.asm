0x8ACF60: push    esi
0x8ACF61: mov     esi, ecx
0x8ACF63: mov     eax, [esi+7Ch]
0x8ACF66: test    eax, eax
0x8ACF68: push    edi
0x8ACF69: mov     edi, [esp+8+arg_0]
0x8ACF6D: js      short loc_8ACF97
0x8ACF6F: mov     edx, [edi]
0x8ACF71: and     eax, 3FFFFFFFh
0x8ACF76: lea     eax, [eax+eax*2]
0x8ACF79: shl     eax, 4
0x8ACF7C: push    eax
0x8ACF7D: mov     eax, [esi+78h]
0x8ACF80: lea     ecx, [eax+eax*2]
0x8ACF83: mov     eax, [esi+74h]
0x8ACF86: shl     ecx, 4
0x8ACF89: push    ecx
0x8ACF8A: push    eax
0x8ACF8B: push    8
0x8ACF8D: push    offset aManifold; "Manifold"
0x8ACF92: mov     ecx, edi
0x8ACF94: call    dword ptr [edx+4]
0x8ACF97: mov     eax, [esi+94h]
0x8ACF9D: test    eax, eax
0x8ACF9F: js      short loc_8ACFC9
0x8ACFA1: mov     ecx, [esi+8Ch]
0x8ACFA7: mov     edx, [edi]
0x8ACFA9: and     eax, 3FFFFFFFh
0x8ACFAE: shl     eax, 2
0x8ACFB1: push    eax
0x8ACFB2: mov     eax, [esi+90h]
0x8ACFB8: shl     eax, 2
0x8ACFBB: push    eax
0x8ACFBC: push    ecx
0x8ACFBD: push    8
0x8ACFBF: push    offset aOverlapspntr; "OverlapsPntr"
0x8ACFC4: mov     ecx, edi
0x8ACFC6: call    dword ptr [edx+4]
0x8ACFC9: mov     eax, [esi+0A0h]
0x8ACFCF: test    eax, eax
0x8ACFD1: js      short loc_8ACFFB
0x8ACFD3: mov     ecx, [esi+98h]
0x8ACFD9: mov     edx, [edi]
0x8ACFDB: and     eax, 3FFFFFFFh
0x8ACFE0: shl     eax, 2
0x8ACFE3: push    eax
0x8ACFE4: mov     eax, [esi+9Ch]
0x8ACFEA: shl     eax, 2
0x8ACFED: push    eax
0x8ACFEE: push    ecx
0x8ACFEF: push    8
0x8ACFF1: push    offset aManifold; "Manifold"
0x8ACFF6: mov     ecx, edi
0x8ACFF8: call    dword ptr [edx+4]
0x8ACFFB: mov     eax, [esi+88h]
0x8AD001: test    eax, eax
0x8AD003: js      short loc_8AD02D
0x8AD005: mov     ecx, [esi+80h]
0x8AD00B: mov     edx, [edi]
0x8AD00D: and     eax, 3FFFFFFFh
0x8AD012: shl     eax, 2
0x8AD015: push    eax
0x8AD016: mov     eax, [esi+84h]
0x8AD01C: shl     eax, 2
0x8AD01F: push    eax
0x8AD020: push    ecx
0x8AD021: push    8
0x8AD023: push    offset aListnrpntr; "ListnrPntr"
0x8AD028: mov     ecx, edi
0x8AD02A: call    dword ptr [edx+4]
0x8AD02D: pop     edi
0x8AD02E: pop     esi
0x8AD02F: retn    4
