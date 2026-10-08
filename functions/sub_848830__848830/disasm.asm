0x848830: push    0FFFFFFFFh
0x848832: push    offset SEH_852030
0x848837: mov     eax, large fs:0
0x84883D: push    eax
0x84883E: push    ecx
0x84883F: push    ebx
0x848840: push    esi
0x848841: push    edi
0x848842: mov     eax, ds:0B30AACh
0x848847: xor     eax, esp
0x848849: push    eax
0x84884A: lea     eax, [esp+20h+var_C]
0x84884E: mov     large fs:0, eax
0x848854: mov     esi, ecx
0x848856: mov     edi, ds:0B45B38h
0x84885C: test    edi, edi
0x84885E: mov     [esp+20h+value], edi
0x848862: mov     ebx, 1
0x848867: jz      short loc_84886C
0x848869: add     [edi+60h], ebx
0x84886C: mov     ecx, [esi+38h]
0x84886F: lea     eax, [esp+20h+value]
0x848873: push    eax; value
0x848874: push    ecx; index
0x848875: lea     ecx, [esi+40h]; this
0x848878: mov     [esp+28h+var_4], 0
0x848880: call    NiTArray_NiD3DPass_SetAt; Oblivion render decode: refcounted NiTArray<NiD3DPass*>::SetAt used by Lighting30Shader_SetupRenderPass. Replaces the indexed pass pointer, updates end/numObjs, and AddRef/Releases the stored pass.
0x848885: or      eax, 0FFFFFFFFh
0x848888: test    edi, edi
0x84888A: mov     [esp+20h+var_4], eax
0x84888E: jz      short loc_84889C
0x848890: add     [edi+60h], eax
0x848893: jnz     short loc_84889C
0x848895: mov     ecx, edi
0x848897: call    NiD3DPass_ReleaseToPool; Release a renderer-owned NiD3DPass: release attached resources and return the pass object to the global pool when its reference count reaches zero.
0x84889C: add     [esi+38h], ebx
0x84889F: mov     ecx, [esp+20h+var_C]
0x8488A3: mov     large fs:0, ecx
0x8488AA: pop     ecx
0x8488AB: pop     edi
0x8488AC: pop     esi
0x8488AD: pop     ebx
0x8488AE: add     esp, 10h
0x8488B1: retn    10h
0x9D34E0: lea     ecx, [ebp-10h]; void *
0x9D34E3: jmp     sub_4027D0
0x9D34E8: mov     edx, [esp+arg_4]
0x9D34EC: lea     eax, [edx-10h]
0x9D34EF: mov     ecx, [edx-14h]
0x9D34F2: xor     ecx, eax
0x9D34F4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D34F9: mov     eax, offset stru_AFB8F4
0x9D34FE: jmp     ___CxxFrameHandler3
