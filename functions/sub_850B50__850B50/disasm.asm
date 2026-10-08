0x850B50: push    0FFFFFFFFh
0x850B52: push    offset SEH_852030
0x850B57: mov     eax, large fs:0
0x850B5D: push    eax
0x850B5E: push    ecx
0x850B5F: push    ebx
0x850B60: push    esi
0x850B61: push    edi
0x850B62: mov     eax, ds:0B30AACh
0x850B67: xor     eax, esp
0x850B69: push    eax
0x850B6A: lea     eax, [esp+20h+var_C]
0x850B6E: mov     large fs:0, eax
0x850B74: mov     esi, ecx
0x850B76: mov     edi, ds:0B455C8h
0x850B7C: test    edi, edi
0x850B7E: mov     [esp+20h+value], edi
0x850B82: mov     ebx, 1
0x850B87: jz      short loc_850B8C
0x850B89: add     [edi+60h], ebx
0x850B8C: mov     ecx, [esi+38h]
0x850B8F: lea     eax, [esp+20h+value]
0x850B93: push    eax; value
0x850B94: push    ecx; index
0x850B95: lea     ecx, [esi+40h]; this
0x850B98: mov     [esp+28h+var_4], 0
0x850BA0: call    NiTArray_NiD3DPass_SetAt; Oblivion render decode: refcounted NiTArray<NiD3DPass*>::SetAt used by Lighting30Shader_SetupRenderPass. Replaces the indexed pass pointer, updates end/numObjs, and AddRef/Releases the stored pass.
0x850BA5: or      eax, 0FFFFFFFFh
0x850BA8: test    edi, edi
0x850BAA: mov     [esp+20h+var_4], eax
0x850BAE: jz      short loc_850BBC
0x850BB0: add     [edi+60h], eax
0x850BB3: jnz     short loc_850BBC
0x850BB5: mov     ecx, edi
0x850BB7: call    NiD3DPass_ReleaseToPool; Release a renderer-owned NiD3DPass: release attached resources and return the pass object to the global pool when its reference count reaches zero.
0x850BBC: add     [esi+38h], ebx
0x850BBF: mov     ecx, [esp+20h+var_C]
0x850BC3: mov     large fs:0, ecx
0x850BCA: pop     ecx
0x850BCB: pop     edi
0x850BCC: pop     esi
0x850BCD: pop     ebx
0x850BCE: add     esp, 10h
0x850BD1: retn    10h
0x9D34E0: lea     ecx, [ebp-10h]; void *
0x9D34E3: jmp     sub_4027D0
0x9D34E8: mov     edx, [esp+arg_4]
0x9D34EC: lea     eax, [edx-10h]
0x9D34EF: mov     ecx, [edx-14h]
0x9D34F2: xor     ecx, eax
0x9D34F4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D34F9: mov     eax, offset stru_AFB8F4
0x9D34FE: jmp     ___CxxFrameHandler3
