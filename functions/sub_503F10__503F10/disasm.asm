0x503F10: push    ecx
0x503F11: mov     ecx, [esp+4+arg_10]
0x503F15: mov     edx, [esp+4+arg_C]
0x503F19: push    esi
0x503F1A: mov     esi, [esp+8+a4]
0x503F1E: push    edi
0x503F1F: mov     edi, [esp+0Ch+l]
0x503F23: lea     eax, [esp+0Ch+var_4]
0x503F27: push    eax; UInt16
0x503F28: mov     eax, [esp+10h+a3]
0x503F2C: push    edi; l
0x503F2D: push    ecx; a6
0x503F2E: mov     ecx, [esp+18h+arg_4]
0x503F32: push    edx; a5
0x503F33: mov     edx, [esp+1Ch+a1]
0x503F37: push    esi; a4
0x503F38: push    eax; a3
0x503F39: push    ecx; a2
0x503F3A: push    edx; a1
0x503F3B: mov     dword ptr [esp+2Ch+var_4], 0
0x503F43: call    Script_ExtractArgs
0x503F48: add     esp, 20h
0x503F4B: test    al, al
0x503F4D: jnz     short loc_503F53
0x503F4F: pop     edi
0x503F50: pop     esi
0x503F51: pop     ecx
0x503F52: retn
0x503F53: test    esi, esi
0x503F55: fldz
0x503F57: push    ebx
0x503F58: mov     ebx, [esp+10h+arg_18]
0x503F5C: fstp    qword ptr [ebx]
0x503F5E: jz      short loc_503F7A
0x503F60: test    edi, edi
0x503F62: jz      short loc_503F7A
0x503F64: mov     eax, dword ptr [esp+10h+var_4]
0x503F68: push    4
0x503F6A: push    eax
0x503F6B: mov     ecx, edi
0x503F6D: call    sub_4FB5F0
0x503F72: test    al, al
0x503F74: jz      short loc_503F7A
0x503F76: fld1
0x503F78: fstp    qword ptr [ebx]
0x503F7A: pop     ebx
0x503F7B: pop     edi
0x503F7C: mov     al, 1
0x503F7E: pop     esi
0x503F7F: pop     ecx
0x503F80: retn
