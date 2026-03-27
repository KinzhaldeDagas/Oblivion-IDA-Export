0x6926F0: push    ebx
0x6926F1: mov     ebx, ecx
0x6926F3: mov     ecx, [ebx+20h]; this
0x6926F6: test    ecx, ecx
0x6926F8: push    esi
0x6926F9: push    edi
0x6926FA: jz      short loc_692705
0x6926FC: call    MagicTarget_GetParentActor
0x692701: mov     esi, eax
0x692703: jmp     short loc_692707
0x692705: xor     esi, esi
0x692707: mov     ecx, [ebx+24h]; this
0x69270A: test    ecx, ecx
0x69270C: jz      short loc_692717
0x69270E: call    MagicCaster_GetParentActor
0x692713: mov     edi, eax
0x692715: jmp     short loc_692719
0x692717: xor     edi, edi
0x692719: test    esi, esi
0x69271B: jz      short loc_69275C
0x69271D: test    edi, edi
0x69271F: jz      short loc_69275C
0x692721: mov     eax, [esi]
0x692723: mov     edx, [eax+198h]
0x692729: push    0
0x69272B: mov     ecx, esi
0x69272D: call    edx
0x69272F: test    al, al
0x692731: jnz     short loc_692753
0x692733: mov     eax, [esi]
0x692735: mov     edx, [eax+1F8h]
0x69273B: mov     ecx, esi
0x69273D: call    edx
0x69273F: test    al, al
0x692741: jnz     short loc_692753
0x692743: push    edi
0x692744: push    esi
0x692745: call    sub_6925C0
0x69274A: add     esp, 8
0x69274D: pop     edi
0x69274E: pop     esi
0x69274F: pop     ebx
0x692750: retn    4
0x692753: push    0
0x692755: mov     ecx, ebx
0x692757: call    ActiveEffect_Base_Remove
0x69275C: pop     edi
0x69275D: pop     esi
0x69275E: pop     ebx
0x69275F: retn    4
