0x71A650: push    esi
0x71A651: push    edi
0x71A652: mov     edi, [esp+8+arg_0]
0x71A656: push    edi
0x71A657: mov     esi, ecx
0x71A659: call    sub_708C30
0x71A65E: test    al, al
0x71A660: jz      short loc_71A6C0
0x71A662: fld     dword ptr [esi+0DCh]
0x71A668: fld     dword ptr [edi+0DCh]
0x71A66E: fucompp
0x71A670: fnstsw  ax
0x71A672: test    ah, 44h
0x71A675: jp      short loc_71A6C0
0x71A677: lea     eax, [edi+0E0h]
0x71A67D: push    eax
0x71A67E: lea     ecx, [esi+0E0h]
0x71A684: call    sub_8AA390
0x71A689: test    al, al
0x71A68B: jnz     short loc_71A6C0
0x71A68D: lea     ecx, [edi+0ECh]
0x71A693: push    ecx
0x71A694: lea     ecx, [esi+0ECh]
0x71A69A: call    sub_8AA390
0x71A69F: test    al, al
0x71A6A1: jnz     short loc_71A6C0
0x71A6A3: add     edi, 0F8h ; 'ø'
0x71A6A9: push    edi
0x71A6AA: lea     ecx, [esi+0F8h]
0x71A6B0: call    sub_8AA390
0x71A6B5: test    al, al
0x71A6B7: jnz     short loc_71A6C0
0x71A6B9: pop     edi
0x71A6BA: mov     al, 1
0x71A6BC: pop     esi
0x71A6BD: retn    4
0x71A6C0: pop     edi
0x71A6C1: xor     al, al
0x71A6C3: pop     esi
0x71A6C4: retn    4
