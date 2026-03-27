0x795510: push    esi
0x795511: push    edi
0x795512: mov     edi, [esp+8+arg_0]
0x795516: mov     esi, ecx
0x795518: cmp     esi, edi
0x79551A: jz      loc_795628
0x795520: push    ebx
0x795521: mov     ebx, [edi+4]
0x795524: test    ebx, ebx
0x795526: push    ebp
0x795527: jz      short loc_795534
0x795529: mov     ebp, [edi+8]
0x79552C: mov     edx, ebp
0x79552E: sub     edx, ebx
0x795530: sar     edx, 1
0x795532: jnz     short loc_795542
0x795534: call    sub_794F40
0x795539: pop     ebp
0x79553A: pop     ebx
0x79553B: pop     edi
0x79553C: mov     eax, esi
0x79553E: pop     esi
0x79553F: retn    4
0x795542: mov     eax, [esi+4]
0x795545: test    eax, eax
0x795547: jnz     short loc_79554D
0x795549: xor     ecx, ecx
0x79554B: jmp     short loc_795554
0x79554D: mov     ecx, [esi+8]
0x795550: sub     ecx, eax
0x795552: sar     ecx, 1
0x795554: cmp     edx, ecx
0x795556: ja      short loc_795597
0x795558: push    eax; Dst
0x795559: push    ebp; int
0x79555A: push    ebx; Src
0x79555B: call    sub_794E00
0x795560: mov     eax, [edi+4]
0x795563: add     esp, 0Ch
0x795566: test    eax, eax
0x795568: jnz     short loc_79557E
0x79556A: mov     eax, [esi+4]
0x79556D: pop     ebp
0x79556E: xor     edi, edi
0x795570: lea     ecx, [eax+edi*2]
0x795573: pop     ebx
0x795574: pop     edi
0x795575: mov     [esi+8], ecx
0x795578: mov     eax, esi
0x79557A: pop     esi
0x79557B: retn    4
0x79557E: mov     edi, [edi+8]
0x795581: sub     edi, eax
0x795583: mov     eax, [esi+4]
0x795586: pop     ebp
0x795587: sar     edi, 1
0x795589: lea     ecx, [eax+edi*2]
0x79558C: pop     ebx
0x79558D: pop     edi
0x79558E: mov     [esi+8], ecx
0x795591: mov     eax, esi
0x795593: pop     esi
0x795594: retn    4
0x795597: test    eax, eax
0x795599: jnz     short loc_79559F
0x79559B: xor     ecx, ecx
0x79559D: jmp     short loc_7955A6
0x79559F: mov     ecx, [esi+0Ch]
0x7955A2: sub     ecx, eax
0x7955A4: sar     ecx, 1
0x7955A6: cmp     edx, ecx
0x7955A8: ja      short loc_7955E5
0x7955AA: test    eax, eax
0x7955AC: jnz     short loc_7955B2
0x7955AE: xor     ecx, ecx
0x7955B0: jmp     short loc_7955B9
0x7955B2: mov     ecx, [esi+8]
0x7955B5: sub     ecx, eax
0x7955B7: sar     ecx, 1
0x7955B9: mov     edx, ebx
0x7955BB: push    eax; Dst
0x7955BC: lea     ebx, [edx+ecx*2]
0x7955BF: push    ebx; int
0x7955C0: push    edx; Src
0x7955C1: call    sub_794E00
0x7955C6: mov     edx, [esi+8]
0x7955C9: mov     eax, [edi+8]
0x7955CC: add     esp, 0Ch
0x7955CF: push    edx; Dst
0x7955D0: push    eax; int
0x7955D1: push    ebx; Src
0x7955D2: mov     ecx, esi
0x7955D4: call    sub_794E80
0x7955D9: pop     ebp
0x7955DA: pop     ebx
0x7955DB: mov     [esi+8], eax
0x7955DE: pop     edi
0x7955DF: mov     eax, esi
0x7955E1: pop     esi
0x7955E2: retn    4
0x7955E5: test    eax, eax
0x7955E7: jz      short loc_7955F2
0x7955E9: push    eax
0x7955EA: call    FormHeapFree
0x7955EF: add     esp, 4
0x7955F2: mov     ecx, [edi+4]
0x7955F5: test    ecx, ecx
0x7955F7: jnz     short loc_7955FD
0x7955F9: xor     eax, eax
0x7955FB: jmp     short loc_795604
0x7955FD: mov     eax, [edi+8]
0x795600: sub     eax, ecx
0x795602: sar     eax, 1
0x795604: push    eax
0x795605: mov     ecx, esi
0x795607: call    sub_795260
0x79560C: test    al, al
0x79560E: jz      short loc_795626
0x795610: mov     ecx, [esi+4]
0x795613: mov     edx, [edi+8]
0x795616: mov     eax, [edi+4]
0x795619: push    ecx; Dst
0x79561A: push    edx; int
0x79561B: push    eax; Src
0x79561C: mov     ecx, esi
0x79561E: call    sub_794E80
0x795623: mov     [esi+8], eax
0x795626: pop     ebp
0x795627: pop     ebx
0x795628: pop     edi
0x795629: mov     eax, esi
0x79562B: pop     esi
0x79562C: retn    4
