0x7EC890: push    0FFFFFFFFh
0x7EC892: push    offset SEH_852030
0x7EC897: mov     eax, large fs:0
0x7EC89D: push    eax
0x7EC89E: push    ecx
0x7EC89F: push    ebx
0x7EC8A0: push    esi
0x7EC8A1: push    edi
0x7EC8A2: mov     eax, ds:0B30AACh
0x7EC8A7: xor     eax, esp
0x7EC8A9: push    eax
0x7EC8AA: lea     eax, [esp+20h+var_C]
0x7EC8AE: mov     large fs:0, eax
0x7EC8B4: mov     esi, ecx
0x7EC8B6: mov     eax, [esi]
0x7EC8B8: mov     edx, [eax+80h]
0x7EC8BE: call    edx
0x7EC8C0: xor     edi, edi
0x7EC8C2: mov     [esp+20h+value], edi
0x7EC8C6: mov     eax, [esi+90h]
0x7EC8CC: sub     eax, edi
0x7EC8CE: mov     [esp+20h+var_4], edi
0x7EC8D2: mov     ebx, 1
0x7EC8D7: jz      short loc_7EC8EE
0x7EC8D9: sub     eax, ebx
0x7EC8DB: jz      short loc_7EC8E6
0x7EC8DD: sub     eax, ebx
0x7EC8DF: jnz     short loc_7EC901
0x7EC8E1: mov     eax, [esi+70h]
0x7EC8E4: jmp     short loc_7EC8F4
0x7EC8E6: mov     eax, [esi+0ACh]
0x7EC8EC: jmp     short loc_7EC8F4
0x7EC8EE: mov     eax, [esi+0B0h]
0x7EC8F4: test    eax, eax
0x7EC8F6: jz      short loc_7EC901
0x7EC8F8: mov     edi, eax
0x7EC8FA: add     [edi+60h], ebx
0x7EC8FD: mov     [esp+20h+value], edi
0x7EC901: mov     ecx, [esi+38h]
0x7EC904: lea     eax, [esp+20h+value]
0x7EC908: push    eax; value
0x7EC909: push    ecx; index
0x7EC90A: lea     ecx, [esi+40h]; this
0x7EC90D: call    NiTArray_NiD3DPass_SetAt; Oblivion render decode: refcounted NiTArray<NiD3DPass*>::SetAt used by Lighting30Shader_SetupRenderPass. Replaces the indexed pass pointer, updates end/numObjs, and AddRef/Releases the stored pass.
0x7EC912: add     [esi+38h], ebx
0x7EC915: or      eax, 0FFFFFFFFh
0x7EC918: test    edi, edi
0x7EC91A: mov     [esp+20h+var_4], eax
0x7EC91E: jz      short loc_7EC92C
0x7EC920: add     [edi+60h], eax
0x7EC923: jnz     short loc_7EC92C
0x7EC925: mov     ecx, edi
0x7EC927: call    NiD3DPass_ReleaseToPool; Release a renderer-owned NiD3DPass: release attached resources and return the pass object to the global pool when its reference count reaches zero.
0x7EC92C: xor     eax, eax
0x7EC92E: mov     ecx, [esp+20h+var_C]
0x7EC932: mov     large fs:0, ecx
0x7EC939: pop     ecx
0x7EC93A: pop     edi
0x7EC93B: pop     esi
0x7EC93C: pop     ebx
0x7EC93D: add     esp, 10h
0x7EC940: retn    1Ch
0x9D34E0: lea     ecx, [ebp-10h]; void *
0x9D34E3: jmp     sub_4027D0
0x9D34E8: mov     edx, [esp+arg_4]
0x9D34EC: lea     eax, [edx-10h]
0x9D34EF: mov     ecx, [edx-14h]
0x9D34F2: xor     ecx, eax
0x9D34F4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D34F9: mov     eax, offset stru_AFB8F4
0x9D34FE: jmp     ___CxxFrameHandler3
