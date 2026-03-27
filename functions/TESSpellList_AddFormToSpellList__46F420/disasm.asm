0x46F420: mov     eax, ds:0BA9DE4h
0x46F425: push    ebx
0x46F426: mov     ebx, ecx
0x46F428: mov     ecx, large fs:2Ch
0x46F42F: mov     edx, [ecx+eax*4]
0x46F432: cmp     byte ptr [edx+184h], 0
0x46F439: jz      short loc_46F44D
0x46F43B: mov     eax, [esp+4+arg_0]
0x46F43F: push    eax
0x46F440: mov     ecx, ebx
0x46F442: call    TESSpellList_AddSpell
0x46F447: mov     al, 1
0x46F449: pop     ebx
0x46F44A: retn    4
0x46F44D: push    esi
0x46F44E: push    edi
0x46F44F: mov     edi, [esp+0Ch+arg_0]
0x46F453: push    0; int
0x46F455: push    offset ??_R0?AVSpellItem@@@8; struct TypeDescriptor *
0x46F45A: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x46F45F: push    0; int
0x46F461: push    edi; void *
0x46F462: call    OblivionDynamicCast
0x46F467: push    0; int
0x46F469: push    offset ??_R0?AVTESLevSpell@@@8; struct TypeDescriptor *
0x46F46E: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x46F473: push    0; int
0x46F475: push    edi; void *
0x46F476: mov     esi, eax
0x46F478: call    OblivionDynamicCast
0x46F47D: add     esp, 28h
0x46F480: test    esi, esi
0x46F482: jz      short loc_46F492
0x46F484: push    esi
0x46F485: mov     ecx, ebx
0x46F487: call    TESSpellList_AddSpell
0x46F48C: pop     edi
0x46F48D: pop     esi
0x46F48E: pop     ebx
0x46F48F: retn    4
0x46F492: test    eax, eax
0x46F494: jz      short loc_46F4A4
0x46F496: push    eax
0x46F497: mov     ecx, ebx
0x46F499: call    TESSpellList_AddLevSpell
0x46F49E: pop     edi
0x46F49F: pop     esi
0x46F4A0: pop     ebx
0x46F4A1: retn    4
0x46F4A4: pop     edi
0x46F4A5: pop     esi
0x46F4A6: xor     al, al
0x46F4A8: pop     ebx
0x46F4A9: retn    4
