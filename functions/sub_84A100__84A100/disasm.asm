0x84A100: push    0FFFFFFFFh
0x84A102: push    offset SEH_882120
0x84A107: mov     eax, large fs:0
0x84A10D: push    eax
0x84A10E: push    ebx
0x84A10F: push    ebp
0x84A110: push    esi
0x84A111: push    edi
0x84A112: mov     eax, ds:0B30AACh
0x84A117: xor     eax, esp
0x84A119: push    eax
0x84A11A: lea     eax, [esp+20h+var_C]
0x84A11E: mov     large fs:0, eax
0x84A124: mov     ebx, ecx
0x84A126: mov     esi, [esp+20h+arg_8]
0x84A12A: mov     eax, [esi+10h]
0x84A12D: mov     edi, ds:0B45674h
0x84A133: push    eax
0x84A134: call    sub_848C40
0x84A139: mov     esi, [esi+0Ch]
0x84A13C: push    esi
0x84A13D: mov     ecx, ebx
0x84A13F: call    sub_848E50
0x84A144: mov     eax, [edi+24h]
0x84A147: mov     ebp, [esp+20h+arg_C]
0x84A14B: mov     esi, [eax]
0x84A14D: mov     edx, [ebp+0]
0x84A150: mov     eax, [edx+88h]
0x84A156: push    0
0x84A158: mov     ecx, ebp
0x84A15A: mov     [esp+24h+arg_8], esi
0x84A15E: call    eax
0x84A160: mov     esi, [esi+4]
0x84A163: cmp     esi, eax
0x84A165: mov     [esp+20h+arg_C], eax
0x84A169: jz      short loc_84A1A6
0x84A16B: test    esi, esi
0x84A16D: jz      short loc_84A18F
0x84A16F: lea     ecx, [esi+4]
0x84A172: push    ecx; lpAddend
0x84A173: call    dword ptr ds:0A2807Ch
0x84A179: test    eax, eax
0x84A17B: jnz     short loc_84A18B
0x84A17D: test    esi, esi
0x84A17F: jz      short loc_84A18B
0x84A181: mov     edx, [esi]
0x84A183: mov     eax, [edx]
0x84A185: push    1
0x84A187: mov     ecx, esi
0x84A189: call    eax
0x84A18B: mov     eax, [esp+20h+arg_C]
0x84A18F: test    eax, eax
0x84A191: mov     esi, [esp+20h+arg_8]
0x84A195: mov     [esi+4], eax
0x84A198: jz      short loc_84A1AA
0x84A19A: add     eax, 4
0x84A19D: push    eax; lpAddend
0x84A19E: call    dword ptr ds:0A28078h
0x84A1A4: jmp     short loc_84A1AA
0x84A1A6: mov     esi, [esp+20h+arg_8]
0x84A1AA: test    esi, esi
0x84A1AC: jz      short loc_84A1C9
0x84A1AE: cmp     byte ptr ds:0B42CDDh, 0
0x84A1B5: jz      short loc_84A1C9
0x84A1B7: mov     edx, [ebp+0]
0x84A1BA: mov     eax, [edx+78h]
0x84A1BD: mov     ecx, ebp
0x84A1BF: call    eax
0x84A1C1: push    eax; preset
0x84A1C2: mov     ecx, esi; this
0x84A1C4: call    NiD3DTextureStage_ApplyAddressModePreset; Apply one native address-preset row to a NiD3DTextureStage: D3DSAMP_ADDRESSU (1) and D3DSAMP_ADDRESSV (2). Lighting30 SimpleShadow uses preset 0 = CLAMP/CLAMP.
0x84A1C9: mov     ecx, [edi+24h]
0x84A1CC: mov     esi, [ecx+4]
0x84A1CF: mov     edx, [ebp+0]
0x84A1D2: mov     eax, [edx+8Ch]
0x84A1D8: push    0
0x84A1DA: mov     ecx, ebp
0x84A1DC: mov     [esp+24h+arg_8], esi
0x84A1E0: call    eax
0x84A1E2: test    eax, eax
0x84A1E4: jz      short loc_84A1FB
0x84A1E6: mov     edx, [ebp+0]
0x84A1E9: mov     eax, [edx+8Ch]
0x84A1EF: push    0
0x84A1F1: mov     ecx, ebp
0x84A1F3: call    eax
0x84A1F5: mov     [esp+20h+arg_C], eax
0x84A1F9: jmp     short loc_84A21A
0x84A1FB: test    dword ptr [ebp+1Ch], 80h
0x84A202: jbe     short loc_84A210
0x84A204: mov     ecx, ds:0B430F0h
0x84A20A: mov     [esp+20h+arg_C], ecx
0x84A20E: jmp     short loc_84A21A
0x84A210: mov     edx, ds:0B430DCh
0x84A216: mov     [esp+20h+arg_C], edx
0x84A21A: mov     esi, [esi+4]
0x84A21D: cmp     esi, [esp+20h+arg_C]
0x84A221: jz      short loc_84A25E
0x84A223: test    esi, esi
0x84A225: jz      short loc_84A243
0x84A227: lea     eax, [esi+4]
0x84A22A: push    eax; lpAddend
0x84A22B: call    dword ptr ds:0A2807Ch
0x84A231: test    eax, eax
0x84A233: jnz     short loc_84A243
0x84A235: test    esi, esi
0x84A237: jz      short loc_84A243
0x84A239: mov     edx, [esi]
0x84A23B: mov     eax, [edx]
0x84A23D: push    1
0x84A23F: mov     ecx, esi
0x84A241: call    eax
0x84A243: mov     eax, [esp+20h+arg_C]
0x84A247: test    eax, eax
0x84A249: mov     esi, [esp+20h+arg_8]
0x84A24D: mov     [esi+4], eax
0x84A250: jz      short loc_84A262
0x84A252: add     eax, 4
0x84A255: push    eax; lpAddend
0x84A256: call    dword ptr ds:0A28078h
0x84A25C: jmp     short loc_84A262
0x84A25E: mov     esi, [esp+20h+arg_8]
0x84A262: test    esi, esi
0x84A264: jz      short loc_84A281
0x84A266: cmp     byte ptr ds:0B42CDDh, 0
0x84A26D: jz      short loc_84A281
0x84A26F: mov     edx, [ebp+0]
0x84A272: mov     eax, [edx+78h]
0x84A275: mov     ecx, ebp
0x84A277: call    eax
0x84A279: push    eax; preset
0x84A27A: mov     ecx, esi; this
0x84A27C: call    NiD3DTextureStage_ApplyAddressModePreset; Apply one native address-preset row to a NiD3DTextureStage: D3DSAMP_ADDRESSU (1) and D3DSAMP_ADDRESSV (2). Lighting30 SimpleShadow uses preset 0 = CLAMP/CLAMP.
0x84A281: mov     esi, 1
0x84A286: add     [edi+60h], esi
0x84A289: mov     [esp+20h+arg_8], edi
0x84A28D: mov     edx, [ebx+38h]
0x84A290: lea     ecx, [esp+20h+arg_8]
0x84A294: push    ecx; value
0x84A295: push    edx; index
0x84A296: lea     ecx, [ebx+40h]; this
0x84A299: mov     [esp+28h+var_4], 0
0x84A2A1: call    NiTArray_NiD3DPass_SetAt; Oblivion render decode: refcounted NiTArray<NiD3DPass*>::SetAt used by Lighting30Shader_SetupRenderPass. Replaces the indexed pass pointer, updates end/numObjs, and AddRef/Releases the stored pass.
0x84A2A6: or      eax, 0FFFFFFFFh
0x84A2A9: add     [edi+60h], eax
0x84A2AC: mov     [esp+20h+var_4], eax
0x84A2B0: jnz     short loc_84A2B9
0x84A2B2: mov     ecx, edi
0x84A2B4: call    NiD3DPass_ReleaseToPool; Release a renderer-owned NiD3DPass: release attached resources and return the pass object to the global pool when its reference count reaches zero.
0x84A2B9: add     [ebx+38h], esi
0x84A2BC: mov     ecx, [esp+20h+var_C]
0x84A2C0: mov     large fs:0, ecx
0x84A2C7: pop     ecx
0x84A2C8: pop     edi
0x84A2C9: pop     esi
0x84A2CA: pop     ebp
0x84A2CB: pop     ebx
0x84A2CC: add     esp, 0Ch
0x84A2CF: retn    10h
0x9D3210: lea     ecx, [ebp+0Ch]; void *
0x9D3213: jmp     sub_4027D0
0x9D3218: mov     edx, [esp+arg_4]
0x9D321C: lea     eax, [edx-10h]
0x9D321F: mov     ecx, [edx-14h]
0x9D3222: xor     ecx, eax
0x9D3224: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D3229: mov     eax, offset stru_AFB660
0x9D322E: jmp     ___CxxFrameHandler3
