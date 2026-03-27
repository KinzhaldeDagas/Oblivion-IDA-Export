0x4DB3C0: push    esi
0x4DB3C1: push    edi
0x4DB3C2: mov     edi, ecx
0x4DB3C4: mov     eax, [edi]
0x4DB3C6: mov     edx, [eax+170h]
0x4DB3CC: call    edx
0x4DB3CE: mov     esi, eax
0x4DB3D0: test    esi, esi
0x4DB3D2: jz      short loc_4DB452
0x4DB3D4: mov     eax, [esi+0Ch]
0x4DB3D7: add     eax, 0FFFFFFFCh; switch 56 cases
0x4DB3DA: cmp     eax, 37h
0x4DB3DD: ja      short def_4DB3E6; jumptable 004DB3E6 default case, cases 7-15,19-51,53-58
0x4DB3DF: movzx   eax, ds:byte_4DB460[eax]
0x4DB3E6: jmp     ds:jpt_4DB3E6[eax*4]; switch jump
0x4DB3ED: pop     edi; jumptable 004DB3E6 cases 4-6,16-18,52,59
0x4DB3EE: mov     al, 1
0x4DB3F0: pop     esi
0x4DB3F1: retn
0x4DB3F2: mov     al, [esi+4]; jumptable 004DB3E6 default case, cases 7-15,19-51,53-58
0x4DB3F5: cmp     al, 29h ; ')'
0x4DB3F7: jz      short loc_4DB3ED; jumptable 004DB3E6 cases 4-6,16-18,52,59
0x4DB3F9: movzx   ecx, al
0x4DB3FC: add     ecx, 0FFFFFFDDh
0x4DB3FF: cmp     ecx, 1
0x4DB402: ja      short loc_4DB411
0x4DB404: mov     ecx, [esi+28h]
0x4DB407: shr     ecx, 9
0x4DB40A: not     cl
0x4DB40C: test    cl, 1
0x4DB40F: jnz     short loc_4DB3ED; jumptable 004DB3E6 cases 4-6,16-18,52,59
0x4DB411: cmp     al, 18h
0x4DB413: jnz     short loc_4DB42C
0x4DB415: mov     ecx, esi
0x4DB417: call    sub_4B78E0
0x4DB41C: test    al, al
0x4DB41E: jnz     short loc_4DB3ED; jumptable 004DB3E6 cases 4-6,16-18,52,59
0x4DB420: lea     ecx, [edi+44h]; this
0x4DB423: call    ExtraDataList_GetTeleport
0x4DB428: test    eax, eax
0x4DB42A: jnz     short loc_4DB3ED; jumptable 004DB3E6 cases 4-6,16-18,52,59
0x4DB42C: cmp     byte ptr [esi+4], 24h ; '$'
0x4DB430: jnz     short loc_4DB452
0x4DB432: push    0; int
0x4DB434: push    offset ??_R0?AVTESCreature@@@8; struct TypeDescriptor *
0x4DB439: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x4DB43E: push    0; int
0x4DB440: push    esi; void *
0x4DB441: call    OblivionDynamicCast
0x4DB446: add     esp, 14h
0x4DB449: cmp     byte ptr [eax+104h], 4
0x4DB450: jz      short loc_4DB3ED; jumptable 004DB3E6 cases 4-6,16-18,52,59
0x4DB452: pop     edi
0x4DB453: xor     al, al
0x4DB455: pop     esi
0x4DB456: retn
