0x879C40: push    0FFFFFFFFh
0x879C42: push    offset SEH_880560
0x879C47: mov     eax, large fs:0
0x879C4D: push    eax
0x879C4E: push    ebx
0x879C4F: push    ebp
0x879C50: push    esi
0x879C51: push    edi
0x879C52: mov     eax, ds:0B30AACh
0x879C57: xor     eax, esp
0x879C59: push    eax
0x879C5A: lea     eax, [esp+20h+var_C]
0x879C5E: mov     large fs:0, eax
0x879C64: mov     edi, ecx
0x879C66: mov     ecx, [esp+20h+arg_0]
0x879C6A: mov     eax, [edi]
0x879C6C: mov     edx, [eax+0BCh]
0x879C72: mov     esi, ds:0B476E4h
0x879C78: push    0
0x879C7A: push    0
0x879C7C: push    ecx
0x879C7D: mov     ecx, edi
0x879C7F: call    edx
0x879C81: mov     eax, [esi+24h]
0x879C84: mov     ecx, [esp+20h+value]
0x879C88: mov     ebx, [eax]
0x879C8A: push    0
0x879C8C: push    ecx
0x879C8D: mov     ecx, edi
0x879C8F: mov     [esp+28h+arg_0], ebx
0x879C93: call    sub_848FD0
0x879C98: mov     ebx, [ebx+4]
0x879C9B: mov     ebp, eax
0x879C9D: cmp     ebx, ebp
0x879C9F: jz      short loc_879CD6
0x879CA1: test    ebx, ebx
0x879CA3: jz      short loc_879CC1
0x879CA5: lea     edx, [ebx+4]
0x879CA8: push    edx; lpAddend
0x879CA9: call    dword ptr ds:0A2807Ch
0x879CAF: test    eax, eax
0x879CB1: jnz     short loc_879CC1
0x879CB3: test    ebx, ebx
0x879CB5: jz      short loc_879CC1
0x879CB7: mov     eax, [ebx]
0x879CB9: mov     edx, [eax]
0x879CBB: push    1
0x879CBD: mov     ecx, ebx
0x879CBF: call    edx
0x879CC1: test    ebp, ebp
0x879CC3: mov     eax, [esp+20h+arg_0]
0x879CC7: mov     [eax+4], ebp
0x879CCA: jz      short loc_879CD6
0x879CCC: add     ebp, 4
0x879CCF: push    ebp; lpAddend
0x879CD0: call    dword ptr ds:0A28078h
0x879CD6: mov     ecx, [esi+24h]
0x879CD9: mov     ebx, [ecx+4]
0x879CDC: mov     ecx, [esp+20h+value]
0x879CE0: mov     edx, [ecx]
0x879CE2: mov     eax, [edx+88h]
0x879CE8: push    0
0x879CEA: mov     [esp+24h+arg_0], ebx
0x879CEE: call    eax
0x879CF0: mov     ebx, [ebx+4]
0x879CF3: mov     ebp, eax
0x879CF5: cmp     ebx, ebp
0x879CF7: jz      short loc_879D2E
0x879CF9: test    ebx, ebx
0x879CFB: jz      short loc_879D19
0x879CFD: lea     ecx, [ebx+4]
0x879D00: push    ecx; lpAddend
0x879D01: call    dword ptr ds:0A2807Ch
0x879D07: test    eax, eax
0x879D09: jnz     short loc_879D19
0x879D0B: test    ebx, ebx
0x879D0D: jz      short loc_879D19
0x879D0F: mov     edx, [ebx]
0x879D11: mov     eax, [edx]
0x879D13: push    1
0x879D15: mov     ecx, ebx
0x879D17: call    eax
0x879D19: test    ebp, ebp
0x879D1B: mov     ecx, [esp+20h+arg_0]
0x879D1F: mov     [ecx+4], ebp
0x879D22: jz      short loc_879D2E
0x879D24: add     ebp, 4
0x879D27: push    ebp; lpAddend
0x879D28: call    dword ptr ds:0A28078h
0x879D2E: mov     edx, [esi+24h]
0x879D31: mov     ebp, [edx+0Ch]
0x879D34: mov     eax, ds:0B43110h
0x879D39: mov     ebx, [ebp+4]
0x879D3C: cmp     ebx, eax
0x879D3E: mov     ecx, eax
0x879D40: mov     [esp+20h+value], ecx
0x879D44: jz      short loc_879D7B
0x879D46: test    ebx, ebx
0x879D48: jz      short loc_879D6A
0x879D4A: lea     eax, [ebx+4]
0x879D4D: push    eax; lpAddend
0x879D4E: call    dword ptr ds:0A2807Ch
0x879D54: test    eax, eax
0x879D56: jnz     short loc_879D66
0x879D58: test    ebx, ebx
0x879D5A: jz      short loc_879D66
0x879D5C: mov     edx, [ebx]
0x879D5E: mov     eax, [edx]
0x879D60: push    1
0x879D62: mov     ecx, ebx
0x879D64: call    eax
0x879D66: mov     ecx, [esp+20h+value]
0x879D6A: test    ecx, ecx
0x879D6C: mov     [ebp+4], ecx
0x879D6F: jz      short loc_879D7B
0x879D71: add     ecx, 4
0x879D74: push    ecx; lpAddend
0x879D75: call    dword ptr ds:0A28078h
0x879D7B: mov     ebx, 1
0x879D80: add     [esi+60h], ebx
0x879D83: mov     [esp+20h+value], esi
0x879D87: mov     edx, [edi+38h]
0x879D8A: lea     ecx, [esp+20h+value]
0x879D8E: push    ecx; value
0x879D8F: push    edx; index
0x879D90: lea     ecx, [edi+40h]; this
0x879D93: mov     [esp+28h+var_4], 0
0x879D9B: call    NiTArray_NiD3DPass_SetAt; Oblivion render decode: refcounted NiTArray<NiD3DPass*>::SetAt used by Lighting30Shader_SetupRenderPass. Replaces the indexed pass pointer, updates end/numObjs, and AddRef/Releases the stored pass.
0x879DA0: or      eax, 0FFFFFFFFh
0x879DA3: add     [esi+60h], eax
0x879DA6: mov     [esp+20h+var_4], eax
0x879DAA: jnz     short loc_879DB3
0x879DAC: mov     ecx, esi
0x879DAE: call    NiD3DPass_ReleaseToPool; Release a renderer-owned NiD3DPass: release attached resources and return the pass object to the global pool when its reference count reaches zero.
0x879DB3: add     [edi+38h], ebx
0x879DB6: mov     ecx, [esp+20h+var_C]
0x879DBA: mov     large fs:0, ecx
0x879DC1: pop     ecx
0x879DC2: pop     edi
0x879DC3: pop     esi
0x879DC4: pop     ebp
0x879DC5: pop     ebx
0x879DC6: add     esp, 0Ch
0x879DC9: retn    10h
0x9D3390: lea     ecx, [ebp+10h]; void *
0x9D3393: jmp     sub_4027D0
0x9D3398: mov     edx, [esp+arg_4]
0x9D339C: lea     eax, [edx-10h]
0x9D339F: mov     ecx, [edx-14h]
0x9D33A2: xor     ecx, eax
0x9D33A4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D33A9: mov     eax, offset stru_AFB7C0
0x9D33AE: jmp     ___CxxFrameHandler3
