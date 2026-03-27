0x98ED99: push    esi
0x98ED9A: mov     esi, [esp+4+File]
0x98ED9E: push    edi
0x98ED9F: xor     edi, edi
0x98EDA1: cmp     esi, edi
0x98EDA3: jnz     short loc_98EDC2
0x98EDA5: call    __errno
0x98EDAA: push    edi
0x98EDAB: push    edi
0x98EDAC: push    edi
0x98EDAD: push    edi
0x98EDAE: push    edi
0x98EDAF: mov     dword ptr [eax], 16h
0x98EDB5: call    __invalid_parameter
0x98EDBA: add     esp, 14h
0x98EDBD: jmp     loc_98EEB3
0x98EDC2: mov     eax, [esi+0Ch]
0x98EDC5: test    al, 83h
0x98EDC7: jz      loc_98EEB3
0x98EDCD: test    al, 40h
0x98EDCF: jnz     loc_98EEB3
0x98EDD5: test    al, 2
0x98EDD7: jz      short loc_98EDE4
0x98EDD9: or      eax, 20h
0x98EDDC: mov     [esi+0Ch], eax
0x98EDDF: jmp     loc_98EEB3
0x98EDE4: or      eax, 1
0x98EDE7: test    ax, 10Ch
0x98EDEB: mov     [esi+0Ch], eax
0x98EDEE: jnz     short loc_98EDF9
0x98EDF0: push    esi
0x98EDF1: call    __getbuf
0x98EDF6: pop     ecx
0x98EDF7: jmp     short loc_98EDFE
0x98EDF9: mov     eax, [esi+8]
0x98EDFC: mov     [esi], eax
0x98EDFE: push    dword ptr [esi+18h]; unsigned int
0x98EE01: push    dword ptr [esi+8]; void *
0x98EE04: push    esi; File
0x98EE05: call    __fileno
0x98EE0A: pop     ecx
0x98EE0B: push    eax; int
0x98EE0C: call    __read
0x98EE11: add     esp, 0Ch
0x98EE14: cmp     eax, edi
0x98EE16: mov     [esi+4], eax
0x98EE19: jz      loc_98EEA3
0x98EE1F: cmp     eax, 0FFFFFFFFh
0x98EE22: jz      short loc_98EEA3
0x98EE24: test    byte ptr [esi+0Ch], 82h
0x98EE28: jnz     short loc_98EE79
0x98EE2A: push    esi; File
0x98EE2B: call    __fileno
0x98EE30: cmp     eax, 0FFFFFFFFh
0x98EE33: pop     ecx
0x98EE34: jz      short loc_98EE64
0x98EE36: push    esi; File
0x98EE37: call    __fileno
0x98EE3C: cmp     eax, 0FFFFFFFEh
0x98EE3F: pop     ecx
0x98EE40: jz      short loc_98EE64
0x98EE42: push    esi; File
0x98EE43: call    __fileno
0x98EE48: sar     eax, 5
0x98EE4B: push    esi; File
0x98EE4C: lea     edi, ds:0BAAAC0h[eax*4]
0x98EE53: call    __fileno
0x98EE58: and     eax, 1Fh
0x98EE5B: imul    eax, 28h ; '('
0x98EE5E: add     eax, [edi]
0x98EE60: pop     ecx
0x98EE61: pop     ecx
0x98EE62: jmp     short loc_98EE69
0x98EE64: mov     eax, offset aA_1
0x98EE69: mov     al, [eax+4]
0x98EE6C: and     al, 82h
0x98EE6E: cmp     al, 82h ; '‚'
0x98EE70: jnz     short loc_98EE79
0x98EE72: or      dword ptr [esi+0Ch], 2000h
0x98EE79: cmp     dword ptr [esi+18h], 200h
0x98EE80: jnz     short loc_98EE96
0x98EE82: mov     eax, [esi+0Ch]
0x98EE85: test    al, 8
0x98EE87: jz      short loc_98EE96
0x98EE89: test    ax, 400h
0x98EE8D: jnz     short loc_98EE96
0x98EE8F: mov     dword ptr [esi+18h], 1000h
0x98EE96: mov     ecx, [esi]
0x98EE98: dec     dword ptr [esi+4]
0x98EE9B: movzx   eax, byte ptr [ecx]
0x98EE9E: inc     ecx
0x98EE9F: mov     [esi], ecx
0x98EEA1: jmp     short loc_98EEB6
0x98EEA3: neg     eax
0x98EEA5: sbb     eax, eax
0x98EEA7: and     eax, 10h
0x98EEAA: add     eax, 10h
0x98EEAD: or      [esi+0Ch], eax
0x98EEB0: mov     [esi+4], edi
0x98EEB3: or      eax, 0FFFFFFFFh
0x98EEB6: pop     edi
0x98EEB7: pop     esi
0x98EEB8: retn
