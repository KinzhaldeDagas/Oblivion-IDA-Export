0x8A72A0: push    esi
0x8A72A1: push    edi
0x8A72A2: mov     edi, ecx
0x8A72A4: mov     ecx, [esp+8+arg_0]
0x8A72A8: mov     dword ptr [edi], offset off_A975C8
0x8A72AE: mov     dword ptr [edi+14h], 1
0x8A72B5: xor     esi, esi
0x8A72B7: mov     [edi+20h], esi
0x8A72BA: mov     [edi+24h], esi
0x8A72BD: mov     dword ptr [edi+28h], 0FFFFFFFFh
0x8A72C4: mov     [edi+2Ch], esi
0x8A72C7: mov     [edi+10h], ecx
0x8A72CA: mov     eax, [ecx]
0x8A72CC: call    dword ptr [eax+20h]
0x8A72CF: mov     ecx, [esp+8+arg_4]
0x8A72D3: neg     al
0x8A72D5: sbb     eax, eax
0x8A72D7: and     eax, ecx
0x8A72D9: mov     [edi+30h], eax
0x8A72DC: lea     eax, [edi+0B8h]
0x8A72E2: mov     ecx, 11h
0x8A72E7: mov     [eax-44h], esi
0x8A72EA: mov     [eax], esi
0x8A72EC: sub     eax, 4
0x8A72EF: dec     ecx
0x8A72F0: jnz     short loc_8A72E7
0x8A72F2: xor     ecx, ecx
0x8A72F4: cmp     ecx, 8
0x8A72F7: jg      short loc_8A7303
0x8A72F9: mov     eax, 1
0x8A72FE: jmp     loc_8A73EB
0x8A7303: cmp     ecx, 10h
0x8A7306: jg      short loc_8A7312
0x8A7308: mov     eax, 2
0x8A730D: jmp     loc_8A73EB
0x8A7312: cmp     ecx, 20h ; ' '
0x8A7315: jg      short loc_8A7321
0x8A7317: mov     eax, 3
0x8A731C: jmp     loc_8A73EB
0x8A7321: cmp     ecx, 30h ; '0'
0x8A7324: jg      short loc_8A7330
0x8A7326: mov     eax, 4
0x8A732B: jmp     loc_8A73EB
0x8A7330: cmp     ecx, 40h ; '@'
0x8A7333: jg      short loc_8A733F
0x8A7335: mov     eax, 5
0x8A733A: jmp     loc_8A73EB
0x8A733F: cmp     ecx, 60h ; '`'
0x8A7342: jg      short loc_8A734E
0x8A7344: mov     eax, 6
0x8A7349: jmp     loc_8A73EB
0x8A734E: cmp     ecx, 80h ; '€'
0x8A7354: jg      short loc_8A7360
0x8A7356: mov     eax, 7
0x8A735B: jmp     loc_8A73EB
0x8A7360: cmp     ecx, 0A0h ; ' '
0x8A7366: jg      short loc_8A736F
0x8A7368: mov     eax, 8
0x8A736D: jmp     short loc_8A73EB
0x8A736F: cmp     ecx, 0C0h ; 'À'
0x8A7375: jg      short loc_8A737E
0x8A7377: mov     eax, 9
0x8A737C: jmp     short loc_8A73EB
0x8A737E: cmp     ecx, 100h
0x8A7384: jg      short loc_8A738D
0x8A7386: mov     eax, 0Ah
0x8A738B: jmp     short loc_8A73EB
0x8A738D: cmp     ecx, 140h
0x8A7393: jg      short loc_8A739C
0x8A7395: mov     eax, 0Bh
0x8A739A: jmp     short loc_8A73EB
0x8A739C: cmp     ecx, 200h
0x8A73A2: jg      short loc_8A73AB
0x8A73A4: mov     eax, 0Ch
0x8A73A9: jmp     short loc_8A73EB
0x8A73AB: cmp     ecx, 400h
0x8A73B1: jg      short loc_8A73BA
0x8A73B3: mov     eax, 0Dh
0x8A73B8: jmp     short loc_8A73EB
0x8A73BA: cmp     ecx, 800h
0x8A73C0: jg      short loc_8A73C9
0x8A73C2: mov     eax, 0Eh
0x8A73C7: jmp     short loc_8A73EB
0x8A73C9: cmp     ecx, 1000h
0x8A73CF: jg      short loc_8A73D8
0x8A73D1: mov     eax, 0Fh
0x8A73D6: jmp     short loc_8A73EB
0x8A73D8: cmp     ecx, 2000h
0x8A73DE: jg      short loc_8A73E7
0x8A73E0: mov     eax, 10h
0x8A73E5: jmp     short loc_8A73EB
0x8A73E7: int     3; Trap to Debugger
0x8A73E8: or      eax, 0FFFFFFFFh
0x8A73EB: mov     [edi+ecx+100h], al
0x8A73F2: mov     [edi+eax*4+0BCh], ecx
0x8A73F9: inc     ecx
0x8A73FA: cmp     ecx, 200h
0x8A7400: jle     loc_8A72F4
0x8A7406: mov     ecx, 400h
0x8A740B: lea     edx, [edi+304h]
0x8A7411: cmp     ecx, 8
0x8A7414: jg      short loc_8A7420
0x8A7416: mov     eax, 1
0x8A741B: jmp     loc_8A7508
0x8A7420: cmp     ecx, 10h
0x8A7423: jg      short loc_8A742F
0x8A7425: mov     eax, 2
0x8A742A: jmp     loc_8A7508
0x8A742F: cmp     ecx, 20h ; ' '
0x8A7432: jg      short loc_8A743E
0x8A7434: mov     eax, 3
0x8A7439: jmp     loc_8A7508
0x8A743E: cmp     ecx, 30h ; '0'
0x8A7441: jg      short loc_8A744D
0x8A7443: mov     eax, 4
0x8A7448: jmp     loc_8A7508
0x8A744D: cmp     ecx, 40h ; '@'
0x8A7450: jg      short loc_8A745C
0x8A7452: mov     eax, 5
0x8A7457: jmp     loc_8A7508
0x8A745C: cmp     ecx, 60h ; '`'
0x8A745F: jg      short loc_8A746B
0x8A7461: mov     eax, 6
0x8A7466: jmp     loc_8A7508
0x8A746B: cmp     ecx, 80h ; '€'
0x8A7471: jg      short loc_8A747D
0x8A7473: mov     eax, 7
0x8A7478: jmp     loc_8A7508
0x8A747D: cmp     ecx, 0A0h ; ' '
0x8A7483: jg      short loc_8A748C
0x8A7485: mov     eax, 8
0x8A748A: jmp     short loc_8A7508
0x8A748C: cmp     ecx, 0C0h ; 'À'
0x8A7492: jg      short loc_8A749B
0x8A7494: mov     eax, 9
0x8A7499: jmp     short loc_8A7508
0x8A749B: cmp     ecx, 100h
0x8A74A1: jg      short loc_8A74AA
0x8A74A3: mov     eax, 0Ah
0x8A74A8: jmp     short loc_8A7508
0x8A74AA: cmp     ecx, 140h
0x8A74B0: jg      short loc_8A74B9
0x8A74B2: mov     eax, 0Bh
0x8A74B7: jmp     short loc_8A7508
0x8A74B9: cmp     ecx, 200h
0x8A74BF: jg      short loc_8A74C8
0x8A74C1: mov     eax, 0Ch
0x8A74C6: jmp     short loc_8A7508
0x8A74C8: cmp     ecx, 400h
0x8A74CE: jg      short loc_8A74D7
0x8A74D0: mov     eax, 0Dh
0x8A74D5: jmp     short loc_8A7508
0x8A74D7: cmp     ecx, 800h
0x8A74DD: jg      short loc_8A74E6
0x8A74DF: mov     eax, 0Eh
0x8A74E4: jmp     short loc_8A7508
0x8A74E6: cmp     ecx, 1000h
0x8A74EC: jg      short loc_8A74F5
0x8A74EE: mov     eax, 0Fh
0x8A74F3: jmp     short loc_8A7508
0x8A74F5: cmp     ecx, 2000h
0x8A74FB: jg      short loc_8A7504
0x8A74FD: mov     eax, 10h
0x8A7502: jmp     short loc_8A7508
0x8A7504: int     3; Trap to Debugger
0x8A7505: or      eax, 0FFFFFFFFh
0x8A7508: mov     [edx], eax
0x8A750A: mov     [edi+eax*4+0BCh], ecx
0x8A7511: add     ecx, 400h
0x8A7517: add     edx, 4
0x8A751A: cmp     ecx, 2400h
0x8A7520: jl      loc_8A7411
0x8A7526: mov     eax, edi
0x8A7528: pop     edi
0x8A7529: pop     esi
0x8A752A: retn    8
