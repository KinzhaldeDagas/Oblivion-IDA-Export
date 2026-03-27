0x917A10: push    ebp
0x917A11: mov     ebp, esp
0x917A13: and     esp, 0FFFFFFF0h
0x917A16: sub     esp, 4Ch
0x917A19: push    esi
0x917A1A: mov     esi, ecx
0x917A1C: mov     ecx, [ebp+arg_0]
0x917A1F: lea     eax, [esi+20h]
0x917A22: push    eax
0x917A23: push    ecx
0x917A24: lea     ecx, [esp+58h+var_40]
0x917A28: call    sub_8B1F70
0x917A2D: mov     eax, [ebp+arg_8]
0x917A30: mov     ecx, [esi+10h]
0x917A33: mov     edx, [ecx]
0x917A35: push    eax
0x917A36: mov     eax, [ebp+arg_4]
0x917A39: push    eax
0x917A3A: lea     eax, [esp+58h+var_40]
0x917A3E: push    eax
0x917A3F: call    dword ptr [edx+0Ch]
0x917A42: pop     esi
0x917A43: mov     esp, ebp
0x917A45: pop     ebp
0x917A46: retn    0Ch
