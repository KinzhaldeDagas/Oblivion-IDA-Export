0x7F9B50: push    0FFFFFFFFh
0x7F9B52: push    offset ??1DebugShader@@UAE@XZ_SEH
0x7F9B57: mov     eax, large fs:0
0x7F9B5D: push    eax
0x7F9B5E: push    ecx
0x7F9B5F: push    ebx
0x7F9B60: push    ebp
0x7F9B61: push    esi
0x7F9B62: push    edi
0x7F9B63: mov     eax, ds:0B30AACh
0x7F9B68: xor     eax, esp
0x7F9B6A: push    eax
0x7F9B6B: lea     eax, [esp+24h+var_C]
0x7F9B6F: mov     large fs:0, eax
0x7F9B75: mov     ebp, ecx
0x7F9B77: mov     [esp+24h+var_10], ebp
0x7F9B7B: mov     dword ptr [ebp+0], offset ??_7DebugShader@@6B@; const DebugShader::`vftable'
0x7F9B82: mov     esi, [ebp+0C0h]
0x7F9B88: mov     edi, ds:0A2807Ch
0x7F9B8E: xor     ebx, ebx
0x7F9B90: cmp     esi, ebx
0x7F9B92: mov     [esp+24h+var_4], 4
0x7F9B9A: jz      short loc_7F9BBA
0x7F9B9C: lea     eax, [esi+4]
0x7F9B9F: push    eax; lpAddend
0x7F9BA0: call    edi ; InterlockedDecrement
0x7F9BA2: test    eax, eax
0x7F9BA4: jnz     short loc_7F9BB4
0x7F9BA6: cmp     esi, ebx
0x7F9BA8: jz      short loc_7F9BB4
0x7F9BAA: mov     edx, [esi]
0x7F9BAC: mov     eax, [edx]
0x7F9BAE: push    1
0x7F9BB0: mov     ecx, esi
0x7F9BB2: call    eax
0x7F9BB4: mov     [ebp+0C0h], ebx
0x7F9BBA: mov     esi, [ebp+0C4h]
0x7F9BC0: cmp     esi, ebx
0x7F9BC2: jz      short loc_7F9BE2
0x7F9BC4: lea     ecx, [esi+4]
0x7F9BC7: push    ecx; lpAddend
0x7F9BC8: call    edi ; InterlockedDecrement
0x7F9BCA: test    eax, eax
0x7F9BCC: jnz     short loc_7F9BDC
0x7F9BCE: cmp     esi, ebx
0x7F9BD0: jz      short loc_7F9BDC
0x7F9BD2: mov     edx, [esi]
0x7F9BD4: mov     eax, [edx]
0x7F9BD6: push    1
0x7F9BD8: mov     ecx, esi
0x7F9BDA: call    eax
0x7F9BDC: mov     [ebp+0C4h], ebx
0x7F9BE2: mov     esi, [ebp+0BCh]
0x7F9BE8: cmp     esi, ebx
0x7F9BEA: jz      short loc_7F9C0A
0x7F9BEC: lea     ecx, [esi+4]
0x7F9BEF: push    ecx; lpAddend
0x7F9BF0: call    edi ; InterlockedDecrement
0x7F9BF2: test    eax, eax
0x7F9BF4: jnz     short loc_7F9C04
0x7F9BF6: cmp     esi, ebx
0x7F9BF8: jz      short loc_7F9C04
0x7F9BFA: mov     edx, [esi]
0x7F9BFC: mov     eax, [edx]
0x7F9BFE: push    1
0x7F9C00: mov     ecx, esi
0x7F9C02: call    eax
0x7F9C04: mov     [ebp+0BCh], ebx
0x7F9C0A: lea     edi, [ebp+7Ch]
0x7F9C0D: mov     ebx, 10h
0x7F9C12: mov     esi, [edi]
0x7F9C14: test    esi, esi
0x7F9C16: jz      short loc_7F9C3A
0x7F9C18: lea     ecx, [esi+4]
0x7F9C1B: push    ecx; lpAddend
0x7F9C1C: call    dword ptr ds:0A2807Ch
0x7F9C22: test    eax, eax
0x7F9C24: jnz     short loc_7F9C34
0x7F9C26: test    esi, esi
0x7F9C28: jz      short loc_7F9C34
0x7F9C2A: mov     edx, [esi]
0x7F9C2C: mov     eax, [edx]
0x7F9C2E: push    1
0x7F9C30: mov     ecx, esi
0x7F9C32: call    eax
0x7F9C34: mov     dword ptr [edi], 0
0x7F9C3A: add     edi, 4
0x7F9C3D: sub     ebx, 1
0x7F9C40: jnz     short loc_7F9C12
0x7F9C42: mov     esi, [ebp+0C4h]
0x7F9C48: test    esi, esi
0x7F9C4A: mov     edi, ds:0A2807Ch
0x7F9C50: mov     byte ptr [esp+24h+var_4], 3
0x7F9C55: jz      short loc_7F9C6F
0x7F9C57: lea     ecx, [esi+4]
0x7F9C5A: push    ecx; lpAddend
0x7F9C5B: call    edi ; InterlockedDecrement
0x7F9C5D: test    eax, eax
0x7F9C5F: jnz     short loc_7F9C6F
0x7F9C61: test    esi, esi
0x7F9C63: jz      short loc_7F9C6F
0x7F9C65: mov     edx, [esi]
0x7F9C67: mov     eax, [edx]
0x7F9C69: push    1
0x7F9C6B: mov     ecx, esi
0x7F9C6D: call    eax
0x7F9C6F: mov     esi, [ebp+0C0h]
0x7F9C75: test    esi, esi
0x7F9C77: mov     byte ptr [esp+24h+var_4], 2
0x7F9C7C: jz      short loc_7F9C96
0x7F9C7E: lea     ecx, [esi+4]
0x7F9C81: push    ecx; lpAddend
0x7F9C82: call    edi ; InterlockedDecrement
0x7F9C84: test    eax, eax
0x7F9C86: jnz     short loc_7F9C96
0x7F9C88: test    esi, esi
0x7F9C8A: jz      short loc_7F9C96
0x7F9C8C: mov     edx, [esi]
0x7F9C8E: mov     eax, [edx]
0x7F9C90: push    1
0x7F9C92: mov     ecx, esi
0x7F9C94: call    eax
0x7F9C96: mov     esi, [ebp+0BCh]
0x7F9C9C: test    esi, esi
0x7F9C9E: mov     byte ptr [esp+24h+var_4], 1
0x7F9CA3: jz      short loc_7F9CBD
0x7F9CA5: lea     ecx, [esi+4]
0x7F9CA8: push    ecx; lpAddend
0x7F9CA9: call    edi ; InterlockedDecrement
0x7F9CAB: test    eax, eax
0x7F9CAD: jnz     short loc_7F9CBD
0x7F9CAF: test    esi, esi
0x7F9CB1: jz      short loc_7F9CBD
0x7F9CB3: mov     edx, [esi]
0x7F9CB5: mov     eax, [edx]
0x7F9CB7: push    1
0x7F9CB9: mov     ecx, esi
0x7F9CBB: call    eax
0x7F9CBD: push    offset sub_7016A0; void (__thiscall *)(void *)
0x7F9CC2: push    10h; int
0x7F9CC4: push    4; unsigned int
0x7F9CC6: lea     eax, [ebp+7Ch]
0x7F9CC9: push    eax; void *
0x7F9CCA: mov     byte ptr [esp+34h+var_4], 0
0x7F9CCF: call    $LN21
0x7F9CD4: mov     ecx, ebp; this
0x7F9CD6: mov     [esp+24h+var_4], 0FFFFFFFFh
0x7F9CDE: call    ??1BSShader@@UAE@XZ; BSShader::~BSShader(void)
0x7F9CE3: mov     ecx, dword ptr [esp+24h+var_C]
0x7F9CE7: mov     large fs:0, ecx
0x7F9CEE: pop     ecx
0x7F9CEF: pop     edi
0x7F9CF0: pop     esi
0x7F9CF1: pop     ebp
0x7F9CF2: pop     ebx
0x7F9CF3: add     esp, 10h
0x7F9CF6: retn
