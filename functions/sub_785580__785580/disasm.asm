0x785580: push    esi
0x785581: push    edi
0x785582: mov     edi, [esp+8+arg_0]
0x785586: mov     esi, ecx
0x785588: cmp     esi, edi
0x78558A: jz      loc_78569E
0x785590: push    ebx
0x785591: mov     ebx, [edi+4]
0x785594: test    ebx, ebx
0x785596: push    ebp
0x785597: jz      short loc_7855A5
0x785599: mov     ebp, [edi+8]
0x78559C: mov     edx, ebp
0x78559E: sub     edx, ebx
0x7855A0: sar     edx, 2
0x7855A3: jnz     short loc_7855B3
0x7855A5: call    sub_784A70
0x7855AA: pop     ebp
0x7855AB: pop     ebx
0x7855AC: pop     edi
0x7855AD: mov     eax, esi
0x7855AF: pop     esi
0x7855B0: retn    4
0x7855B3: mov     eax, [esi+4]
0x7855B6: test    eax, eax
0x7855B8: jnz     short loc_7855BE
0x7855BA: xor     ecx, ecx
0x7855BC: jmp     short loc_7855C6
0x7855BE: mov     ecx, [esi+8]
0x7855C1: sub     ecx, eax
0x7855C3: sar     ecx, 2
0x7855C6: cmp     edx, ecx
0x7855C8: ja      short loc_78560A
0x7855CA: push    eax; Dst
0x7855CB: push    ebp; int
0x7855CC: push    ebx; Src
0x7855CD: call    sub_790420
0x7855D2: mov     eax, [edi+4]
0x7855D5: add     esp, 0Ch
0x7855D8: test    eax, eax
0x7855DA: jnz     short loc_7855F0
0x7855DC: mov     eax, [esi+4]
0x7855DF: pop     ebp
0x7855E0: xor     edi, edi
0x7855E2: lea     ecx, [eax+edi*4]
0x7855E5: pop     ebx
0x7855E6: pop     edi
0x7855E7: mov     [esi+8], ecx
0x7855EA: mov     eax, esi
0x7855EC: pop     esi
0x7855ED: retn    4
0x7855F0: mov     edi, [edi+8]
0x7855F3: sub     edi, eax
0x7855F5: mov     eax, [esi+4]
0x7855F8: pop     ebp
0x7855F9: sar     edi, 2
0x7855FC: lea     ecx, [eax+edi*4]
0x7855FF: pop     ebx
0x785600: pop     edi
0x785601: mov     [esi+8], ecx
0x785604: mov     eax, esi
0x785606: pop     esi
0x785607: retn    4
0x78560A: test    eax, eax
0x78560C: jnz     short loc_785612
0x78560E: xor     ecx, ecx
0x785610: jmp     short loc_78561A
0x785612: mov     ecx, [esi+0Ch]
0x785615: sub     ecx, eax
0x785617: sar     ecx, 2
0x78561A: cmp     edx, ecx
0x78561C: ja      short loc_78565A
0x78561E: test    eax, eax
0x785620: jnz     short loc_785626
0x785622: xor     ecx, ecx
0x785624: jmp     short loc_78562E
0x785626: mov     ecx, [esi+8]
0x785629: sub     ecx, eax
0x78562B: sar     ecx, 2
0x78562E: mov     edx, ebx
0x785630: push    eax; Dst
0x785631: lea     ebx, [edx+ecx*4]
0x785634: push    ebx; int
0x785635: push    edx; Src
0x785636: call    sub_790420
0x78563B: mov     edx, [esi+8]
0x78563E: mov     eax, [edi+8]
0x785641: add     esp, 0Ch
0x785644: push    edx; Dst
0x785645: push    eax; int
0x785646: push    ebx; Src
0x785647: mov     ecx, esi
0x785649: call    sub_7A25C0
0x78564E: pop     ebp
0x78564F: pop     ebx
0x785650: mov     [esi+8], eax
0x785653: pop     edi
0x785654: mov     eax, esi
0x785656: pop     esi
0x785657: retn    4
0x78565A: test    eax, eax
0x78565C: jz      short loc_785667
0x78565E: push    eax
0x78565F: call    FormHeapFree
0x785664: add     esp, 4
0x785667: mov     ecx, [edi+4]
0x78566A: test    ecx, ecx
0x78566C: jnz     short loc_785672
0x78566E: xor     eax, eax
0x785670: jmp     short loc_78567A
0x785672: mov     eax, [edi+8]
0x785675: sub     eax, ecx
0x785677: sar     eax, 2
0x78567A: push    eax
0x78567B: mov     ecx, esi
0x78567D: call    sub_795000
0x785682: test    al, al
0x785684: jz      short loc_78569C
0x785686: mov     ecx, [esi+4]
0x785689: mov     edx, [edi+8]
0x78568C: mov     eax, [edi+4]
0x78568F: push    ecx; Dst
0x785690: push    edx; int
0x785691: push    eax; Src
0x785692: mov     ecx, esi
0x785694: call    sub_7A25C0
0x785699: mov     [esi+8], eax
0x78569C: pop     ebp
0x78569D: pop     ebx
0x78569E: pop     edi
0x78569F: mov     eax, esi
0x7856A1: pop     esi
0x7856A2: retn    4
