0x848270: push    0FFFFFFFFh; Oblivion mode-5 skinned opaque ShadowLight enqueuer. Reuses pool[8]; its one configured stage remains unbound and is ignored by SLS2060. Uses SLS2054/SLS2060.
0x848272: push    offset SEH_852030
0x848277: mov     eax, large fs:0
0x84827D: push    eax
0x84827E: push    ecx
0x84827F: push    ebx
0x848280: push    esi
0x848281: push    edi
0x848282: mov     eax, ds:0B30AACh
0x848287: xor     eax, esp
0x848289: push    eax
0x84828A: lea     eax, [esp+20h+var_C]
0x84828E: mov     large fs:0, eax
0x848294: mov     esi, ecx
0x848296: mov     edi, ds:0B455C0h; Pool[8] skinned opaque caster pass using SLS2054/SLS2060.
0x84829C: test    edi, edi
0x84829E: mov     [esp+20h+value], edi
0x8482A2: mov     ebx, 1
0x8482A7: jz      short loc_8482AC
0x8482A9: add     [edi+60h], ebx
0x8482AC: mov     ecx, [esi+38h]
0x8482AF: lea     eax, [esp+20h+value]
0x8482B3: push    eax; value
0x8482B4: push    ecx; index
0x8482B5: lea     ecx, [esi+40h]; this
0x8482B8: mov     [esp+28h+var_4], 0
0x8482C0: call    NiTArray_NiD3DPass_SetAt; Oblivion render decode: refcounted NiTArray<NiD3DPass*>::SetAt used by Lighting30Shader_SetupRenderPass. Replaces the indexed pass pointer, updates end/numObjs, and AddRef/Releases the stored pass.
0x8482C5: or      eax, 0FFFFFFFFh
0x8482C8: test    edi, edi
0x8482CA: mov     [esp+20h+var_4], eax
0x8482CE: jz      short loc_8482DC
0x8482D0: add     [edi+60h], eax
0x8482D3: jnz     short loc_8482DC
0x8482D5: mov     ecx, edi
0x8482D7: call    NiD3DPass_ReleaseToPool; Release a renderer-owned NiD3DPass: release attached resources and return the pass object to the global pool when its reference count reaches zero.
0x8482DC: add     [esi+38h], ebx
0x8482DF: mov     ecx, [esp+20h+var_C]
0x8482E3: mov     large fs:0, ecx
0x8482EA: pop     ecx
0x8482EB: pop     edi
0x8482EC: pop     esi
0x8482ED: pop     ebx
0x8482EE: add     esp, 10h
0x8482F1: retn    10h
0x9D34E0: lea     ecx, [ebp-10h]; void *
0x9D34E3: jmp     sub_4027D0
0x9D34E8: mov     edx, [esp+arg_4]
0x9D34EC: lea     eax, [edx-10h]
0x9D34EF: mov     ecx, [edx-14h]
0x9D34F2: xor     ecx, eax
0x9D34F4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D34F9: mov     eax, offset stru_AFB8F4
0x9D34FE: jmp     ___CxxFrameHandler3
