0x850BE0: push    0FFFFFFFFh
0x850BE2: push    offset SEH_852030
0x850BE7: mov     eax, large fs:0
0x850BED: push    eax
0x850BEE: push    ecx
0x850BEF: push    ebx
0x850BF0: push    esi
0x850BF1: push    edi
0x850BF2: mov     eax, ds:0B30AACh
0x850BF7: xor     eax, esp
0x850BF9: push    eax
0x850BFA: lea     eax, [esp+20h+var_C]
0x850BFE: mov     large fs:0, eax
0x850C04: mov     esi, ecx
0x850C06: mov     edi, ds:0B455CCh
0x850C0C: test    edi, edi
0x850C0E: mov     [esp+20h+value], edi
0x850C12: mov     ebx, 1
0x850C17: jz      short loc_850C1C
0x850C19: add     [edi+60h], ebx
0x850C1C: mov     ecx, [esi+38h]
0x850C1F: lea     eax, [esp+20h+value]
0x850C23: push    eax; value
0x850C24: push    ecx; index
0x850C25: lea     ecx, [esi+40h]; this
0x850C28: mov     [esp+28h+var_4], 0
0x850C30: call    NiTArray_NiD3DPass_SetAt; Oblivion render decode: refcounted NiTArray<NiD3DPass*>::SetAt used by Lighting30Shader_SetupRenderPass. Replaces the indexed pass pointer, updates end/numObjs, and AddRef/Releases the stored pass.
0x850C35: or      eax, 0FFFFFFFFh
0x850C38: test    edi, edi
0x850C3A: mov     [esp+20h+var_4], eax
0x850C3E: jz      short loc_850C4C
0x850C40: add     [edi+60h], eax
0x850C43: jnz     short loc_850C4C
0x850C45: mov     ecx, edi
0x850C47: call    NiD3DPass_ReleaseToPool; Release a renderer-owned NiD3DPass: release attached resources and return the pass object to the global pool when its reference count reaches zero.
0x850C4C: add     [esi+38h], ebx
0x850C4F: mov     ecx, [esp+20h+var_C]
0x850C53: mov     large fs:0, ecx
0x850C5A: pop     ecx
0x850C5B: pop     edi
0x850C5C: pop     esi
0x850C5D: pop     ebx
0x850C5E: add     esp, 10h
0x850C61: retn    10h
0x9D34E0: lea     ecx, [ebp-10h]; void *
0x9D34E3: jmp     sub_4027D0
0x9D34E8: mov     edx, [esp+arg_4]
0x9D34EC: lea     eax, [edx-10h]
0x9D34EF: mov     ecx, [edx-14h]
0x9D34F2: xor     ecx, eax
0x9D34F4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D34F9: mov     eax, offset stru_AFB8F4
0x9D34FE: jmp     ___CxxFrameHandler3
