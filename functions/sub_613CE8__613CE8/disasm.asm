0x613CE8: mov     esi, [edi+4]
0x613CEB: test    esi, esi
0x613CED: jz      short sub_613D33
0x613CEF: mov     edx, [esi+1Ch]
0x613CF2: test    dword ptr [edx+58h], 1180000h
0x613CF9: jz      short sub_613D33
0x613CFB: mov     ecx, esi
0x613CFD: call    EffectItem_IsHostile
0x613D02: test    al, al
0x613D04: jz      short sub_613D33
0x613D06: mov     eax, [esi+1Ch]
0x613D09: mov     ecx, [eax+58h]
0x613D0C: and     ecx, 6
0x613D0F: cmp     cl, 6
0x613D12: jnz     short sub_613D33
0x613D14: mov     ecx, ebx
0x613D16: call    sub_6135F0
0x613D1B: mov     esi, [esi+14h]
0x613D1E: mov     edx, [eax]
0x613D20: mov     ecx, eax
0x613D22: mov     eax, [edx+284h]
0x613D28: push    esi
0x613D29: call    eax
0x613D2B: cmp     eax, ds:0B37270h
0x613D31: jl      short loc_613D4A
