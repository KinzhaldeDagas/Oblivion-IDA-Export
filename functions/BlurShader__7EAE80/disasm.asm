0x7EAE80: push    0FFFFFFFFh
0x7EAE82: push    offset SEH_8122A0
0x7EAE87: mov     eax, large fs:0
0x7EAE8D: push    eax
0x7EAE8E: push    ecx
0x7EAE8F: push    ebx
0x7EAE90: push    esi
0x7EAE91: push    edi
0x7EAE92: mov     eax, ds:0B30AACh
0x7EAE97: xor     eax, esp
0x7EAE99: push    eax
0x7EAE9A: lea     eax, [esp+20h+var_C]
0x7EAE9E: mov     large fs:0, eax
0x7EAEA4: push    8; Size
0x7EAEA6: call    FormHeapAlloc
0x7EAEAB: add     esp, 4
0x7EAEAE: mov     [esp+20h+var_10], eax
0x7EAEB2: xor     edi, edi
0x7EAEB4: cmp     eax, edi
0x7EAEB6: mov     [esp+20h+var_4], edi
0x7EAEBA: jz      short loc_7EAEC5
0x7EAEBC: mov     ecx, eax
0x7EAEBE: call    ShaderDefinition__Init
0x7EAEC3: mov     edi, eax
0x7EAEC5: mov     eax, ds:0B43104h
0x7EAECA: push    1; StreamCount
0x7EAECC: push    2; a2
0x7EAECE: push    eax; a1
0x7EAECF: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x7EAED7: call    CreateDX9ShaderDeclaration
0x7EAEDC: mov     esi, [edi]
0x7EAEDE: mov     ebx, eax
0x7EAEE0: add     esp, 0Ch
0x7EAEE3: cmp     esi, ebx
0x7EAEE5: jz      short loc_7EAF17
0x7EAEE7: test    esi, esi
0x7EAEE9: jz      short loc_7EAF07
0x7EAEEB: lea     ecx, [esi+4]
0x7EAEEE: push    ecx; lpAddend
0x7EAEEF: call    dword ptr ds:0A2807Ch
0x7EAEF5: test    eax, eax
0x7EAEF7: jnz     short loc_7EAF07
0x7EAEF9: test    esi, esi
0x7EAEFB: jz      short loc_7EAF07
0x7EAEFD: mov     edx, [esi]
0x7EAEFF: mov     eax, [edx]
0x7EAF01: push    1
0x7EAF03: mov     ecx, esi
0x7EAF05: call    eax
0x7EAF07: test    ebx, ebx
0x7EAF09: mov     [edi], ebx
0x7EAF0B: jz      short loc_7EAF17
0x7EAF0D: add     ebx, 4
0x7EAF10: push    ebx; lpAddend
0x7EAF11: call    dword ptr ds:0A28078h
0x7EAF17: mov     ecx, [edi]
0x7EAF19: mov     edx, [ecx]
0x7EAF1B: mov     eax, [edx+50h]
0x7EAF1E: push    0
0x7EAF20: push    2
0x7EAF22: push    0
0x7EAF24: push    0
0x7EAF26: push    0
0x7EAF28: call    eax
0x7EAF2A: mov     ecx, [edi]
0x7EAF2C: mov     edx, [ecx]
0x7EAF2E: mov     eax, [edx+50h]
0x7EAF31: push    0
0x7EAF33: push    1
0x7EAF35: push    5
0x7EAF37: push    7
0x7EAF39: push    1
0x7EAF3B: call    eax
0x7EAF3D: mov     ecx, [edi]
0x7EAF3F: test    ecx, ecx
0x7EAF41: jz      short loc_7EAF5E
0x7EAF43: mov     edx, [ecx]
0x7EAF45: mov     eax, [edx+4]
0x7EAF48: call    eax
0x7EAF4A: test    eax, eax
0x7EAF4C: jz      short loc_7EAF5E
0x7EAF4E: mov     edi, edi
0x7EAF50: cmp     eax, offset dword_B3F684
0x7EAF55: jz      short loc_7EAF5E
0x7EAF57: mov     eax, [eax+4]
0x7EAF5A: test    eax, eax
0x7EAF5C: jnz     short loc_7EAF50
0x7EAF5E: push    0D0h ; 'Ð'; Size
0x7EAF63: call    FormHeapAlloc
0x7EAF68: add     esp, 4
0x7EAF6B: mov     [esp+20h+var_10], eax
0x7EAF6F: test    eax, eax
0x7EAF71: mov     [esp+20h+var_4], 1
0x7EAF79: jz      short loc_7EAF86
0x7EAF7B: mov     ecx, eax; this
0x7EAF7D: call    ??0BlurShader_P20@@QAE@XZ; BlurShader_P20::BlurShader_P20(void)
0x7EAF82: mov     esi, eax
0x7EAF84: jmp     short loc_7EAF88
0x7EAF86: xor     esi, esi
0x7EAF88: mov     edx, [esi]
0x7EAF8A: mov     eax, [edx+84h]
0x7EAF90: mov     ecx, esi
0x7EAF92: mov     [esp+20h+var_4], 0FFFFFFFFh
0x7EAF9A: call    eax
0x7EAF9C: mov     edx, [esi]
0x7EAF9E: mov     eax, [edx+0B0h]
0x7EAFA4: mov     ecx, esi
0x7EAFA6: call    eax
0x7EAFA8: mov     edx, [esi]
0x7EAFAA: mov     eax, [edx+0B4h]
0x7EAFB0: mov     ecx, esi
0x7EAFB2: call    eax
0x7EAFB4: mov     ebx, [edi+4]
0x7EAFB7: cmp     ebx, esi
0x7EAFB9: jz      short loc_7EAFE8
0x7EAFBB: test    ebx, ebx
0x7EAFBD: jz      short loc_7EAFDB
0x7EAFBF: lea     ecx, [ebx+4]
0x7EAFC2: push    ecx; lpAddend
0x7EAFC3: call    dword ptr ds:0A2807Ch
0x7EAFC9: test    eax, eax
0x7EAFCB: jnz     short loc_7EAFDB
0x7EAFCD: test    ebx, ebx
0x7EAFCF: jz      short loc_7EAFDB
0x7EAFD1: mov     edx, [ebx]
0x7EAFD3: mov     eax, [edx]
0x7EAFD5: push    1
0x7EAFD7: mov     ecx, ebx
0x7EAFD9: call    eax
0x7EAFDB: mov     [edi+4], esi
0x7EAFDE: add     esi, 4
0x7EAFE1: push    esi; lpAddend
0x7EAFE2: call    dword ptr ds:0A28078h
0x7EAFE8: mov     ecx, [edi+4]
0x7EAFEB: mov     edx, [ecx]
0x7EAFED: mov     eax, [edi]
0x7EAFEF: mov     edx, [edx+54h]
0x7EAFF2: push    eax
0x7EAFF3: call    edx
0x7EAFF5: mov     eax, edi
0x7EAFF7: mov     ecx, dword ptr [esp+20h+var_C]
0x7EAFFB: mov     large fs:0, ecx
0x7EB002: pop     ecx
0x7EB003: pop     edi
0x7EB004: pop     esi
0x7EB005: pop     ebx
0x7EB006: add     esp, 10h
0x7EB009: retn
