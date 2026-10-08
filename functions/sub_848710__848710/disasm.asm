0x848710: push    0FFFFFFFFh
0x848712: push    offset SEH_852030
0x848717: mov     eax, large fs:0
0x84871D: push    eax
0x84871E: push    ecx
0x84871F: push    ebx
0x848720: push    esi
0x848721: push    edi
0x848722: mov     eax, ds:0B30AACh
0x848727: xor     eax, esp
0x848729: push    eax
0x84872A: lea     eax, [esp+20h+var_C]
0x84872E: mov     large fs:0, eax
0x848734: mov     esi, ecx
0x848736: mov     edi, ds:0B45B30h
0x84873C: test    edi, edi
0x84873E: mov     [esp+20h+value], edi
0x848742: mov     ebx, 1
0x848747: jz      short loc_84874C
0x848749: add     [edi+60h], ebx
0x84874C: mov     ecx, [esi+38h]
0x84874F: lea     eax, [esp+20h+value]
0x848753: push    eax; value
0x848754: push    ecx; index
0x848755: lea     ecx, [esi+40h]; this
0x848758: mov     [esp+28h+var_4], 0
0x848760: call    NiTArray_NiD3DPass_SetAt; Oblivion render decode: refcounted NiTArray<NiD3DPass*>::SetAt used by Lighting30Shader_SetupRenderPass. Replaces the indexed pass pointer, updates end/numObjs, and AddRef/Releases the stored pass.
0x848765: or      eax, 0FFFFFFFFh
0x848768: test    edi, edi
0x84876A: mov     [esp+20h+var_4], eax
0x84876E: jz      short loc_84877C
0x848770: add     [edi+60h], eax
0x848773: jnz     short loc_84877C
0x848775: mov     ecx, edi
0x848777: call    NiD3DPass_ReleaseToPool; Release a renderer-owned NiD3DPass: release attached resources and return the pass object to the global pool when its reference count reaches zero.
0x84877C: add     [esi+38h], ebx
0x84877F: mov     ecx, [esp+20h+var_C]
0x848783: mov     large fs:0, ecx
0x84878A: pop     ecx
0x84878B: pop     edi
0x84878C: pop     esi
0x84878D: pop     ebx
0x84878E: add     esp, 10h
0x848791: retn    10h
0x9D34E0: lea     ecx, [ebp-10h]; void *
0x9D34E3: jmp     sub_4027D0
0x9D34E8: mov     edx, [esp+arg_4]
0x9D34EC: lea     eax, [edx-10h]
0x9D34EF: mov     ecx, [edx-14h]
0x9D34F2: xor     ecx, eax
0x9D34F4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D34F9: mov     eax, offset stru_AFB8F4
0x9D34FE: jmp     ___CxxFrameHandler3
