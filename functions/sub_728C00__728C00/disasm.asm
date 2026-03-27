0x728C00: sub     esp, 18h
0x728C03: push    ebx
0x728C04: xor     ebx, ebx
0x728C06: cmp     [ecx+3Ch], bl
0x728C09: jz      short loc_728C72
0x728C0B: push    esi
0x728C0C: mov     esi, [ecx+34h]
0x728C0F: cmp     esi, ebx
0x728C11: mov     [esp+20h+var_14], ebx
0x728C15: mov     [esp+20h+var_C], ebx
0x728C19: mov     [esp+20h+var_18], ebx
0x728C1D: jz      short loc_728C5D
0x728C1F: mov     eax, [esi]
0x728C21: mov     edx, [eax+4Ch]
0x728C24: mov     ecx, esi
0x728C26: call    edx
0x728C28: test    al, al
0x728C2A: jz      short loc_728C5D
0x728C2C: test    byte ptr [esi+2Ch], 1
0x728C30: jz      short loc_728C5D
0x728C32: lea     eax, [esp+20h+var_14]
0x728C36: push    eax
0x728C37: lea     ecx, [esp+24h+var_10]
0x728C3B: push    ecx
0x728C3C: lea     edx, [esp+28h+var_8]
0x728C40: push    edx
0x728C41: lea     eax, [esp+2Ch+var_C]
0x728C45: push    eax
0x728C46: lea     ecx, [esp+30h+var_4]
0x728C4A: push    ecx
0x728C4B: lea     edx, [esp+34h+var_18]
0x728C4F: push    edx
0x728C50: push    1
0x728C52: mov     ecx, esi
0x728C54: mov     [esp+3Ch+var_10], ebx
0x728C58: call    sub_726320
0x728C5D: mov     eax, [esp+20h+arg_0]
0x728C61: mov     ecx, [esp+20h+var_18]
0x728C65: mov     edx, [esp+20h+var_14]
0x728C69: mov     [eax], ecx
0x728C6B: mov     [eax+4], edx
0x728C6E: mov     [eax+8], bl
0x728C71: pop     esi
0x728C72: pop     ebx
0x728C73: add     esp, 18h
0x728C76: retn    4
