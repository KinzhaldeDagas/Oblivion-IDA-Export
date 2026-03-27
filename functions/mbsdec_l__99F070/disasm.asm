0x99F070: push    ebp
0x99F071: mov     ebp, esp
0x99F073: sub     esp, 10h
0x99F076: push    ebx
0x99F077: xor     ebx, ebx
0x99F079: cmp     [ebp+arg_0], ebx
0x99F07C: jnz     short loc_99F09A
0x99F07E: call    __errno
0x99F083: push    ebx
0x99F084: push    ebx
0x99F085: push    ebx
0x99F086: push    ebx
0x99F087: push    ebx
0x99F088: mov     dword ptr [eax], 16h
0x99F08E: call    __invalid_parameter
0x99F093: add     esp, 14h
0x99F096: xor     eax, eax
0x99F098: jmp     short loc_99F104
0x99F09A: push    esi
0x99F09B: mov     esi, [ebp+arg_4]
0x99F09E: cmp     esi, ebx
0x99F0A0: jnz     short loc_99F0BC
0x99F0A2: call    __errno
0x99F0A7: push    ebx
0x99F0A8: push    ebx
0x99F0A9: push    ebx
0x99F0AA: push    ebx
0x99F0AB: push    ebx
0x99F0AC: mov     dword ptr [eax], 16h
0x99F0B2: call    __invalid_parameter
0x99F0B7: add     esp, 14h
0x99F0BA: jmp     short loc_99F0C1
0x99F0BC: cmp     [ebp+arg_0], esi
0x99F0BF: jb      short loc_99F0C5
0x99F0C1: xor     eax, eax
0x99F0C3: jmp     short loc_99F103
0x99F0C5: push    [ebp+arg_8]; struct localeinfo_struct *
0x99F0C8: lea     ecx, [ebp+var_10]; this
0x99F0CB: call    ??0_LocaleUpdate@@QAE@PAUlocaleinfo_struct@@@Z
0x99F0D0: mov     ecx, [ebp+var_C]
0x99F0D3: cmp     [ecx+8], ebx
0x99F0D6: lea     eax, [esi-1]
0x99F0D9: jz      short loc_99F0F7
0x99F0DB: dec     eax
0x99F0DC: cmp     [ebp+arg_0], eax
0x99F0DF: ja      short loc_99F0EB
0x99F0E1: movzx   edx, byte ptr [eax]
0x99F0E4: test    byte ptr [edx+ecx+1Dh], 4
0x99F0E9: jnz     short loc_99F0DB
0x99F0EB: mov     ecx, esi
0x99F0ED: sub     ecx, eax
0x99F0EF: and     ecx, 1
0x99F0F2: sub     esi, ecx
0x99F0F4: dec     esi
0x99F0F5: mov     eax, esi
0x99F0F7: cmp     [ebp+var_4], bl
0x99F0FA: jz      short loc_99F103
0x99F0FC: mov     ecx, [ebp+var_8]
0x99F0FF: and     dword ptr [ecx+70h], 0FFFFFFFDh
0x99F103: pop     esi
0x99F104: pop     ebx
0x99F105: leave
0x99F106: retn
