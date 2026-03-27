0x6A8D00: push    ecx
0x6A8D01: push    esi
0x6A8D02: mov     esi, ecx
0x6A8D04: mov     eax, [esi+70h]
0x6A8D07: test    eax, eax
0x6A8D09: jz      short loc_6A8D43
0x6A8D0B: mov     ecx, [eax]
0x6A8D0D: lea     edx, [esp+8+var_4]
0x6A8D11: push    edx
0x6A8D12: push    offset CLSID_IMediaControl
0x6A8D17: push    eax
0x6A8D18: mov     eax, [ecx]
0x6A8D1A: call    eax
0x6A8D1C: test    eax, eax
0x6A8D1E: jl      short loc_6A8D43
0x6A8D20: mov     eax, dword ptr [esp+8+var_4]
0x6A8D24: test    eax, eax
0x6A8D26: jz      short loc_6A8D43
0x6A8D28: mov     ecx, [eax]
0x6A8D2A: mov     edx, [ecx+20h]
0x6A8D2D: push    eax
0x6A8D2E: call    edx
0x6A8D30: mov     eax, dword ptr [esp+8+var_4]
0x6A8D34: mov     ecx, [eax]
0x6A8D36: mov     edx, [ecx+8]
0x6A8D39: push    eax
0x6A8D3A: call    edx
0x6A8D3C: or      dword ptr [esi+0DCh], 4
0x6A8D43: pop     esi
0x6A8D44: pop     ecx
0x6A8D45: retn
