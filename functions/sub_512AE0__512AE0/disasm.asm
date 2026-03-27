0x512AE0: sub     esp, 20Ch
0x512AE6: mov     eax, ds:0B30AACh
0x512AEB: xor     eax, esp
0x512AED: mov     [esp+20Ch+var_4], eax
0x512AF4: mov     edx, [esp+20Ch+a4]
0x512AFB: push    ebx
0x512AFC: mov     ebx, [esp+210h+l]
0x512B03: push    ebp
0x512B04: mov     ebp, [esp+214h+arg_1C]
0x512B0B: mov     ecx, [esp+214h+arg_4]
0x512B12: mov     eax, [esp+214h+a1]
0x512B19: push    esi
0x512B1A: mov     esi, [esp+218h+arg_C]
0x512B21: push    edi
0x512B22: mov     edi, [esp+21Ch+arg_10]
0x512B29: mov     [esp+21Ch+a3], ebp
0x512B2D: lea     ebp, [esp+21Ch+a2]
0x512B31: push    ebp
0x512B32: lea     ebp, [esp+220h+var_20C]
0x512B36: push    ebp; UInt16
0x512B37: push    ebx; l
0x512B38: push    edi; a6
0x512B39: push    esi; a5
0x512B3A: push    edx; a4
0x512B3B: mov     edx, [esp+234h+a3]
0x512B3F: push    edx; a3
0x512B40: push    ecx; a2
0x512B41: push    eax; a1
0x512B42: mov     dword ptr [esp+240h+var_20C], 0
0x512B4A: call    Script_ExtractArgs
0x512B4F: add     esp, 24h
0x512B52: test    al, al
0x512B54: pop     edi
0x512B55: pop     esi
0x512B56: pop     ebp
0x512B57: pop     ebx
0x512B58: jnz     short loc_512B6F
0x512B5A: mov     ecx, [esp+20Ch+var_4]
0x512B61: xor     ecx, esp
0x512B63: call    @__security_check_cookie@4; __security_check_cookie(x)
0x512B68: add     esp, 20Ch
0x512B6E: retn
0x512B6F: mov     eax, dword ptr [esp+20Ch+var_20C]
0x512B72: test    eax, eax
0x512B74: jz      short loc_512B91
0x512B76: push    0; a3
0x512B78: lea     ecx, [esp+210h+a2]
0x512B7C: push    ecx; a2
0x512B7D: lea     ecx, [eax+1Ch]; this
0x512B80: call    BSStringT_Set
0x512B85: mov     ecx, dword ptr [esp+20Ch+var_20C]
0x512B88: mov     edx, [ecx]
0x512B8A: mov     eax, [edx+40h]
0x512B8D: push    10h
0x512B8F: call    eax
0x512B91: mov     ecx, [esp+20Ch+var_4]
0x512B98: xor     ecx, esp
0x512B9A: mov     al, 1
0x512B9C: call    @__security_check_cookie@4; __security_check_cookie(x)
0x512BA1: add     esp, 20Ch
0x512BA7: retn
