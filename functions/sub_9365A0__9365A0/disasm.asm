0x9365A0: push    ecx
0x9365A1: push    ebp
0x9365A2: mov     ebp, [esp+8+arg_0]
0x9365A6: mov     cl, [ebp+21h]
0x9365A9: cmp     cl, 3
0x9365AC: jb      loc_9366A6
0x9365B2: cmp     byte ptr [ebp+20h], 4
0x9365B6: jb      short loc_9365C1
0x9365B8: mov     byte ptr [ebp+22h], 1
0x9365BC: pop     ebp
0x9365BD: pop     ecx
0x9365BE: retn    0Ch
0x9365C1: mov     eax, [esp+8+arg_4]
0x9365C5: sar     eax, 4
0x9365C8: test    al, 1
0x9365CA: jz      short loc_9365D6
0x9365CC: mov     [esp+8+var_4], 0
0x9365D4: jmp     short loc_9365E3
0x9365D6: and     al, 2
0x9365D8: neg     al
0x9365DA: sbb     eax, eax
0x9365DC: add     eax, 2
0x9365DF: mov     [esp+8+var_4], eax
0x9365E3: mov     eax, [esp+8+arg_8]
0x9365E7: sar     eax, 4
0x9365EA: test    al, 1
0x9365EC: jz      short loc_9365F8
0x9365EE: mov     [esp+8+arg_8], 0
0x9365F6: jmp     short loc_936605
0x9365F8: and     al, 2
0x9365FA: neg     al
0x9365FC: sbb     eax, eax
0x9365FE: add     eax, 2
0x936601: mov     [esp+8+arg_8], eax
0x936605: xor     eax, eax
0x936607: push    esi
0x936608: xor     esi, esi
0x93660A: cmp     cl, al
0x93660C: mov     [esp+0Ch+arg_0], eax
0x936610: mov     [esp+0Ch+arg_4], eax
0x936614: jbe     short loc_936679
0x936616: push    ebx
0x936617: push    edi
0x936618: mov     al, [ebp+esi*4+0]
0x93661C: cmp     al, 2
0x93661E: ja      short loc_936638
0x936620: mov     eax, [esp+14h+arg_8]
0x936624: push    eax
0x936625: movzx   eax, byte ptr [ebp+esi*4+1]
0x93662A: lea     ebx, [esp+18h+arg_4]
0x93662E: call    sub_9364B0
0x936633: add     esp, 4
0x936636: jmp     short loc_93666E
0x936638: cmp     al, 6
0x93663A: ja      short loc_936654
0x93663C: mov     ecx, [esp+14h+var_4]
0x936640: movzx   eax, byte ptr [ebp+esi*4+1]
0x936645: push    ecx
0x936646: lea     ebx, [esp+18h+arg_0]
0x93664A: call    sub_9364B0
0x93664F: add     esp, 4
0x936652: jmp     short loc_93666E
0x936654: movzx   eax, al
0x936657: lea     edi, [esp+14h+arg_0]
0x93665B: call    sub_936540
0x936660: movzx   eax, byte ptr [ebp+esi*4+1]
0x936665: lea     edi, [esp+14h+arg_4]
0x936669: call    sub_936540
0x93666E: movzx   eax, byte ptr [ebp+21h]
0x936672: inc     esi
0x936673: cmp     esi, eax
0x936675: jl      short loc_936618
0x936677: pop     edi
0x936678: pop     ebx
0x936679: mov     ecx, [esp+0Ch+arg_0]
0x93667D: mov     eax, offset sub_555555
0x936682: test    eax, ecx
0x936684: pop     esi
0x936685: jg      short loc_93669C
0x936687: test    [esp+8+arg_4], eax
0x93668B: jg      short loc_93669C
0x93668D: xor     al, al
0x93668F: test    al, al
0x936691: setz    al
0x936694: mov     [ebp+22h], al
0x936697: pop     ebp
0x936698: pop     ecx
0x936699: retn    0Ch
0x93669C: mov     al, 1
0x93669E: test    al, al
0x9366A0: setz    al
0x9366A3: mov     [ebp+22h], al
0x9366A6: pop     ebp
0x9366A7: pop     ecx
0x9366A8: retn    0Ch
