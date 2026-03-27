0x503E10: push    ecx
0x503E11: mov     ecx, [esp+4+arg_10]
0x503E15: mov     edx, [esp+4+arg_C]
0x503E19: push    esi
0x503E1A: mov     esi, [esp+8+a4]
0x503E1E: push    edi
0x503E1F: mov     edi, [esp+0Ch+l]
0x503E23: lea     eax, [esp+0Ch+var_4]
0x503E27: push    eax; UInt16
0x503E28: mov     eax, [esp+10h+a3]
0x503E2C: push    edi; l
0x503E2D: push    ecx; a6
0x503E2E: mov     ecx, [esp+18h+arg_4]
0x503E32: push    edx; a5
0x503E33: mov     edx, [esp+1Ch+a1]
0x503E37: push    esi; a4
0x503E38: push    eax; a3
0x503E39: push    ecx; a2
0x503E3A: push    edx; a1
0x503E3B: mov     dword ptr [esp+2Ch+var_4], 0
0x503E43: call    Script_ExtractArgs
0x503E48: add     esp, 20h
0x503E4B: test    al, al
0x503E4D: jnz     short loc_503E53
0x503E4F: pop     edi
0x503E50: pop     esi
0x503E51: pop     ecx
0x503E52: retn
0x503E53: test    esi, esi
0x503E55: fldz
0x503E57: push    ebx
0x503E58: mov     ebx, [esp+10h+arg_18]
0x503E5C: fstp    qword ptr [ebx]
0x503E5E: jz      short loc_503E7A
0x503E60: test    edi, edi
0x503E62: jz      short loc_503E7A
0x503E64: mov     eax, dword ptr [esp+10h+var_4]
0x503E68: push    2
0x503E6A: push    eax
0x503E6B: mov     ecx, edi
0x503E6D: call    sub_4FB5F0
0x503E72: test    al, al
0x503E74: jz      short loc_503E7A
0x503E76: fld1
0x503E78: fstp    qword ptr [ebx]
0x503E7A: pop     ebx
0x503E7B: pop     edi
0x503E7C: mov     al, 1
0x503E7E: pop     esi
0x503E7F: pop     ecx
0x503E80: retn
