0x8C32B0: push    esi
0x8C32B1: mov     esi, ecx
0x8C32B3: cmp     dword ptr [esi+0Ch], 0
0x8C32B7: jnz     short loc_8C332D
0x8C32B9: push    14h; Size
0x8C32BB: call    FormHeapAlloc
0x8C32C0: add     esp, 4
0x8C32C3: test    eax, eax
0x8C32C5: jz      short loc_8C32ED
0x8C32C7: lea     ecx, [eax+4]
0x8C32CA: mov     dword ptr [ecx], 0
0x8C32D0: mov     dword ptr [eax+0Ch], 0
0x8C32D7: mov     dword ptr [eax+10h], 0
0x8C32DE: mov     dword ptr [eax+8], 1
0x8C32E5: mov     dword ptr [eax], offset ??_7hkBallAndSocketConstraintCinfo@@6B@; const hkBallAndSocketConstraintCinfo::`vftable'
0x8C32EB: jmp     short loc_8C32EF
0x8C32ED: xor     ecx, ecx
0x8C32EF: cmp     dword ptr [esi+8], 0
0x8C32F3: mov     [esi+0Ch], ecx
0x8C32F6: jz      short loc_8C331F
0x8C32F8: test    ecx, ecx
0x8C32FA: jz      short loc_8C3315
0x8C32FC: lea     eax, [ecx-4]
0x8C32FF: push    eax
0x8C3300: mov     ecx, esi
0x8C3302: call    sub_8A07E0
0x8C3307: mov     eax, [esp+4+arg_0]
0x8C330B: mov     byte ptr [eax], 1
0x8C330E: mov     eax, [esi+0Ch]
0x8C3311: pop     esi
0x8C3312: retn    4
0x8C3315: xor     eax, eax
0x8C3317: push    eax
0x8C3318: mov     ecx, esi
0x8C331A: call    sub_8A07E0
0x8C331F: mov     eax, [esp+4+arg_0]
0x8C3323: mov     byte ptr [eax], 1
0x8C3326: mov     eax, [esi+0Ch]
0x8C3329: pop     esi
0x8C332A: retn    4
0x8C332D: mov     ecx, [esp+4+arg_0]
0x8C3331: mov     byte ptr [ecx], 0
0x8C3334: mov     eax, [esi+0Ch]
0x8C3337: pop     esi
0x8C3338: retn    4
