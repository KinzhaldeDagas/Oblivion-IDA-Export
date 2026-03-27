0x95DC20: sub     esp, 0Ch
0x95DC23: push    ebx
0x95DC24: mov     ebx, [esp+10h+arg_0]
0x95DC28: push    esi
0x95DC29: push    edi
0x95DC2A: mov     edi, [esp+18h+arg_4]
0x95DC2E: mov     esi, ecx
0x95DC30: lea     eax, [ebx+4]
0x95DC33: push    eax
0x95DC34: lea     ecx, [esp+1Ch+var_C]
0x95DC38: push    ecx
0x95DC39: mov     ecx, edi
0x95DC3B: call    sub_7101F0
0x95DC40: fld     dword ptr [edi+28h]
0x95DC43: fmul    [esp+18h+var_8]
0x95DC47: mov     edx, [esp+18h+var_C]
0x95DC4B: fld     dword ptr [edi+24h]
0x95DC4E: mov     eax, [esp+18h+var_8]
0x95DC52: fmul    [esp+18h+var_C]
0x95DC56: mov     ecx, [esp+18h+var_4]
0x95DC5A: faddp   st(1), st
0x95DC5C: fld     dword ptr [edi+2Ch]
0x95DC5F: fmul    [esp+18h+var_4]
0x95DC63: faddp   st(1), st
0x95DC65: fstp    [esp+18h+arg_0]
0x95DC69: fld     [esp+18h+arg_0]
0x95DC6D: fld     dword ptr [edi+30h]
0x95DC70: pop     edi
0x95DC71: fmul    dword ptr [ebx+10h]
0x95DC74: mov     [esi+4], edx
0x95DC77: mov     [esi+8], eax
0x95DC7A: mov     [esi+0Ch], ecx
0x95DC7D: faddp   st(1), st
0x95DC7F: fstp    [esp+14h+arg_0]
0x95DC83: fld     [esp+14h+arg_0]
0x95DC87: fstp    dword ptr [esi+10h]
0x95DC8A: pop     esi
0x95DC8B: pop     ebx
0x95DC8C: add     esp, 0Ch
0x95DC8F: retn    8
