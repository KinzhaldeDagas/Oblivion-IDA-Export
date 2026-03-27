0x755180: push    esi
0x755181: push    edi
0x755182: push    34h ; '4'; Size
0x755184: mov     edi, ecx
0x755186: call    FormHeapAlloc
0x75518B: mov     esi, eax
0x75518D: add     esp, 4
0x755190: test    esi, esi
0x755192: jz      short loc_7551BA
0x755194: mov     ecx, esi
0x755196: call    sub_75E800
0x75519B: fldz
0x75519D: mov     eax, [esp+8+arg_0]
0x7551A1: fstp    dword ptr [esi+30h]
0x7551A4: push    eax
0x7551A5: push    esi
0x7551A6: mov     ecx, edi
0x7551A8: mov     dword ptr [esi], offset ??_7NiPSysRadialFieldModifier@@6B@; const NiPSysRadialFieldModifier::`vftable'
0x7551AE: call    sub_75E830
0x7551B3: pop     edi
0x7551B4: mov     eax, esi
0x7551B6: pop     esi
0x7551B7: retn    4
0x7551BA: mov     eax, [esp+8+arg_0]
0x7551BE: push    eax
0x7551BF: xor     esi, esi
0x7551C1: push    esi
0x7551C2: mov     ecx, edi
0x7551C4: call    sub_75E830
0x7551C9: pop     edi
0x7551CA: mov     eax, esi
0x7551CC: pop     esi
0x7551CD: retn    4
