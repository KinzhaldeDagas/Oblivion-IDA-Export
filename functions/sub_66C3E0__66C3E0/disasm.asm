0x66C3E0: mov     eax, [esp+arg_0]
0x66C3E4: push    esi
0x66C3E5: push    edi
0x66C3E6: push    eax
0x66C3E7: mov     esi, ecx
0x66C3E9: call    Player_LevelUpAttribute?
0x66C3EE: mov     ecx, [esp+8+arg_4]
0x66C3F2: push    ecx
0x66C3F3: mov     ecx, esi
0x66C3F5: call    Player_LevelUpAttribute?
0x66C3FA: mov     edx, [esp+8+arg_8]
0x66C3FE: push    edx
0x66C3FF: mov     ecx, esi
0x66C401: call    Player_LevelUpAttribute?
0x66C406: mov     edi, [esi+624h]
0x66C40C: test    edi, edi
0x66C40E: jnz     short loc_66C420
0x66C410: call    Magic_GetDefaultPlayerSpell
0x66C415: test    eax, eax
0x66C417: jz      short loc_66C41E
0x66C419: lea     edi, [eax+18h]
0x66C41C: jmp     short loc_66C420
0x66C41E: xor     edi, edi
0x66C420: push    ebx
0x66C421: mov     ebx, [esi+628h]
0x66C427: push    0
0x66C429: mov     ecx, esi
0x66C42B: call    PlayerCharacter_SetCurrentMagicItem
0x66C430: cmp     dword ptr [esi+628h], 0
0x66C437: jz      short loc_66C442
0x66C439: push    0
0x66C43B: mov     ecx, esi
0x66C43D: call    PlayerCharacter_SetCurrentMagicItem
0x66C442: push    0
0x66C444: mov     ecx, esi
0x66C446: mov     dword ptr [esi+628h], 0
0x66C450: call    PlayerCharacter_SetCurrentMagicItem
0x66C455: push    0; a2
0x66C457: mov     ecx, esi; this
0x66C459: call    Actor_GetActorBaseForm
0x66C45E: mov     ecx, eax
0x66C460: add     ecx, 24h ; '$'
0x66C463: call    TESActorBaseData_GetLevel
0x66C468: add     ax, 1
0x66C46C: mov     ecx, esi; this
0x66C46E: push    eax
0x66C46F: push    0; a2
0x66C471: call    Actor_GetActorBaseForm
0x66C476: mov     ecx, eax
0x66C478: add     ecx, 24h ; '$'
0x66C47B: call    TESActorBaseData_SetLevel
0x66C480: test    edi, edi
0x66C482: jz      short loc_66C48C
0x66C484: push    edi
0x66C485: mov     ecx, esi
0x66C487: call    PlayerCharacter_SetCurrentMagicItem
0x66C48C: test    ebx, ebx
0x66C48E: jz      short loc_66C498
0x66C490: push    ebx
0x66C491: mov     ecx, esi
0x66C493: call    sub_664850
0x66C498: mov     ecx, esi
0x66C49A: call    sub_65FBB0
0x66C49F: xor     ecx, ecx
0x66C4A1: xor     edx, edx
0x66C4A3: mov     eax, ds:0B37618h
0x66C4A8: cmp     edx, eax
0x66C4AA: jge     short loc_66C4CF
0x66C4AC: mov     al, [ecx+esi+5B8h]
0x66C4B3: test    al, al
0x66C4B5: jle     short loc_66C4C0
0x66C4B7: sub     al, 1
0x66C4B9: mov     [ecx+esi+5B8h], al
0x66C4C0: add     ecx, 1
0x66C4C3: add     edx, 1
0x66C4C6: cmp     ecx, 3
0x66C4C9: jle     short loc_66C4A3
0x66C4CB: xor     ecx, ecx
0x66C4CD: jmp     short loc_66C4A3
0x66C4CF: sub     [esi+184h], eax
0x66C4D5: mov     ecx, esi
0x66C4D7: call    sub_65D560
0x66C4DC: mov     eax, [esi+184h]
0x66C4E2: mov     dword ptr [esi+5BCh], 0
0x66C4EC: cmp     eax, ds:0B37618h
0x66C4F2: jge     short loc_66C4FB
0x66C4F4: mov     byte ptr [esi+1DCh], 0
0x66C4FB: mov     edx, [esi]
0x66C4FD: mov     eax, [edx+170h]
0x66C503: call    eax
0x66C505: mov     edi, eax
0x66C507: test    edi, edi
0x66C509: jz      short loc_66C54B
0x66C50B: push    5
0x66C50D: lea     ecx, [edi+88h]
0x66C513: call    TESAttributes_GetAVi
0x66C518: mov     ecx, edi
0x66C51A: mov     bl, al
0x66C51C: call    TESActorBase_GetHealth
0x66C521: mov     [esp+0Ch+arg_0], eax
0x66C525: fild    [esp+0Ch+arg_0]
0x66C529: movzx   ecx, bl
0x66C52C: fld     dword ptr ds:0B37708h
0x66C532: mov     [esp+0Ch+arg_0], ecx
0x66C536: fild    [esp+0Ch+arg_0]
0x66C53A: fmulp   st(1), st
0x66C53C: faddp   st(1), st
0x66C53E: call    Double_To_SInt32
0x66C543: push    eax
0x66C544: mov     ecx, edi
0x66C546: call    TESActorBase_SetHealth
0x66C54B: mov     ecx, ds:0B33A98h
0x66C551: call    sub_447300
0x66C556: mov     ecx, offset ActorProcessManager_ptr
0x66C55B: call    sub_6772E0
0x66C560: cmp     byte ptr ds:0B14EA8h, 0
0x66C567: pop     ebx
0x66C568: jz      short loc_66C571
0x66C56A: mov     ecx, esi
0x66C56C: call    sub_6684B0
0x66C571: pop     edi
0x66C572: pop     esi
0x66C573: retn    0Ch
