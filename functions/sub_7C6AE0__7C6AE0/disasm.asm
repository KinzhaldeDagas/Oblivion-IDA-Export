0x7C6AE0: push    0FFFFFFFFh
0x7C6AE2: push    offset SEH_7C6AE0
0x7C6AE7: mov     eax, large fs:0
0x7C6AED: push    eax
0x7C6AEE: push    ecx
0x7C6AEF: push    ebx
0x7C6AF0: push    ebp
0x7C6AF1: push    esi
0x7C6AF2: push    edi
0x7C6AF3: mov     eax, ds:0B30AACh
0x7C6AF8: xor     eax, esp
0x7C6AFA: push    eax
0x7C6AFB: lea     eax, [esp+24h+var_C]
0x7C6AFF: mov     large fs:0, eax
0x7C6B05: mov     ebp, ecx
0x7C6B07: mov     [esp+24h+var_10], ebp
0x7C6B0B: mov     edi, [esp+24h+arg_0]
0x7C6B0F: push    edi
0x7C6B10: call    sub_7C6230
0x7C6B15: mov     esi, eax
0x7C6B17: test    esi, esi
0x7C6B19: jz      short loc_7C6B2A
0x7C6B1B: mov     al, byte ptr [esp+24h+arg_4]
0x7C6B1F: mov     [esi+104h], al
0x7C6B25: jmp     loc_7C6C09
0x7C6B2A: push    220h; Size
0x7C6B2F: call    FormHeapAlloc
0x7C6B34: add     esp, 4
0x7C6B37: mov     [esp+24h+arg_0], eax
0x7C6B3B: test    eax, eax
0x7C6B3D: mov     [esp+24h+var_4], 0
0x7C6B45: jz      short loc_7C6B52
0x7C6B47: mov     ecx, eax; this
0x7C6B49: call    ??0ShadowSceneLight@@QAE@XZ; ShadowSceneLight::ShadowSceneLight(void)
0x7C6B4E: mov     esi, eax
0x7C6B50: jmp     short loc_7C6B54
0x7C6B52: xor     esi, esi
0x7C6B54: mov     cl, byte ptr [esp+24h+arg_4]
0x7C6B58: mov     [esi+104h], cl
0x7C6B5E: or      ebx, 0FFFFFFFFh
0x7C6B61: push    edi
0x7C6B62: mov     ecx, esi
0x7C6B64: mov     [esp+28h+var_4], ebx
0x7C6B68: call    sub_7D3400
0x7C6B6D: lea     edi, [esi+4]
0x7C6B70: push    edi; lpAddend
0x7C6B71: mov     [esp+28h+arg_4], esi
0x7C6B75: call    dword ptr ds:0A28078h
0x7C6B7B: lea     edx, [esp+24h+arg_4]
0x7C6B7F: push    edx
0x7C6B80: lea     ecx, [ebp+0E4h]
0x7C6B86: mov     [esp+28h+var_4], 1
0x7C6B8E: call    sub_7C16B0
0x7C6B93: push    edi; lpAddend
0x7C6B94: mov     [esp+28h+var_4], ebx
0x7C6B98: call    dword ptr ds:0A2807Ch
0x7C6B9E: test    eax, eax
0x7C6BA0: jnz     short loc_7C6BAC
0x7C6BA2: mov     eax, [esi]
0x7C6BA4: mov     edx, [eax]
0x7C6BA6: push    1
0x7C6BA8: mov     ecx, esi
0x7C6BAA: call    edx
0x7C6BAC: cmp     byte ptr [esi+0F4h], 0
0x7C6BB3: jz      short loc_7C6C09
0x7C6BB5: cmp     byte ptr [esi+0F5h], 0
0x7C6BBC: mov     ecx, ds:0B42F50h; this
0x7C6BC2: jz      short loc_7C6BFA
0x7C6BC4: mov     eax, ds:0B43104h
0x7C6BC9: push    16h; a3
0x7C6BCB: push    eax; a2
0x7C6BCC: call    BSTextureManager_GetDefaultRenderTarget
0x7C6BD1: mov     ebx, eax
0x7C6BD3: mov     ecx, ebx
0x7C6BD5: call    BSRenderedTexture__UseTextureToRender
0x7C6BDA: mov     ecx, ds:0B42F50h
0x7C6BE0: mov     ebp, eax
0x7C6BE2: mov     edi, [ebp+0]
0x7C6BE5: add     edi, 6Ch ; 'l'
0x7C6BE8: call    sub_7C1360
0x7C6BED: mov     edx, [edi]
0x7C6BEF: push    eax
0x7C6BF0: mov     ecx, ebp
0x7C6BF2: call    edx
0x7C6BF4: mov     ebp, [esp+24h+var_10]
0x7C6BF8: jmp     short loc_7C6C01
0x7C6BFA: call    BSTextureManager_FetchShadowMap
0x7C6BFF: mov     ebx, eax
0x7C6C01: push    ebx
0x7C6C02: mov     ecx, esi
0x7C6C04: call    sub_499310
0x7C6C09: push    esi
0x7C6C0A: mov     ecx, ebp
0x7C6C0C: call    sub_7C5F60
0x7C6C11: mov     eax, esi
0x7C6C13: mov     ecx, dword ptr [esp+24h+var_C]
0x7C6C17: mov     large fs:0, ecx
0x7C6C1E: pop     ecx
0x7C6C1F: pop     edi
0x7C6C20: pop     esi
0x7C6C21: pop     ebp
0x7C6C22: pop     ebx
0x7C6C23: add     esp, 10h
0x7C6C26: retn    8
