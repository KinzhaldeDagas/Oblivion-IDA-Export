0x4F6B50: mov     eax, [esp+responsibility]
0x4F6B54: sub     esp, 0Ch
0x4F6B57: push    ebx
0x4F6B58: push    ebp
0x4F6B59: push    edi
0x4F6B5A: xor     ebp, ebp
0x4F6B5C: xor     ebx, ebx
0x4F6B5E: xor     edi, edi
0x4F6B60: cmp     eax, ebp
0x4F6B62: jz      short loc_4F6B72
0x4F6B64: movzx   ecx, byte ptr [eax+4]
0x4F6B68: add     ecx, 0FFFFFFCFh
0x4F6B6B: cmp     ecx, 2
0x4F6B6E: ja      short loc_4F6B72
0x4F6B70: mov     edi, eax
0x4F6B72: push    esi
0x4F6B73: mov     esi, [esp+1Ch+arg_0]
0x4F6B77: cmp     esi, ebp
0x4F6B79: jz      loc_4F6CCB
0x4F6B7F: mov     eax, [esi]
0x4F6B81: mov     edx, [eax+190h]
0x4F6B87: mov     ecx, esi
0x4F6B89: call    edx
0x4F6B8B: test    al, al
0x4F6B8D: jz      loc_4F6CCB
0x4F6B93: cmp     edi, ebp
0x4F6B95: jz      loc_4F6CCB
0x4F6B9B: mov     eax, [edi]
0x4F6B9D: mov     edx, [eax+334h]
0x4F6BA3: push    1
0x4F6BA5: mov     ecx, edi
0x4F6BA7: call    edx
0x4F6BA9: mov     bl, al
0x4F6BAB: mov     eax, [esi]
0x4F6BAD: mov     edx, [eax+224h]
0x4F6BB3: push    edi
0x4F6BB4: mov     ecx, esi
0x4F6BB6: mov     byte ptr [esp+1Ch+disposition], bl
0x4F6BBA: mov     [esp+1Ch+var_8], ebp
0x4F6BBE: call    edx
0x4F6BC0: test    bl, bl
0x4F6BC2: mov     [esp+18h], eax
0x4F6BC6: mov     byte ptr [esp+18h+responsibility], 0
0x4F6BCB: jz      loc_4F6C6B
0x4F6BD1: mov     eax, [edi]
0x4F6BD3: mov     edx, [eax+330h]
0x4F6BD9: mov     ecx, edi
0x4F6BDB: call    edx
0x4F6BDD: test    eax, eax
0x4F6BDF: jz      loc_4F6C6B
0x4F6BE5: cmp     byte ptr ds:0B333B8h, 0
0x4F6BEC: mov     [esp+18h+arg_8], ebp
0x4F6BF0: jnz     short loc_4F6C6B
0x4F6BF2: mov     edx, [edi]
0x4F6BF4: lea     eax, [esp+18h+arg_8]
0x4F6BF8: push    eax
0x4F6BF9: mov     eax, [edx+330h]
0x4F6BFF: push    esi
0x4F6C00: mov     ecx, edi
0x4F6C02: call    eax
0x4F6C04: mov     ecx, eax
0x4F6C06: call    sub_6144D0
0x4F6C0B: mov     [esp+18h+var_8], eax
0x4F6C0F: mov     eax, [esp+18h+arg_8]
0x4F6C13: cmp     eax, ebp
0x4F6C15: jz      short loc_4F6C6B
0x4F6C17: push    eax
0x4F6C18: push    0Ch
0x4F6C1A: mov     ecx, offset dword_B3BDB0
0x4F6C1F: call    sub_67CF50
0x4F6C24: mov     ebp, eax
0x4F6C26: test    ebp, ebp
0x4F6C28: mov     ebx, ebp
0x4F6C2A: jz      short loc_4F6C62
0x4F6C2C: lea     esp, [esp+0]
0x4F6C30: mov     ecx, [ebp+0]
0x4F6C33: test    ecx, ecx
0x4F6C35: jz      short loc_4F6C5B
0x4F6C37: mov     edx, [esp+18h+arg_8]
0x4F6C3B: push    0
0x4F6C3D: push    edx
0x4F6C3E: call    sub_67B6B0
0x4F6C43: test    eax, eax
0x4F6C45: jz      short loc_4F6C4D
0x4F6C47: cmp     byte ptr [eax+4], 0
0x4F6C4B: jnz     short loc_4F6C56
0x4F6C4D: mov     ebp, [ebp+4]
0x4F6C50: test    ebp, ebp
0x4F6C52: jnz     short loc_4F6C30
0x4F6C54: jmp     short loc_4F6C5B
0x4F6C56: mov     byte ptr [esp+18h+responsibility], 1
0x4F6C5B: mov     ecx, ebx
0x4F6C5D: call    BSSimpleList_Clear
0x4F6C62: push    ebx
0x4F6C63: call    FormHeapFree
0x4F6C68: add     esp, 4
0x4F6C6B: mov     eax, [esi]
0x4F6C6D: mov     edx, [eax+284h]
0x4F6C73: push    24h ; '$'
0x4F6C75: mov     ecx, esi
0x4F6C77: call    edx
0x4F6C79: push    eax
0x4F6C7A: mov     eax, [esp+1Ch+responsibility]
0x4F6C7E: push    eax; responsibility
0x4F6C7F: mov     ecx, esi; this
0x4F6C81: call    Actor_IsCreature
0x4F6C86: mov     ecx, [esp+20h+disposition]
0x4F6C8A: push    eax; a7
0x4F6C8B: push    ecx; a6
0x4F6C8C: push    0
0x4F6C8E: push    edi
0x4F6C8F: mov     ecx, esi
0x4F6C91: call    TesObjectREF_GetDistance
0x4F6C96: mov     edx, [esi]
0x4F6C98: mov     eax, [edx+284h]
0x4F6C9E: push    ecx
0x4F6C9F: fstp    dword ptr [esp+2Ch+a5]; a5
0x4F6CA2: push    21h ; '!'; distanceToTarget
0x4F6CA4: mov     ecx, esi
0x4F6CA6: call    eax
0x4F6CA8: mov     ecx, [esp+30h+friendlyFight_]
0x4F6CAC: mov     edx, [esp+30h+disposition]
0x4F6CB0: push    eax; aggressionStat
0x4F6CB1: push    ecx; friendlyFight?
0x4F6CB2: push    edx; disposition
0x4F6CB3: call    shouldActorFight
0x4F6CB8: mov     ebx, eax
0x4F6CBA: mov     eax, [esp+3Ch+arg_C]
0x4F6CBE: mov     [esp+3Ch+responsibility], ebx
0x4F6CC2: fild    [esp+3Ch+responsibility]
0x4F6CC6: add     esp, 20h
0x4F6CC9: fstp    qword ptr [eax]
0x4F6CCB: cmp     byte ptr ds:0B361ACh, 0
0x4F6CD2: pop     esi
0x4F6CD3: jz      short loc_4F6CE3
0x4F6CD5: push    ebx
0x4F6CD6: push    offset aGetshouldattac; "GetShouldAttack >> %i"
0x4F6CDB: call    Interface_ConsolePrint
0x4F6CE0: add     esp, 8
0x4F6CE3: pop     edi
0x4F6CE4: pop     ebp
0x4F6CE5: mov     al, 1
0x4F6CE7: pop     ebx
0x4F6CE8: add     esp, 0Ch
0x4F6CEB: retn
