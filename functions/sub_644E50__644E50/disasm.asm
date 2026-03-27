0x644E50: sub     esp, 14h
0x644E53: push    ebx
0x644E54: push    esi
0x644E55: mov     esi, [esp+1Ch+arg_0]
0x644E59: cmp     esi, ds:0B333C4h
0x644E5F: push    edi
0x644E60: mov     edi, ecx
0x644E62: jnz     loc_644F78
0x644E68: cmp     dword ptr [edi+34h], 0
0x644E6C: jnz     short loc_644E78
0x644E6E: mov     eax, [edi]
0x644E70: mov     edx, [eax+408h]
0x644E76: call    edx
0x644E78: mov     ecx, [edi+34h]
0x644E7B: call    sub_6899E0
0x644E80: test    al, al
0x644E82: jz      short loc_644E97
0x644E84: mov     ecx, [esp+20h+arg_4]
0x644E88: mov     eax, [esi]
0x644E8A: mov     edx, [eax+1CCh]
0x644E90: push    ecx
0x644E91: mov     ecx, esi
0x644E93: call    edx
0x644E95: jmp     short loc_644EAC
0x644E97: mov     ecx, [edi+34h]
0x644E9A: mov     ebx, [esi]
0x644E9C: call    sub_68A160
0x644EA1: push    eax
0x644EA2: mov     eax, [ebx+1CCh]
0x644EA8: mov     ecx, esi
0x644EAA: call    eax
0x644EAC: mov     edx, [edi]
0x644EAE: mov     eax, [edx+378h]
0x644EB4: mov     ecx, edi
0x644EB6: call    eax
0x644EB8: test    eax, eax
0x644EBA: jz      short loc_644F11
0x644EBC: mov     edx, [edi]
0x644EBE: mov     eax, [edx+380h]
0x644EC4: mov     ecx, edi
0x644EC6: call    eax
0x644EC8: test    eax, eax
0x644ECA: jz      short loc_644F11
0x644ECC: mov     edx, [edi]
0x644ECE: mov     eax, [edx+380h]
0x644ED4: mov     ecx, edi
0x644ED6: call    eax
0x644ED8: movzx   eax, word ptr [eax+0Ch]
0x644EDC: mov     [esp+20h+arg_4], eax
0x644EE0: mov     ecx, ds:0B333C4h
0x644EE6: fild    [esp+20h+arg_4]
0x644EEA: mov     edx, [ecx]
0x644EEC: mov     edx, [edx+1E8h]
0x644EF2: push    ecx
0x644EF3: fdiv    qword ptr ds:0A2FC70h
0x644EF9: fstp    [esp+24h+arg_4]
0x644EFD: fld     [esp+24h+arg_4]
0x644F01: fstp    [esp+24h+var_24]
0x644F04: call    edx
0x644F06: mov     al, 1
0x644F08: pop     edi
0x644F09: pop     esi
0x644F0A: pop     ebx
0x644F0B: add     esp, 14h
0x644F0E: retn    14h
0x644F11: mov     ecx, ds:0B333C4h
0x644F17: mov     eax, [ecx]
0x644F19: mov     edx, [eax+380h]
0x644F1F: call    edx
0x644F21: test    eax, eax
0x644F23: jz      loc_64526E
0x644F29: mov     ecx, ds:0B333C4h
0x644F2F: mov     eax, [ecx]
0x644F31: mov     edx, [eax+380h]
0x644F37: call    edx
0x644F39: mov     ecx, ds:0B333C4h
0x644F3F: mov     esi, [ecx]
0x644F41: mov     edx, [eax]
0x644F43: mov     ecx, eax
0x644F45: mov     eax, [edx+1E0h]
0x644F4B: call    eax
0x644F4D: fadd    qword ptr ds:0A6E740h
0x644F53: mov     edx, [esi+1E8h]
0x644F59: push    ecx
0x644F5A: mov     ecx, ds:0B333C4h
0x644F60: fstp    [esp+24h+arg_4]
0x644F64: fld     [esp+24h+arg_4]
0x644F68: fstp    [esp+24h+var_24]
0x644F6B: call    edx
0x644F6D: mov     al, 1
0x644F6F: pop     edi
0x644F70: pop     esi
0x644F71: pop     ebx
0x644F72: add     esp, 14h
0x644F75: retn    14h
0x644F78: test    esi, esi
0x644F7A: jz      loc_64526E
0x644F80: mov     eax, [edi]
0x644F82: mov     edx, [eax+34Ch]
0x644F88: call    edx
0x644F8A: test    al, al
0x644F8C: jnz     loc_64526E
0x644F92: mov     ecx, [edi+34h]
0x644F95: test    ecx, ecx
0x644F97: jz      short loc_644FA6
0x644F99: call    sub_6899E0
0x644F9E: test    al, al
0x644FA0: jz      loc_6450F0
0x644FA6: cmp     dword ptr [edi+34h], 0
0x644FAA: jnz     short loc_644FB8
0x644FAC: mov     eax, [edi]
0x644FAE: mov     edx, [eax+408h]
0x644FB4: mov     ecx, edi
0x644FB6: call    edx
0x644FB8: mov     ecx, [edi+34h]
0x644FBB: call    sub_6899E0
0x644FC0: test    al, al
0x644FC2: jz      loc_6450F0
0x644FC8: mov     eax, [esp+20h+arg_4]
0x644FCC: mov     edx, [eax+4]
0x644FCF: mov     ecx, [eax]
0x644FD1: mov     eax, [eax+8]
0x644FD4: mov     [esp+20h+var_8], edx
0x644FD8: mov     edx, [edi]
0x644FDA: mov     [esp+20h+var_C], ecx
0x644FDE: mov     [esp+20h+var_4], eax
0x644FE2: mov     eax, [edx+0CCh]
0x644FE8: mov     ecx, edi
0x644FEA: call    eax
0x644FEC: mov     ecx, esi
0x644FEE: mov     ebx, eax
0x644FF0: call    Actor_IsSwimming
0x644FF5: test    al, al
0x644FF7: jnz     short loc_64502F
0x644FF9: test    ebx, ebx
0x644FFB: jz      short loc_64502F
0x644FFD: mov     edx, [ebx]
0x644FFF: mov     eax, [edx+190h]
0x645005: mov     ecx, ebx
0x645007: call    eax
0x645009: test    al, al
0x64500B: jz      short loc_64502F
0x64500D: mov     ecx, ebx
0x64500F: call    Actor_IsSwimming
0x645014: test    al, al
0x645016: jz      short loc_64502F
0x645018: fld     [esp+20h+var_4]
0x64501C: mov     ecx, esi
0x64501E: fstp    [esp+20h+var_14]
0x645022: call    sub_5E0660
0x645027: fsubr   [esp+20h+var_14]
0x64502B: fstp    [esp+20h+var_4]
0x64502F: cmp     byte ptr ds:0B15800h, 0
0x645036: jz      short loc_6450AE
0x645038: mov     ecx, ds:0B333C4h; this
0x64503E: call    PlayerCharacter__IsSleeping?
0x645043: mov     ecx, [esp+20h+var_C]
0x645047: mov     edx, [esp+20h+var_8]
0x64504B: push    eax
0x64504C: sub     esp, 0Ch
0x64504F: mov     eax, esp
0x645051: mov     [eax], ecx
0x645053: mov     ecx, [esp+30h+var_4]
0x645057: mov     [eax+4], edx
0x64505A: mov     edx, [esp+30h+arg_C]
0x64505E: mov     [eax+8], ecx
0x645061: mov     eax, [esp+30h+arg_8]
0x645065: mov     ecx, ds:0B3BF80h
0x64506B: push    edx
0x64506C: push    eax
0x64506D: push    esi
0x64506E: call    sub_6836E0
0x645073: lea     ecx, [esp+20h+arg_4]
0x645077: push    ecx
0x645078: mov     ecx, ds:0B3BF80h
0x64507E: push    esi
0x64507F: mov     byte ptr [esp+28h+arg_4], 0
0x645084: call    sub_682820
0x645089: test    al, al
0x64508B: jz      loc_64516A
0x645091: cmp     byte ptr [esp+20h+arg_4], 0
0x645096: push    0; int
0x645098: jnz     short loc_6450CA
0x64509A: push    0; int
0x64509C: mov     ecx, esi; int
0x64509E: call    sub_5F7CF0
0x6450A3: xor     al, al
0x6450A5: pop     edi
0x6450A6: pop     esi
0x6450A7: pop     ebx
0x6450A8: add     esp, 14h
0x6450AB: retn    14h
0x6450AE: mov     edx, [esp+20h+arg_C]
0x6450B2: mov     eax, [esp+20h+arg_8]
0x6450B6: push    edx
0x6450B7: push    eax
0x6450B8: lea     ecx, [esp+28h+var_C]
0x6450BC: push    ecx
0x6450BD: mov     ecx, [edi+34h]
0x6450C0: push    esi
0x6450C1: call    sub_68B030
0x6450C6: test    al, al
0x6450C8: jmp     short loc_645096
0x6450CA: mov     edx, [edi+34h]
0x6450CD: mov     ebx, [edx]
0x6450CF: mov     ecx, edx
0x6450D1: call    sub_68A160
0x6450D6: mov     ecx, [edi+34h]
0x6450D9: push    eax
0x6450DA: mov     eax, [ebx+14h]
0x6450DD: push    esi
0x6450DE: call    eax
0x6450E0: mov     ecx, [edi+34h]
0x6450E3: call    sub_6899E0
0x6450E8: test    al, al
0x6450EA: jnz     loc_645260
0x6450F0: mov     edx, [esi]
0x6450F2: mov     eax, [edx+380h]
0x6450F8: mov     ecx, esi
0x6450FA: call    eax
0x6450FC: test    eax, eax
0x6450FE: jz      short loc_645175
0x645100: mov     ecx, [edi+34h]
0x645103: test    ecx, ecx
0x645105: jz      short loc_645175
0x645107: call    sub_68A180
0x64510C: mov     ebx, eax
0x64510E: test    ebx, ebx
0x645110: jz      short loc_645175
0x645112: mov     ecx, ebx; this
0x645114: call    GetTeleportExtraData
0x645119: test    eax, eax
0x64511B: jz      short loc_645175
0x64511D: push    0
0x64511F: push    esi
0x645120: mov     ecx, ebx
0x645122: call    TesObjectREF_GetDistance
0x645127: fcomp   qword ptr ds:0A6E6F8h
0x64512D: fnstsw  ax
0x64512F: test    ah, 41h
0x645132: jp      short loc_645175
0x645134: mov     edx, [esi]
0x645136: mov     eax, [edx+380h]
0x64513C: mov     ecx, esi
0x64513E: call    eax
0x645140: mov     ecx, eax
0x645142: call    sub_5E9A60
0x645147: test    al, al
0x645149: jnz     short loc_64515E
0x64514B: mov     edx, [esi]
0x64514D: mov     eax, [edx+380h]
0x645153: mov     ecx, esi
0x645155: call    eax
0x645157: mov     ecx, eax; int
0x645159: call    sub_5F80D0
0x64515E: mov     edx, [esi]
0x645160: mov     eax, [edx+230h]
0x645166: mov     ecx, esi
0x645168: call    eax
0x64516A: xor     al, al
0x64516C: pop     edi
0x64516D: pop     esi
0x64516E: pop     ebx
0x64516F: add     esp, 14h
0x645172: retn    14h
0x645175: fld     [esp+20h+arg_10]
0x645179: push    ecx
0x64517A: mov     ecx, [edi+34h]
0x64517D: fstp    [esp+24h+var_24]; float
0x645180: call    sub_68A9D0
0x645185: mov     ecx, esi; this
0x645187: call    Actor__GetProcessLevel
0x64518C: mov     ecx, [edi+34h]
0x64518F: mov     edx, [ecx]
0x645191: mov     ebx, eax
0x645193: mov     eax, [edx+20h]
0x645196: push    esi
0x645197: call    eax
0x645199: test    al, al
0x64519B: jnz     short loc_6451D6
0x64519D: mov     ecx, esi; this
0x64519F: call    Actor_IsCreature
0x6451A4: test    al, al
0x6451A6: jnz     short loc_6451CB
0x6451A8: mov     edx, [esi]
0x6451AA: mov     eax, [edx+380h]
0x6451B0: mov     ecx, esi
0x6451B2: call    eax
0x6451B4: test    eax, eax
0x6451B6: jnz     short loc_6451CB
0x6451B8: mov     ecx, [esi+58h]
0x6451BB: mov     edx, [ecx]
0x6451BD: push    eax
0x6451BE: mov     eax, [edx+3A0h]
0x6451C4: push    esi
0x6451C5: call    eax
0x6451C7: test    al, al
0x6451C9: jnz     short loc_64516A
0x6451CB: mov     ecx, [edi+34h]
0x6451CE: mov     edx, [ecx]
0x6451D0: mov     eax, [edx+18h]
0x6451D3: push    esi
0x6451D4: call    eax
0x6451D6: mov     ecx, esi; this
0x6451D8: call    Actor__GetProcessLevel
0x6451DD: cmp     ebx, eax
0x6451DF: jnz     loc_64526E
0x6451E5: mov     ecx, [edi+34h]
0x6451E8: mov     edx, [ecx]
0x6451EA: mov     eax, [edx+20h]
0x6451ED: push    esi
0x6451EE: call    eax
0x6451F0: test    al, al
0x6451F2: jz      short loc_645254
0x6451F4: mov     ecx, [edi+34h]
0x6451F7: mov     edx, [ecx]
0x6451F9: mov     eax, [edx+0Ch]
0x6451FC: call    eax
0x6451FE: test    al, al
0x645200: jnz     short loc_645227
0x645202: mov     edx, [edi]
0x645204: mov     eax, [edx+410h]
0x64520A: mov     ecx, edi
0x64520C: call    eax
0x64520E: test    eax, eax
0x645210: jz      short loc_645227
0x645212: mov     ecx, eax
0x645214: call    sub_684EC0
0x645219: mov     edx, [esi]
0x64521B: mov     eax, [edx+180h]
0x645221: push    1
0x645223: mov     ecx, esi
0x645225: call    eax
0x645227: mov     ecx, [edi+34h]
0x64522A: push    esi
0x64522B: call    sub_68ABA0
0x645230: test    al, al
0x645232: jz      loc_64516A
0x645238: cmp     dword ptr [edi+34h], 0
0x64523C: jz      short loc_64526E
0x64523E: mov     ecx, esi; this
0x645240: call    Actor__GetProcessLevel
0x645245: cmp     ebx, eax
0x645247: jnz     short loc_64526E
0x645249: mov     ecx, esi
0x64524B: call    MobileObject_GetProcessLevel
0x645250: cmp     ebx, eax
0x645252: jnz     short loc_64526E
0x645254: mov     ecx, [edi+34h]
0x645257: call    sub_6899E0
0x64525C: test    al, al
0x64525E: jz      short loc_64526E
0x645260: mov     edx, [esi]
0x645262: mov     eax, [edx+180h]
0x645268: push    1
0x64526A: mov     ecx, esi
0x64526C: call    eax
0x64526E: pop     edi
0x64526F: pop     esi
0x645270: mov     al, 1
0x645272: pop     ebx
0x645273: add     esp, 14h
0x645276: retn    14h
