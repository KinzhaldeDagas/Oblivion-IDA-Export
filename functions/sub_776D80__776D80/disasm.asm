0x776D80: push    esi
0x776D81: mov     esi, ecx
0x776D83: mov     eax, [esi+4Ch]
0x776D86: mov     ecx, [esi+40h]
0x776D89: mov     edx, [esi+48h]
0x776D8C: push    eax; Size
0x776D8D: push    ecx; Src
0x776D8E: push    edx; Dst
0x776D8F: call    _memcpy
0x776D94: xor     ecx, ecx
0x776D96: lea     eax, [esi+80h]
0x776D9C: add     esp, 0Ch
0x776D9F: mov     [esi+48h], ecx
0x776DA2: mov     [esi+4Ch], ecx
0x776DA5: add     dword ptr [eax+7Ch], 0FFFFFFFFh
0x776DA9: pop     esi
0x776DAA: jnz     short loc_776DAF
0x776DAC: mov     [eax+78h], ecx
0x776DAF: push    eax; lpCriticalSection
0x776DB0: call    dword ptr ds:0A28074h
0x776DB6: mov     eax, [esp+arg_0]
0x776DBA: mov     ecx, [eax]
0x776DBC: mov     edx, [ecx+30h]
0x776DBF: push    eax
0x776DC0: call    edx
0x776DC2: xor     ecx, ecx
0x776DC4: test    eax, eax
0x776DC6: setnl   cl
0x776DC9: mov     al, cl
0x776DCB: retn    4
