0x6FAFA0: push    ebx
0x6FAFA1: push    ebp
0x6FAFA2: push    esi
0x6FAFA3: mov     ebx, 1
0x6FAFA8: test    ds:0B3F4B0h, bl
0x6FAFAE: push    edi
0x6FAFAF: mov     edi, ecx
0x6FAFB1: jnz     short loc_6FAFC6
0x6FAFB3: or      ds:0B3F4B0h, ebx
0x6FAFB9: xor     eax, eax
0x6FAFBB: mov     ds:0B3F4ACh, ax
0x6FAFC1: mov     ds:0B3F4AEh, al
0x6FAFC6: movzx   eax, word ptr [edi+0Ah]
0x6FAFCA: mov     esi, [esp+10h+arg_0]
0x6FAFCE: cmp     esi, eax
0x6FAFD0: mov     ebp, [esp+10h+arg_4]
0x6FAFD4: push    offset unk_B3F4A0
0x6FAFD9: jb      short loc_6FAFF3
0x6FAFDB: lea     ecx, [esi+1]
0x6FAFDE: mov     [edi+0Ah], cx
0x6FAFE2: mov     ecx, ebp
0x6FAFE4: call    sub_6FAE60
0x6FAFE9: test    al, al
0x6FAFEB: jz      short loc_6FB029
0x6FAFED: add     [edi+0Ch], bx
0x6FAFF1: jmp     short loc_6FB029
0x6FAFF3: mov     ecx, ebp
0x6FAFF5: call    sub_6FAE60
0x6FAFFA: mov     ecx, esi
0x6FAFFC: shl     ecx, 4
0x6FAFFF: add     ecx, [edi+4]
0x6FB002: test    al, al
0x6FB004: push    offset unk_B3F4A0
0x6FB009: jz      short loc_6FB01A
0x6FB00B: call    sub_6FAE10
0x6FB010: test    al, al
0x6FB012: jz      short loc_6FB029
0x6FB014: add     [edi+0Ch], bx
0x6FB018: jmp     short loc_6FB029
0x6FB01A: call    sub_6FAE60
0x6FB01F: test    al, al
0x6FB021: jz      short loc_6FB029
0x6FB023: add     word ptr [edi+0Ch], 0FFFFh
0x6FB029: mov     edx, [ebp+0]
0x6FB02C: shl     esi, 4
0x6FB02F: add     esi, [edi+4]
0x6FB032: pop     edi
0x6FB033: mov     [esi], edx
0x6FB035: mov     eax, [ebp+4]
0x6FB038: mov     [esi+4], eax
0x6FB03B: mov     ecx, [ebp+8]
0x6FB03E: mov     [esi+8], ecx
0x6FB041: mov     edx, [ebp+0Ch]
0x6FB044: mov     [esi+0Ch], edx
0x6FB047: pop     esi
0x6FB048: pop     ebp
0x6FB049: pop     ebx
0x6FB04A: retn    8
