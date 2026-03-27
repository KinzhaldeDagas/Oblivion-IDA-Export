0x6A9C00: sub     esp, 0Ch
0x6A9C03: push    edi
0x6A9C04: mov     edi, ecx
0x6A9C06: mov     byte ptr [edi+0A4h], 0
0x6A9C0D: cmp     byte ptr ds:0B16178h, 0
0x6A9C14: mov     [esp+10h+var_C], 0
0x6A9C1C: jz      loc_6A9CC7
0x6A9C22: mov     edx, [edi+300h]
0x6A9C28: mov     ecx, [edx+4]
0x6A9C2B: xor     eax, eax
0x6A9C2D: test    ecx, ecx
0x6A9C2F: push    esi
0x6A9C30: jbe     short loc_6A9C46
0x6A9C32: mov     esi, [edx+8]
0x6A9C35: mov     edx, esi
0x6A9C37: cmp     dword ptr [edx], 0
0x6A9C3A: jnz     short loc_6A9CA3
0x6A9C3C: add     eax, 1
0x6A9C3F: add     edx, 4
0x6A9C42: cmp     eax, ecx
0x6A9C44: jb      short loc_6A9C37
0x6A9C46: xor     eax, eax
0x6A9C48: test    eax, eax
0x6A9C4A: mov     [esp+14h+var_8], eax
0x6A9C4E: jz      short loc_6A9CC6
0x6A9C50: lea     eax, [esp+14h+var_C]
0x6A9C54: push    eax
0x6A9C55: lea     ecx, [esp+18h+var_4]
0x6A9C59: push    ecx
0x6A9C5A: mov     ecx, [edi+300h]
0x6A9C60: lea     edx, [esp+1Ch+var_8]
0x6A9C64: push    edx
0x6A9C65: call    sub_452600
0x6A9C6A: mov     esi, [esp+14h+var_C]
0x6A9C6E: test    dword ptr [esi], 200h
0x6A9C74: jz      short loc_6A9CBF
0x6A9C76: mov     ecx, esi
0x6A9C78: call    sub_6B6AF0
0x6A9C7D: test    al, al
0x6A9C7F: jz      short loc_6A9C86
0x6A9C81: test    byte ptr [esi], 1
0x6A9C84: jz      short loc_6A9CBF
0x6A9C86: xor     dword ptr [esi], 200h
0x6A9C8C: mov     eax, [esi]
0x6A9C8E: test    al, 10h
0x6A9C90: jz      short loc_6A9CA8
0x6A9C92: test    al, 1
0x6A9C94: jz      short loc_6A9C9F
0x6A9C96: push    0
0x6A9C98: mov     ecx, esi
0x6A9C9A: call    sub_6B7130
0x6A9C9F: push    1
0x6A9CA1: jmp     short loc_6A9CAA
0x6A9CA3: mov     eax, [esi+eax*4]
0x6A9CA6: jmp     short loc_6A9C48
0x6A9CA8: push    0
0x6A9CAA: mov     ecx, esi
0x6A9CAC: call    sub_6B6E60
0x6A9CB1: fld     dword ptr [esi+3Ch]
0x6A9CB4: push    ecx
0x6A9CB5: mov     ecx, esi
0x6A9CB7: fstp    [esp+18h+var_18]; float
0x6A9CBA: call    sub_6B6F20
0x6A9CBF: cmp     [esp+14h+var_8], 0
0x6A9CC4: jnz     short loc_6A9C50
0x6A9CC6: pop     esi
0x6A9CC7: pop     edi
0x6A9CC8: add     esp, 0Ch
0x6A9CCB: retn
