0x88D150: sub     esp, 1Ch
0x88D153: push    ebx
0x88D154: push    esi
0x88D155: mov     esi, [esp+24h+arg_0]
0x88D159: xor     ebx, ebx
0x88D15B: cmp     esi, ebx
0x88D15D: jz      short loc_88D1B9
0x88D15F: cmp     [esp+24h+arg_8], bl
0x88D163: jnz     short loc_88D17C
0x88D165: push    esi
0x88D166: call    sub_6FA970
0x88D16B: add     esp, 4
0x88D16E: cmp     eax, ebx
0x88D170: jz      short loc_88D1B9
0x88D172: mov     eax, [eax+0Ch]
0x88D175: and     eax, 2
0x88D178: cmp     eax, ebx
0x88D17A: jz      short loc_88D1B9
0x88D17C: mov     al, [esp+24h+arg_4]
0x88D180: mov     [esp+24h+var_18], al
0x88D184: mov     eax, ds:0B2E320h
0x88D189: cmp     eax, ebx
0x88D18B: mov     [esp+24h+var_1C], ebx
0x88D18F: mov     [esp+24h+var_14], 8
0x88D197: mov     [esp+24h+var_10], ebx
0x88D19B: jz      short loc_88D1AC
0x88D19D: push    eax
0x88D19E: lea     ecx, [esp+28h+var_1C]
0x88D1A2: push    ecx
0x88D1A3: push    esi
0x88D1A4: call    sub_88A7D0
0x88D1A9: add     esp, 0Ch
0x88D1AC: cmp     [esp+24h+var_10], ebx
0x88D1B0: pop     esi
0x88D1B1: setnz   al
0x88D1B4: pop     ebx
0x88D1B5: add     esp, 1Ch
0x88D1B8: retn
0x88D1B9: pop     esi
0x88D1BA: mov     al, bl
0x88D1BC: pop     ebx
0x88D1BD: add     esp, 1Ch
0x88D1C0: retn
