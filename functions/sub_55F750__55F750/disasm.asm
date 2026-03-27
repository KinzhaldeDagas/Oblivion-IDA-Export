0x55F750: push    0FFFFFFFFh
0x55F752: push    offset SEH_8C62B0
0x55F757: mov     eax, large fs:0
0x55F75D: push    eax
0x55F75E: push    ecx
0x55F75F: push    esi
0x55F760: mov     eax, ds:0B30AACh
0x55F765: xor     eax, esp
0x55F767: push    eax
0x55F768: lea     eax, [esp+18h+var_C]
0x55F76C: mov     large fs:0, eax
0x55F772: mov     ecx, ds:0B39E04h
0x55F778: test    ecx, ecx
0x55F77A: jz      short loc_55F79D
0x55F77C: cmp     [esp+18h+arg_0], 0
0x55F781: jz      short loc_55F7C7
0x55F783: mov     esi, ecx
0x55F785: call    sub_55F550
0x55F78A: push    esi
0x55F78B: call    FormHeapFree
0x55F790: add     esp, 4
0x55F793: mov     dword ptr ds:0B39E04h, 0
0x55F79D: push    28h ; '('; Size
0x55F79F: call    FormHeapAlloc
0x55F7A4: add     esp, 4
0x55F7A7: mov     [esp+18h+var_10], eax
0x55F7AB: test    eax, eax
0x55F7AD: mov     [esp+18h+var_4], 0
0x55F7B5: jz      short loc_55F7C0
0x55F7B7: mov     ecx, eax
0x55F7B9: call    sub_55E850
0x55F7BE: jmp     short loc_55F7C2
0x55F7C0: xor     eax, eax
0x55F7C2: mov     ds:0B39E04h, eax
0x55F7C7: mov     ecx, [esp+18h+var_C]
0x55F7CB: mov     large fs:0, ecx
0x55F7D2: pop     ecx
0x55F7D3: pop     esi
0x55F7D4: add     esp, 10h
0x55F7D7: retn
