0x6A5050: push    ebx
0x6A5051: mov     ebx, ecx
0x6A5053: mov     ecx, [ebx+20h]; this
0x6A5056: test    ecx, ecx
0x6A5058: push    esi
0x6A5059: push    edi
0x6A505A: jz      short loc_6A5065
0x6A505C: call    MagicTarget_GetParentActor
0x6A5061: mov     edi, eax
0x6A5063: jmp     short loc_6A5067
0x6A5065: xor     edi, edi
0x6A5067: mov     ecx, [ebx+24h]; this
0x6A506A: test    ecx, ecx
0x6A506C: jz      short loc_6A5077
0x6A506E: call    MagicCaster_GetParentActor
0x6A5073: mov     esi, eax
0x6A5075: jmp     short loc_6A5079
0x6A5077: xor     esi, esi
0x6A5079: test    edi, edi
0x6A507B: jz      short loc_6A50BA
0x6A507D: mov     eax, [edi]
0x6A507F: mov     edx, [eax+ActorVtbl.super.super.IsDead]
0x6A5085: push    0
0x6A5087: mov     ecx, edi
0x6A5089: call    edx ; Actor_IsDead
0x6A508B: test    al, al
0x6A508D: jz      short loc_6A50BA
0x6A508F: test    esi, esi
0x6A5091: jz      short loc_6A50BA
0x6A5093: mov     eax, [esi]
0x6A5095: mov     edx, [eax+ActorVtbl.super.super.IsDead]
0x6A509B: push    0
0x6A509D: mov     ecx, esi
0x6A509F: call    edx ; Actor_IsDead
0x6A50A1: test    al, al
0x6A50A3: jnz     short loc_6A50BA
0x6A50A5: mov     ecx, edi
0x6A50A7: call    Actor__IsEssential
0x6A50AC: test    al, al
0x6A50AE: jnz     short loc_6A50BA
0x6A50B0: pop     edi
0x6A50B1: pop     esi
0x6A50B2: mov     ecx, ebx
0x6A50B4: pop     ebx
0x6A50B5: jmp     loc_6A4DF0
0x6A50BA: pop     edi
0x6A50BB: pop     esi
0x6A50BC: pop     ebx
0x6A50BD: retn
