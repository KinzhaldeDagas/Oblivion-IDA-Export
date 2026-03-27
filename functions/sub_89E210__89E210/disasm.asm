0x89E210: sub     esp, 28h
0x89E213: mov     eax, ds:0B30AACh
0x89E218: xor     eax, esp
0x89E21A: mov     [esp+28h+var_4], eax
0x89E21E: push    ebx
0x89E21F: push    esi
0x89E220: mov     esi, [esp+30h+arg_0]
0x89E224: push    edi
0x89E225: push    esi
0x89E226: mov     edi, ecx
0x89E228: call    sub_89DA00
0x89E22D: mov     eax, ds:0BA7D10h
0x89E232: push    eax; ArgList
0x89E233: call    TESOutput_PrintString
0x89E238: movzx   ebx, word ptr [esi+0Ah]
0x89E23C: movzx   ecx, word ptr [esi+8]
0x89E240: add     esp, 4
0x89E243: cmp     ebx, ecx
0x89E245: mov     [esp+34h+var_28], eax
0x89E249: jb      short loc_89E259
0x89E24B: movzx   edx, word ptr [esi+0Eh]
0x89E24F: add     edx, ebx
0x89E251: push    edx
0x89E252: mov     ecx, esi
0x89E254: call    NiTArray_SetSize
0x89E259: lea     eax, [esp+34h+var_28]
0x89E25D: push    eax
0x89E25E: push    ebx
0x89E25F: mov     ecx, esi
0x89E261: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x89E266: test    edi, edi
0x89E268: jz      short loc_89E276
0x89E26A: mov     edi, [edi+8]
0x89E26D: test    edi, edi
0x89E26F: jz      short loc_89E276
0x89E271: mov     edi, [edi+18h]
0x89E274: jmp     short loc_89E278
0x89E276: xor     edi, edi
0x89E278: push    edi
0x89E279: lea     ecx, [esp+38h+var_24]
0x89E27D: push    offset a0x08x; "0x%08X"
0x89E282: push    ecx
0x89E283: call    __sprintf
0x89E288: lea     edx, [esp+40h+var_24]
0x89E28C: push    edx; int
0x89E28D: push    offset aHkrigidbody; "hkRigidBody"
0x89E292: call    TESOutput_PrintLabeledString
0x89E297: movzx   edi, word ptr [esi+0Ah]
0x89E29B: mov     [esp+48h+var_28], eax
0x89E29F: movzx   eax, word ptr [esi+8]
0x89E2A3: add     esp, 14h
0x89E2A6: cmp     edi, eax
0x89E2A8: jb      short loc_89E2B8
0x89E2AA: movzx   ecx, word ptr [esi+0Eh]
0x89E2AE: add     ecx, edi
0x89E2B0: push    ecx
0x89E2B1: mov     ecx, esi
0x89E2B3: call    NiTArray_SetSize
0x89E2B8: lea     edx, [esp+34h+var_28]
0x89E2BC: push    edx
0x89E2BD: push    edi
0x89E2BE: mov     ecx, esi
0x89E2C0: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x89E2C5: mov     ecx, [esp+34h+var_4]
0x89E2C9: pop     edi
0x89E2CA: pop     esi
0x89E2CB: pop     ebx
0x89E2CC: xor     ecx, esp
0x89E2CE: call    @__security_check_cookie@4; __security_check_cookie(x)
0x89E2D3: add     esp, 28h
0x89E2D6: retn    4
