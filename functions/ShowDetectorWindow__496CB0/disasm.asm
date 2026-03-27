0x496CB0: mov     eax, [esp+arg_0]
0x496CB4: push    ebx
0x496CB5: mov     ebx, [esp+4+arg_8]
0x496CB9: push    esi
0x496CBA: mov     esi, ecx
0x496CBC: mov     ecx, [esp+8+arg_4]
0x496CC0: push    edi
0x496CC1: mov     edi, [esp+0Ch+arg_C]
0x496CC5: mov     [esi], eax
0x496CC7: mov     eax, edi
0x496CC9: mov     [esi+4], ecx
0x496CCC: mov     [esi+18h], ebx
0x496CCF: lea     edx, [eax+1]
0x496CD2: mov     cl, [eax]
0x496CD4: add     eax, 1
0x496CD7: test    cl, cl
0x496CD9: jnz     short loc_496CD2
0x496CDB: sub     eax, edx
0x496CDD: add     eax, 1
0x496CE0: push    eax; Size
0x496CE1: call    FormHeapAlloc
0x496CE6: add     esp, 4
0x496CE9: mov     [esi+1Ch], eax
0x496CEC: mov     ecx, edi
0x496CEE: mov     edx, eax
0x496CF0: mov     al, [ecx]
0x496CF2: mov     [edx], al
0x496CF4: add     ecx, 1
0x496CF7: add     edx, 1
0x496CFA: test    al, al
0x496CFC: jnz     short loc_496CF0
0x496CFE: mov     edx, [esp+0Ch+nHeight]
0x496D02: mov     eax, [esp+0Ch+nWidth]
0x496D06: mov     ecx, [esp+0Ch+Y]
0x496D0A: push    edx; nHeight
0x496D0B: mov     edx, [esp+10h+X]
0x496D0F: push    eax; nWidth
0x496D10: push    ecx; Y
0x496D11: push    edx; X
0x496D12: mov     ecx, esi
0x496D14: call    sub_495D10
0x496D19: mov     eax, [esi]
0x496D1B: push    0; uFlags
0x496D1D: push    0; uType
0x496D1F: push    0FF000000h; crMask
0x496D24: push    1; cGrow
0x496D26: push    10h; cx
0x496D28: push    0B4h ; '´'; lpbmp
0x496D2D: push    eax; hi
0x496D2E: call    dword ptr ds:0A28020h
0x496D34: push    0
0x496D36: push    ebx
0x496D37: mov     ecx, esi
0x496D39: mov     [esi+14h], eax
0x496D3C: call    sub_496C00
0x496D41: pop     edi
0x496D42: mov     eax, esi
0x496D44: pop     esi
0x496D45: pop     ebx
0x496D46: retn    20h ; ' '
