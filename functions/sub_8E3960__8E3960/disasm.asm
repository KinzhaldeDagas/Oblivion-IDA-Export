0x8E3960: push    ebp
0x8E3961: push    esi
0x8E3962: push    edi
0x8E3963: mov     edi, [esp+0Ch+arg_0]
0x8E3967: mov     eax, [edi]
0x8E3969: mov     esi, ecx
0x8E396B: push    esi
0x8E396C: push    4
0x8E396E: push    offset a3axissweep; "3AxisSweep"
0x8E3973: mov     ecx, edi
0x8E3975: call    dword ptr [eax]
0x8E3977: mov     eax, [esi+48h]
0x8E397A: test    eax, eax
0x8E397C: js      short loc_8E39A0
0x8E397E: mov     ecx, [esi+40h]
0x8E3981: mov     edx, [edi]
0x8E3983: and     eax, 3FFFFFFFh
0x8E3988: shl     eax, 4
0x8E398B: push    eax
0x8E398C: mov     eax, [esi+44h]
0x8E398F: shl     eax, 4
0x8E3992: push    eax
0x8E3993: push    ecx
0x8E3994: push    4
0x8E3996: push    offset aNodes; "Nodes"
0x8E399B: mov     ecx, edi
0x8E399D: call    dword ptr [edx+4]
0x8E39A0: mov     eax, [esi+54h]
0x8E39A3: test    eax, eax
0x8E39A5: js      short loc_8E39C9
0x8E39A7: mov     ecx, [esi+4Ch]
0x8E39AA: mov     edx, [edi]
0x8E39AC: and     eax, 3FFFFFFFh
0x8E39B1: shl     eax, 2
0x8E39B4: push    eax
0x8E39B5: mov     eax, [esi+50h]
0x8E39B8: shl     eax, 2
0x8E39BB: push    eax
0x8E39BC: push    ecx
0x8E39BD: push    4
0x8E39BF: push    offset aAxis; "Axis"
0x8E39C4: mov     ecx, edi
0x8E39C6: call    dword ptr [edx+4]
0x8E39C9: mov     eax, [esi+60h]
0x8E39CC: test    eax, eax
0x8E39CE: js      short loc_8E39F2
0x8E39D0: mov     ecx, [esi+58h]
0x8E39D3: mov     edx, [edi]
0x8E39D5: and     eax, 3FFFFFFFh
0x8E39DA: shl     eax, 2
0x8E39DD: push    eax
0x8E39DE: mov     eax, [esi+5Ch]
0x8E39E1: shl     eax, 2
0x8E39E4: push    eax
0x8E39E5: push    ecx
0x8E39E6: push    4
0x8E39E8: push    offset aAxis; "Axis"
0x8E39ED: mov     ecx, edi
0x8E39EF: call    dword ptr [edx+4]
0x8E39F2: mov     eax, [esi+6Ch]
0x8E39F5: test    eax, eax
0x8E39F7: js      short loc_8E3A1B
0x8E39F9: mov     ecx, [esi+64h]
0x8E39FC: mov     edx, [edi]
0x8E39FE: and     eax, 3FFFFFFFh
0x8E3A03: shl     eax, 2
0x8E3A06: push    eax
0x8E3A07: mov     eax, [esi+68h]
0x8E3A0A: shl     eax, 2
0x8E3A0D: push    eax
0x8E3A0E: push    ecx
0x8E3A0F: push    4
0x8E3A11: push    offset aAxis; "Axis"
0x8E3A16: mov     ecx, edi
0x8E3A18: call    dword ptr [edx+4]
0x8E3A1B: mov     eax, [esi+70h]
0x8E3A1E: test    eax, eax
0x8E3A20: jz      short loc_8E3A3A
0x8E3A22: mov     edx, [edi]
0x8E3A24: push    0
0x8E3A26: shl     eax, 4
0x8E3A29: push    eax
0x8E3A2A: mov     eax, [esi+78h]
0x8E3A2D: push    eax
0x8E3A2E: push    4
0x8E3A30: push    offset aMarkers; "Markers"
0x8E3A35: mov     ecx, edi
0x8E3A37: call    dword ptr [edx+4]
0x8E3A3A: mov     eax, [esi+70h]
0x8E3A3D: xor     ebp, ebp
0x8E3A3F: test    eax, eax
0x8E3A41: jle     short loc_8E3A80
0x8E3A43: push    ebx
0x8E3A44: xor     ebx, ebx
0x8E3A46: mov     ecx, [esi+78h]
0x8E3A49: mov     eax, [ebx+ecx+0Ch]
0x8E3A4D: test    eax, eax
0x8E3A4F: lea     ecx, [ebx+ecx+4]
0x8E3A53: js      short loc_8E3A74
0x8E3A55: mov     edx, [edi]
0x8E3A57: and     eax, 3FFFFFFFh
0x8E3A5C: shl     eax, 1
0x8E3A5E: push    eax
0x8E3A5F: mov     eax, [ecx+4]
0x8E3A62: mov     ecx, [ecx]
0x8E3A64: shl     eax, 1
0x8E3A66: push    eax
0x8E3A67: push    ecx
0x8E3A68: push    8
0x8E3A6A: push    offset aMarkers; "Markers"
0x8E3A6F: mov     ecx, edi
0x8E3A71: call    dword ptr [edx+4]
0x8E3A74: mov     eax, [esi+70h]
0x8E3A77: inc     ebp
0x8E3A78: add     ebx, 10h
0x8E3A7B: cmp     ebp, eax
0x8E3A7D: jl      short loc_8E3A46
0x8E3A7F: pop     ebx
0x8E3A80: mov     edx, [edi]
0x8E3A82: mov     ecx, edi
0x8E3A84: call    dword ptr [edx+14h]
0x8E3A87: pop     edi
0x8E3A88: pop     esi
0x8E3A89: pop     ebp
0x8E3A8A: retn    4
