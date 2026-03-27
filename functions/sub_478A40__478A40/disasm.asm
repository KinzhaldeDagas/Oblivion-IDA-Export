0x478A40: push    0FFFFFFFFh
0x478A42: push    offset SEH_478A40
0x478A47: mov     eax, large fs:0
0x478A4D: push    eax
0x478A4E: sub     esp, 110h
0x478A54: mov     eax, ds:0B30AACh
0x478A59: xor     eax, esp
0x478A5B: mov     [esp+11Ch+var_10], eax
0x478A62: push    ebx
0x478A63: push    esi
0x478A64: push    edi
0x478A65: mov     eax, ds:0B30AACh
0x478A6A: xor     eax, esp
0x478A6C: push    eax
0x478A6D: lea     eax, [esp+12Ch+var_C]
0x478A74: mov     large fs:0, eax
0x478A7A: mov     esi, ecx
0x478A7C: push    offset unk_A2F830; lpCriticalSection
0x478A81: mov     ecx, offset stru_B33E00
0x478A86: call    NiEnterCriticalSection
0x478A8B: mov     ecx, [esi+60h]
0x478A8E: xor     ebx, ebx
0x478A90: xor     esi, esi
0x478A92: cmp     ecx, ebx
0x478A94: jz      loc_478B50
0x478A9A: mov     [esp+12Ch+var_11C], ebx
0x478A9E: mov     word ptr [esp+12Ch+var_118], bx
0x478AA3: mov     word ptr [esp+12Ch+var_118+2], bx
0x478AA8: mov     eax, ds:0A366D4h
0x478AAD: mov     edx, ds:0A366D8h
0x478AB3: mov     [esp+12Ch+var_114], eax
0x478AB7: mov     eax, ds:0A366DCh
0x478ABC: mov     [esp+12Ch+var_110], edx
0x478AC0: mov     dl, ds:0A366E0h
0x478AC6: mov     [esp+12Ch+var_10C], eax
0x478ACA: mov     eax, [ecx]
0x478ACC: mov     [esp+12Ch+var_108], dl
0x478AD0: mov     edx, [eax+14h]
0x478AD3: mov     [esp+12Ch+var_4], ebx
0x478ADA: call    edx
0x478ADC: mov     esi, eax
0x478ADE: mov     edi, edi
0x478AE0: mov     cl, [eax]
0x478AE2: add     eax, 1
0x478AE5: cmp     cl, bl
0x478AE7: jnz     short loc_478AE0
0x478AE9: lea     edi, [esp+12Ch+var_114]
0x478AED: sub     eax, esi
0x478AEF: add     edi, 0FFFFFFFFh
0x478AF2: mov     cl, [edi+1]
0x478AF5: add     edi, 1
0x478AF8: cmp     cl, bl
0x478AFA: jnz     short loc_478AF2
0x478AFC: mov     ecx, eax
0x478AFE: shr     ecx, 2
0x478B01: rep movsd
0x478B03: push    ebx
0x478B04: push    1
0x478B06: push    ebx
0x478B07: mov     ecx, eax
0x478B09: push    ebx
0x478B0A: and     ecx, 3
0x478B0D: push    ebx
0x478B0E: lea     eax, [esp+140h+var_114]
0x478B12: rep movsb
0x478B14: push    eax
0x478B15: lea     ecx, [esp+144h+var_11C]
0x478B19: push    ecx
0x478B1A: call    sub_54FEB0
0x478B1F: add     esp, 8
0x478B22: push    eax
0x478B23: call    sub_553620
0x478B28: mov     edx, [esp+144h+var_11C]
0x478B2C: push    edx
0x478B2D: mov     esi, eax
0x478B2F: mov     [esp+148h+var_4], 0FFFFFFFFh
0x478B3A: call    FormHeapFree
0x478B3F: add     esp, 1Ch
0x478B42: mov     [esp+12Ch+var_11C], ebx
0x478B46: mov     word ptr [esp+12Ch+var_118+2], bx
0x478B4B: mov     word ptr [esp+12Ch+var_118], bx
0x478B50: mov     ecx, offset stru_B33E00; lpCriticalSection
0x478B55: call    NiLeaveCriticalSection_0
0x478B5A: mov     eax, esi
0x478B5C: mov     ecx, dword ptr [esp+12Ch+var_C]
0x478B63: mov     large fs:0, ecx
0x478B6A: pop     ecx
0x478B6B: pop     edi
0x478B6C: pop     esi
0x478B6D: pop     ebx
0x478B6E: mov     ecx, [esp+11Ch+var_10]
0x478B75: xor     ecx, esp
0x478B77: call    @__security_check_cookie@4; __security_check_cookie(x)
0x478B7C: add     esp, 11Ch
0x478B82: retn
