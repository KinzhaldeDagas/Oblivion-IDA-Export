0x8C24C0: push    esi
0x8C24C1: mov     esi, ecx
0x8C24C3: cmp     dword ptr [esi+0Ch], 0
0x8C24C7: jnz     short loc_8C253D
0x8C24C9: push    1Ch; Size
0x8C24CB: call    FormHeapAlloc
0x8C24D0: add     esp, 4
0x8C24D3: test    eax, eax
0x8C24D5: jz      short loc_8C24FD
0x8C24D7: lea     ecx, [eax+4]
0x8C24DA: mov     dword ptr [ecx], 0
0x8C24E0: mov     dword ptr [eax+0Ch], 0
0x8C24E7: mov     dword ptr [eax+10h], 0
0x8C24EE: mov     dword ptr [eax+8], 1
0x8C24F5: mov     dword ptr [eax], offset ??_7hkFixedConstraintCinfo@@6B@; const hkFixedConstraintCinfo::`vftable'
0x8C24FB: jmp     short loc_8C24FF
0x8C24FD: xor     ecx, ecx
0x8C24FF: cmp     dword ptr [esi+8], 0
0x8C2503: mov     [esi+0Ch], ecx
0x8C2506: jz      short loc_8C252F
0x8C2508: test    ecx, ecx
0x8C250A: jz      short loc_8C2525
0x8C250C: lea     eax, [ecx-4]
0x8C250F: push    eax
0x8C2510: mov     ecx, esi
0x8C2512: call    sub_8A07E0
0x8C2517: mov     eax, [esp+4+arg_0]
0x8C251B: mov     byte ptr [eax], 1
0x8C251E: mov     eax, [esi+0Ch]
0x8C2521: pop     esi
0x8C2522: retn    4
0x8C2525: xor     eax, eax
0x8C2527: push    eax
0x8C2528: mov     ecx, esi
0x8C252A: call    sub_8A07E0
0x8C252F: mov     eax, [esp+4+arg_0]
0x8C2533: mov     byte ptr [eax], 1
0x8C2536: mov     eax, [esi+0Ch]
0x8C2539: pop     esi
0x8C253A: retn    4
0x8C253D: mov     ecx, [esp+4+arg_0]
0x8C2541: mov     byte ptr [ecx], 0
0x8C2544: mov     eax, [esi+0Ch]
0x8C2547: pop     esi
0x8C2548: retn    4
