0x535BE0: push    ebp
0x535BE1: mov     ebp, esp
0x535BE3: and     esp, 0FFFFFFF0h
0x535BE6: sub     esp, 154h
0x535BEC: mov     eax, ds:0B30AACh
0x535BF1: xor     eax, esp
0x535BF3: mov     [esp+154h+var_4], eax
0x535BFA: push    ebx
0x535BFB: mov     ebx, [ebp+arg_4]
0x535BFE: test    ebx, ebx
0x535C00: push    esi
0x535C01: push    edi
0x535C02: jz      loc_535DB6
0x535C08: push    ebx
0x535C09: call    sub_47FAC0
0x535C0E: add     esp, 4
0x535C11: test    eax, eax
0x535C13: jz      loc_535DB6
0x535C19: mov     edi, [eax+10h]
0x535C1C: test    edi, edi
0x535C1E: jz      loc_535DB6
0x535C24: xor     esi, esi
0x535C26: cmp     ds:0B36598h, esi
0x535C2C: jnz     short loc_535C36
0x535C2E: cmp     ds:0B36594h, esi
0x535C34: jz      short loc_535C65
0x535C36: mov     eax, offset dword_B36594
0x535C3B: jmp     short loc_535C40
0x535C3D: align 10h
0x535C40: mov     ecx, [eax+4]
0x535C43: test    ecx, ecx
0x535C45: jnz     short loc_535C4B
0x535C47: cmp     [eax], ecx
0x535C49: jz      short loc_535C61
0x535C4B: test    esi, esi
0x535C4D: jnz     short loc_535CA7
0x535C4F: mov     eax, [eax]
0x535C51: test    eax, eax
0x535C53: jz      short loc_535C5B
0x535C55: cmp     [eax], edi
0x535C57: jnz     short loc_535C5B
0x535C59: mov     esi, eax
0x535C5B: mov     eax, ecx
0x535C5D: test    eax, eax
0x535C5F: jnz     short loc_535C40
0x535C61: test    esi, esi
0x535C63: jnz     short loc_535CA7
0x535C65: push    10h; Size
0x535C67: call    FormHeapAlloc
0x535C6C: add     esp, 4
0x535C6F: test    eax, eax
0x535C71: jz      short loc_535C84
0x535C73: xor     ecx, ecx
0x535C75: mov     [eax], ecx
0x535C77: mov     [eax+4], ecx
0x535C7A: mov     [eax+8], ecx
0x535C7D: mov     [eax+0Ch], ecx
0x535C80: mov     esi, eax
0x535C82: jmp     short loc_535C86
0x535C84: xor     esi, esi
0x535C86: mov     ecx, edi
0x535C88: mov     [esi], edi
0x535C8A: mov     [esi+4], ebx
0x535C8D: call    sub_535AC0
0x535C92: fstp    dword ptr [esi+8]
0x535C95: push    esi
0x535C96: mov     ecx, offset dword_B36594
0x535C9B: mov     dword ptr [esi+0Ch], 0
0x535CA2: call    BSSimpleList_PushFront
0x535CA7: fld     dword ptr [esi+8]
0x535CAA: mov     eax, [ebp+arg_0]
0x535CAD: movaps  xmm0, xmmword ptr [eax]
0x535CB0: fstp    dword ptr [esp+160h+var_148]
0x535CB4: push    offset flt_B2F080
0x535CB9: lea     ecx, [esp+164h+var_110]
0x535CBD: movaps  [esp+164h+var_E0], xmm0
0x535CC5: call    sub_8B1DD0
0x535CCA: mov     edx, [edi]
0x535CCC: mov     edx, [edx+0ACh]
0x535CD2: lea     eax, [esp+160h+var_D0]
0x535CD9: push    eax
0x535CDA: mov     ecx, edi
0x535CDC: call    edx
0x535CDE: lea     eax, [esp+160h+var_D0]
0x535CE5: push    eax
0x535CE6: lea     ecx, [esp+164h+var_90]
0x535CED: call    sub_8B1F10
0x535CF2: lea     ecx, [esp+160h+var_110]
0x535CF6: push    ecx
0x535CF7: lea     edx, [esp+164h+var_90]
0x535CFE: push    edx
0x535CFF: lea     ecx, [esp+168h+var_50]
0x535D06: call    sub_8B1F70
0x535D0B: movss   xmm1, dword ptr ds:0B370D8h
0x535D13: mov     eax, [edi]
0x535D15: mov     edx, [eax+0A4h]
0x535D1B: xorps   xmm0, xmm0
0x535D1E: movss   xmm0, xmm1
0x535D22: movaps  xmm1, xmmword ptr [esp+160h+var_24+4]
0x535D2A: lea     ecx, [esp+160h+var_148+8]
0x535D2E: shufps  xmm0, xmm0, 0
0x535D32: push    ecx
0x535D33: mulps   xmm0, xmm1
0x535D36: mov     ecx, edi
0x535D38: movaps  [esp+164h+anonymous_0], xmm0
0x535D3D: call    edx
0x535D3F: fld     dword ptr ds:0B370D8h
0x535D45: fadd    dword ptr [esp+160h+var_148]
0x535D49: movss   xmm1, dword ptr [esp+160h+var_148]
0x535D4F: fld1
0x535D51: xorps   xmm0, xmm0
0x535D54: fdivrp  st(1), st
0x535D56: movss   xmm0, xmm1
0x535D5A: movaps  xmm1, [esp+160h+var_148+8]
0x535D5F: shufps  xmm0, xmm0, 0
0x535D63: mulps   xmm0, xmm1
0x535D66: xorps   xmm1, xmm1
0x535D69: movaps  [esp+160h+var_148+8], xmm0
0x535D6E: addps   xmm0, [esp+160h+anonymous_0]
0x535D73: lea     eax, [esp+160h+var_138+8]
0x535D77: push    eax
0x535D78: fstp    dword ptr [esp+164h+var_148+4]
0x535D7C: movss   xmm2, dword ptr [esp+164h+var_148+4]
0x535D82: movss   xmm1, xmm2
0x535D86: movaps  xmm2, xmm1
0x535D89: shufps  xmm2, xmm1, 0
0x535D8D: mulps   xmm2, xmm0
0x535D90: movaps  xmmword ptr [esp+164h+var_138+8], xmm2
0x535D95: mov     ecx, [edi+8]
0x535D98: call    sub_8A9C60
0x535D9D: mov     ecx, [edi+8]
0x535DA0: call    sub_8A6410
0x535DA5: fld     dword ptr ds:0B370D8h
0x535DAB: fadd    dword ptr [esp+160h+var_148]
0x535DAF: add     dword ptr [esi+0Ch], 1
0x535DB3: fstp    dword ptr [esi+8]
0x535DB6: mov     ecx, [esp+160h+var_4]
0x535DBD: pop     edi
0x535DBE: pop     esi
0x535DBF: pop     ebx
0x535DC0: xor     ecx, esp
0x535DC2: call    @__security_check_cookie@4; __security_check_cookie(x)
0x535DC7: mov     esp, ebp
0x535DC9: pop     ebp
0x535DCA: retn
