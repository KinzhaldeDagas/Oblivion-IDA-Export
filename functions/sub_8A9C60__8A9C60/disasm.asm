0x8A9C60: push    ebp
0x8A9C61: mov     ebp, esp
0x8A9C63: and     esp, 0FFFFFFF0h
0x8A9C66: sub     esp, 1Ch
0x8A9C69: mov     edx, [ebp+arg_0]
0x8A9C6C: push    esi
0x8A9C6D: mov     esi, ecx
0x8A9C6F: mov     ecx, [esi+50h]
0x8A9C72: mov     eax, [ecx]
0x8A9C74: push    edx
0x8A9C75: call    dword ptr [eax+40h]
0x8A9C78: mov     ecx, [esi+14h]
0x8A9C7B: lea     eax, [esp+20h+var_10]
0x8A9C7F: push    eax
0x8A9C80: push    esi
0x8A9C81: call    sub_8A9970
0x8A9C86: add     esp, 8
0x8A9C89: pop     esi
0x8A9C8A: mov     esp, ebp
0x8A9C8C: pop     ebp
0x8A9C8D: retn    4
