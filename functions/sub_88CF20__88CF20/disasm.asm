0x88CF20: sub     esp, 1Ch
0x88CF23: push    ebx
0x88CF24: push    esi
0x88CF25: mov     esi, [esp+24h+arg_0]
0x88CF29: xor     bl, bl
0x88CF2B: test    esi, esi
0x88CF2D: jz      short loc_88CF85
0x88CF2F: cmp     [esp+24h+arg_C], bl
0x88CF33: jnz     short loc_88CF4A
0x88CF35: push    esi
0x88CF36: call    sub_6FA970
0x88CF3B: add     esp, 4
0x88CF3E: test    eax, eax
0x88CF40: jz      short loc_88CF85
0x88CF42: mov     eax, [eax+0Ch]
0x88CF45: and     eax, 2
0x88CF48: jz      short loc_88CF85
0x88CF4A: mov     al, [esp+24h+arg_8]
0x88CF4E: movzx   ecx, [esp+24h+arg_4]
0x88CF53: mov     [esp+24h+var_18], al
0x88CF57: mov     eax, ds:0B2E338h
0x88CF5C: test    eax, eax
0x88CF5E: mov     bl, 1
0x88CF60: mov     [esp+24h+var_1C], 0
0x88CF68: mov     [esp+24h+var_14], 0Eh
0x88CF70: mov     [esp+24h+var_10], ecx
0x88CF74: jz      short loc_88CF85
0x88CF76: push    eax
0x88CF77: lea     edx, [esp+28h+var_1C]
0x88CF7B: push    edx
0x88CF7C: push    esi
0x88CF7D: call    sub_88A7D0
0x88CF82: add     esp, 0Ch
0x88CF85: pop     esi
0x88CF86: mov     al, bl
0x88CF88: pop     ebx
0x88CF89: add     esp, 1Ch
0x88CF8C: retn
