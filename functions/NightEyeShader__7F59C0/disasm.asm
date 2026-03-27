0x7F59C0: push    0FFFFFFFFh
0x7F59C2: push    offset SEH_8122A0
0x7F59C7: mov     eax, large fs:0
0x7F59CD: push    eax
0x7F59CE: push    ecx
0x7F59CF: push    ebx
0x7F59D0: push    esi
0x7F59D1: push    edi
0x7F59D2: mov     eax, ds:0B30AACh
0x7F59D7: xor     eax, esp
0x7F59D9: push    eax
0x7F59DA: lea     eax, [esp+20h+var_C]
0x7F59DE: mov     large fs:0, eax
0x7F59E4: push    8; Size
0x7F59E6: call    FormHeapAlloc
0x7F59EB: add     esp, 4
0x7F59EE: mov     [esp+20h+var_10], eax
0x7F59F2: xor     edi, edi
0x7F59F4: cmp     eax, edi
0x7F59F6: mov     [esp+20h+var_4], edi
0x7F59FA: jz      short loc_7F5A05
0x7F59FC: mov     ecx, eax
0x7F59FE: call    ShaderDefinition__Init
0x7F5A03: mov     edi, eax
0x7F5A05: mov     eax, ds:0B43104h
0x7F5A0A: push    1; StreamCount
0x7F5A0C: push    2; a2
0x7F5A0E: push    eax; a1
0x7F5A0F: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x7F5A17: call    CreateDX9ShaderDeclaration
0x7F5A1C: mov     esi, [edi]
0x7F5A1E: mov     ebx, eax
0x7F5A20: add     esp, 0Ch
0x7F5A23: cmp     esi, ebx
0x7F5A25: jz      short loc_7F5A57
0x7F5A27: test    esi, esi
0x7F5A29: jz      short loc_7F5A47
0x7F5A2B: lea     ecx, [esi+4]
0x7F5A2E: push    ecx; lpAddend
0x7F5A2F: call    dword ptr ds:0A2807Ch
0x7F5A35: test    eax, eax
0x7F5A37: jnz     short loc_7F5A47
0x7F5A39: test    esi, esi
0x7F5A3B: jz      short loc_7F5A47
0x7F5A3D: mov     edx, [esi]
0x7F5A3F: mov     eax, [edx]
0x7F5A41: push    1
0x7F5A43: mov     ecx, esi
0x7F5A45: call    eax
0x7F5A47: test    ebx, ebx
0x7F5A49: mov     [edi], ebx
0x7F5A4B: jz      short loc_7F5A57
0x7F5A4D: add     ebx, 4
0x7F5A50: push    ebx; lpAddend
0x7F5A51: call    dword ptr ds:0A28078h
0x7F5A57: mov     ecx, [edi]
0x7F5A59: mov     edx, [ecx]
0x7F5A5B: mov     eax, [edx+50h]
0x7F5A5E: push    0
0x7F5A60: push    2
0x7F5A62: push    0
0x7F5A64: push    0
0x7F5A66: push    0
0x7F5A68: call    eax
0x7F5A6A: mov     ecx, [edi]
0x7F5A6C: mov     edx, [ecx]
0x7F5A6E: mov     eax, [edx+50h]
0x7F5A71: push    0
0x7F5A73: push    1
0x7F5A75: push    5
0x7F5A77: push    7
0x7F5A79: push    1
0x7F5A7B: call    eax
0x7F5A7D: mov     ecx, [edi]
0x7F5A7F: test    ecx, ecx
0x7F5A81: jz      short loc_7F5A9E
0x7F5A83: mov     edx, [ecx]
0x7F5A85: mov     eax, [edx+4]
0x7F5A88: call    eax
0x7F5A8A: test    eax, eax
0x7F5A8C: jz      short loc_7F5A9E
0x7F5A8E: mov     edi, edi
0x7F5A90: cmp     eax, offset dword_B3F684
0x7F5A95: jz      short loc_7F5A9E
0x7F5A97: mov     eax, [eax+4]
0x7F5A9A: test    eax, eax
0x7F5A9C: jnz     short loc_7F5A90
0x7F5A9E: push    0C0h ; 'À'; Size
0x7F5AA3: call    FormHeapAlloc
0x7F5AA8: add     esp, 4
0x7F5AAB: mov     [esp+20h+var_10], eax
0x7F5AAF: test    eax, eax
0x7F5AB1: mov     [esp+20h+var_4], 1
0x7F5AB9: jz      short loc_7F5AC6
0x7F5ABB: mov     ecx, eax; this
0x7F5ABD: call    ??0NighteyeShader@@QAE@XZ; NighteyeShader::NighteyeShader(void)
0x7F5AC2: mov     esi, eax
0x7F5AC4: jmp     short loc_7F5AC8
0x7F5AC6: xor     esi, esi
0x7F5AC8: mov     edx, [esi]
0x7F5ACA: mov     eax, [edx+84h]
0x7F5AD0: mov     ecx, esi
0x7F5AD2: mov     [esp+20h+var_4], 0FFFFFFFFh
0x7F5ADA: call    eax
0x7F5ADC: mov     edx, [esi]
0x7F5ADE: mov     eax, [edx+0B0h]
0x7F5AE4: mov     ecx, esi
0x7F5AE6: call    eax
0x7F5AE8: mov     edx, [esi]
0x7F5AEA: mov     eax, [edx+0B4h]
0x7F5AF0: mov     ecx, esi
0x7F5AF2: call    eax
0x7F5AF4: mov     ebx, [edi+4]
0x7F5AF7: cmp     ebx, esi
0x7F5AF9: jz      short loc_7F5B28
0x7F5AFB: test    ebx, ebx
0x7F5AFD: jz      short loc_7F5B1B
0x7F5AFF: lea     ecx, [ebx+4]
0x7F5B02: push    ecx; lpAddend
0x7F5B03: call    dword ptr ds:0A2807Ch
0x7F5B09: test    eax, eax
0x7F5B0B: jnz     short loc_7F5B1B
0x7F5B0D: test    ebx, ebx
0x7F5B0F: jz      short loc_7F5B1B
0x7F5B11: mov     edx, [ebx]
0x7F5B13: mov     eax, [edx]
0x7F5B15: push    1
0x7F5B17: mov     ecx, ebx
0x7F5B19: call    eax
0x7F5B1B: mov     [edi+4], esi
0x7F5B1E: add     esi, 4
0x7F5B21: push    esi; lpAddend
0x7F5B22: call    dword ptr ds:0A28078h
0x7F5B28: mov     ecx, [edi+4]
0x7F5B2B: mov     edx, [ecx]
0x7F5B2D: mov     eax, [edi]
0x7F5B2F: mov     edx, [edx+54h]
0x7F5B32: push    eax
0x7F5B33: call    edx
0x7F5B35: mov     eax, edi
0x7F5B37: mov     ecx, dword ptr [esp+20h+var_C]
0x7F5B3B: mov     large fs:0, ecx
0x7F5B42: pop     ecx
0x7F5B43: pop     edi
0x7F5B44: pop     esi
0x7F5B45: pop     ebx
0x7F5B46: add     esp, 10h
0x7F5B49: retn
