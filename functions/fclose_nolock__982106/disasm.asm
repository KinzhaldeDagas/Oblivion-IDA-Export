0x982106: push    ebx
0x982107: push    esi
0x982108: mov     esi, [esp+8+File]
0x98210C: push    edi
0x98210D: xor     edi, edi
0x98210F: or      ebx, 0FFFFFFFFh
0x982112: cmp     esi, edi
0x982114: jnz     short loc_982133
0x982116: call    __errno
0x98211B: push    edi
0x98211C: push    edi
0x98211D: push    edi
0x98211E: push    edi
0x98211F: push    edi
0x982120: mov     dword ptr [eax], 16h
0x982126: call    __invalid_parameter
0x98212B: add     esp, 14h
0x98212E: or      eax, 0FFFFFFFFh
0x982131: jmp     short loc_982175
0x982133: test    byte ptr [esi+0Ch], 83h
0x982137: jz      short loc_982170
0x982139: push    esi; File
0x98213A: call    __flush
0x98213F: push    esi
0x982140: mov     ebx, eax
0x982142: call    __freebuf
0x982147: push    esi; File
0x982148: call    __fileno
0x98214D: push    eax; int
0x98214E: call    __close
0x982153: add     esp, 10h
0x982156: test    eax, eax
0x982158: jge     short loc_98215F
0x98215A: or      ebx, 0FFFFFFFFh
0x98215D: jmp     short loc_982170
0x98215F: mov     eax, [esi+1Ch]
0x982162: cmp     eax, edi
0x982164: jz      short loc_982170
0x982166: push    eax; Memory
0x982167: call    _free
0x98216C: pop     ecx
0x98216D: mov     [esi+1Ch], edi
0x982170: mov     [esi+0Ch], edi
0x982173: mov     eax, ebx
0x982175: pop     edi
0x982176: pop     esi
0x982177: pop     ebx
0x982178: retn
