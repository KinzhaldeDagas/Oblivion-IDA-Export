0x8488C0: push    0FFFFFFFFh
0x8488C2: push    offset SEH_852030
0x8488C7: mov     eax, large fs:0
0x8488CD: push    eax
0x8488CE: push    ecx
0x8488CF: push    ebx
0x8488D0: push    esi
0x8488D1: push    edi
0x8488D2: mov     eax, ds:0B30AACh
0x8488D7: xor     eax, esp
0x8488D9: push    eax
0x8488DA: lea     eax, [esp+20h+var_C]
0x8488DE: mov     large fs:0, eax
0x8488E4: mov     esi, ecx
0x8488E6: mov     edi, ds:0B45B3Ch
0x8488EC: test    edi, edi
0x8488EE: mov     [esp+20h+value], edi
0x8488F2: mov     ebx, 1
0x8488F7: jz      short loc_8488FC
0x8488F9: add     [edi+60h], ebx
0x8488FC: mov     ecx, [esi+38h]
0x8488FF: lea     eax, [esp+20h+value]
0x848903: push    eax; value
0x848904: push    ecx; index
0x848905: lea     ecx, [esi+40h]; this
0x848908: mov     [esp+28h+var_4], 0
0x848910: call    NiTArray_NiD3DPass_SetAt; Oblivion render decode: refcounted NiTArray<NiD3DPass*>::SetAt used by Lighting30Shader_SetupRenderPass. Replaces the indexed pass pointer, updates end/numObjs, and AddRef/Releases the stored pass.
0x848915: or      eax, 0FFFFFFFFh
0x848918: test    edi, edi
0x84891A: mov     [esp+20h+var_4], eax
0x84891E: jz      short loc_84892C
0x848920: add     [edi+60h], eax
0x848923: jnz     short loc_84892C
0x848925: mov     ecx, edi
0x848927: call    NiD3DPass_ReleaseToPool; Release a renderer-owned NiD3DPass: release attached resources and return the pass object to the global pool when its reference count reaches zero.
0x84892C: add     [esi+38h], ebx
0x84892F: mov     ecx, [esp+20h+var_C]
0x848933: mov     large fs:0, ecx
0x84893A: pop     ecx
0x84893B: pop     edi
0x84893C: pop     esi
0x84893D: pop     ebx
0x84893E: add     esp, 10h
0x848941: retn    10h
0x9D34E0: lea     ecx, [ebp-10h]; void *
0x9D34E3: jmp     sub_4027D0
0x9D34E8: mov     edx, [esp+arg_4]
0x9D34EC: lea     eax, [edx-10h]
0x9D34EF: mov     ecx, [edx-14h]
0x9D34F2: xor     ecx, eax
0x9D34F4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D34F9: mov     eax, offset stru_AFB8F4
0x9D34FE: jmp     ___CxxFrameHandler3
