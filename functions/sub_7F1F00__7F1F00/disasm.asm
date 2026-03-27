0x7F1F00: push    0FFFFFFFFh
0x7F1F02: push    offset SEH_7F1F00
0x7F1F07: mov     eax, large fs:0
0x7F1F0D: push    eax
0x7F1F0E: push    ebx
0x7F1F0F: push    ebp
0x7F1F10: push    esi
0x7F1F11: push    edi
0x7F1F12: mov     eax, ds:0B30AACh
0x7F1F17: xor     eax, esp
0x7F1F19: push    eax
0x7F1F1A: lea     eax, [esp+20h+var_C]
0x7F1F1E: mov     large fs:0, eax
0x7F1F24: mov     esi, ecx
0x7F1F26: movzx   eax, word ptr ds:0B42EACh
0x7F1F2D: mov     ecx, [esp+20h+arg_4]
0x7F1F31: movzx   ebp, ax
0x7F1F34: shl     ebp, 8
0x7F1F37: or      ebp, ecx
0x7F1F39: cmp     ax, 6
0x7F1F3D: jnz     short loc_7F1F47
0x7F1F3F: lea     eax, [esi+48h]
0x7F1F42: jmp     loc_7F2014
0x7F1F47: cmp     [esi+24h], ecx
0x7F1F4A: jz      loc_7F2008
0x7F1F50: mov     ecx, esi
0x7F1F52: call    sub_7E24C0
0x7F1F57: mov     eax, [esi+1Ch]
0x7F1F5A: shr     eax, 1Ch
0x7F1F5D: movzx   eax, al
0x7F1F60: push    eax
0x7F1F61: call    GetShadowSceneNode
0x7F1F66: mov     edi, [eax+118h]
0x7F1F6C: add     esp, 4
0x7F1F6F: mov     ecx, esi
0x7F1F71: call    sub_7ED600
0x7F1F76: movzx   eax, ax
0x7F1F79: test    ax, ax
0x7F1F7C: jnz     short loc_7F1FAF
0x7F1F7E: push    10h; Size
0x7F1F80: call    FormHeapAlloc
0x7F1F85: add     esp, 4
0x7F1F88: mov     [esp+20h+arg_4], eax
0x7F1F8C: test    eax, eax
0x7F1F8E: mov     [esp+20h+var_4], 0
0x7F1F96: jz      short loc_7F1FEA
0x7F1F98: mov     ecx, [esp+20h+arg_0]
0x7F1F9C: push    edi
0x7F1F9D: push    1
0x7F1F9F: push    1
0x7F1FA1: push    0Eh
0x7F1FA3: push    ecx
0x7F1FA4: push    eax
0x7F1FA5: call    sub_7E2370
0x7F1FAA: add     esp, 18h
0x7F1FAD: jmp     short loc_7F1FEC
0x7F1FAF: mov     ecx, esi
0x7F1FB1: call    sub_7ED2A0
0x7F1FB6: push    10h; Size
0x7F1FB8: mov     ebx, eax
0x7F1FBA: call    FormHeapAlloc
0x7F1FBF: add     esp, 4
0x7F1FC2: mov     [esp+20h+arg_4], eax
0x7F1FC6: test    eax, eax
0x7F1FC8: mov     [esp+20h+var_4], 1
0x7F1FD0: jz      short loc_7F1FEA
0x7F1FD2: mov     ecx, [esp+20h+arg_0]
0x7F1FD6: push    ebx
0x7F1FD7: push    edi
0x7F1FD8: push    2
0x7F1FDA: push    1
0x7F1FDC: push    0Eh
0x7F1FDE: push    ecx
0x7F1FDF: push    eax
0x7F1FE0: call    sub_7E2370
0x7F1FE5: add     esp, 1Ch
0x7F1FE8: jmp     short loc_7F1FEC
0x7F1FEA: xor     eax, eax
0x7F1FEC: lea     edx, [esp+20h+arg_0]
0x7F1FF0: push    edx
0x7F1FF1: lea     ecx, [esi+28h]
0x7F1FF4: mov     [esp+24h+var_4], 0FFFFFFFFh
0x7F1FFC: mov     [esp+24h+arg_0], eax
0x7F2000: call    sub_6AA320
0x7F2005: mov     [esi+24h], ebp
0x7F2008: mov     eax, [esp+20h+arg_8]
0x7F200C: mov     word ptr [eax], 1
0x7F2011: lea     eax, [esi+28h]
0x7F2014: mov     ecx, [esp+20h+var_C]
0x7F2018: mov     large fs:0, ecx
0x7F201F: pop     ecx
0x7F2020: pop     edi
0x7F2021: pop     esi
0x7F2022: pop     ebp
0x7F2023: pop     ebx
0x7F2024: add     esp, 0Ch
0x7F2027: retn    10h
