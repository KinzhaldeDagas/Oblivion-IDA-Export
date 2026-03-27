0x88B680: push    0FFFFFFFFh
0x88B682: push    offset SEH_88B680
0x88B687: mov     eax, large fs:0
0x88B68D: push    eax
0x88B68E: sub     esp, 0Ch
0x88B691: push    ebx
0x88B692: push    esi
0x88B693: push    edi
0x88B694: mov     eax, ds:0B30AACh
0x88B699: xor     eax, esp
0x88B69B: push    eax
0x88B69C: lea     eax, [esp+28h+var_C]
0x88B6A0: mov     large fs:0, eax
0x88B6A6: mov     esi, ecx
0x88B6A8: xor     ebx, ebx
0x88B6AA: cmp     [esp+28h+arg_0], bl
0x88B6AE: jz      loc_88B810
0x88B6B4: cmp     [esi+14h], ebx
0x88B6B7: jnz     loc_88B836
0x88B6BD: mov     [esp+28h+var_18], ebx
0x88B6C1: mov     [esp+28h+var_14], ebx
0x88B6C5: mov     [esp+28h+var_10], 80000000h
0x88B6CD: mov     [esp+28h+var_4], ebx
0x88B6D1: call    sub_8CABF0
0x88B6D6: mov     ecx, ds:0BA7D98h
0x88B6DC: mov     eax, [ecx]
0x88B6DE: mov     edx, [eax+10h]
0x88B6E1: push    32h ; '2'
0x88B6E3: push    74h ; 't'
0x88B6E5: call    edx
0x88B6E7: mov     word ptr [eax+4], 74h ; 't'
0x88B6ED: mov     dword ptr [esp+28h+arg_0], eax
0x88B6F1: mov     ecx, eax
0x88B6F3: mov     byte ptr [esp+28h+var_4], 1
0x88B6F8: call    sub_8CB220
0x88B6FD: mov     edi, eax
0x88B6FF: mov     eax, [esi]
0x88B701: mov     edx, [eax+58h]
0x88B704: mov     ecx, esi
0x88B706: mov     byte ptr [esp+28h+var_4], bl
0x88B70A: call    edx
0x88B70C: mov     eax, [esi]
0x88B70E: mov     edx, [eax+58h]
0x88B711: mov     ecx, esi
0x88B713: call    edx
0x88B715: push    eax
0x88B716: mov     ecx, edi
0x88B718: call    sub_8CB070
0x88B71D: cmp     edi, ebx
0x88B71F: jz      short loc_88B726
0x88B721: add     edi, 8
0x88B724: jmp     short loc_88B728
0x88B726: xor     edi, edi
0x88B728: mov     eax, [esp+28h+var_10]
0x88B72C: and     eax, 3FFFFFFFh
0x88B731: cmp     [esp+28h+var_14], eax
0x88B735: jnz     short loc_88B746
0x88B737: lea     ecx, [esp+28h+var_18]
0x88B73B: push    4
0x88B73D: push    ecx
0x88B73E: call    sub_8A6EE0
0x88B743: add     esp, 8
0x88B746: mov     eax, [esp+28h+var_14]
0x88B74A: mov     edx, [esp+28h+var_18]
0x88B74E: mov     [edx+eax*4], edi
0x88B751: mov     ecx, ds:0BA7D98h
0x88B757: add     [esp+28h+var_14], 1
0x88B75C: mov     edx, [ecx]
0x88B75E: mov     eax, [edx+10h]
0x88B761: push    32h ; '2'
0x88B763: push    90h
0x88B768: call    eax
0x88B76A: mov     word ptr [eax+4], 90h
0x88B770: mov     dword ptr [esp+28h+arg_0], eax
0x88B774: push    ebx
0x88B775: lea     ecx, [esp+2Ch+var_18]
0x88B779: push    ecx
0x88B77A: mov     ecx, eax
0x88B77C: mov     byte ptr [esp+30h+var_4], 2
0x88B781: call    sub_8CA540
0x88B786: mov     edx, [esi]
0x88B788: mov     [esi+14h], eax
0x88B78B: mov     eax, [edx+58h]
0x88B78E: mov     ecx, esi
0x88B790: mov     byte ptr [esp+28h+var_4], bl
0x88B794: call    eax
0x88B796: push    7D000h
0x88B79B: call    sub_8BAA60
0x88B7A0: add     esp, 4
0x88B7A3: call    sub_8BA9F0
0x88B7A8: mov     ecx, [esi+14h]
0x88B7AB: push    61A9h; Args
0x88B7B0: call    sub_8C9E20
0x88B7B5: mov     eax, [esp+28h+var_10]
0x88B7B9: test    eax, eax
0x88B7BB: mov     [esp+28h+var_4], 0FFFFFFFFh
0x88B7C3: js      short loc_88B836
0x88B7C5: mov     ecx, ds:0BA9DE4h
0x88B7CB: mov     edx, large fs:2Ch
0x88B7D2: mov     ecx, [edx+ecx*4]
0x88B7D5: mov     ecx, [ecx+19Ch]
0x88B7DB: cmp     ecx, ebx
0x88B7DD: jnz     short loc_88B7E5
0x88B7DF: mov     ecx, ds:0BA7D9Ch
0x88B7E5: mov     edx, [esp+28h+var_18]
0x88B7E9: and     eax, 3FFFFFFFh
0x88B7EE: add     eax, eax
0x88B7F0: push    14h
0x88B7F2: add     eax, eax
0x88B7F4: push    eax
0x88B7F5: push    edx
0x88B7F6: call    sub_8A75D0
0x88B7FB: mov     ecx, [esp+28h+var_C]
0x88B7FF: mov     large fs:0, ecx
0x88B806: pop     ecx
0x88B807: pop     edi
0x88B808: pop     esi
0x88B809: pop     ebx
0x88B80A: add     esp, 18h
0x88B80D: retn    4
0x88B810: cmp     esi, ebx
0x88B812: jz      short loc_88B81B
0x88B814: mov     eax, [esi]
0x88B816: mov     edx, [eax+58h]
0x88B819: call    edx
0x88B81B: mov     ecx, [esi+14h]
0x88B81E: cmp     ecx, ebx
0x88B820: jz      short loc_88B82A
0x88B822: mov     eax, [ecx]
0x88B824: mov     edx, [eax]
0x88B826: push    1
0x88B828: call    edx
0x88B82A: mov     eax, [esi]
0x88B82C: mov     edx, [eax+58h]
0x88B82F: mov     ecx, esi
0x88B831: call    edx
0x88B833: mov     [esi+14h], ebx
0x88B836: mov     ecx, [esp+28h+var_C]
0x88B83A: mov     large fs:0, ecx
0x88B841: pop     ecx
0x88B842: pop     edi
0x88B843: pop     esi
0x88B844: pop     ebx
0x88B845: add     esp, 18h
0x88B848: retn    4
