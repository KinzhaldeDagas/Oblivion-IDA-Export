0x8480C0: push    0FFFFFFFFh; Oblivion mode-5 rigid opaque ShadowLight enqueuer. Reuses pool[6]; its one configured stage remains unbound and is ignored by SLS2058. Default SLS2052/SLS2058 switches to SLS2056/SLS2062 only for positive native depth-origin override.
0x8480C2: push    offset SEH_852030
0x8480C7: mov     eax, large fs:0
0x8480CD: push    eax
0x8480CE: push    ecx
0x8480CF: push    ebx
0x8480D0: push    esi
0x8480D1: push    edi
0x8480D2: mov     eax, ds:0B30AACh
0x8480D7: xor     eax, esp
0x8480D9: push    eax
0x8480DA: lea     eax, [esp+20h+var_C]
0x8480DE: mov     large fs:0, eax
0x8480E4: mov     edi, ecx
0x8480E6: fldz
0x8480E8: mov     esi, ds:0B455B8h; Pool[6] rigid opaque caster pass. Default SLS2052/SLS2058; positive native depth-origin override switches to SLS2056/SLS2062.
0x8480EE: fcomp   dword ptr ds:0B44EE4h
0x8480F4: mov     ecx, esi; this
0x8480F6: fnstsw  ax
0x8480F8: test    ah, 5
0x8480FB: jp      short loc_848111
0x8480FD: mov     eax, ds:0B4523Ch
0x848102: push    eax; shader
0x848103: call    NiD3DPass_SetPixelShader; Reference-counted NiD3DPass pixel-shader setter. Replaces pass+0x44 and AddRefs the new NiD3DPixelShader.
0x848108: mov     ecx, ds:0B45444h
0x84810E: push    ecx
0x84810F: jmp     short loc_848123
0x848111: mov     edx, ds:0B4522Ch
0x848117: push    edx; shader
0x848118: call    NiD3DPass_SetPixelShader; Reference-counted NiD3DPass pixel-shader setter. Replaces pass+0x44 and AddRefs the new NiD3DPixelShader.
0x84811D: mov     eax, ds:0B45434h
0x848122: push    eax; a2
0x848123: mov     ecx, esi; this
0x848125: call    NiD3DPass_SetVertexShader; Reference-counted NiD3DPass vertex-shader setter. Replaces pass+0x58 and AddRefs the new NiD3DVertexShader.
0x84812A: test    esi, esi
0x84812C: mov     [esp+20h+value], esi
0x848130: mov     ebx, 1
0x848135: jz      short loc_84813A
0x848137: add     [esi+60h], ebx
0x84813A: mov     edx, [edi+38h]
0x84813D: lea     ecx, [esp+20h+value]
0x848141: push    ecx; value
0x848142: push    edx; index
0x848143: lea     ecx, [edi+40h]; this
0x848146: mov     [esp+28h+var_4], 0
0x84814E: call    NiTArray_NiD3DPass_SetAt; Oblivion render decode: refcounted NiTArray<NiD3DPass*>::SetAt used by Lighting30Shader_SetupRenderPass. Replaces the indexed pass pointer, updates end/numObjs, and AddRef/Releases the stored pass.
0x848153: or      eax, 0FFFFFFFFh
0x848156: test    esi, esi
0x848158: mov     [esp+20h+var_4], eax
0x84815C: jz      short loc_84816A
0x84815E: add     [esi+60h], eax
0x848161: jnz     short loc_84816A
0x848163: mov     ecx, esi
0x848165: call    NiD3DPass_ReleaseToPool; Release a renderer-owned NiD3DPass: release attached resources and return the pass object to the global pool when its reference count reaches zero.
0x84816A: add     [edi+38h], ebx
0x84816D: mov     ecx, [esp+20h+var_C]
0x848171: mov     large fs:0, ecx
0x848178: pop     ecx
0x848179: pop     edi
0x84817A: pop     esi
0x84817B: pop     ebx
0x84817C: add     esp, 10h
0x84817F: retn    10h
0x9D34E0: lea     ecx, [ebp-10h]; void *
0x9D34E3: jmp     sub_4027D0
0x9D34E8: mov     edx, [esp+arg_4]
0x9D34EC: lea     eax, [edx-10h]
0x9D34EF: mov     ecx, [edx-14h]
0x9D34F2: xor     ecx, eax
0x9D34F4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D34F9: mov     eax, offset stru_AFB8F4
0x9D34FE: jmp     ___CxxFrameHandler3
