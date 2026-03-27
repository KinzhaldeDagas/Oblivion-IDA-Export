0x4426F0: push    ebx
0x4426F1: push    ebp
0x4426F2: mov     ebp, [esp+8+arg_0]
0x4426F6: push    esi
0x4426F7: push    edi
0x4426F8: mov     ebx, ecx
0x4426FA: xor     edi, edi
0x4426FC: lea     esp, [esp+0]
0x442700: cmp     edi, ds:0B051DCh
0x442706: jnb     short loc_44272F
0x442708: mov     eax, [ebx+3Ch]
0x44270B: mov     esi, [eax+edi*4]
0x44270E: test    esi, esi
0x442710: jz      short loc_44272A
0x442712: mov     ecx, esi; this
0x442714: call    TESObjectCELL_GetWorldSpace
0x442719: cmp     eax, ebp
0x44271B: jnz     short loc_44272A
0x44271D: push    1
0x44271F: push    esi
0x442720: mov     ecx, ebx
0x442722: call    sub_4400A0
0x442727: sub     edi, 1
0x44272A: add     edi, 1
0x44272D: jmp     short loc_442700
0x44272F: pop     edi
0x442730: pop     esi
0x442731: pop     ebp
0x442732: pop     ebx
0x442733: retn    4
