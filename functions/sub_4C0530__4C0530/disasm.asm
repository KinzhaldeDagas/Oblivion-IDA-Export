0x4C0530: fld     dword ptr ds:0A3765Ch
0x4C0536: mov     eax, [esp+arg_C]
0x4C053A: test    eax, eax
0x4C053C: push    esi
0x4C053D: mov     esi, [esp+4+arg_0]
0x4C0541: fst     dword ptr [esi]
0x4C0543: push    edi
0x4C0544: fstp    dword ptr [esi+4]
0x4C0547: mov     edi, ecx
0x4C0549: jz      short loc_4C0553
0x4C054B: mov     eax, [eax]
0x4C054D: mov     [esp+8+arg_0], eax
0x4C0551: jmp     short loc_4C0580
0x4C0553: mov     eax, [edi+24h]
0x4C0556: test    eax, eax
0x4C0558: jz      short loc_4C0566
0x4C055A: mov     ecx, [eax+98h]
0x4C0560: mov     [esp+8+arg_0], ecx
0x4C0564: jmp     short loc_4C0580
0x4C0566: mov     ecx, [edi+20h]; this
0x4C0569: test    ecx, ecx
0x4C056B: jz      short loc_4C0578
0x4C056D: call    TESObjectCELL_GetXCoordinate
0x4C0572: mov     [esp+8+arg_0], eax
0x4C0576: jmp     short loc_4C0580
0x4C0578: mov     [esp+8+arg_0], 0
0x4C0580: fild    [esp+8+arg_0]
0x4C0584: mov     eax, [esp+8+arg_10]
0x4C0588: test    eax, eax
0x4C058A: fmul    dword ptr [esi]
0x4C058C: fstp    dword ptr [esi]
0x4C058E: jz      short loc_4C0598
0x4C0590: mov     edx, [eax]
0x4C0592: mov     [esp+8+arg_0], edx
0x4C0596: jmp     short loc_4C05C5
0x4C0598: mov     eax, [edi+24h]
0x4C059B: test    eax, eax
0x4C059D: jz      short loc_4C05AB
0x4C059F: mov     eax, [eax+9Ch]
0x4C05A5: mov     [esp+8+arg_0], eax
0x4C05A9: jmp     short loc_4C05C5
0x4C05AB: mov     ecx, [edi+20h]; this
0x4C05AE: test    ecx, ecx
0x4C05B0: jz      short loc_4C05BD
0x4C05B2: call    TESObjectCELL_GetYCoordinate
0x4C05B7: mov     [esp+8+arg_0], eax
0x4C05BB: jmp     short loc_4C05C5
0x4C05BD: mov     [esp+8+arg_0], 0
0x4C05C5: movzx   eax, [esp+8+arg_8]
0x4C05CA: movzx   ecx, byte ptr [esp+8+arg_4]
0x4C05CF: cdq
0x4C05D0: mov     edi, 11h
0x4C05D5: idiv    edi
0x4C05D7: mov     edi, ecx
0x4C05D9: and     edi, 1
0x4C05DC: shl     edi, 0Bh
0x4C05DF: mov     [esp+8+arg_4], edi
0x4C05E3: and     ecx, 2
0x4C05E6: shl     ecx, 0Ah
0x4C05E9: fild    [esp+8+arg_4]
0x4C05ED: pop     edi
0x4C05EE: fadd    dword ptr [esi]
0x4C05F0: fstp    [esp+4+arg_4]
0x4C05F4: fld     [esp+4+arg_4]
0x4C05F8: shl     edx, 7
0x4C05FB: mov     [esp+4+arg_4], edx
0x4C05FF: fiadd   [esp+4+arg_4]
0x4C0603: shl     eax, 7
0x4C0606: fstp    dword ptr [esi]
0x4C0608: fild    [esp+4+arg_0]
0x4C060C: fmul    dword ptr [esi+4]
0x4C060F: fstp    [esp+4+arg_4]
0x4C0613: fld     [esp+4+arg_4]
0x4C0617: mov     [esp+4+arg_4], ecx
0x4C061B: fiadd   [esp+4+arg_4]
0x4C061F: fstp    [esp+4+arg_4]
0x4C0623: fld     [esp+4+arg_4]
0x4C0627: mov     [esp+4+arg_4], eax
0x4C062B: fiadd   [esp+4+arg_4]
0x4C062F: mov     eax, esi
0x4C0631: fstp    dword ptr [esi+4]
0x4C0634: fldz
0x4C0636: fstp    dword ptr [esi+8]
0x4C0639: pop     esi
0x4C063A: retn    14h
