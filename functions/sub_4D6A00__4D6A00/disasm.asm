0x4D6A00: push    ebp
0x4D6A01: mov     ebp, esp
0x4D6A03: and     esp, 0FFFFFFF0h
0x4D6A06: sub     esp, 2Ch
0x4D6A09: mov     eax, ds:0B30AACh
0x4D6A0E: xor     eax, esp
0x4D6A10: mov     [esp+2Ch+var_4], eax
0x4D6A14: mov     eax, [ebp+arg_0]
0x4D6A17: fld     dword ptr [eax+4]
0x4D6A1A: push    esi
0x4D6A1B: fstp    [esp+30h+var_20]
0x4D6A1F: mov     esi, ecx
0x4D6A21: fld     dword ptr [eax+8]
0x4D6A24: lea     ecx, [esp+30h+var_20]
0x4D6A28: fstp    [esp+30h+var_1C]
0x4D6A2C: fld     dword ptr [eax+0Ch]
0x4D6A2F: fstp    [esp+30h+var_18]
0x4D6A33: fld     dword ptr [eax]
0x4D6A35: fstp    [esp+30h+var_14]
0x4D6A39: call    sub_4D6830
0x4D6A3E: mov     eax, [esi]
0x4D6A40: mov     edx, [eax+98h]
0x4D6A46: lea     ecx, [esp+30h+var_20]
0x4D6A4A: push    ecx
0x4D6A4B: mov     ecx, esi
0x4D6A4D: call    edx
0x4D6A4F: mov     ecx, [esp+30h+var_4]
0x4D6A53: pop     esi
0x4D6A54: xor     ecx, esp
0x4D6A56: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4D6A5B: mov     esp, ebp
0x4D6A5D: pop     ebp
0x4D6A5E: retn    4
