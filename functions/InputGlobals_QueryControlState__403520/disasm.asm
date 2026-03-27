0x403520: mov     eax, [esp+a2]
0x403524: cmp     eax, 1Dh
0x403527: push    edi
0x403528: mov     edi, ecx
0x40352A: jge     short loc_40356B
0x40352C: push    ebx
0x40352D: push    ebp
0x40352E: push    esi
0x40352F: xor     ebp, ebp
0x403531: xor     esi, esi
0x403533: lea     ebx, [eax+edi+1B7Eh]
0x40353A: lea     ebx, [ebx+0]
0x403540: movzx   eax, byte ptr [ebx]
0x403543: cmp     al, 0FFh
0x403545: jz      short loc_403557
0x403547: mov     ecx, [esp+10h+query]
0x40354B: push    ecx; query
0x40354C: push    eax; keycode
0x40354D: push    esi; scheme
0x40354E: mov     ecx, edi; this
0x403550: call    InputGlobals__QueryInputState
0x403555: add     ebp, eax
0x403557: add     esi, 1
0x40355A: add     ebx, 1Dh
0x40355D: cmp     esi, 3
0x403560: jl      short loc_403540
0x403562: pop     esi
0x403563: mov     eax, ebp
0x403565: pop     ebp
0x403566: pop     ebx
0x403567: pop     edi
0x403568: retn    8
0x40356B: sub     eax, 1Dh
0x40356E: jz      short loc_4035A8
0x403570: sub     eax, 1
0x403573: jz      short loc_403594
0x403575: sub     eax, 1
0x403578: jz      short loc_403580
0x40357A: xor     eax, eax
0x40357C: pop     edi
0x40357D: retn    8
0x403580: mov     cl, 80h ; '€'
0x403582: xor     eax, eax
0x403584: test    [edi+1AABh], cl
0x40358A: jnz     short loc_4035C1
0x40358C: test    [edi+19ABh], cl
0x403592: jmp     short loc_4035BA
0x403594: mov     cl, 80h ; '€'
0x403596: xor     eax, eax
0x403598: test    [edi+1A1Dh], cl
0x40359E: jnz     short loc_4035C1
0x4035A0: test    [edi+191Dh], cl
0x4035A6: jmp     short loc_4035BA
0x4035A8: mov     cl, 80h ; '€'
0x4035AA: xor     eax, eax
0x4035AC: test    [edi+19F5h], cl
0x4035B2: jnz     short loc_4035C1
0x4035B4: test    [edi+18F5h], cl
0x4035BA: jz      short loc_4035C1
0x4035BC: mov     eax, 1
0x4035C1: pop     edi
0x4035C2: retn    8
