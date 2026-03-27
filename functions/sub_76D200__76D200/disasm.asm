0x76D200: push    ebx
0x76D201: mov     ebx, [esp+4+arg_0]
0x76D205: test    ebx, ebx
0x76D207: push    ebp
0x76D208: mov     ebp, [esp+8+arg_C]
0x76D20C: push    esi
0x76D20D: mov     esi, [esp+0Ch+arg_8]
0x76D211: push    edi
0x76D212: mov     edi, ecx
0x76D214: jnz     short loc_76D233
0x76D216: test    esi, esi
0x76D218: jz      short loc_76D229
0x76D21A: mov     ecx, esi
0x76D21C: call    sub_777F10
0x76D221: test    al, al
0x76D223: jz      short loc_76D229
0x76D225: test    ebp, ebp
0x76D227: jnz     short loc_76D241
0x76D229: pop     edi
0x76D22A: pop     esi
0x76D22B: pop     ebp
0x76D22C: or      eax, 0FFFFFFFFh
0x76D22F: pop     ebx
0x76D230: retn    1Ch
0x76D233: test    esi, esi
0x76D235: jnz     short loc_76D241
0x76D237: pop     edi
0x76D238: pop     esi
0x76D239: pop     ebp
0x76D23A: or      eax, 0FFFFFFFFh
0x76D23D: pop     ebx
0x76D23E: retn    1Ch
0x76D241: mov     ecx, [ebp+20h]
0x76D244: xor     ebp, ebp
0x76D246: test    esi, esi
0x76D248: jnz     short loc_76D253
0x76D24A: mov     eax, [ebx+0B4h]
0x76D250: mov     esi, [eax+38h]
0x76D253: test    ebx, ebx
0x76D255: jz      short loc_76D276
0x76D257: mov     eax, [ebx+0B4h]
0x76D25D: mov     dx, [eax+2Eh]
0x76D261: and     dx, 0F000h
0x76D266: cmp     dx, 4000h
0x76D26B: jz      short loc_76D276
0x76D26D: movzx   eax, byte ptr [eax+2Ch]
0x76D271: and     eax, 3Fh
0x76D274: jmp     short loc_76D27E
0x76D276: movzx   ax, byte ptr [esi+3]
0x76D27B: movzx   eax, ax
0x76D27E: test    ax, ax
0x76D281: mov     [edi+54h], ebp
0x76D284: jz      short loc_76D2A5
0x76D286: mov     edx, [ecx+20h]
0x76D289: mov     ebp, [edx]
0x76D28B: movzx   eax, ax
0x76D28E: sub     eax, 1
0x76D291: test    ebp, ebp
0x76D293: mov     [edi+54h], eax
0x76D296: jz      short loc_76D2A5
0x76D298: cmp     dword ptr [ebp+8], 0
0x76D29C: jz      short loc_76D2A5
0x76D29E: mov     esi, 1
0x76D2A3: jmp     short loc_76D2A7
0x76D2A5: xor     esi, esi
0x76D2A7: movzx   ecx, byte ptr [ecx+18h]
0x76D2AB: shr     ecx, 1
0x76D2AD: and     ecx, 7
0x76D2B0: setnz   bl
0x76D2B3: test    bl, bl
0x76D2B5: jnz     short loc_76D2BF
0x76D2B7: test    esi, esi
0x76D2B9: jbe     loc_76D357
0x76D2BF: push    0
0x76D2C1: push    0
0x76D2C3: push    3
0x76D2C5: push    1
0x76D2C7: mov     ecx, edi
0x76D2C9: call    sub_76D0A0
0x76D2CE: test    esi, esi
0x76D2D0: jbe     short loc_76D326
0x76D2D2: movzx   eax, byte ptr [ebp+4]
0x76D2D6: movzx   edx, ax
0x76D2D9: cmp     edx, [edi+54h]
0x76D2DC: jbe     short loc_76D2E2
0x76D2DE: movzx   eax, word ptr [edi+54h]
0x76D2E2: movzx   eax, ax
0x76D2E5: push    eax
0x76D2E6: push    ebp
0x76D2E7: mov     ecx, edi
0x76D2E9: call    sub_76CA10
0x76D2EE: test    bl, bl
0x76D2F0: mov     esi, eax
0x76D2F2: mov     ecx, [esi+0Ch]
0x76D2F5: push    0
0x76D2F7: jz      short loc_76D338
0x76D2F9: push    4
0x76D2FB: push    1
0x76D2FD: call    sub_772FF0
0x76D302: mov     ecx, [esi+0Ch]
0x76D305: push    0
0x76D307: push    0
0x76D309: push    3
0x76D30B: call    sub_772FF0
0x76D310: mov     ecx, [esi+0Ch]
0x76D313: push    0
0x76D315: push    4
0x76D317: push    4
0x76D319: call    sub_772FF0
0x76D31E: push    0
0x76D320: push    0
0x76D322: push    6
0x76D324: jmp     short loc_76D347
0x76D326: push    0
0x76D328: push    0
0x76D32A: mov     ecx, edi
0x76D32C: call    sub_76CA10
0x76D331: mov     esi, eax
0x76D333: mov     ecx, [esi+0Ch]
0x76D336: push    0
0x76D338: push    2
0x76D33A: push    1
0x76D33C: call    sub_772FF0
0x76D341: push    0
0x76D343: push    2
0x76D345: push    4
0x76D347: mov     ecx, [esi+0Ch]
0x76D34A: call    sub_772FF0
0x76D34F: push    ebp
0x76D350: mov     ecx, edi
0x76D352: call    sub_76CEF0
0x76D357: pop     edi
0x76D358: pop     esi
0x76D359: pop     ebp
0x76D35A: xor     eax, eax
0x76D35C: pop     ebx
0x76D35D: retn    1Ch
