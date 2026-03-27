0x8C65D0: push    ebx
0x8C65D1: push    ebp
0x8C65D2: push    esi
0x8C65D3: push    edi
0x8C65D4: mov     edi, ecx
0x8C65D6: test    edi, edi
0x8C65D8: jz      short loc_8C65E6
0x8C65DA: mov     eax, [edi+8]
0x8C65DD: test    eax, eax
0x8C65DF: jz      short loc_8C65E6
0x8C65E1: mov     ebx, [eax+30h]
0x8C65E4: jmp     short loc_8C65E8
0x8C65E6: xor     ebx, ebx
0x8C65E8: mov     ebp, [esp+10h+arg_0]
0x8C65EC: xor     esi, esi
0x8C65EE: test    ebx, ebx
0x8C65F0: jle     short loc_8C661F
0x8C65F2: test    edi, edi
0x8C65F4: jz      short loc_8C6605
0x8C65F6: mov     eax, [edi+8]
0x8C65F9: test    eax, eax
0x8C65FB: jz      short loc_8C6605
0x8C65FD: mov     eax, [eax+28h]
0x8C6600: lea     eax, [eax+esi*8]
0x8C6603: jmp     short loc_8C660A
0x8C6605: mov     eax, offset dword_BA8138
0x8C660A: mov     ecx, [eax]
0x8C660C: test    ecx, ecx
0x8C660E: jz      short loc_8C6618
0x8C6610: mov     edx, [ecx]
0x8C6612: mov     eax, [edx+24h]
0x8C6615: push    ebp
0x8C6616: call    eax
0x8C6618: add     esi, 1
0x8C661B: cmp     esi, ebx
0x8C661D: jl      short loc_8C65F2
0x8C661F: push    ebp
0x8C6620: mov     ecx, edi
0x8C6622: call    sub_6EC2C0
0x8C6627: pop     edi
0x8C6628: pop     esi
0x8C6629: pop     ebp
0x8C662A: pop     ebx
0x8C662B: retn    4
