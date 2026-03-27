0x92ADC0: push    ebp
0x92ADC1: mov     ebp, esp
0x92ADC3: and     esp, 0FFFFFFF0h
0x92ADC6: sub     esp, 234h
0x92ADCC: mov     eax, ds:0B30AACh
0x92ADD1: push    ebx
0x92ADD2: mov     [esp+238h+var_4], eax
0x92ADD9: push    esi
0x92ADDA: mov     esi, [ebp+arg_8]
0x92ADDD: mov     eax, 7F7FFFFFh
0x92ADE2: mov     [esi], eax
0x92ADE4: mov     [esi+4], eax
0x92ADE7: mov     [esi+8], eax
0x92ADEA: push    edi
0x92ADEB: mov     edi, ecx
0x92ADED: xor     ecx, ecx
0x92ADEF: mov     [esi+0Ch], ecx
0x92ADF2: mov     eax, 0FF7FFFFFh
0x92ADF7: mov     [esi+10h], eax
0x92ADFA: mov     [esi+14h], eax
0x92ADFD: mov     [esi+18h], eax
0x92AE00: mov     [esi+1Ch], ecx
0x92AE03: mov     eax, [edi]
0x92AE05: mov     ecx, edi
0x92AE07: call    dword ptr [eax+20h]
0x92AE0A: mov     ebx, eax
0x92AE0C: cmp     ebx, 0FFFFFFFFh
0x92AE0F: jz      short loc_92AE5F
0x92AE11: mov     edx, [edi]
0x92AE13: lea     eax, [esp+240h+var_210]
0x92AE17: push    eax
0x92AE18: push    ebx
0x92AE19: mov     ecx, edi
0x92AE1B: call    dword ptr [edx+28h]
0x92AE1E: mov     edx, [eax]
0x92AE20: lea     ecx, [esp+240h+var_234+4]
0x92AE24: push    ecx
0x92AE25: mov     ecx, [ebp+arg_4]
0x92AE28: push    ecx
0x92AE29: mov     ecx, [ebp+arg_0]
0x92AE2C: push    ecx
0x92AE2D: mov     ecx, eax
0x92AE2F: call    dword ptr [edx+0Ch]
0x92AE32: movaps  xmm0, xmmword ptr [esp+240h+var_234+4]
0x92AE37: movaps  xmm1, xmmword ptr [esi]
0x92AE3A: minps   xmm1, xmm0
0x92AE3D: movaps  xmm0, [esp+240h+var_220]
0x92AE42: movaps  xmmword ptr [esi], xmm1
0x92AE45: movaps  xmm1, xmmword ptr [esi+10h]
0x92AE49: maxps   xmm1, xmm0
0x92AE4C: movaps  xmmword ptr [esi+10h], xmm1
0x92AE50: mov     edx, [edi]
0x92AE52: push    ebx
0x92AE53: mov     ecx, edi
0x92AE55: call    dword ptr [edx+24h]
0x92AE58: mov     ebx, eax
0x92AE5A: cmp     ebx, 0FFFFFFFFh
0x92AE5D: jnz     short loc_92AE11
0x92AE5F: mov     ecx, [esp+240h+var_4]
0x92AE66: call    @__security_check_cookie@4; __security_check_cookie(x)
0x92AE6B: pop     edi
0x92AE6C: pop     esi
0x92AE6D: pop     ebx
0x92AE6E: mov     esp, ebp
0x92AE70: pop     ebp
0x92AE71: retn    0Ch
