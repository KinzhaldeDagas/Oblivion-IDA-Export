0x89EAE0: push    ebp
0x89EAE1: mov     ebp, esp
0x89EAE3: and     esp, 0FFFFFFF0h
0x89EAE6: sub     esp, 84h
0x89EAEC: mov     eax, ds:0B30AACh
0x89EAF1: xor     eax, esp
0x89EAF3: mov     [esp+84h+var_4], eax
0x89EAFA: push    ebx
0x89EAFB: push    esi
0x89EAFC: push    edi
0x89EAFD: mov     edi, ecx
0x89EAFF: mov     ebx, [edi+10h]
0x89EB02: test    ebx, ebx
0x89EB04: mov     [esp+90h+var_68], edi
0x89EB08: jz      loc_89EC9D
0x89EB0E: mov     esi, [ebx+8]
0x89EB11: test    esi, esi
0x89EB13: jz      loc_89EC9D
0x89EB19: mov     ecx, [esi+50h]
0x89EB1C: mov     eax, [ecx]
0x89EB1E: mov     edx, [eax+8]
0x89EB21: call    edx
0x89EB23: cmp     eax, 7
0x89EB26: jnz     short loc_89EB32
0x89EB28: cmp     dword ptr [esi+8], 0
0x89EB2C: jnz     loc_89EC9D
0x89EB32: mov     esi, [ebx+8]
0x89EB35: mov     ecx, edi
0x89EB37: call    sub_452A60
0x89EB3C: test    esi, esi
0x89EB3E: jz      loc_89EC9D
0x89EB44: test    eax, eax
0x89EB46: jz      loc_89EC9D
0x89EB4C: lea     esi, [eax+64h]
0x89EB4F: mov     ecx, 0Dh
0x89EB54: lea     edi, [esp+90h+var_64]
0x89EB58: lea     eax, [esp+90h+var_64]
0x89EB5C: rep movsd
0x89EB5E: push    eax
0x89EB5F: lea     ecx, [esp+94h+var_78]
0x89EB63: call    sub_7150F0
0x89EB68: mov     ecx, [esp+90h+var_68]
0x89EB6C: mov     dl, [ecx+0Ch]
0x89EB6F: shr     dl, 6
0x89EB72: test    dl, 1
0x89EB75: jz      short loc_89EBD7
0x89EB77: lea     eax, [esp+90h+var_40]
0x89EB7B: push    eax
0x89EB7C: lea     ecx, [esp+94h+var_20]
0x89EB80: push    ecx
0x89EB81: call    sub_4529E0
0x89EB86: fld     [esp+98h+var_74]
0x89EB8A: fstp    [esp+98h+var_30]
0x89EB8E: add     esp, 8
0x89EB91: fld     [esp+90h+var_70]
0x89EB95: lea     ecx, [esp+90h+var_30]
0x89EB99: fstp    [esp+90h+var_2C]
0x89EB9D: fld     [esp+90h+var_6C]
0x89EBA1: fstp    [esp+90h+var_28]
0x89EBA5: fld     [esp+90h+var_78]
0x89EBA9: fstp    [esp+90h+var_24]
0x89EBAD: call    sub_4D6830
0x89EBB2: mov     ecx, offset stru_BA7B00; lpCriticalSection
0x89EBB7: call    sub_43F2E0
0x89EBBC: mov     edx, [ebx]
0x89EBBE: mov     edx, [edx+0A0h]
0x89EBC4: lea     eax, [esp+90h+var_30]
0x89EBC8: push    eax
0x89EBC9: lea     ecx, [esp+94h+var_20]
0x89EBCD: push    ecx
0x89EBCE: mov     ecx, ebx
0x89EBD0: call    edx
0x89EBD2: jmp     loc_89EC93
0x89EBD7: call    sub_89E910
0x89EBDC: test    al, al
0x89EBDE: jz      short loc_89EC06
0x89EBE0: lea     eax, [esp+90h+var_78]
0x89EBE4: push    eax
0x89EBE5: lea     ecx, [esp+94h+var_40]
0x89EBE9: push    ecx
0x89EBEA: mov     ecx, ebx
0x89EBEC: call    sub_8A3900
0x89EBF1: pop     edi
0x89EBF2: pop     esi
0x89EBF3: pop     ebx
0x89EBF4: mov     ecx, [esp+84h+var_4]
0x89EBFB: xor     ecx, esp
0x89EBFD: call    @__security_check_cookie@4; __security_check_cookie(x)
0x89EC02: mov     esp, ebp
0x89EC04: pop     ebp
0x89EC05: retn
0x89EC06: mov     ecx, ebx
0x89EC08: call    sub_4B6D90
0x89EC0D: cmp     eax, 6
0x89EC10: jge     short loc_89EC38
0x89EC12: lea     edx, [esp+90h+var_78]
0x89EC16: push    edx
0x89EC17: lea     eax, [esp+94h+var_40]
0x89EC1B: push    eax
0x89EC1C: mov     ecx, ebx
0x89EC1E: call    sub_8A3900
0x89EC23: pop     edi
0x89EC24: pop     esi
0x89EC25: pop     ebx
0x89EC26: mov     ecx, [esp+84h+var_4]
0x89EC2D: xor     ecx, esp
0x89EC2F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x89EC34: mov     esp, ebp
0x89EC36: pop     ebp
0x89EC37: retn
0x89EC38: lea     ecx, [esp+90h+var_40]
0x89EC3C: push    ecx
0x89EC3D: lea     edx, [esp+94h+var_20]
0x89EC41: push    edx
0x89EC42: call    sub_4529E0
0x89EC47: fld     [esp+98h+var_74]
0x89EC4B: fstp    [esp+98h+var_30]
0x89EC4F: add     esp, 8
0x89EC52: fld     [esp+90h+var_70]
0x89EC56: lea     ecx, [esp+90h+var_30]
0x89EC5A: fstp    [esp+90h+var_2C]
0x89EC5E: fld     [esp+90h+var_6C]
0x89EC62: fstp    [esp+90h+var_28]
0x89EC66: fld     [esp+90h+var_78]
0x89EC6A: fstp    [esp+90h+var_24]
0x89EC6E: call    sub_4D6830
0x89EC73: mov     ecx, offset stru_BA7B00; lpCriticalSection
0x89EC78: call    sub_43F2E0
0x89EC7D: mov     eax, [ebx]
0x89EC7F: mov     eax, [eax+0A0h]
0x89EC85: lea     ecx, [esp+90h+var_30]
0x89EC89: push    ecx
0x89EC8A: lea     edx, [esp+94h+var_20]
0x89EC8E: push    edx
0x89EC8F: mov     ecx, ebx
0x89EC91: call    eax
0x89EC93: mov     ecx, offset stru_BA7B00; lpCriticalSection
0x89EC98: call    sub_43F300
0x89EC9D: mov     ecx, [esp+90h+var_4]
0x89ECA4: pop     edi
0x89ECA5: pop     esi
0x89ECA6: pop     ebx
0x89ECA7: xor     ecx, esp
0x89ECA9: call    @__security_check_cookie@4; __security_check_cookie(x)
0x89ECAE: mov     esp, ebp
0x89ECB0: pop     ebp
0x89ECB1: retn
