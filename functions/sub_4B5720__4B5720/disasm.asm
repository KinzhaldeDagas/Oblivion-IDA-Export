0x4B5720: push    ebx
0x4B5721: push    ebp
0x4B5722: mov     ebp, [esp+8+arg_4]
0x4B5726: push    esi
0x4B5727: push    edi
0x4B5728: push    0; int
0x4B572A: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x4B572F: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x4B5734: push    0; int
0x4B5736: push    ebp; void *
0x4B5737: mov     esi, ecx
0x4B5739: call    OblivionDynamicCast
0x4B573E: add     esp, 14h
0x4B5741: xor     bl, bl
0x4B5743: test    byte ptr [esi+88h], 1
0x4B574A: mov     edi, eax
0x4B574C: jz      short loc_4B5756
0x4B574E: cmp     dword ptr [esi+64h], 0
0x4B5752: jz      short loc_4B5756
0x4B5754: mov     bl, 1
0x4B5756: mov     eax, [edi]
0x4B5758: mov     edx, [eax+334h]
0x4B575E: push    1
0x4B5760: mov     ecx, edi
0x4B5762: call    edx
0x4B5764: test    al, al
0x4B5766: jnz     short loc_4B5782
0x4B5768: mov     ecx, ds:0B333C4h
0x4B576E: cmp     edi, ecx
0x4B5770: jnz     short loc_4B57B6
0x4B5772: mov     eax, [ecx]
0x4B5774: mov     edx, [eax+334h]
0x4B577A: push    1
0x4B577C: call    edx
0x4B577E: test    al, al
0x4B5780: jz      short loc_4B57B0
0x4B5782: call    InterfaceManager_IsMenuMode
0x4B5787: test    al, al
0x4B5789: jnz     short loc_4B57B0
0x4B578B: fld     dword ptr ds:0A30634h
0x4B5791: mov     eax, ds:0B38A68h
0x4B5796: push    ecx
0x4B5797: fstp    [esp+14h+duration]; duration
0x4B579A: push    1; unk2
0x4B579C: push    0; unk1
0x4B579E: push    eax; string
0x4B579F: call    GameUI_QueueMessage
0x4B57A4: add     esp, 10h
0x4B57A7: pop     edi
0x4B57A8: pop     esi
0x4B57A9: pop     ebp
0x4B57AA: mov     al, 1
0x4B57AC: pop     ebx
0x4B57AD: retn    14h
0x4B57B0: mov     ecx, ds:0B333C4h
0x4B57B6: cmp     ebp, ecx
0x4B57B8: jnz     loc_4B587B
0x4B57BE: cmp     byte ptr [ecx+10Ch], 0
0x4B57C5: jnz     loc_4B587B
0x4B57CB: test    bl, bl
0x4B57CD: jnz     loc_4B587B
0x4B57D3: mov     ecx, [esp+10h+arg_0]
0x4B57D7: push    ecx
0x4B57D8: push    esi
0x4B57D9: call    sub_57B740
0x4B57DE: mov     eax, ds:0B333C4h
0x4B57E3: add     esp, 8
0x4B57E6: cmp     edi, eax
0x4B57E8: jnz     loc_4B58AD
0x4B57EE: mov     edi, 1
0x4B57F3: add     [eax+69Ch], edi
0x4B57F9: mov     ecx, esi
0x4B57FB: call    sub_4B52D0
0x4B5800: cmp     eax, 0FFFFFFFFh
0x4B5803: jz      loc_4B58AD
0x4B5809: mov     ecx, esi
0x4B580B: call    sub_4B52D0
0x4B5810: mov     ecx, ds:0B333C4h
0x4B5816: push    eax
0x4B5817: call    Actor_GetBaseCalcAVi
0x4B581C: cmp     eax, 64h ; 'd'
0x4B581F: jge     loc_4B58AD
0x4B5825: mov     eax, ds:0B333C4h
0x4B582A: add     [eax+6A0h], edi
0x4B5830: mov     ecx, esi
0x4B5832: call    sub_4B52D0
0x4B5837: push    eax
0x4B5838: push    2
0x4B583A: call    ActorValue_GetGroupOffsetFromAV
0x4B583F: mov     ecx, ds:0B33A98h
0x4B5845: add     esp, 8
0x4B5848: push    eax
0x4B5849: call    TESDataHandler_GetTESSkillByCode
0x4B584E: test    eax, eax
0x4B5850: jz      short loc_4B5860
0x4B5852: mov     ecx, ds:0B333C4h
0x4B5858: push    edi
0x4B5859: push    edi
0x4B585A: push    eax
0x4B585B: call    Player_SkillLevelIncrease
0x4B5860: mov     edx, [esi]
0x4B5862: mov     eax, [edx+40h]
0x4B5865: push    4
0x4B5867: mov     ecx, esi
0x4B5869: mov     byte ptr [esi+89h], 0FFh
0x4B5870: call    eax
0x4B5872: pop     edi
0x4B5873: pop     esi
0x4B5874: pop     ebp
0x4B5875: mov     al, 1
0x4B5877: pop     ebx
0x4B5878: retn    14h
0x4B587B: test    byte ptr [esi+88h], 2
0x4B5882: jnz     short loc_4B58AD
0x4B5884: mov     ecx, [esp+10h+arg_10]
0x4B5888: mov     edx, [esp+10h+arg_C]
0x4B588C: mov     eax, [esp+10h+arg_8]
0x4B5890: push    ecx
0x4B5891: mov     ecx, [esp+14h+arg_0]
0x4B5895: push    edx
0x4B5896: push    eax
0x4B5897: push    ebp
0x4B5898: push    ecx
0x4B5899: mov     ecx, esi
0x4B589B: call    sub_4B28E0
0x4B58A0: mov     edx, ds:0B333C4h
0x4B58A6: mov     byte ptr [edx+10Ch], 0
0x4B58AD: pop     edi
0x4B58AE: pop     esi
0x4B58AF: pop     ebp
0x4B58B0: mov     al, 1
0x4B58B2: pop     ebx
0x4B58B3: retn    14h
