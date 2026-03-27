0x8BCF10: push    ecx
0x8BCF11: push    ebx
0x8BCF12: mov     ebx, [esp+8+arg_0]
0x8BCF16: push    esi
0x8BCF17: push    edi
0x8BCF18: push    ebx
0x8BCF19: mov     esi, ecx
0x8BCF1B: call    sub_6FE000
0x8BCF20: mov     eax, [esi+1Ch]
0x8BCF23: push    1
0x8BCF25: lea     ecx, [esp+14h+var_4]
0x8BCF29: push    ecx
0x8BCF2A: mov     [esp+18h+arg_0], eax
0x8BCF2E: mov     eax, [ebx+220h]
0x8BCF34: push    4
0x8BCF36: lea     edx, [esp+1Ch+arg_0]
0x8BCF3A: push    edx
0x8BCF3B: push    eax
0x8BCF3C: mov     eax, [eax+8]
0x8BCF3F: mov     [esp+24h+var_4], 4
0x8BCF47: call    eax
0x8BCF49: xor     edi, edi
0x8BCF4B: add     esp, 14h
0x8BCF4E: cmp     [esp+10h+arg_0], edi
0x8BCF52: jbe     short loc_8BCF71
0x8BCF54: mov     ecx, [esi+10h]
0x8BCF57: mov     eax, [ecx+edi*4]
0x8BCF5A: test    eax, eax
0x8BCF5C: jz      short loc_8BCF68
0x8BCF5E: mov     edx, [ebx]
0x8BCF60: push    eax
0x8BCF61: mov     eax, [edx+2Ch]
0x8BCF64: mov     ecx, ebx
0x8BCF66: call    eax
0x8BCF68: add     edi, 1
0x8BCF6B: cmp     edi, [esp+10h+arg_0]
0x8BCF6F: jb      short loc_8BCF54
0x8BCF71: pop     edi
0x8BCF72: pop     esi
0x8BCF73: pop     ebx
0x8BCF74: pop     ecx
0x8BCF75: retn    4
