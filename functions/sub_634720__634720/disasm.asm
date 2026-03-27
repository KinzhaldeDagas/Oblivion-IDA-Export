0x634720: push    esi
0x634721: mov     esi, ecx
0x634723: xor     eax, eax
0x634725: lea     ecx, [esi+2C8h]
0x63472B: jmp     short loc_634730
0x63472D: align 10h
0x634730: mov     dword ptr [ecx], 0
0x634736: mov     byte ptr [esi+eax+2DCh], 0
0x63473E: add     eax, 1
0x634741: add     ecx, 4
0x634744: cmp     eax, 5
0x634747: jl      short loc_634730
0x634749: mov     eax, [esi]
0x63474B: mov     edx, [eax+4CCh]
0x634751: mov     ecx, esi
0x634753: call    edx
0x634755: cmp     [esi+2E4h], eax
0x63475B: jz      short loc_634776
0x63475D: mov     eax, [esi]
0x63475F: mov     edx, [eax+4CCh]
0x634765: mov     ecx, esi
0x634767: mov     byte ptr [esi+2E8h], 0
0x63476E: call    edx
0x634770: mov     [esi+2E4h], eax
0x634776: pop     esi
0x634777: retn
