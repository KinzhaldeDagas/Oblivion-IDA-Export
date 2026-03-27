0x8D4290: push    ebp
0x8D4291: mov     ebp, esp
0x8D4293: and     esp, 0FFFFFFF0h
0x8D4296: mov     eax, 3064h
0x8D429B: call    __alloca_probe
0x8D42A0: push    ebx
0x8D42A1: mov     ebx, large fs:2Ch
0x8D42A8: push    esi
0x8D42A9: push    edi
0x8D42AA: mov     edi, ds:0BA9DE4h
0x8D42B0: mov     eax, [ebx+edi*4]
0x8D42B3: mov     edx, [eax+1A8h]
0x8D42B9: mov     [esp+3070h+var_305C], ecx
0x8D42BD: mov     ecx, [eax+1A4h]
0x8D42C3: cmp     ecx, edx
0x8D42C5: jnb     short loc_8D42EB
0x8D42C7: mov     esi, eax
0x8D42C9: mov     ecx, [esi+1A4h]
0x8D42CF: mov     dword ptr [ecx], offset aTtnarrowphase; "TtNarrowPhase"
0x8D42D5: rdtsc
0x8D42D7: mov     [esp+3070h+var_3060], eax
0x8D42DB: mov     edx, [esp+3070h+var_3060]
0x8D42DF: mov     [ecx+4], edx
0x8D42E2: add     ecx, 0Ch
0x8D42E5: mov     [esi+1A4h], ecx
0x8D42EB: mov     eax, [ebp+arg_0]
0x8D42EE: mov     ecx, [eax+48h]
0x8D42F1: xor     edx, edx
0x8D42F3: test    ecx, ecx
0x8D42F5: mov     [esp+3070h+var_1C], 7F7FFFFFh
0x8D4300: jle     loc_8D4445
0x8D4306: mov     edi, [ebp+arg_4]
0x8D4309: lea     esp, [esp+0]
0x8D4310: mov     esi, [eax+44h]
0x8D4313: mov     esi, [esi+edx*4]
0x8D4316: inc     edx
0x8D4317: cmp     edx, ecx
0x8D4319: mov     [esp+3070h+var_3064], edx
0x8D431D: jnz     short loc_8D432A
0x8D431F: mov     ecx, [eax+54h]
0x8D4322: add     ecx, esi
0x8D4324: mov     [esp+3070h+var_3060], ecx
0x8D4328: jmp     short loc_8D4334
0x8D432A: movzx   ecx, word ptr [eax+5Ah]
0x8D432E: add     ecx, esi
0x8D4330: mov     [esp+3070h+var_3060], ecx
0x8D4334: cmp     esi, ecx
0x8D4336: jnb     loc_8D4434
0x8D433C: lea     esp, [esp+0]
0x8D4340: movsx   ecx, byte ptr [esi+8]
0x8D4344: mov     eax, [esi+18h]
0x8D4347: imul    ecx, 3Ch ; '<'
0x8D434A: mov     edx, [edi]
0x8D434C: mov     ebx, [esi+14h]
0x8D434F: prefetchnta byte ptr [esi+80h]
0x8D4356: mov     [esp+3070h+var_3058], eax
0x8D435A: mov     eax, [esi+10h]
0x8D435D: prefetchnta byte ptr [eax]
0x8D4360: lea     eax, [ecx+edx+1A14h]
0x8D4367: lea     edx, [esp+3070h+var_3050]
0x8D436B: push    edx
0x8D436C: mov     [edi+28h], eax
0x8D436F: mov     al, [eax+10h]
0x8D4372: lea     ecx, [esp+3074h+var_3020]
0x8D4376: push    edi
0x8D4377: push    esi
0x8D4378: mov     [edi+0Ch], al
0x8D437B: mov     [esp+307Ch+var_3050], ecx
0x8D437F: mov     [esp+307Ch+var_1C], 7F7FFFFFh
0x8D438A: mov     [esp+307Ch+var_10], 0
0x8D4395: call    sub_8E6D10
0x8D439A: mov     ecx, ds:0BA7D98h
0x8D43A0: mov     edx, [ecx+14h]
0x8D43A3: mov     eax, [ecx+28h]
0x8D43A6: add     eax, edx
0x8D43A8: mov     edx, [ecx+8]
0x8D43AB: add     esp, 0Ch
0x8D43AE: cmp     edx, eax
0x8D43B0: jle     short loc_8D43BA
0x8D43B2: sub     edx, eax
0x8D43B4: mov     [esp+3070h+var_3054], edx
0x8D43B8: jnz     short loc_8D43C7
0x8D43BA: mov     dword ptr [ecx+4], 1
0x8D43C1: mov     ecx, ds:0BA7D98h
0x8D43C7: cmp     dword ptr [ecx+4], 1
0x8D43CB: jz      loc_8D4483
0x8D43D1: mov     ecx, [esp+3070h+var_3050]
0x8D43D5: lea     eax, [esp+3070h+var_3020]
0x8D43D9: cmp     ecx, eax
0x8D43DB: jz      short loc_8D43F1
0x8D43DD: mov     ecx, [esi+10h]
0x8D43E0: mov     edx, [ecx]
0x8D43E2: lea     eax, [esp+3070h+var_3050]
0x8D43E6: push    eax
0x8D43E7: mov     eax, [esp+3074h+var_3058]
0x8D43EB: push    edi
0x8D43EC: push    eax
0x8D43ED: push    ebx
0x8D43EE: call    dword ptr [edx+14h]
0x8D43F1: fld     [esp+3070h+var_1C]
0x8D43F8: fcomp   dword ptr ds:0A9A020h
0x8D43FE: fnstsw  ax
0x8D4400: test    ah, 5
0x8D4403: jp      short loc_8D4414
0x8D4405: push    esi
0x8D4406: lea     ecx, [esp+3074h+var_3050]
0x8D440A: push    ecx
0x8D440B: mov     ecx, [esp+3078h+var_305C]
0x8D440F: call    sub_8D3600
0x8D4414: movzx   edx, byte ptr [esi+3]
0x8D4418: mov     eax, [esp+3070h+var_3060]
0x8D441C: add     esi, edx
0x8D441E: cmp     esi, eax
0x8D4420: jb      loc_8D4340
0x8D4426: mov     ebx, large fs:2Ch
0x8D442D: mov     edx, [esp+3070h+var_3064]
0x8D4431: mov     eax, [ebp+arg_0]
0x8D4434: mov     ecx, [eax+48h]
0x8D4437: cmp     edx, ecx
0x8D4439: jl      loc_8D4310
0x8D443F: mov     edi, ds:0BA9DE4h
0x8D4445: mov     eax, [ebx+edi*4]
0x8D4448: mov     ecx, [eax+1A4h]
0x8D444E: cmp     ecx, [eax+1A8h]
0x8D4454: jnb     short loc_8D447A
0x8D4456: mov     esi, eax
0x8D4458: mov     ecx, [esi+1A4h]
0x8D445E: mov     dword ptr [ecx], offset aEt; "Et"
0x8D4464: rdtsc
0x8D4466: mov     [esp+3070h+var_3064], eax
0x8D446A: mov     edx, [esp+3070h+var_3064]
0x8D446E: mov     [ecx+4], edx
0x8D4471: add     ecx, 0Ch
0x8D4474: mov     [esi+1A4h], ecx
0x8D447A: pop     edi
0x8D447B: pop     esi
0x8D447C: pop     ebx
0x8D447D: mov     esp, ebp
0x8D447F: pop     ebp
0x8D4480: retn    8
0x8D4483: mov     ecx, large fs:2Ch
0x8D448A: mov     edx, ds:0BA9DE4h
0x8D4490: mov     eax, [ecx+edx*4]
0x8D4493: mov     esi, [eax+1A4h]
0x8D4499: cmp     esi, [eax+1A8h]
0x8D449F: jnb     short loc_8D447A
0x8D44A1: mov     esi, eax
0x8D44A3: mov     ecx, [esi+1A4h]
0x8D44A9: mov     dword ptr [ecx], offset aEt; "Et"
0x8D44AF: rdtsc
0x8D44B1: mov     [esp+3070h+var_3064], eax
0x8D44B5: mov     eax, [esp+3070h+var_3064]
0x8D44B9: mov     [ecx+4], eax
0x8D44BC: add     ecx, 0Ch
0x8D44BF: pop     edi
0x8D44C0: mov     [esi+1A4h], ecx
0x8D44C6: pop     esi
0x8D44C7: pop     ebx
0x8D44C8: mov     esp, ebp
0x8D44CA: pop     ebp
0x8D44CB: retn    8
