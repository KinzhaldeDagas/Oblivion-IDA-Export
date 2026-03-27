0x503D10: push    ecx
0x503D11: mov     ecx, [esp+4+arg_10]
0x503D15: mov     edx, [esp+4+arg_C]
0x503D19: push    esi
0x503D1A: mov     esi, [esp+8+a4]
0x503D1E: push    edi
0x503D1F: mov     edi, [esp+0Ch+l]
0x503D23: lea     eax, [esp+0Ch+var_4]
0x503D27: push    eax; UInt16
0x503D28: mov     eax, [esp+10h+a3]
0x503D2C: push    edi; l
0x503D2D: push    ecx; a6
0x503D2E: mov     ecx, [esp+18h+arg_4]
0x503D32: push    edx; a5
0x503D33: mov     edx, [esp+1Ch+a1]
0x503D37: push    esi; a4
0x503D38: push    eax; a3
0x503D39: push    ecx; a2
0x503D3A: push    edx; a1
0x503D3B: mov     dword ptr [esp+2Ch+var_4], 0
0x503D43: call    Script_ExtractArgs
0x503D48: add     esp, 20h
0x503D4B: test    al, al
0x503D4D: jnz     short loc_503D53
0x503D4F: pop     edi
0x503D50: pop     esi
0x503D51: pop     ecx
0x503D52: retn
0x503D53: test    esi, esi
0x503D55: fldz
0x503D57: push    ebx
0x503D58: mov     ebx, [esp+10h+arg_18]
0x503D5C: fstp    qword ptr [ebx]
0x503D5E: jz      short loc_503D7A
0x503D60: test    edi, edi
0x503D62: jz      short loc_503D7A
0x503D64: mov     eax, dword ptr [esp+10h+var_4]
0x503D68: push    1
0x503D6A: push    eax
0x503D6B: mov     ecx, edi
0x503D6D: call    sub_4FB5F0
0x503D72: test    al, al
0x503D74: jz      short loc_503D7A
0x503D76: fld1
0x503D78: fstp    qword ptr [ebx]
0x503D7A: pop     ebx
0x503D7B: pop     edi
0x503D7C: mov     al, 1
0x503D7E: pop     esi
0x503D7F: pop     ecx
0x503D80: retn
