0x984C3E: push    ebp
0x984C3F: lea     ebp, [esp-2A8h]
0x984C46: sub     esp, 328h
0x984C4C: mov     eax, ds:0B30AACh
0x984C51: xor     eax, ebp
0x984C53: mov     [ebp+2A8h+var_4], eax
0x984C59: push    esi
0x984C5A: mov     [ebp+2A8h+var_220], eax
0x984C60: mov     [ebp+2A8h+var_224], ecx
0x984C66: mov     [ebp+2A8h+var_228], edx
0x984C6C: mov     [ebp+2A8h+var_22C], ebx
0x984C6F: mov     [ebp+2A8h+var_230], esi
0x984C72: mov     [ebp+2A8h+var_234], edi
0x984C75: mov     [ebp+2A8h+var_208], ss
0x984C7C: mov     [ebp+2A8h+var_214], cs
0x984C83: mov     [ebp+2A8h+var_238], ds
0x984C87: mov     [ebp+2A8h+var_23C], es
0x984C8B: mov     [ebp+2A8h+var_240], fs
0x984C8F: mov     [ebp+2A8h+var_244], gs
0x984C93: pushf
0x984C94: pop     [ebp+2A8h+var_210]
0x984C9A: mov     esi, [ebp+2ACh]
0x984CA0: lea     eax, [ebp+2ACh]
0x984CA6: mov     [ebp+2A8h+var_20C], eax
0x984CAC: mov     [ebp+2A8h+var_2D0], 10001h
0x984CB3: mov     [ebp+2A8h+var_218], esi
0x984CB9: mov     eax, [eax-4]
0x984CBC: push    50h ; 'P'
0x984CBE: mov     [ebp+2A8h+var_21C], eax
0x984CC4: lea     eax, [ebp+2A8h+var_328]
0x984CC7: push    0
0x984CC9: push    eax
0x984CCA: call    __memset
0x984CCF: lea     eax, [ebp+2A8h+var_328]
0x984CD2: mov     [ebp+2A8h+ExceptionInfo.ExceptionRecord], eax
0x984CD5: lea     eax, [ebp+2A8h+var_2D0]
0x984CD8: add     esp, 0Ch
0x984CDB: mov     [ebp+2A8h+var_328], 0C000000Dh
0x984CE2: mov     [ebp+2A8h+var_31C], esi
0x984CE5: mov     [ebp+2A8h+ExceptionInfo.ContextRecord], eax
0x984CE8: call    dword ptr ds:0A281B8h
0x984CEE: push    0; lpTopLevelExceptionFilter
0x984CF0: mov     esi, eax
0x984CF2: call    dword ptr ds:0A281B4h
0x984CF8: lea     eax, [ebp+2A8h+ExceptionInfo]
0x984CFB: push    eax; ExceptionInfo
0x984CFC: call    dword ptr ds:0A281B0h
0x984D02: test    eax, eax
0x984D04: jnz     short loc_984D12
0x984D06: test    esi, esi
0x984D08: jnz     short loc_984D12
0x984D0A: push    2
0x984D0C: call    sub_9933A9
0x984D11: pop     ecx
0x984D12: push    0C000000Dh; uExitCode
0x984D17: call    dword ptr ds:0A28104h
0x984D1D: push    eax; hProcess
0x984D1E: call    dword ptr ds:0A281ACh
0x984D24: mov     ecx, [ebp+2A8h+var_4]
0x984D2A: xor     ecx, ebp
0x984D2C: pop     esi
0x984D2D: call    @__security_check_cookie@4; __security_check_cookie(x)
0x984D32: add     ebp, 2A8h
0x984D38: leave
0x984D39: retn
