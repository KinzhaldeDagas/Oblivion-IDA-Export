0x8A0940: push    0FFFFFFFFh
0x8A0942: push    offset SEH_8A0A70
0x8A0947: mov     eax, large fs:0
0x8A094D: push    eax
0x8A094E: sub     esp, 214h
0x8A0954: mov     eax, ds:0B30AACh
0x8A0959: xor     eax, esp
0x8A095B: mov     [esp+220h+var_10], eax
0x8A0962: push    ebx
0x8A0963: push    ebp
0x8A0964: push    esi
0x8A0965: push    edi
0x8A0966: mov     eax, ds:0B30AACh
0x8A096B: xor     eax, esp
0x8A096D: push    eax
0x8A096E: lea     eax, [esp+234h+var_C]
0x8A0975: mov     large fs:0, eax
0x8A097B: mov     esi, [esp+234h+arg_0]
0x8A0982: cmp     dword ptr [esi+4], 6
0x8A0986: mov     ebp, ecx
0x8A0988: jnb     loc_8A0A3E
0x8A098E: cmp     byte ptr [esi+8], 0
0x8A0992: lea     edi, [esi+8]
0x8A0995: lea     ebx, [esi+0E0h]
0x8A099B: jnz     short loc_8A09A2
0x8A099D: mov     edi, offset aPlease; "Please"
0x8A09A2: push    ecx
0x8A09A3: mov     eax, esp
0x8A09A5: mov     [esp+238h+var_214], esp
0x8A09A9: mov     byte ptr [eax], 1
0x8A09AC: push    200h
0x8A09B1: lea     eax, [esp+23Ch+var_210]
0x8A09B5: push    eax
0x8A09B6: lea     ecx, [esp+240h+var_220]
0x8A09BA: call    sub_8BBFB0
0x8A09BF: push    offset aReExport; " re-export\n"
0x8A09C4: push    edi
0x8A09C5: push    offset aContainsAnOl_1; " contains an old bhkConstraint! "
0x8A09CA: push    ebx
0x8A09CB: push    offset aFile; "File "
0x8A09D0: lea     ecx, [esp+248h+var_220]
0x8A09D4: mov     [esp+248h+var_4], 0
0x8A09DF: call    sub_8BBDB0
0x8A09E4: mov     ecx, eax
0x8A09E6: call    sub_8BBDB0
0x8A09EB: mov     ecx, eax
0x8A09ED: call    sub_8BBDB0
0x8A09F2: mov     ecx, eax
0x8A09F4: call    sub_8BBDB0
0x8A09F9: mov     ecx, eax
0x8A09FB: call    sub_8BBDB0
0x8A0A00: mov     ecx, ds:0BA7FB0h
0x8A0A06: mov     edx, [ecx]
0x8A0A08: mov     edx, [edx+8]
0x8A0A0B: push    133h
0x8A0A10: push    offset a_Bhkconstraint; ".\\bhkConstraint.cpp"
0x8A0A15: lea     eax, [esp+23Ch+var_210]
0x8A0A19: push    eax
0x8A0A1A: push    234F2250h
0x8A0A1F: push    1
0x8A0A21: call    edx
0x8A0A23: lea     ecx, [esp+234h+var_220]
0x8A0A27: mov     [esp+234h+var_4], 0FFFFFFFFh
0x8A0A32: call    sub_8BC000
0x8A0A37: mov     ecx, esi
0x8A0A39: call    sub_712AE0
0x8A0A3E: push    esi
0x8A0A3F: mov     ecx, ebp
0x8A0A41: call    sub_89D650
0x8A0A46: mov     ecx, dword ptr [esp+234h+var_C]
0x8A0A4D: mov     large fs:0, ecx
0x8A0A54: pop     ecx
0x8A0A55: pop     edi
0x8A0A56: pop     esi
0x8A0A57: pop     ebp
0x8A0A58: pop     ebx
0x8A0A59: mov     ecx, [esp+220h+var_10]
0x8A0A60: xor     ecx, esp
0x8A0A62: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8A0A67: add     esp, 220h
0x8A0A6D: retn    4
