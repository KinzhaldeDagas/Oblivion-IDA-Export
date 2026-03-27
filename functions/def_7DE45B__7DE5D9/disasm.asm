0x7DE5D9: cmp     byte ptr ds:0B45F4Ch, 0; jumptable 007DE45B default case
0x7DE5E0: jz      short loc_7DE620
0x7DE5E2: mov     eax, [esi+0F8h]
0x7DE5E8: mov     ecx, [eax+24h]
0x7DE5EB: mov     edi, [ecx]
0x7DE5ED: cmp     edi, ebp
0x7DE5EF: mov     [esp+arg_10], edi
0x7DE5F3: jz      short loc_7DE5F9
0x7DE5F5: add     dword ptr [edi+5Ch], 1
0x7DE5F9: push    3
0x7DE5FB: push    edi
0x7DE5FC: mov     [esp+8+arg_1C], 6
0x7DE604: call    sub_8011E0
0x7DE609: add     esp, 8
0x7DE60C: cmp     edi, ebp
0x7DE60E: mov     [esp+arg_1C], ebx
0x7DE612: jz      short loc_7DE620
0x7DE614: add     [edi+5Ch], ebx
0x7DE617: jnz     short loc_7DE620
0x7DE619: mov     ecx, edi
0x7DE61B: call    sub_772560
0x7DE620: mov     edi, [esi+0F8h]
0x7DE626: mov     edx, [esi+0F4h]
0x7DE62C: mov     ebx, [esi+edx*4+0B4h]
0x7DE633: mov     ebp, [edi+58h]
0x7DE636: add     edi, 58h ; 'X'
0x7DE639: cmp     ebp, ebx
0x7DE63B: jz      short loc_7DE66E
0x7DE63D: test    ebp, ebp
0x7DE63F: jz      short loc_7DE65E
0x7DE641: lea     eax, [ebp+4]
0x7DE644: push    eax; lpAddend
0x7DE645: call    dword ptr ds:0A2807Ch
0x7DE64B: test    eax, eax
0x7DE64D: jnz     short loc_7DE65E
0x7DE64F: test    ebp, ebp
0x7DE651: jz      short loc_7DE65E
0x7DE653: mov     edx, [ebp+0]
0x7DE656: mov     eax, [edx]
0x7DE658: push    1
0x7DE65A: mov     ecx, ebp
0x7DE65C: call    eax
0x7DE65E: test    ebx, ebx
0x7DE660: mov     [edi], ebx
0x7DE662: jz      short loc_7DE66E
0x7DE664: add     ebx, 4
0x7DE667: push    ebx; lpAddend
0x7DE668: call    dword ptr ds:0A28078h
0x7DE66E: mov     ebp, [esi+0F8h]
0x7DE674: mov     ecx, [esi+0F4h]
0x7DE67A: mov     ebx, [esi+ecx*4+0D4h]
0x7DE681: mov     edi, [ebp+44h]
0x7DE684: add     ebp, 44h ; 'D'
0x7DE687: cmp     edi, ebx
0x7DE689: jz      short loc_7DE6BC
0x7DE68B: test    edi, edi
0x7DE68D: jz      short loc_7DE6AB
0x7DE68F: lea     edx, [edi+4]
0x7DE692: push    edx; lpAddend
0x7DE693: call    dword ptr ds:0A2807Ch
0x7DE699: test    eax, eax
0x7DE69B: jnz     short loc_7DE6AB
0x7DE69D: test    edi, edi
0x7DE69F: jz      short loc_7DE6AB
0x7DE6A1: mov     eax, [edi]
0x7DE6A3: mov     edx, [eax]
0x7DE6A5: push    1
0x7DE6A7: mov     ecx, edi
0x7DE6A9: call    edx
0x7DE6AB: test    ebx, ebx
0x7DE6AD: mov     [ebp+0], ebx
0x7DE6B0: jz      short loc_7DE6BC
0x7DE6B2: add     ebx, 4
0x7DE6B5: push    ebx; lpAddend
0x7DE6B6: call    dword ptr ds:0A28078h
0x7DE6BC: lea     eax, [esi+0F8h]
0x7DE6C2: push    eax
0x7DE6C3: mov     eax, [esi+38h]
0x7DE6C6: push    eax
0x7DE6C7: lea     ecx, [esi+40h]
0x7DE6CA: call    sub_76CE40
0x7DE6CF: add     dword ptr [esi+38h], 1
0x7DE6D3: xor     eax, eax
0x7DE6D5: mov     ecx, [esp+8+arg_C]
0x7DE6D9: mov     large fs:0, ecx
0x7DE6E0: pop     ecx
0x7DE6E1: pop     edi
0x7DE6E2: pop     esi
0x7DE6E3: pop     ebp
0x7DE6E4: pop     ebx
0x7DE6E5: add     esp, 10h
0x7DE6E8: retn    1Ch
