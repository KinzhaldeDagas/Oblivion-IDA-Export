0x7B2800: push    0FFFFFFFFh
0x7B2802: push    offset SEH_8122A0
0x7B2807: mov     eax, large fs:0
0x7B280D: push    eax
0x7B280E: push    ecx
0x7B280F: push    ebp
0x7B2810: push    esi
0x7B2811: push    edi
0x7B2812: mov     eax, ds:0B30AACh
0x7B2817: xor     eax, esp
0x7B2819: push    eax
0x7B281A: lea     eax, [esp+20h+var_C]
0x7B281E: mov     large fs:0, eax
0x7B2824: mov     ebp, ecx
0x7B2826: mov     eax, [ebp+24h]
0x7B2829: cmp     eax, [esp+20h+arg_4]
0x7B282D: jz      loc_7B291D
0x7B2833: call    sub_7E24C0
0x7B2838: cmp     dword ptr ds:0B42F48h, 2
0x7B283F: jl      short loc_7B2899
0x7B2841: cmp     byte ptr ds:0B43070h, 0
0x7B2848: jnz     short loc_7B2899
0x7B284A: push    10h; Size
0x7B284C: call    FormHeapAlloc
0x7B2851: add     esp, 4
0x7B2854: mov     [esp+20h+var_10], eax
0x7B2858: test    eax, eax
0x7B285A: mov     [esp+20h+var_4], 0
0x7B2862: jz      short loc_7B287C
0x7B2864: mov     ecx, [esp+20h+arg_0]
0x7B2868: push    0
0x7B286A: push    0
0x7B286C: push    1
0x7B286E: push    0Ch
0x7B2870: push    ecx
0x7B2871: push    eax
0x7B2872: call    sub_7E2370
0x7B2877: add     esp, 18h
0x7B287A: jmp     short loc_7B287E
0x7B287C: xor     eax, eax
0x7B287E: lea     edx, [esp+20h+arg_0]
0x7B2882: push    edx
0x7B2883: lea     ecx, [ebp+28h]
0x7B2886: mov     [esp+24h+var_4], 0FFFFFFFFh
0x7B288E: mov     [esp+24h+arg_0], eax
0x7B2892: call    sub_6AA320
0x7B2897: jmp     short loc_7B290C
0x7B2899: push    10h; Size
0x7B289B: call    FormHeapAlloc
0x7B28A0: add     esp, 4
0x7B28A3: mov     [esp+20h+var_10], eax
0x7B28A7: test    eax, eax
0x7B28A9: mov     [esp+20h+var_4], 1
0x7B28B1: jz      short loc_7B28D0
0x7B28B3: mov     ecx, [esp+20h+arg_0]
0x7B28B7: push    0
0x7B28B9: push    0
0x7B28BB: push    1
0x7B28BD: push    195h
0x7B28C2: push    ecx
0x7B28C3: push    eax
0x7B28C4: call    sub_7E2370
0x7B28C9: add     esp, 18h
0x7B28CC: mov     edi, eax
0x7B28CE: jmp     short loc_7B28D2
0x7B28D0: xor     edi, edi
0x7B28D2: mov     edx, [ebp+28h]
0x7B28D5: mov     eax, [edx+4]
0x7B28D8: lea     esi, [ebp+28h]
0x7B28DB: mov     ecx, esi
0x7B28DD: mov     [esp+20h+var_4], 0FFFFFFFFh
0x7B28E5: call    eax
0x7B28E7: mov     [eax+8], edi
0x7B28EA: mov     dword ptr [eax+4], 0
0x7B28F1: mov     ecx, [esi+4]
0x7B28F4: mov     [eax], ecx
0x7B28F6: mov     ecx, [esi+4]
0x7B28F9: test    ecx, ecx
0x7B28FB: jz      short loc_7B2902
0x7B28FD: mov     [ecx+4], eax
0x7B2900: jmp     short loc_7B2905
0x7B2902: mov     [esi+8], eax
0x7B2905: add     dword ptr [esi+0Ch], 1
0x7B2909: mov     [esi+4], eax
0x7B290C: movzx   edx, word ptr ds:0B42EACh
0x7B2913: shl     edx, 8
0x7B2916: or      edx, [esp+20h+arg_4]
0x7B291A: mov     [ebp+24h], edx
0x7B291D: lea     eax, [ebp+28h]
0x7B2920: mov     ecx, [esp+20h+var_C]
0x7B2924: mov     large fs:0, ecx
0x7B292B: pop     ecx
0x7B292C: pop     edi
0x7B292D: pop     esi
0x7B292E: pop     ebp
0x7B292F: add     esp, 10h
0x7B2932: retn    10h
