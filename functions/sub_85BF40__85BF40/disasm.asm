0x85BF40: push    0FFFFFFFFh
0x85BF42: push    offset SEH_85C7D0
0x85BF47: mov     eax, large fs:0
0x85BF4D: push    eax
0x85BF4E: push    esi
0x85BF4F: push    edi
0x85BF50: mov     eax, ds:0B30AACh
0x85BF55: xor     eax, esp
0x85BF57: push    eax
0x85BF58: lea     eax, [esp+18h+var_C]
0x85BF5C: mov     large fs:0, eax
0x85BF62: mov     edi, ecx
0x85BF64: cmp     byte ptr [esp+18h+value], 0
0x85BF69: jnz     short loc_85BFB2
0x85BF6B: mov     eax, ds:0B47790h
0x85BF70: test    eax, eax
0x85BF72: mov     esi, eax
0x85BF74: mov     [esp+18h+value], esi
0x85BF78: jz      short loc_85BF7E
0x85BF7A: add     dword ptr [eax+60h], 1
0x85BF7E: mov     ecx, [edi+38h]
0x85BF81: lea     eax, [esp+18h+value]
0x85BF85: push    eax; value
0x85BF86: push    ecx; index
0x85BF87: lea     ecx, [edi+40h]; this
0x85BF8A: mov     [esp+20h+var_4], 0
0x85BF92: call    NiTArray_NiD3DPass_SetAt; Oblivion render decode: refcounted NiTArray<NiD3DPass*>::SetAt used by Lighting30Shader_SetupRenderPass. Replaces the indexed pass pointer, updates end/numObjs, and AddRef/Releases the stored pass.
0x85BF97: or      eax, 0FFFFFFFFh
0x85BF9A: test    esi, esi
0x85BF9C: mov     [esp+18h+var_4], eax
0x85BFA0: jz      short loc_85BFAE
0x85BFA2: add     [esi+60h], eax
0x85BFA5: jnz     short loc_85BFAE
0x85BFA7: mov     ecx, esi
0x85BFA9: call    NiD3DPass_ReleaseToPool; Release a renderer-owned NiD3DPass: release attached resources and return the pass object to the global pool when its reference count reaches zero.
0x85BFAE: add     dword ptr [edi+38h], 1
0x85BFB2: mov     ecx, [esp+18h+var_C]
0x85BFB6: mov     large fs:0, ecx
0x85BFBD: pop     ecx
0x85BFBE: pop     edi
0x85BFBF: pop     esi
0x85BFC0: add     esp, 0Ch
0x85BFC3: retn    14h
0x9D45E0: lea     ecx, [ebp+14h]; void *
0x9D45E3: jmp     sub_4027D0
0x9D45E8: mov     edx, [esp+arg_4]
0x9D45EC: lea     eax, [edx-8]
0x9D45EF: mov     ecx, [edx-0Ch]
0x9D45F2: xor     ecx, eax
0x9D45F4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D45F9: mov     eax, offset stru_AFC66C
0x9D45FE: jmp     ___CxxFrameHandler3
