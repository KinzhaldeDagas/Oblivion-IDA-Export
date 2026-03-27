0x4F0030: sub     esp, 0Ch
0x4F0033: push    edi
0x4F0034: mov     edi, ecx
0x4F0036: mov     eax, [edi+8]
0x4F0039: shr     eax, 0Eh
0x4F003C: test    al, 1
0x4F003E: jnz     short loc_4F00A7
0x4F0040: mov     ecx, [edi+30h]
0x4F0043: mov     edx, [ecx+4]
0x4F0046: xor     eax, eax
0x4F0048: test    edx, edx
0x4F004A: push    esi
0x4F004B: jbe     short loc_4F0061
0x4F004D: mov     esi, [ecx+8]
0x4F0050: mov     ecx, esi
0x4F0052: cmp     dword ptr [ecx], 0
0x4F0055: jnz     short loc_4F00B3
0x4F0057: add     eax, 1
0x4F005A: add     ecx, 4
0x4F005D: cmp     eax, edx
0x4F005F: jb      short loc_4F0052
0x4F0061: xor     eax, eax
0x4F0063: test    eax, eax
0x4F0065: mov     [esp+14h+var_8], eax
0x4F0069: pop     esi
0x4F006A: jz      short loc_4F00A7
0x4F006C: lea     esp, [esp+0]
0x4F0070: lea     ecx, [esp+10h+var_C]
0x4F0074: push    ecx
0x4F0075: mov     ecx, [edi+30h]
0x4F0078: lea     edx, [esp+14h+var_4]
0x4F007C: push    edx
0x4F007D: lea     eax, [esp+18h+var_8]
0x4F0081: push    eax
0x4F0082: mov     [esp+1Ch+var_C], 0
0x4F008A: call    sub_452600
0x4F008F: mov     ecx, [esp+10h+var_C]
0x4F0093: test    ecx, ecx
0x4F0095: jz      short loc_4F00A0
0x4F0097: mov     edx, [ecx]
0x4F0099: mov     eax, [edx+10h]
0x4F009C: push    1
0x4F009E: call    eax
0x4F00A0: cmp     [esp+10h+var_8], 0
0x4F00A5: jnz     short loc_4F0070
0x4F00A7: mov     ecx, [edi+30h]
0x4F00AA: pop     edi
0x4F00AB: add     esp, 0Ch
0x4F00AE: jmp     NiTMap_Clear
0x4F00B3: mov     eax, [esi+eax*4]
0x4F00B6: jmp     short loc_4F0063
