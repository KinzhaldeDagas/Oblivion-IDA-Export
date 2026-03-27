0x99CB44: push    ebp
0x99CB45: mov     ebp, esp
0x99CB47: sub     esp, 20h
0x99CB4A: push    ebx
0x99CB4B: push    esi
0x99CB4C: push    edi
0x99CB4D: call    __encoded_null
0x99CB52: xor     ebx, ebx
0x99CB54: cmp     dword_BAA760, ebx
0x99CB5A: mov     [ebp+var_10], eax
0x99CB5D: mov     [ebp+var_4], ebx
0x99CB60: mov     [ebp+var_8], ebx
0x99CB63: mov     [ebp+var_C], ebx
0x99CB66: jnz     loc_99CC19
0x99CB6C: push    offset aUser32_dll; "USER32.DLL"
0x99CB71: call    ds:LoadLibraryA
0x99CB77: mov     edi, eax
0x99CB79: cmp     edi, ebx
0x99CB7B: jnz     short loc_99CB84
0x99CB7D: xor     eax, eax
0x99CB7F: jmp     loc_99CCDD
0x99CB84: mov     esi, ds:GetProcAddress
0x99CB8A: push    offset aMessageboxa; "MessageBoxA"
0x99CB8F: push    edi; hModule
0x99CB90: call    esi ; GetProcAddress
0x99CB92: cmp     eax, ebx
0x99CB94: jz      short loc_99CB7D
0x99CB96: push    eax
0x99CB97: call    __encode_pointer
0x99CB9C: mov     [esp+30h+lpProcName], offset aGetactivewindo; "GetActiveWindow"
0x99CBA3: push    edi; hModule
0x99CBA4: mov     dword_BAA760, eax
0x99CBA9: call    esi ; GetProcAddress
0x99CBAB: push    eax
0x99CBAC: call    __encode_pointer
0x99CBB1: mov     [esp+30h+lpProcName], offset aGetlastactivep; "GetLastActivePopup"
0x99CBB8: push    edi; hModule
0x99CBB9: mov     dword_BAA764, eax
0x99CBBE: call    esi ; GetProcAddress
0x99CBC0: push    eax
0x99CBC1: call    __encode_pointer
0x99CBC6: mov     dword_BAA768, eax
0x99CBCB: lea     eax, [ebp+var_8]
0x99CBCE: push    eax
0x99CBCF: call    sub_981BF8
0x99CBD4: test    eax, eax
0x99CBD6: pop     ecx
0x99CBD7: pop     ecx
0x99CBD8: jz      short loc_99CBE7
0x99CBDA: push    ebx
0x99CBDB: push    ebx
0x99CBDC: push    ebx
0x99CBDD: push    ebx
0x99CBDE: push    ebx
0x99CBDF: call    __invoke_watson
0x99CBE4: add     esp, 14h
0x99CBE7: cmp     [ebp+var_8], 2
0x99CBEB: jnz     short loc_99CC19
0x99CBED: push    offset aGetuserobjecti; "GetUserObjectInformationA"
0x99CBF2: push    edi; hModule
0x99CBF3: call    esi ; GetProcAddress
0x99CBF5: push    eax
0x99CBF6: call    __encode_pointer
0x99CBFB: cmp     eax, ebx
0x99CBFD: pop     ecx
0x99CBFE: mov     dword_BAA770, eax
0x99CC03: jz      short loc_99CC19
0x99CC05: push    offset aGetprocesswind; "GetProcessWindowStation"
0x99CC0A: push    edi; hModule
0x99CC0B: call    esi ; GetProcAddress
0x99CC0D: push    eax
0x99CC0E: call    __encode_pointer
0x99CC13: pop     ecx
0x99CC14: mov     dword_BAA76C, eax
0x99CC19: mov     eax, dword_BAA76C
0x99CC1E: mov     esi, [ebp+var_10]
0x99CC21: cmp     eax, esi
0x99CC23: jz      short loc_99CC92
0x99CC25: cmp     dword_BAA770, esi
0x99CC2B: jz      short loc_99CC92
0x99CC2D: push    eax
0x99CC2E: call    __decode_pointer
0x99CC33: pop     ecx
0x99CC34: call    eax
0x99CC36: cmp     eax, ebx
0x99CC38: jz      short loc_99CC5F
0x99CC3A: lea     ecx, [ebp+var_14]
0x99CC3D: push    ecx
0x99CC3E: push    0Ch
0x99CC40: lea     ecx, [ebp+var_20]
0x99CC43: push    ecx
0x99CC44: push    1
0x99CC46: push    eax
0x99CC47: push    dword_BAA770
0x99CC4D: call    __decode_pointer
0x99CC52: pop     ecx
0x99CC53: call    eax
0x99CC55: test    eax, eax
0x99CC57: jz      short loc_99CC5F
0x99CC59: test    [ebp+var_18], 1
0x99CC5D: jnz     short loc_99CC92
0x99CC5F: lea     eax, [ebp+var_C]
0x99CC62: push    eax
0x99CC63: call    sub_981C2F
0x99CC68: test    eax, eax
0x99CC6A: pop     ecx
0x99CC6B: jz      short loc_99CC7A
0x99CC6D: push    ebx
0x99CC6E: push    ebx
0x99CC6F: push    ebx
0x99CC70: push    ebx
0x99CC71: push    ebx
0x99CC72: call    __invoke_watson
0x99CC77: add     esp, 14h
0x99CC7A: cmp     [ebp+var_C], 4
0x99CC7E: jb      short loc_99CC89
0x99CC80: or      [ebp+arg_8], 200000h
0x99CC87: jmp     short loc_99CCC3
0x99CC89: or      [ebp+arg_8], 40000h
0x99CC90: jmp     short loc_99CCC3
0x99CC92: mov     eax, dword_BAA764
0x99CC97: cmp     eax, esi
0x99CC99: jz      short loc_99CCC3
0x99CC9B: push    eax
0x99CC9C: call    __decode_pointer
0x99CCA1: pop     ecx
0x99CCA2: call    eax
0x99CCA4: cmp     eax, ebx
0x99CCA6: mov     [ebp+var_4], eax
0x99CCA9: jz      short loc_99CCC3
0x99CCAB: mov     eax, dword_BAA768
0x99CCB0: cmp     eax, esi
0x99CCB2: jz      short loc_99CCC3
0x99CCB4: push    [ebp+var_4]
0x99CCB7: push    eax
0x99CCB8: call    __decode_pointer
0x99CCBD: pop     ecx
0x99CCBE: call    eax
0x99CCC0: mov     [ebp+var_4], eax
0x99CCC3: push    [ebp+arg_8]
0x99CCC6: push    [ebp+arg_4]
0x99CCC9: push    [ebp+arg_0]
0x99CCCC: push    [ebp+var_4]
0x99CCCF: push    dword_BAA760
0x99CCD5: call    __decode_pointer
0x99CCDA: pop     ecx
0x99CCDB: call    eax
0x99CCDD: pop     edi
0x99CCDE: pop     esi
0x99CCDF: pop     ebx
0x99CCE0: leave
0x99CCE1: retn
