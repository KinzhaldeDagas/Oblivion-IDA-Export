0x942170: sub     esp, 224h
0x942176: mov     ecx, [esp+224h+arg_8]
0x94217D: push    ebx
0x94217E: mov     ebx, [esp+228h+arg_4]
0x942185: mov     al, [ebx+0Ch]
0x942188: push    ebp
0x942189: push    esi
0x94218A: movzx   esi, word ptr [ebx+12h]
0x94218E: add     esi, ecx
0x942190: cmp     al, 14h
0x942192: push    edi; Args
0x942193: mov     [esp+234h+Format], esi
0x942197: jnz     short loc_9421D1
0x942199: cmp     byte ptr [ebx+0Dh], 2
0x94219D: jnz     short loc_9421D1
0x94219F: cmp     dword ptr [esi], 0
0x9421A2: jnz     short loc_9421D1
0x9421A4: mov     eax, [ebx]
0x9421A6: mov     ecx, dword ptr [esp+234h+Args]
0x9421AD: mov     edx, [ecx]
0x9421AF: push    eax
0x9421B0: mov     eax, [esp+238h+arg_C]
0x9421B7: push    edx; Args
0x9421B8: push    offset aSHkparamNameSN; "\n%s<!-- <hkparam name=\"%s\">(null)</h"...
0x9421BD: push    eax; int
0x9421BE: call    sub_8BBEE0
0x9421C3: add     esp, 10h
0x9421C6: pop     edi
0x9421C7: pop     esi
0x9421C8: pop     ebp
0x9421C9: pop     ebx
0x9421CA: add     esp, 224h
0x9421D0: retn
0x9421D1: mov     ecx, [ebx]
0x9421D3: mov     edi, dword ptr [esp+234h+Args]
0x9421DA: mov     edx, [edi]
0x9421DC: mov     ebp, [esp+234h+arg_C]
0x9421E3: push    ecx
0x9421E4: push    edx; Args
0x9421E5: push    offset aSHkparamNameS; "\n%s<hkparam name=\"%s\""
0x9421EA: push    ebp; int
0x9421EB: call    sub_8BBEE0
0x9421F0: movzx   eax, byte ptr [ebx+0Ch]
0x9421F4: add     eax, 0FFFFFFEAh; switch 6 cases
0x9421F7: add     esp, 10h
0x9421FA: cmp     eax, 5
0x9421FD: ja      short def_9421FF; jumptable 009421FF default case, cases 24,25
0x9421FF: jmp     ds:jpt_9421FF[eax*4]; switch jump
0x942206: mov     eax, [esi+4]; jumptable 009421FF cases 22,23,26
0x942209: push    eax
0x94220A: jmp     short loc_942210
0x94220C: mov     ecx, [esi+8]; jumptable 009421FF case 27
0x94220F: push    ecx; Args
0x942210: push    offset aNumelementsI; " numelements=\"%i\""
0x942215: push    ebp; int
0x942216: call    sub_8BBEE0
0x94221B: add     esp, 0Ch
0x94221E: push    offset asc_A67E7C; jumptable 009421FF default case, cases 24,25
0x942223: push    ebp; int
0x942224: call    sub_8BBEE0
0x942229: movzx   eax, byte ptr [ebx+0Ch]
0x94222D: add     esp, 8
0x942230: dec     eax; switch 28 cases
0x942231: cmp     eax, 1Bh
0x942234: ja      def_942241
0x94223A: movzx   edx, ds:byte_942854[eax]
0x942241: jmp     ds:jpt_942241[edx*4]; switch jump
0x942248: mov     ecx, ebx; jumptable 00942241 cases 1-18
0x94224A: call    sub_940B70
0x94224F: test    eax, eax
0x942251: mov     [esp+234h+var_224], eax
0x942255: jnz     short loc_94225F
0x942257: mov     [esp+234h+var_224], 1
0x94225F: mov     ecx, ebx
0x942261: call    sub_940B80
0x942266: cdq
0x942267: idiv    [esp+234h+var_224]
0x94226B: xor     edi, edi
0x94226D: mov     dword ptr [esp+234h+var_21C], edi
0x942271: mov     [esp+234h+Format], eax
0x942275: mov     eax, [esp+234h+var_224]
0x942279: test    eax, eax
0x94227B: jle     loc_9427FF
0x942281: cmp     byte ptr [ebx+0Ch], 2
0x942285: jnz     short loc_94229B
0x942287: movsx   eax, byte ptr [esi]
0x94228A: push    eax; Args
0x94228B: push    offset aC_2; "%c"
0x942290: push    ebp; int
0x942291: call    sub_8BBEE0
0x942296: add     esp, 0Ch
0x942299: jmp     short loc_9422D8
0x94229B: test    edi, edi
0x94229D: jz      short loc_9422C2
0x94229F: xor     edx, edx
0x9422A1: mov     eax, edi
0x9422A3: mov     ecx, 32h ; '2'
0x9422A8: div     ecx
0x9422AA: mov     eax, offset asc_A366D0; "\n"
0x9422AF: test    edx, edx
0x9422B1: jz      short loc_9422B8
0x9422B3: mov     eax, offset word_A36430
0x9422B8: push    eax; Format
0x9422B9: push    ebp; int
0x9422BA: call    sub_8BBEE0
0x9422BF: add     esp, 8
0x9422C2: movzx   eax, byte ptr [ebx+0Ch]
0x9422C6: mov     ecx, [esp+234h+arg_10]
0x9422CD: mov     edi, ebp
0x9422CF: call    sub_941760
0x9422D4: mov     edi, dword ptr [esp+234h+var_21C]
0x9422D8: mov     edx, [esp+234h+Format]
0x9422DC: mov     eax, [esp+234h+var_224]
0x9422E0: add     esi, edx
0x9422E2: inc     edi
0x9422E3: cmp     edi, eax
0x9422E5: mov     dword ptr [esp+234h+var_21C], edi
0x9422E9: jl      short loc_942281
0x9422EB: jmp     loc_9427FF
0x9422F0: mov     edx, [ebx]; jumptable 00942241 case 19
0x9422F2: push    edx; Args
0x9422F3: push    offset aZeroS; "<!-- zero %s -->"
0x9422F8: push    ebp; int
0x9422F9: call    sub_8BBEE0
0x9422FE: add     esp, 0Ch
0x942301: jmp     loc_9427FF
0x942306: mov     ecx, ebx; jumptable 00942241 case 20
0x942308: call    sub_940B70
0x94230D: test    eax, eax
0x94230F: mov     edi, eax
0x942311: jnz     short loc_942318
0x942313: mov     edi, 1
0x942318: mov     al, [ebx+0Dh]
0x94231B: xor     ebx, ebx
0x94231D: cmp     al, 2
0x94231F: mov     [esp+234h+var_224], edi
0x942323: jnz     loc_94241D
0x942329: test    edi, edi
0x94232B: mov     dword ptr [esp+234h+var_21C], ebx
0x94232F: jle     loc_9427FF
0x942335: jmp     short loc_942340
0x942337: mov     esi, [esp+234h+Format]
0x94233B: jmp     short loc_942340
