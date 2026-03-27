0x776C90: push    ecx
0x776C91: mov     eax, [esp+4+arg_0]
0x776C95: push    ebp
0x776C96: mov     ebp, [esp+8+arg_C]
0x776C9A: push    esi
0x776C9B: push    edi
0x776C9C: mov     edi, [esp+10h+Size]
0x776CA0: push    ebp
0x776CA1: lea     edx, [esp+14h+Src]
0x776CA5: push    edx
0x776CA6: mov     edx, [esp+18h+arg_4]
0x776CAA: push    edi
0x776CAB: mov     esi, ecx
0x776CAD: mov     ecx, [eax]
0x776CAF: push    edx
0x776CB0: push    eax
0x776CB1: mov     eax, [ecx+2Ch]
0x776CB4: mov     [esp+24h+Src], 0
0x776CBC: call    eax
0x776CBE: test    eax, eax
0x776CC0: jge     short loc_776CCB
0x776CC2: pop     edi
0x776CC3: pop     esi
0x776CC4: xor     eax, eax
0x776CC6: pop     ebp
0x776CC7: pop     ecx
0x776CC8: retn    10h
0x776CCB: push    ebx
0x776CCC: lea     ebx, [esi+80h]
0x776CD2: push    ebx; lpCriticalSection
0x776CD3: call    dword ptr ds:0A2806Ch
0x776CD9: call    dword ptr ds:0A2808Ch
0x776CDF: add     dword ptr [ebx+7Ch], 1
0x776CE3: mov     ecx, [esp+14h+Src]
0x776CE7: mov     [ebx+78h], eax
0x776CEA: cmp     [esi+44h], edi
0x776CED: mov     [esi+48h], ecx
0x776CF0: mov     [esi+4Ch], edi
0x776CF3: pop     ebx
0x776CF4: jnb     short loc_776D0E
0x776CF6: mov     edx, [esi+40h]
0x776CF9: push    edx
0x776CFA: call    FormHeapFree
0x776CFF: push    edi; Size
0x776D00: call    FormHeapAlloc
0x776D05: add     esp, 8
0x776D08: mov     [esi+40h], eax
0x776D0B: mov     [esi+44h], edi
0x776D0E: test    ebp, 3000h
0x776D14: jnz     short loc_776D28
0x776D16: mov     eax, [esp+10h+Src]
0x776D1A: mov     ecx, [esi+40h]
0x776D1D: push    edi; Size
0x776D1E: push    eax; Src
0x776D1F: push    ecx; Dst
0x776D20: call    _memcpy
0x776D25: add     esp, 0Ch
0x776D28: mov     eax, [esi+40h]
0x776D2B: pop     edi
0x776D2C: pop     esi
0x776D2D: pop     ebp
0x776D2E: pop     ecx
0x776D2F: retn    10h
