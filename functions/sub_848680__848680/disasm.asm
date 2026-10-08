0x848680: push    0FFFFFFFFh
0x848682: push    offset SEH_852030
0x848687: mov     eax, large fs:0
0x84868D: push    eax
0x84868E: push    ecx
0x84868F: push    ebx
0x848690: push    esi
0x848691: push    edi
0x848692: mov     eax, ds:0B30AACh
0x848697: xor     eax, esp
0x848699: push    eax
0x84869A: lea     eax, [esp+20h+var_C]
0x84869E: mov     large fs:0, eax
0x8486A4: mov     esi, ecx
0x8486A6: mov     edi, ds:0B45B2Ch
0x8486AC: test    edi, edi
0x8486AE: mov     [esp+20h+value], edi
0x8486B2: mov     ebx, 1
0x8486B7: jz      short loc_8486BC
0x8486B9: add     [edi+60h], ebx
0x8486BC: mov     ecx, [esi+38h]
0x8486BF: lea     eax, [esp+20h+value]
0x8486C3: push    eax; value
0x8486C4: push    ecx; index
0x8486C5: lea     ecx, [esi+40h]; this
0x8486C8: mov     [esp+28h+var_4], 0
0x8486D0: call    NiTArray_NiD3DPass_SetAt; Oblivion render decode: refcounted NiTArray<NiD3DPass*>::SetAt used by Lighting30Shader_SetupRenderPass. Replaces the indexed pass pointer, updates end/numObjs, and AddRef/Releases the stored pass.
0x8486D5: or      eax, 0FFFFFFFFh
0x8486D8: test    edi, edi
0x8486DA: mov     [esp+20h+var_4], eax
0x8486DE: jz      short loc_8486EC
0x8486E0: add     [edi+60h], eax
0x8486E3: jnz     short loc_8486EC
0x8486E5: mov     ecx, edi
0x8486E7: call    NiD3DPass_ReleaseToPool; Release a renderer-owned NiD3DPass: release attached resources and return the pass object to the global pool when its reference count reaches zero.
0x8486EC: add     [esi+38h], ebx
0x8486EF: mov     ecx, [esp+20h+var_C]
0x8486F3: mov     large fs:0, ecx
0x8486FA: pop     ecx
0x8486FB: pop     edi
0x8486FC: pop     esi
0x8486FD: pop     ebx
0x8486FE: add     esp, 10h
0x848701: retn    10h
0x9D34E0: lea     ecx, [ebp-10h]; void *
0x9D34E3: jmp     sub_4027D0
0x9D34E8: mov     edx, [esp+arg_4]
0x9D34EC: lea     eax, [edx-10h]
0x9D34EF: mov     ecx, [edx-14h]
0x9D34F2: xor     ecx, eax
0x9D34F4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D34F9: mov     eax, offset stru_AFB8F4
0x9D34FE: jmp     ___CxxFrameHandler3
