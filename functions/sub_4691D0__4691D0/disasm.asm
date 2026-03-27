0x4691D0: push    edi
0x4691D1: mov     edi, [esp+4+arg_4]
0x4691D5: cmp     edi, 1
0x4691D8: jnz     short loc_469207
0x4691DA: movzx   eax, word ptr [ecx+28h]
0x4691DE: cmp     ax, 0FFFFh
0x4691E2: jnz     short loc_4691FE
0x4691E4: mov     eax, [ecx+24h]
0x4691E7: push    esi
0x4691E8: lea     esi, [eax+1]
0x4691EB: jmp     short loc_4691F0
0x4691ED: align 10h
0x4691F0: mov     dl, [eax]
0x4691F2: add     eax, 1
0x4691F5: test    dl, dl
0x4691F7: jnz     short loc_4691F0
0x4691F9: sub     eax, esi
0x4691FB: pop     esi
0x4691FC: jmp     short loc_469201
0x4691FE: movzx   eax, ax
0x469201: test    eax, eax
0x469203: jnz     short loc_469207
0x469205: xor     edi, edi
0x469207: mov     eax, [esp+4+arg_8]
0x46920B: push    eax
0x46920C: lea     edx, [edi+edi*2]
0x46920F: lea     eax, [ecx+edx*8+8]
0x469213: push    eax
0x469214: push    0; int
0x469216: push    offset ??_R0?AVTESForm@@@8; struct TypeDescriptor *
0x46921B: push    offset ??_R0?AVTESBipedModelForm@@@8; struct _s_RTTICompleteObjectLocator *
0x469220: push    0; int
0x469222: push    ecx; void *
0x469223: call    OblivionDynamicCast
0x469228: mov     ecx, [esp+20h+arg_0]
0x46922C: add     esp, 14h
0x46922F: push    eax
0x469230: call    TESBipedModelForm_GetBodyPartModel????
0x469235: pop     edi
0x469236: retn    0Ch
