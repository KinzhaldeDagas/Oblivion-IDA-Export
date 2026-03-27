0x6442B0: push    ecx
0x6442B1: push    ebp
0x6442B2: push    esi
0x6442B3: mov     esi, [esp+0Ch+arg_0]
0x6442B7: mov     eax, [esi]
0x6442B9: mov     edx, [eax+170h]
0x6442BF: push    edi
0x6442C0: push    0; int
0x6442C2: push    offset ??_R0?AVTESNPC@@@8; struct TypeDescriptor *
0x6442C7: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x6442CC: mov     edi, ecx
0x6442CE: push    0; int
0x6442D0: mov     ecx, esi
0x6442D2: call    edx
0x6442D4: push    eax; void *
0x6442D5: call    OblivionDynamicCast
0x6442DA: add     esp, 14h
0x6442DD: push    0; int
0x6442DF: push    offset ??_R0?AVTESCreature@@@8; struct TypeDescriptor *
0x6442E4: mov     ebp, eax
0x6442E6: mov     eax, [esi]
0x6442E8: mov     edx, [eax+170h]
0x6442EE: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x6442F3: push    0; int
0x6442F5: mov     ecx, esi
0x6442F7: call    edx
0x6442F9: push    eax; void *
0x6442FA: call    OblivionDynamicCast
0x6442FF: mov     edx, [edi+8]
0x644302: add     esp, 14h
0x644305: test    edx, edx
0x644307: mov     byte ptr [esp+10h+var_4], 1
0x64430C: mov     byte ptr [esp+10h+arg_0], 1
0x644311: jz      short loc_64433F
0x644313: cmp     byte ptr [edx+20h], 4
0x644317: jnz     short loc_644320
0x644319: mov     byte ptr [esp+10h+var_4], 0
0x64431E: jmp     short loc_64433A
0x644320: mov     edx, [edx+1Ch]
0x644323: mov     ecx, edx
0x644325: shr     ecx, 14h
0x644328: test    cl, 1
0x64432B: jz      short loc_644332
0x64432D: mov     byte ptr [esp+10h+var_4], 0
0x644332: shr     edx, 15h
0x644335: test    dl, 1
0x644338: jz      short loc_64433F
0x64433A: mov     byte ptr [esp+10h+arg_0], 0
0x64433F: test    ebp, ebp
0x644341: jz      short loc_64435B
0x644343: mov     edx, [esp+10h+arg_0]
0x644347: mov     eax, [esp+10h+var_4]
0x64434B: push    1; char
0x64434D: push    0; int
0x64434F: push    edx; int
0x644350: push    eax; int
0x644351: push    esi; int
0x644352: mov     ecx, ebp; int
0x644354: call    sub_5227A0
0x644359: jmp     short loc_644373
0x64435B: test    eax, eax
0x64435D: jz      short loc_644373
0x64435F: mov     ecx, [esp+10h+arg_0]
0x644363: mov     edx, [esp+10h+var_4]
0x644367: push    1
0x644369: push    ecx
0x64436A: push    edx
0x64436B: push    esi
0x64436C: mov     ecx, eax
0x64436E: call    sub_51E240
0x644373: cmp     [esp+10h+arg_4], 0
0x644378: jz      short loc_644389
0x64437A: mov     eax, [edi]
0x64437C: mov     edx, [eax+188h]
0x644382: push    1
0x644384: push    esi
0x644385: mov     ecx, edi
0x644387: call    edx
0x644389: pop     edi
0x64438A: pop     esi
0x64438B: pop     ebp
0x64438C: pop     ecx
0x64438D: retn    8
