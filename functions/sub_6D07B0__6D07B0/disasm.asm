0x6D07B0: sub     esp, 20h
0x6D07B3: push    ebx
0x6D07B4: push    ebp
0x6D07B5: mov     ebp, ecx
0x6D07B7: mov     eax, [ebp+50h]
0x6D07BA: mov     ebx, [eax+8]
0x6D07BD: test    ebx, ebx
0x6D07BF: push    esi
0x6D07C0: jz      short loc_6D082C
0x6D07C2: jbe     short loc_6D07C9
0x6D07C4: mov     ecx, [eax+10h]
0x6D07C7: jmp     short loc_6D07CB
0x6D07C9: xor     ecx, ecx
0x6D07CB: mov     ecx, [ecx]
0x6D07CD: mov     edx, [eax+0Ch]
0x6D07D0: push    ecx
0x6D07D1: push    edx
0x6D07D2: lea     ecx, [esp+34h+var_20]
0x6D07D6: call    sub_72A0F0
0x6D07DB: mov     esi, 1
0x6D07E0: cmp     ebx, esi
0x6D07E2: jbe     short loc_6D084F
0x6D07E4: push    edi
0x6D07E5: mov     edi, 0Ch
0x6D07EA: lea     ebx, [ebx+0]
0x6D07F0: mov     ecx, [ebp+50h]
0x6D07F3: cmp     esi, [ecx+8]
0x6D07F6: jnb     short loc_6D07FF
0x6D07F8: mov     eax, [ecx+10h]
0x6D07FB: add     eax, edi
0x6D07FD: jmp     short loc_6D0801
0x6D07FF: xor     eax, eax
0x6D0801: mov     eax, [eax]
0x6D0803: mov     ecx, [ecx+0Ch]
0x6D0806: push    eax
0x6D0807: push    ecx
0x6D0808: lea     ecx, [esp+38h+var_10]
0x6D080C: call    sub_72A0F0
0x6D0811: lea     edx, [esp+30h+var_10]
0x6D0815: push    edx
0x6D0816: lea     ecx, [esp+34h+var_20]
0x6D081A: call    sub_72A6B0
0x6D081F: add     esi, 1
0x6D0822: add     edi, 0Ch
0x6D0825: cmp     esi, ebx
0x6D0827: jb      short loc_6D07F0
0x6D0829: pop     edi
0x6D082A: jmp     short loc_6D084F
0x6D082C: fldz
0x6D082E: mov     eax, ds:0B3F9A8h
0x6D0833: mov     ecx, ds:0B3F9ACh
0x6D0839: fstp    [esp+2Ch+var_14]
0x6D083D: mov     edx, ds:0B3F9B0h
0x6D0843: mov     dword ptr [esp+2Ch+var_20], eax
0x6D0847: mov     dword ptr [esp+2Ch+var_20+4], ecx
0x6D084B: mov     [esp+2Ch+var_18], edx
0x6D084F: mov     eax, [ebp+30h]
0x6D0852: mov     eax, [eax+0B4h]
0x6D0858: mov     ecx, dword ptr [esp+2Ch+var_20]
0x6D085C: add     eax, 0Ch
0x6D085F: mov     [eax], ecx
0x6D0861: mov     edx, dword ptr [esp+2Ch+var_20+4]
0x6D0865: mov     [eax+4], edx
0x6D0868: mov     ecx, [esp+2Ch+var_18]
0x6D086C: pop     esi
0x6D086D: mov     [eax+8], ecx
0x6D0870: mov     edx, [esp+28h+var_14]
0x6D0874: pop     ebp
0x6D0875: mov     [eax+0Ch], edx
0x6D0878: pop     ebx
0x6D0879: add     esp, 20h
0x6D087C: retn
