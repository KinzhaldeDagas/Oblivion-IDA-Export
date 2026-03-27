0x476380: push    esi
0x476381: mov     esi, ecx
0x476383: mov     eax, [esi+0D0h]
0x476389: test    eax, eax
0x47638B: jz      short loc_47639B
0x47638D: cmp     dword ptr [eax], 1
0x476390: jnz     short loc_4763EB
0x476392: push    0
0x476394: push    0
0x476396: call    sub_475440
0x47639B: mov     eax, [esi+0CCh]
0x4763A1: test    eax, eax
0x4763A3: push    edi
0x4763A4: jz      short loc_476406
0x4763A6: cmp     dword ptr [eax], 1
0x4763A9: jnz     short loc_476406
0x4763AB: mov     edi, [eax+8]
0x4763AE: push    0
0x4763B0: push    edi
0x4763B1: mov     ecx, esi; this
0x4763B3: call    ??0AnimSequenceSingle@@QAE@XZ; AnimSequenceSingle::AnimSequenceSingle(void)
0x4763B8: test    al, al
0x4763BA: jz      short loc_4763FA
0x4763BC: mov     eax, [esi+0CCh]
0x4763C2: mov     eax, [eax+0Ch]
0x4763C5: mov     ecx, [edi+8]
0x4763C8: push    eax
0x4763C9: call    TESAnimGroup_GetAnimationGroup
0x4763CE: push    eax
0x4763CF: mov     ecx, esi
0x4763D1: call    sub_476260
0x4763D6: test    eax, eax
0x4763D8: mov     ecx, [esi+0CCh]
0x4763DE: jz      short loc_4763EF
0x4763E0: push    eax
0x4763E1: call    sub_472C00
0x4763E6: pop     edi
0x4763E7: mov     al, 1
0x4763E9: pop     esi
0x4763EA: retn
0x4763EB: xor     al, al
0x4763ED: pop     esi
0x4763EE: retn
0x4763EF: pop     edi
0x4763F0: mov     dword ptr [ecx], 3
0x4763F6: xor     al, al
0x4763F8: pop     esi
0x4763F9: retn
0x4763FA: mov     edx, [esi+0CCh]
0x476400: mov     dword ptr [edx], 3
0x476406: pop     edi
0x476407: xor     al, al
0x476409: pop     esi
0x47640A: retn
