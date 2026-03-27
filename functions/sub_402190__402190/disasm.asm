0x402190: xor     ecx, ecx
0x402192: sub     esp, 8
0x402195: cmp     [esp+8+arg_0], ecx
0x402199: jnz     short loc_4021A3
0x40219B: xor     eax, eax
0x40219D: add     esp, 8
0x4021A0: retn    4
0x4021A3: push    ebx
0x4021A4: push    ebp
0x4021A5: push    esi
0x4021A6: push    edi
0x4021A7: mov     ebp, 1
0x4021AC: lea     esp, [esp+0]
0x4021B0: mov     esi, [esp+18h+arg_0]
0x4021B4: xor     eax, eax
0x4021B6: cmp     esi, ecx
0x4021B8: mov     [esp+18h+arg_0], ecx
0x4021BC: mov     [esp+18h+var_4], eax
0x4021C0: mov     [esp+18h+var_8], ecx
0x4021C4: jz      loc_402258
0x4021CA: lea     ebx, [ebx+0]
0x4021D0: add     [esp+18h+var_8], 1
0x4021D5: xor     edi, edi
0x4021D7: xor     edx, edx
0x4021D9: test    ebp, ebp
0x4021DB: mov     ecx, esi
0x4021DD: jbe     short loc_4021F1
0x4021DF: nop
0x4021E0: mov     ecx, [ecx+4]
0x4021E3: add     edi, 1
0x4021E6: test    ecx, ecx
0x4021E8: jz      short loc_4021F1
0x4021EA: add     edx, 1
0x4021ED: cmp     edx, ebp
0x4021EF: jb      short loc_4021E0
0x4021F1: mov     ebx, ebp
0x4021F3: test    edi, edi
0x4021F5: jg      short loc_40220D
0x4021F7: test    ebx, ebx
0x4021F9: jle     short loc_40224E
0x4021FB: test    ecx, ecx
0x4021FD: jz      short loc_40224E
0x4021FF: test    edi, edi
0x402201: jnz     short loc_40220D
0x402203: mov     edx, ecx
0x402205: mov     ecx, [ecx+4]
0x402208: sub     ebx, 1
0x40220B: jmp     short loc_40222B
0x40220D: test    ebx, ebx
0x40220F: jz      short loc_402223
0x402211: test    ecx, ecx
0x402213: jz      short loc_402223
0x402215: cmp     ecx, esi
0x402217: jnb     short loc_402223
0x402219: mov     edx, ecx
0x40221B: mov     ecx, [ecx+4]
0x40221E: sub     ebx, 1
0x402221: jmp     short loc_40222B
0x402223: mov     edx, esi
0x402225: mov     esi, [esi+4]
0x402228: sub     edi, 1
0x40222B: test    eax, eax
0x40222D: jz      short loc_40223C
0x40222F: mov     [eax+4], edx
0x402232: mov     [edx], eax
0x402234: mov     eax, edx
0x402236: mov     [esp+18h+var_4], eax
0x40223A: jmp     short loc_4021F3
0x40223C: mov     eax, [esp+18h+var_4]
0x402240: mov     [edx], eax
0x402242: mov     eax, edx
0x402244: mov     [esp+18h+arg_0], edx
0x402248: mov     [esp+18h+var_4], eax
0x40224C: jmp     short loc_4021F3
0x40224E: test    ecx, ecx
0x402250: mov     esi, ecx
0x402252: jnz     loc_4021D0
0x402258: xor     ecx, ecx
0x40225A: add     ebp, ebp
0x40225C: cmp     [esp+18h+var_8], 1
0x402261: mov     [eax+4], ecx
0x402264: jnz     loc_4021B0
0x40226A: mov     eax, [esp+18h+arg_0]
0x40226E: pop     edi
0x40226F: pop     esi
0x402270: pop     ebp
0x402271: pop     ebx
0x402272: add     esp, 8
0x402275: retn    4
