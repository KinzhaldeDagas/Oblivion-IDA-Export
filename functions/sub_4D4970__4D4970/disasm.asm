0x4D4970: push    ebp
0x4D4971: mov     ebp, ecx
0x4D4973: push    esi
0x4D4974: mov     dword ptr ds:0B35C04h, 0
0x4D497E: test    byte ptr [ebp+24h], 1
0x4D4982: push    edi
0x4D4983: jz      short loc_4D49A3
0x4D4985: cmp     byte ptr [ebp+26h], 6
0x4D4989: jnz     short loc_4D49A3
0x4D498B: lea     ecx, [ebp+28h]
0x4D498E: call    sub_424180
0x4D4993: test    eax, eax
0x4D4995: jz      short loc_4D49A3
0x4D4997: mov     edx, [eax]
0x4D4999: mov     ecx, eax
0x4D499B: mov     eax, [edx+80h]
0x4D49A1: call    eax
0x4D49A3: xor     edi, edi
0x4D49A5: mov     esi, 8
0x4D49AA: lea     ebx, [ebx+0]
0x4D49B0: mov     eax, [ebp+54h]
0x4D49B3: test    eax, eax
0x4D49B5: jz      short loc_4D49E7
0x4D49B7: movzx   ecx, word ptr [eax+0B6h]
0x4D49BE: lea     edx, [edi+2]
0x4D49C1: cmp     ecx, edx
0x4D49C3: jbe     short loc_4D49E7
0x4D49C5: mov     eax, [eax+0B0h]
0x4D49CB: mov     eax, [esi+eax]
0x4D49CE: test    eax, eax
0x4D49D0: jz      short loc_4D49E7
0x4D49D2: cmp     word ptr [eax+0B6h], 3
0x4D49DA: jbe     short loc_4D49E7
0x4D49DC: mov     ecx, [eax+0B0h]
0x4D49E2: mov     ecx, [ecx+0Ch]
0x4D49E5: jmp     short loc_4D49E9
0x4D49E7: xor     ecx, ecx
0x4D49E9: test    ecx, ecx
0x4D49EB: jz      short loc_4D4A00
0x4D49ED: test    byte ptr [ecx+18h], 1
0x4D49F1: jnz     short loc_4D4A00
0x4D49F3: fld     [esp+0Ch+arg_0]
0x4D49F7: push    ecx
0x4D49F8: fstp    [esp+10h+var_10]; float
0x4D49FB: call    sub_7073A0
0x4D4A00: add     esi, 4
0x4D4A03: add     edi, 1
0x4D4A06: cmp     esi, 18h
0x4D4A09: jl      short loc_4D49B0
0x4D4A0B: pop     edi
0x4D4A0C: pop     esi
0x4D4A0D: pop     ebp
0x4D4A0E: retn    4
