0x9884D6: push    ebx
0x9884D7: push    ebp
0x9884D8: push    esi
0x9884D9: mov     esi, [esp+0Ch+File]
0x9884DD: or      ebp, 0FFFFFFFFh
0x9884E0: test    byte ptr [esi+0Ch], 40h
0x9884E4: push    edi
0x9884E5: jnz     loc_988593
0x9884EB: push    esi; File
0x9884EC: call    __fileno
0x9884F1: cmp     eax, ebp
0x9884F3: pop     ecx
0x9884F4: mov     ebx, offset aA_1
0x9884F9: jz      short loc_988529
0x9884FB: push    esi; File
0x9884FC: call    __fileno
0x988501: cmp     eax, 0FFFFFFFEh
0x988504: pop     ecx
0x988505: jz      short loc_988529
0x988507: push    esi; File
0x988508: call    __fileno
0x98850D: sar     eax, 5
0x988510: push    esi; File
0x988511: lea     edi, ds:0BAAAC0h[eax*4]
0x988518: call    __fileno
0x98851D: and     eax, 1Fh
0x988520: imul    eax, 28h ; '('
0x988523: add     eax, [edi]
0x988525: pop     ecx
0x988526: pop     ecx
0x988527: jmp     short loc_98852B
0x988529: mov     eax, ebx
0x98852B: test    byte ptr [eax+24h], 7Fh
0x98852F: jnz     short loc_988572
0x988531: push    esi; File
0x988532: call    __fileno
0x988537: cmp     eax, ebp
0x988539: pop     ecx
0x98853A: jz      short loc_98856A
0x98853C: push    esi; File
0x98853D: call    __fileno
0x988542: cmp     eax, 0FFFFFFFEh
0x988545: pop     ecx
0x988546: jz      short loc_98856A
0x988548: push    esi; File
0x988549: call    __fileno
0x98854E: sar     eax, 5
0x988551: push    esi; File
0x988552: lea     edi, ds:0BAAAC0h[eax*4]
0x988559: call    __fileno
0x98855E: and     eax, 1Fh
0x988561: imul    eax, 28h ; '('
0x988564: add     eax, [edi]
0x988566: pop     ecx
0x988567: pop     ecx
0x988568: jmp     short loc_98856C
0x98856A: mov     eax, ebx
0x98856C: test    byte ptr [eax+24h], 80h
0x988570: jz      short loc_988593
0x988572: call    __errno
0x988577: xor     edi, edi
0x988579: push    edi
0x98857A: push    edi
0x98857B: push    edi
0x98857C: push    edi
0x98857D: push    edi
0x98857E: mov     dword ptr [eax], 16h
0x988584: call    __invalid_parameter
0x988589: add     esp, 14h
0x98858C: mov     eax, ebp
0x98858E: pop     edi
0x98858F: pop     esi
0x988590: pop     ebp
0x988591: pop     ebx
0x988592: retn
0x988593: mov     ebx, [esp+10h+arg_0]
0x988597: cmp     ebx, ebp
0x988599: jz      short loc_98858C
0x98859B: mov     eax, [esi+0Ch]
0x98859E: test    al, 1
0x9885A0: jnz     short loc_9885AA
0x9885A2: test    al, al
0x9885A4: jns     short loc_98858C
0x9885A6: test    al, 2
0x9885A8: jnz     short loc_98858C
0x9885AA: xor     edi, edi
0x9885AC: cmp     [esi+8], edi
0x9885AF: jnz     short loc_9885B8
0x9885B1: push    esi
0x9885B2: call    __getbuf
0x9885B7: pop     ecx
0x9885B8: mov     eax, [esi]
0x9885BA: cmp     eax, [esi+8]
0x9885BD: jnz     short loc_9885C7
0x9885BF: cmp     [esi+4], edi
0x9885C2: jnz     short loc_98858C
0x9885C4: inc     eax
0x9885C5: mov     [esi], eax
0x9885C7: dec     dword ptr [esi]
0x9885C9: test    byte ptr [esi+0Ch], 40h
0x9885CD: mov     eax, [esi]
0x9885CF: jz      short loc_9885DA
0x9885D1: cmp     [eax], bl
0x9885D3: jz      short loc_9885DC
0x9885D5: inc     eax
0x9885D6: mov     [esi], eax
0x9885D8: jmp     short loc_98858C
0x9885DA: mov     [eax], bl
0x9885DC: mov     eax, [esi+0Ch]
0x9885DF: inc     dword ptr [esi+4]
0x9885E2: and     eax, 0FFFFFFEFh
0x9885E5: or      eax, 1
0x9885E8: mov     [esi+0Ch], eax
0x9885EB: mov     eax, ebx
0x9885ED: and     eax, 0FFh
0x9885F2: jmp     short loc_98858E
