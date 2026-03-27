0x753CC0: mov     eax, [esp+arg_0]
0x753CC4: push    esi
0x753CC5: push    eax
0x753CC6: mov     esi, ecx
0x753CC8: call    NiTimeController__SetTarget
0x753CCD: mov     eax, [esi+30h]
0x753CD0: test    eax, eax
0x753CD2: jz      short loc_753D2B
0x753CD4: mov     ecx, [eax+0Ch]
0x753CD7: mov     eax, [ecx+34h]
0x753CDA: test    eax, eax
0x753CDC: jz      short loc_753CE9
0x753CDE: mov     edi, edi
0x753CE0: mov     ecx, eax
0x753CE2: mov     eax, [ecx+34h]
0x753CE5: test    eax, eax
0x753CE7: jnz     short loc_753CE0
0x753CE9: cmp     ecx, esi
0x753CEB: jz      short loc_753D2B
0x753CED: push    edi
0x753CEE: push    esi
0x753CEF: call    sub_6C61E0
0x753CF4: mov     ecx, [esi+34h]
0x753CF7: push    ecx; a2
0x753CF8: mov     ecx, [esi+30h]; this
0x753CFB: call    sub_478300
0x753D00: mov     edi, [esi+34h]
0x753D03: test    edi, edi
0x753D05: jz      short loc_753D2A
0x753D07: lea     edx, [edi+4]
0x753D0A: push    edx; lpAddend
0x753D0B: call    dword ptr ds:0A2807Ch
0x753D11: test    eax, eax
0x753D13: jnz     short loc_753D23
0x753D15: test    edi, edi
0x753D17: jz      short loc_753D23
0x753D19: mov     eax, [edi]
0x753D1B: mov     edx, [eax]
0x753D1D: push    1
0x753D1F: mov     ecx, edi
0x753D21: call    edx
0x753D23: mov     dword ptr [esi+34h], 0
0x753D2A: pop     edi
0x753D2B: pop     esi
0x753D2C: retn    4
