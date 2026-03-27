0x68C3A0: push    0FFFFFFFFh
0x68C3A2: push    offset SEH_68C3A0
0x68C3A7: mov     eax, large fs:0
0x68C3AD: push    eax
0x68C3AE: sub     esp, 8
0x68C3B1: push    ebx
0x68C3B2: push    esi
0x68C3B3: push    edi
0x68C3B4: mov     eax, ds:0B30AACh
0x68C3B9: xor     eax, esp
0x68C3BB: push    eax
0x68C3BC: lea     eax, [esp+24h+var_C]
0x68C3C0: mov     large fs:0, eax
0x68C3C6: mov     edi, ecx
0x68C3C8: mov     [esp+24h+var_14], edi
0x68C3CC: mov     ebx, [esp+24h+arg_8]
0x68C3D0: xor     esi, esi
0x68C3D2: cmp     ebx, esi
0x68C3D4: jz      loc_68C4AD
0x68C3DA: lea     eax, [esp+24h+arg_8]
0x68C3DE: push    eax
0x68C3DF: push    ebx
0x68C3E0: mov     [esp+2Ch+arg_8], esi
0x68C3E4: call    sub_68BF60
0x68C3E9: test    al, al
0x68C3EB: jz      loc_68C4AD
0x68C3F1: push    14h; Size
0x68C3F3: call    FormHeapAlloc
0x68C3F8: add     esp, 4
0x68C3FB: mov     [esp+24h+var_10], eax
0x68C3FF: cmp     eax, esi
0x68C401: mov     [esp+24h+var_4], esi
0x68C405: jz      short loc_68C412
0x68C407: mov     ecx, eax
0x68C409: call    sub_68CB30
0x68C40E: mov     edi, eax
0x68C410: jmp     short loc_68C414
0x68C412: xor     edi, edi
0x68C414: mov     ecx, [esp+24h+arg_4]
0x68C418: push    ecx
0x68C419: mov     ecx, edi
0x68C41B: mov     [esp+28h+var_4], 0FFFFFFFFh
0x68C423: call    TeleportData__SetTeleportPosition
0x68C428: push    14h; Size
0x68C42A: call    FormHeapAlloc
0x68C42F: add     esp, 4
0x68C432: mov     [esp+24h+arg_4], eax
0x68C436: cmp     eax, esi
0x68C438: mov     [esp+24h+var_4], 1
0x68C440: jz      short loc_68C44B
0x68C442: mov     ecx, eax
0x68C444: call    sub_68CB30
0x68C449: mov     esi, eax
0x68C44B: mov     edx, [esp+24h+arg_0]
0x68C44F: push    edx
0x68C450: mov     ecx, esi
0x68C452: mov     [esp+28h+var_4], 0FFFFFFFFh
0x68C45A: call    TeleportData__SetTeleportPosition
0x68C45F: push    edi
0x68C460: mov     ecx, esi
0x68C462: call    sub_6A2FD0
0x68C467: push    ebx
0x68C468: mov     ecx, edi
0x68C46A: call    sub_6A2FD0
0x68C46F: mov     ecx, [esp+24h+arg_8]
0x68C473: test    ecx, ecx
0x68C475: jz      short loc_68C492
0x68C477: push    esi
0x68C478: call    sub_6A2FD0
0x68C47D: mov     ecx, [esp+24h+var_C]
0x68C481: mov     large fs:0, ecx
0x68C488: pop     ecx
0x68C489: pop     edi
0x68C48A: pop     esi
0x68C48B: pop     ebx
0x68C48C: add     esp, 14h
0x68C48F: retn    0Ch
0x68C492: mov     eax, [esp+24h+var_14]
0x68C496: mov     [eax], esi
0x68C498: mov     ecx, [esp+24h+var_C]
0x68C49C: mov     large fs:0, ecx
0x68C4A3: pop     ecx
0x68C4A4: pop     edi
0x68C4A5: pop     esi
0x68C4A6: pop     ebx
0x68C4A7: add     esp, 14h
0x68C4AA: retn    0Ch
0x68C4AD: mov     ecx, [esp+24h+arg_0]
0x68C4B1: push    ecx
0x68C4B2: mov     ecx, edi
0x68C4B4: call    sub_68BED0
0x68C4B9: mov     edx, [esp+24h+arg_4]
0x68C4BD: push    edx
0x68C4BE: mov     ecx, edi
0x68C4C0: call    sub_68BED0
0x68C4C5: mov     ecx, [esp+24h+var_C]
0x68C4C9: mov     large fs:0, ecx
0x68C4D0: pop     ecx
0x68C4D1: pop     edi
0x68C4D2: pop     esi
0x68C4D3: pop     ebx
0x68C4D4: add     esp, 14h
0x68C4D7: retn    0Ch
