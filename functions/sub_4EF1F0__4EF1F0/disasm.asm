0x4EF1F0: push    0FFFFFFFFh
0x4EF1F2: push    offset SEH_8C62B0
0x4EF1F7: mov     eax, large fs:0
0x4EF1FD: push    eax
0x4EF1FE: push    ecx
0x4EF1FF: push    esi
0x4EF200: mov     eax, ds:0B30AACh
0x4EF205: xor     eax, esp
0x4EF207: push    eax
0x4EF208: lea     eax, [esp+18h+var_C]
0x4EF20C: mov     large fs:0, eax
0x4EF212: mov     esi, ecx
0x4EF214: cmp     dword ptr [esi+34h], 0
0x4EF218: jnz     short loc_4EF25B
0x4EF21A: push    58h ; 'X'; Size
0x4EF21C: call    FormHeapAlloc
0x4EF221: add     esp, 4
0x4EF224: mov     [esp+18h+var_10], eax
0x4EF228: test    eax, eax
0x4EF22A: mov     [esp+18h+var_4], 0
0x4EF232: jz      short loc_4EF23D
0x4EF234: mov     ecx, eax
0x4EF236: call    TESObjectCELL_constr
0x4EF23B: jmp     short loc_4EF23F
0x4EF23D: xor     eax, eax
0x4EF23F: push    1
0x4EF241: mov     ecx, eax
0x4EF243: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x4EF24B: mov     [esi+34h], eax
0x4EF24E: call    sub_4CCBA0
0x4EF253: mov     ecx, [esi+34h]
0x4EF256: call    sub_4CA710
0x4EF25B: mov     eax, [esi+34h]
0x4EF25E: mov     ecx, [esp+18h+var_C]
0x4EF262: mov     large fs:0, ecx
0x4EF269: pop     ecx
0x4EF26A: pop     esi
0x4EF26B: add     esp, 10h
0x4EF26E: retn
