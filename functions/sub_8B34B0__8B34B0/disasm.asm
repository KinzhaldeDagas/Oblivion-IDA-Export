0x8B34B0: push    esi
0x8B34B1: mov     esi, ecx
0x8B34B3: cmp     dword ptr [esi+0Ch], 0
0x8B34B7: jnz     short loc_8B352D
0x8B34B9: push    14h; Size
0x8B34BB: call    FormHeapAlloc
0x8B34C0: add     esp, 4
0x8B34C3: test    eax, eax
0x8B34C5: jz      short loc_8B34ED
0x8B34C7: lea     ecx, [eax+4]
0x8B34CA: mov     dword ptr [ecx], 0
0x8B34D0: mov     dword ptr [eax+0Ch], 0
0x8B34D7: mov     dword ptr [eax+10h], 0
0x8B34DE: mov     dword ptr [eax+8], 1
0x8B34E5: mov     dword ptr [eax], offset ??_7hkLimitedHingeConstraintCinfo@@6B@; const hkLimitedHingeConstraintCinfo::`vftable'
0x8B34EB: jmp     short loc_8B34EF
0x8B34ED: xor     ecx, ecx
0x8B34EF: cmp     dword ptr [esi+8], 0
0x8B34F3: mov     [esi+0Ch], ecx
0x8B34F6: jz      short loc_8B351F
0x8B34F8: test    ecx, ecx
0x8B34FA: jz      short loc_8B3515
0x8B34FC: lea     eax, [ecx-4]
0x8B34FF: push    eax
0x8B3500: mov     ecx, esi
0x8B3502: call    sub_8A07E0
0x8B3507: mov     eax, [esp+4+arg_0]
0x8B350B: mov     byte ptr [eax], 1
0x8B350E: mov     eax, [esi+0Ch]
0x8B3511: pop     esi
0x8B3512: retn    4
0x8B3515: xor     eax, eax
0x8B3517: push    eax
0x8B3518: mov     ecx, esi
0x8B351A: call    sub_8A07E0
0x8B351F: mov     eax, [esp+4+arg_0]
0x8B3523: mov     byte ptr [eax], 1
0x8B3526: mov     eax, [esi+0Ch]
0x8B3529: pop     esi
0x8B352A: retn    4
0x8B352D: mov     ecx, [esp+4+arg_0]
0x8B3531: mov     byte ptr [ecx], 0
0x8B3534: mov     eax, [esi+0Ch]
0x8B3537: pop     esi
0x8B3538: retn    4
