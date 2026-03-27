0x502A40: push    ecx
0x502A41: mov     ecx, [esp+4+l]
0x502A45: mov     edx, [esp+4+arg_10]
0x502A49: push    esi
0x502A4A: mov     esi, [esp+8+a4]
0x502A4E: lea     eax, [esp+8+var_4]
0x502A52: push    eax; UInt16
0x502A53: mov     eax, [esp+0Ch+arg_C]
0x502A57: push    ecx; l
0x502A58: mov     ecx, [esp+10h+a3]
0x502A5C: push    edx; a6
0x502A5D: mov     edx, [esp+14h+arg_4]
0x502A61: push    eax; a5
0x502A62: mov     eax, [esp+18h+a1]
0x502A66: push    esi; a4
0x502A67: push    ecx; a3
0x502A68: push    edx; a2
0x502A69: push    eax; a1
0x502A6A: mov     dword ptr [esp+28h+var_4], 0
0x502A72: call    Script_ExtractArgs
0x502A77: add     esp, 20h
0x502A7A: test    al, al
0x502A7C: jnz     short loc_502A81
0x502A7E: pop     esi
0x502A7F: pop     ecx
0x502A80: retn
0x502A81: mov     ecx, [esp+8+arg_18]
0x502A85: mov     edx, dword ptr [esp+8+var_4]
0x502A89: push    ecx
0x502A8A: push    0
0x502A8C: push    edx
0x502A8D: push    esi
0x502A8E: call    sub_4F6640
0x502A93: add     esp, 10h
0x502A96: pop     esi
0x502A97: pop     ecx
0x502A98: retn
