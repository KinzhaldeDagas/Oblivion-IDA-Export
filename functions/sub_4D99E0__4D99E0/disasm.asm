0x4D99E0: push    ebp
0x4D99E1: mov     ebp, esp
0x4D99E3: and     esp, 0FFFFFFF0h
0x4D99E6: sub     esp, 28h
0x4D99E9: mov     eax, ds:0B30AACh
0x4D99EE: xor     eax, esp
0x4D99F0: mov     [esp+28h+var_4], eax
0x4D99F4: mov     eax, [ebp+arg_0]
0x4D99F7: fld     dword ptr [eax]
0x4D99F9: push    esi
0x4D99FA: fstp    [esp+2Ch+var_20]
0x4D99FE: mov     esi, ecx
0x4D9A00: test    esi, esi
0x4D9A02: fld     dword ptr [eax+4]
0x4D9A05: fstp    [esp+2Ch+var_1C]
0x4D9A09: push    edi
0x4D9A0A: fld     dword ptr [eax+8]
0x4D9A0D: fstp    [esp+30h+var_18]
0x4D9A11: jz      short loc_4D9A3C
0x4D9A13: mov     edi, [esi+8]
0x4D9A16: test    edi, edi
0x4D9A18: jz      short loc_4D9A3C
0x4D9A1A: call    sub_89F570
0x4D9A1F: mov     ecx, edi
0x4D9A21: call    sub_8A6410
0x4D9A26: mov     ecx, [edi+50h]
0x4D9A29: mov     eax, [ecx]
0x4D9A2B: mov     eax, [eax+58h]
0x4D9A2E: lea     edx, [esp+30h+var_20]
0x4D9A32: push    edx
0x4D9A33: call    eax
0x4D9A35: mov     ecx, esi
0x4D9A37: call    sub_89F570
0x4D9A3C: mov     ecx, [esp+30h+var_4]
0x4D9A40: pop     edi
0x4D9A41: pop     esi
0x4D9A42: xor     ecx, esp
0x4D9A44: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4D9A49: mov     esp, ebp
0x4D9A4B: pop     ebp
0x4D9A4C: retn    4
