0x9960B9: dec     dword ptr [ebp-0Ch]
0x9960BC: mov     edx, [ebp-14h]
0x9960BF: inc     dword ptr [ebp+4]
0x9960C2: call    __inc
0x9960C7: mov     [ebp-4], eax
0x9960CA: cmp     dword ptr [ebp-2Ch], 0
0x9960CE: jnz     short loc_9960D4
0x9960D0: or      dword ptr [ebp-0Ch], 0FFFFFFFFh
0x9960D4: movzx   eax, byte ptr [ebp-4]
0x9960D8: jmp     short loc_996121
0x9960DA: mov     eax, [ebp-0Ch]
0x9960DD: dec     dword ptr [ebp-0Ch]
0x9960E0: test    eax, eax
0x9960E2: jz      short loc_99612C
0x9960E4: mov     al, [ebp-4]
0x9960E7: mov     ecx, [ebp-24h]
0x9960EA: inc     dword ptr [ebp-1Ch]
0x9960ED: mov     [ebx+ecx], al
0x9960F0: lea     eax, [ebp-44h]
0x9960F3: push    eax; int
0x9960F4: lea     eax, [ebp+8]
0x9960F7: push    eax; Src
0x9960F8: inc     ebx
0x9960F9: push    ebx; int
0x9960FA: lea     edi, [ebp-24h]
0x9960FD: lea     esi, [ebp-4Ch]
0x996100: call    ___check_float_string
0x996105: add     esp, 0Ch
0x996108: test    eax, eax
0x99610A: jz      __input_l___$error_return$25524
0x996110: mov     edx, [ebp-14h]
0x996113: inc     dword ptr [ebp+4]
0x996116: call    __inc
0x99611B: mov     [ebp-4], eax
0x99611E: movzx   eax, al
0x996121: push    eax; C
0x996122: call    _isdigit
0x996127: test    eax, eax
0x996129: pop     ecx
0x99612A: jnz     short loc_9960DA
0x99612C: mov     eax, [ebp-6Ch]
0x99612F: mov     eax, [eax+0BCh]
0x996135: mov     eax, [eax]
0x996137: mov     al, [eax]
0x996139: cmp     al, [ebp-4]
0x99613C: mov     [ebp-18h], al
0x99613F: jnz     loc_9961E2
0x996145: mov     eax, [ebp-0Ch]
0x996148: dec     dword ptr [ebp-0Ch]
0x99614B: test    eax, eax
0x99614D: jz      loc_9961E2
0x996153: mov     edx, [ebp-14h]
0x996156: inc     dword ptr [ebp+4]
0x996159: call    __inc
0x99615E: mov     ecx, [ebp-24h]
0x996161: mov     [ebp-4], eax
0x996164: mov     al, [ebp-18h]
0x996167: mov     [ebx+ecx], al
0x99616A: lea     eax, [ebp-44h]
0x99616D: push    eax; int
0x99616E: lea     eax, [ebp+8]
0x996171: push    eax; Src
0x996172: inc     ebx
0x996173: push    ebx; int
0x996174: lea     edi, [ebp-24h]
0x996177: lea     esi, [ebp-4Ch]
0x99617A: call    ___check_float_string
0x99617F: add     esp, 0Ch
0x996182: test    eax, eax
0x996184: jz      __input_l___$error_return$25524
0x99618A: movzx   eax, byte ptr [ebp-4]
0x99618E: jmp     short loc_9961D7
0x996190: mov     eax, [ebp-0Ch]
0x996193: dec     dword ptr [ebp-0Ch]
0x996196: test    eax, eax
0x996198: jz      short loc_9961E2
0x99619A: mov     eax, [ebp-24h]
0x99619D: mov     cl, [ebp-4]
0x9961A0: inc     dword ptr [ebp-1Ch]
0x9961A3: mov     [ebx+eax], cl
0x9961A6: lea     eax, [ebp-44h]
0x9961A9: push    eax; int
0x9961AA: lea     eax, [ebp+8]
0x9961AD: push    eax; Src
0x9961AE: inc     ebx
0x9961AF: push    ebx; int
0x9961B0: lea     edi, [ebp-24h]
0x9961B3: lea     esi, [ebp-4Ch]
0x9961B6: call    ___check_float_string
0x9961BB: add     esp, 0Ch
0x9961BE: test    eax, eax
0x9961C0: jz      __input_l___$error_return$25524
0x9961C6: mov     edx, [ebp-14h]
0x9961C9: inc     dword ptr [ebp+4]
0x9961CC: call    __inc
0x9961D1: mov     [ebp-4], eax
0x9961D4: movzx   eax, al
0x9961D7: push    eax; C
0x9961D8: call    _isdigit
0x9961DD: test    eax, eax
0x9961DF: pop     ecx
0x9961E0: jnz     short loc_996190
0x9961E2: cmp     dword ptr [ebp-1Ch], 0
0x9961E6: jz      loc_9962E2
0x9961EC: cmp     dword ptr [ebp-4], 65h ; 'e'
0x9961F0: jz      short loc_9961FC
0x9961F2: cmp     dword ptr [ebp-4], 45h ; 'E'
0x9961F6: jnz     loc_9962E2
0x9961FC: mov     eax, [ebp-0Ch]
0x9961FF: dec     dword ptr [ebp-0Ch]
0x996202: test    eax, eax
0x996204: jz      loc_9962E2
0x99620A: mov     eax, [ebp-24h]
0x99620D: mov     byte ptr [ebx+eax], 65h ; 'e'
0x996211: lea     eax, [ebp-44h]
0x996214: push    eax; int
0x996215: lea     eax, [ebp+8]
0x996218: push    eax; Src
0x996219: inc     ebx
0x99621A: push    ebx; int
0x99621B: lea     edi, [ebp-24h]
0x99621E: lea     esi, [ebp-4Ch]
0x996221: call    ___check_float_string
0x996226: add     esp, 0Ch
0x996229: test    eax, eax
0x99622B: jz      __input_l___$error_return$25524
0x996231: mov     edx, [ebp-14h]
0x996234: inc     dword ptr [ebp+4]
0x996237: call    __inc
0x99623C: cmp     eax, 2Dh ; '-'
0x99623F: mov     [ebp-4], eax
0x996242: jnz     short loc_996267
0x996244: mov     eax, [ebp-24h]
0x996247: mov     byte ptr [ebx+eax], 2Dh ; '-'
0x99624B: lea     eax, [ebp-44h]
0x99624E: push    eax; int
0x99624F: lea     eax, [ebp+8]
0x996252: push    eax; Src
0x996253: inc     ebx
0x996254: push    ebx; int
0x996255: call    ___check_float_string
0x99625A: add     esp, 0Ch
0x99625D: test    eax, eax
0x99625F: jz      __input_l___$error_return$25524
0x996265: jmp     short __input_l___$f_incwidth2$25725
0x996267: cmp     dword ptr [ebp-4], 2Bh ; '+'
0x99626B: jnz     short loc_99628A
