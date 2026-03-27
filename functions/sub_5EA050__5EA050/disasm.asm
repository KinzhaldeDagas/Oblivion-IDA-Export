0x5EA050: sub     esp, 10h
0x5EA053: push    ebx
0x5EA054: push    ebp
0x5EA055: push    esi
0x5EA056: push    edi
0x5EA057: mov     edi, [esp+20h+arg_0]
0x5EA05B: mov     eax, [edi]
0x5EA05D: mov     edx, [eax+334h]
0x5EA063: mov     esi, ecx
0x5EA065: push    1
0x5EA067: mov     ecx, edi
0x5EA069: call    edx
0x5EA06B: mov     bl, al
0x5EA06D: mov     eax, [esi]
0x5EA06F: mov     edx, [eax+224h]
0x5EA075: xor     ebp, ebp
0x5EA077: push    edi
0x5EA078: mov     ecx, esi
0x5EA07A: mov     byte ptr [esp+24h+var_8], bl
0x5EA07E: mov     [esp+24h+friendlyFight_], ebp
0x5EA082: call    edx
0x5EA084: test    bl, bl
0x5EA086: mov     [esp+20h+disposition], eax
0x5EA08A: mov     byte ptr [esp+20h+var_10], 0
0x5EA08F: jz      loc_5EA12B
0x5EA095: mov     eax, [edi]
0x5EA097: mov     edx, [eax+330h]
0x5EA09D: mov     ecx, edi
0x5EA09F: call    edx
0x5EA0A1: test    eax, eax
0x5EA0A3: jz      loc_5EA12B
0x5EA0A9: cmp     byte ptr ds:0B333B8h, 0
0x5EA0B0: mov     [esp+20h+arg_0], ebp
0x5EA0B4: jnz     short loc_5EA12B
0x5EA0B6: mov     edx, [edi]
0x5EA0B8: lea     eax, [esp+20h+arg_0]
0x5EA0BC: push    eax
0x5EA0BD: mov     eax, [edx+330h]
0x5EA0C3: push    esi
0x5EA0C4: mov     ecx, edi
0x5EA0C6: call    eax
0x5EA0C8: mov     ecx, eax
0x5EA0CA: call    sub_6144D0
0x5EA0CF: mov     [esp+20h+friendlyFight_], eax
0x5EA0D3: mov     eax, [esp+20h+arg_0]
0x5EA0D7: cmp     eax, ebp
0x5EA0D9: jz      short loc_5EA12B
0x5EA0DB: push    eax
0x5EA0DC: push    0Ch
0x5EA0DE: mov     ecx, offset dword_B3BDB0
0x5EA0E3: call    sub_67CF50
0x5EA0E8: mov     ebp, eax
0x5EA0EA: test    ebp, ebp
0x5EA0EC: mov     ebx, ebp
0x5EA0EE: jz      short loc_5EA122
0x5EA0F0: mov     ecx, [ebp+0]
0x5EA0F3: test    ecx, ecx
0x5EA0F5: jz      short loc_5EA11B
0x5EA0F7: mov     edx, [esp+20h+arg_0]
0x5EA0FB: push    0
0x5EA0FD: push    edx
0x5EA0FE: call    sub_67B6B0
0x5EA103: test    eax, eax
0x5EA105: jz      short loc_5EA10D
0x5EA107: cmp     byte ptr [eax+4], 0
0x5EA10B: jnz     short loc_5EA116
0x5EA10D: mov     ebp, [ebp+4]
0x5EA110: test    ebp, ebp
0x5EA112: jnz     short loc_5EA0F0
0x5EA114: jmp     short loc_5EA11B
0x5EA116: mov     byte ptr [esp+20h+var_10], 1
0x5EA11B: mov     ecx, ebx
0x5EA11D: call    BSSimpleList_Clear
0x5EA122: push    ebx
0x5EA123: call    FormHeapFree
0x5EA128: add     esp, 4
0x5EA12B: mov     eax, [esi]
0x5EA12D: mov     edx, [eax+170h]
0x5EA133: mov     ecx, esi
0x5EA135: call    edx
0x5EA137: cmp     byte ptr [eax+4], 24h ; '$'
0x5EA13B: mov     edx, [esi]
0x5EA13D: setz    al
0x5EA140: mov     [esp+1Ch+a7], al
0x5EA144: mov     eax, [edx+284h]
0x5EA14A: push    24h ; '$'
0x5EA14C: mov     ecx, esi
0x5EA14E: call    eax
0x5EA150: mov     ecx, [esp+1Ch+friendlyFight_]
0x5EA154: mov     edx, dword ptr [esp+1Ch+a7]
0x5EA158: push    eax
0x5EA159: mov     eax, [esp+20h+disposition]
0x5EA15D: push    ecx; responsibility
0x5EA15E: push    edx; a7
0x5EA15F: push    eax; a6
0x5EA160: push    0
0x5EA162: push    edi
0x5EA163: mov     ecx, esi
0x5EA165: call    TesObjectREF_GetDistance
0x5EA16A: mov     edx, [esi]
0x5EA16C: mov     eax, [edx+284h]
0x5EA172: push    ecx
0x5EA173: fstp    dword ptr [esp+30h+a5]; a5
0x5EA176: push    21h ; '!'; distanceToTarget
0x5EA178: mov     ecx, esi
0x5EA17A: call    eax
0x5EA17C: mov     ecx, [esp+34h+friendlyFight_]
0x5EA180: mov     edx, [esp+34h+disposition]
0x5EA184: push    eax; aggressionStat
0x5EA185: push    ecx; friendlyFight?
0x5EA186: push    edx; disposition
0x5EA187: call    shouldActorFight
0x5EA18C: add     esp, 20h
0x5EA18F: pop     edi
0x5EA190: pop     esi
0x5EA191: test    eax, eax
0x5EA193: pop     ebp
0x5EA194: setnle  al
0x5EA197: pop     ebx
0x5EA198: add     esp, 10h
0x5EA19B: retn    4
