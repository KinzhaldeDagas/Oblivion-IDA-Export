0x6F3170: sub     esp, 8
0x6F3173: mov     edx, [esp+8+arg_8]
0x6F3177: push    ebx
0x6F3178: mov     ebx, [esp+0Ch+arg_0]
0x6F317C: push    esi
0x6F317D: mov     esi, [esp+10h+arg_4]
0x6F3181: push    edi
0x6F3182: mov     edi, [esp+14h+arg_8]
0x6F3186: xor     al, al
0x6F3188: mov     byte ptr [esp+14h+var_4], al
0x6F318C: mov     ecx, [esp+14h+var_4]
0x6F3190: mov     byte ptr [esp+14h+var_8], al
0x6F3194: mov     eax, [esp+14h+var_8]
0x6F3198: push    eax
0x6F3199: push    ecx
0x6F319A: push    edx
0x6F319B: push    edi
0x6F319C: push    esi
0x6F319D: push    ebx
0x6F319E: call    sub_6F2E80
0x6F31A3: sub     esi, ebx
0x6F31A5: mov     eax, 2AAAAAABh
0x6F31AA: imul    esi
0x6F31AC: sar     edx, 3
0x6F31AF: mov     eax, edx
0x6F31B1: shr     eax, 1Fh
0x6F31B4: add     eax, edx
0x6F31B6: lea     eax, [eax+eax*2]
0x6F31B9: add     esp, 18h
0x6F31BC: shl     eax, 4
0x6F31BF: add     eax, edi
0x6F31C1: pop     edi
0x6F31C2: pop     esi
0x6F31C3: pop     ebx
0x6F31C4: add     esp, 8
0x6F31C7: retn
