0x88D000: sub     esp, 1Ch
0x88D003: push    ebx
0x88D004: push    esi
0x88D005: mov     esi, [esp+24h+arg_0]
0x88D009: xor     bl, bl
0x88D00B: test    esi, esi
0x88D00D: jz      short loc_88D05C
0x88D00F: cmp     [esp+24h+arg_8], bl
0x88D013: jnz     short loc_88D02A
0x88D015: push    esi
0x88D016: call    sub_6FA970
0x88D01B: add     esp, 4
0x88D01E: test    eax, eax
0x88D020: jz      short loc_88D05C
0x88D022: mov     eax, [eax+0Ch]
0x88D025: and     eax, 2
0x88D028: jz      short loc_88D05C
0x88D02A: mov     al, [esp+24h+arg_4]
0x88D02E: mov     [esp+24h+var_18], al
0x88D032: mov     eax, ds:0B2E310h
0x88D037: test    eax, eax
0x88D039: mov     bl, 1
0x88D03B: mov     [esp+24h+var_1C], 0
0x88D043: mov     [esp+24h+var_14], 4
0x88D04B: jz      short loc_88D05C
0x88D04D: push    eax
0x88D04E: lea     ecx, [esp+28h+var_1C]
0x88D052: push    ecx
0x88D053: push    esi
0x88D054: call    sub_88A7D0
0x88D059: add     esp, 0Ch
0x88D05C: pop     esi
0x88D05D: mov     al, bl
0x88D05F: pop     ebx
0x88D060: add     esp, 1Ch
0x88D063: retn
