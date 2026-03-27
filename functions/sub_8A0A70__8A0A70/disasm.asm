0x8A0A70: push    0FFFFFFFFh
0x8A0A72: push    offset SEH_8A0A70
0x8A0A77: mov     eax, large fs:0
0x8A0A7D: push    eax
0x8A0A7E: sub     esp, 214h
0x8A0A84: mov     eax, ds:0B30AACh
0x8A0A89: xor     eax, esp
0x8A0A8B: mov     [esp+220h+var_10], eax
0x8A0A92: push    ebx
0x8A0A93: push    ebp
0x8A0A94: push    esi
0x8A0A95: push    edi
0x8A0A96: mov     eax, ds:0B30AACh
0x8A0A9B: xor     eax, esp
0x8A0A9D: push    eax
0x8A0A9E: lea     eax, [esp+234h+var_C]
0x8A0AA5: mov     large fs:0, eax
0x8A0AAB: mov     esi, [esp+234h+arg_0]
0x8A0AB2: mov     ebp, ecx
0x8A0AB4: mov     eax, [ebp+0]
0x8A0AB7: mov     edx, [eax+8Ch]
0x8A0ABD: call    edx
0x8A0ABF: cmp     [esp+234h+arg_4], 0
0x8A0AC7: mov     ebx, eax
0x8A0AC9: jz      loc_8A0BD8
0x8A0ACF: test    ebx, ebx
0x8A0AD1: jz      short loc_8A0AD8
0x8A0AD3: mov     edi, [ebx+0Ch]
0x8A0AD6: jmp     short loc_8A0ADA
0x8A0AD8: xor     edi, edi
0x8A0ADA: test    edi, edi
0x8A0ADC: jz      loc_8A0BAC
0x8A0AE2: mov     ecx, edi
0x8A0AE4: call    sub_607840
0x8A0AE9: test    al, al
0x8A0AEB: jnz     short loc_8A0B0B
0x8A0AED: mov     eax, [ebp+0]
0x8A0AF0: mov     edx, [eax+88h]
0x8A0AF6: mov     ecx, ebp
0x8A0AF8: call    edx
0x8A0AFA: mov     eax, [eax+30h]
0x8A0AFD: movzx   ecx, word ptr [ebx+30h]
0x8A0B01: and     eax, 0FFFF0000h
0x8A0B06: or      eax, ecx
0x8A0B08: mov     [ebx+30h], eax
0x8A0B0B: cmp     dword ptr [esi+1Ch], 0
0x8A0B0F: ja      loc_8A0C03
0x8A0B15: mov     eax, [edi]
0x8A0B17: mov     edx, [eax+5Ch]
0x8A0B1A: push    esi
0x8A0B1B: mov     ecx, edi
0x8A0B1D: call    edx
0x8A0B1F: mov     eax, [edi]
0x8A0B21: mov     edx, [eax+58h]
0x8A0B24: mov     ecx, edi
0x8A0B26: call    edx
0x8A0B28: test    eax, eax
0x8A0B2A: jnz     loc_8A0C03
0x8A0B30: push    ecx
0x8A0B31: mov     eax, esp
0x8A0B33: mov     [esp+238h+var_214], esp
0x8A0B37: mov     byte ptr [eax], 1
0x8A0B3A: push    200h
0x8A0B3F: lea     eax, [esp+23Ch+var_210]
0x8A0B43: push    eax
0x8A0B44: lea     ecx, [esp+240h+var_220]
0x8A0B48: call    sub_8BBFB0
0x8A0B4D: push    offset aAConstraintIsB; "A Constraint is being added to the worl"...
0x8A0B52: lea     ecx, [esp+238h+var_220]
0x8A0B56: mov     [esp+238h+var_4], 0
0x8A0B61: call    sub_8BBDB0
0x8A0B66: mov     ecx, ds:0BA7FB0h
0x8A0B6C: mov     edx, [ecx]
0x8A0B6E: mov     edx, [edx+8]
0x8A0B71: push    2B0h
0x8A0B76: push    offset a_Bhkconstraint; ".\\bhkConstraint.cpp"
0x8A0B7B: lea     eax, [esp+23Ch+var_210]
0x8A0B7F: push    eax
0x8A0B80: push    234F24FCh
0x8A0B85: push    1
0x8A0B87: call    edx
0x8A0B89: lea     ecx, [esp+234h+var_220]
0x8A0B8D: mov     [esp+234h+var_4], 0FFFFFFFFh
0x8A0B98: call    sub_8BC000
0x8A0B9D: mov     eax, [edi]
0x8A0B9F: mov     edx, [eax+84h]
0x8A0BA5: push    esi
0x8A0BA6: mov     ecx, edi
0x8A0BA8: call    edx
0x8A0BAA: jmp     short loc_8A0C03
0x8A0BAC: test    esi, esi
0x8A0BAE: mov     bl, 1
0x8A0BB0: jz      short loc_8A0BC4
0x8A0BB2: mov     eax, [esi]
0x8A0BB4: mov     edx, [eax+58h]
0x8A0BB7: mov     ecx, esi
0x8A0BB9: call    edx
0x8A0BBB: test    eax, eax
0x8A0BBD: jz      short loc_8A0BC4
0x8A0BBF: mov     eax, [eax+34h]
0x8A0BC2: jmp     short loc_8A0BC6
0x8A0BC4: xor     eax, eax
0x8A0BC6: mov     edx, [ebp+0]
0x8A0BC9: push    eax
0x8A0BCA: mov     eax, [edx+84h]
0x8A0BD0: mov     ecx, ebp
0x8A0BD2: call    eax
0x8A0BD4: mov     al, bl
0x8A0BD6: jmp     short loc_8A0C05
0x8A0BD8: test    esi, esi
0x8A0BDA: jz      short loc_8A0BEE
0x8A0BDC: mov     edx, [esi]
0x8A0BDE: mov     eax, [edx+58h]
0x8A0BE1: mov     ecx, esi
0x8A0BE3: call    eax
0x8A0BE5: test    eax, eax
0x8A0BE7: jz      short loc_8A0BEE
0x8A0BE9: mov     eax, [eax+34h]
0x8A0BEC: jmp     short loc_8A0BF0
0x8A0BEE: xor     eax, eax
0x8A0BF0: cmp     ebx, eax
0x8A0BF2: jnz     short loc_8A0C03
0x8A0BF4: mov     edx, [ebp+0]
0x8A0BF7: mov     eax, [edx+84h]
0x8A0BFD: push    0
0x8A0BFF: mov     ecx, ebp
0x8A0C01: call    eax
0x8A0C03: xor     al, al
0x8A0C05: mov     ecx, dword ptr [esp+234h+var_C]
0x8A0C0C: mov     large fs:0, ecx
0x8A0C13: pop     ecx
0x8A0C14: pop     edi
0x8A0C15: pop     esi
0x8A0C16: pop     ebp
0x8A0C17: pop     ebx
0x8A0C18: mov     ecx, [esp+220h+var_10]
0x8A0C1F: xor     ecx, esp
0x8A0C21: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8A0C26: add     esp, 220h
0x8A0C2C: retn    8
