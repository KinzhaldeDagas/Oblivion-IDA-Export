0x848190: push    0FFFFFFFFh; Oblivion mode-5 rigid alpha-tested ShadowLight enqueuer. Reuses pool[7], binds shader-property texture 0/BaseMap to stage 0, optionally applies the property address preset, and uses SLS2053/SLS2059.
0x848192: push    offset SEH_851CA0
0x848197: mov     eax, large fs:0
0x84819D: push    eax
0x84819E: push    ecx
0x84819F: push    ebx
0x8481A0: push    ebp
0x8481A1: push    esi
0x8481A2: push    edi
0x8481A3: mov     eax, ds:0B30AACh
0x8481A8: xor     eax, esp
0x8481AA: push    eax
0x8481AB: lea     eax, [esp+24h+var_C]
0x8481AF: mov     large fs:0, eax
0x8481B5: mov     edi, ecx
0x8481B7: mov     esi, ds:0B455BCh; Pool[7] rigid alpha-tested caster pass. Its single texture stage receives shader-property texture index 0/BaseMap.
0x8481BD: mov     eax, [esi+24h]
0x8481C0: mov     ecx, [esp+24h+value]
0x8481C4: mov     edx, [ecx]
0x8481C6: mov     ebp, [eax]
0x8481C8: mov     eax, [edx+88h]
0x8481CE: push    0
0x8481D0: call    eax
0x8481D2: mov     ebx, [ebp+4]
0x8481D5: cmp     ebx, eax
0x8481D7: mov     [esp+24h+var_10], eax
0x8481DB: jz      short loc_848212
0x8481DD: test    ebx, ebx
0x8481DF: jz      short loc_848201
0x8481E1: lea     ecx, [ebx+4]
0x8481E4: push    ecx; lpAddend
0x8481E5: call    dword ptr ds:0A2807Ch
0x8481EB: test    eax, eax
0x8481ED: jnz     short loc_8481FD
0x8481EF: test    ebx, ebx
0x8481F1: jz      short loc_8481FD
0x8481F3: mov     edx, [ebx]
0x8481F5: mov     eax, [edx]
0x8481F7: push    1
0x8481F9: mov     ecx, ebx
0x8481FB: call    eax
0x8481FD: mov     eax, [esp+24h+var_10]
0x848201: test    eax, eax
0x848203: mov     [ebp+4], eax
0x848206: jz      short loc_848212
0x848208: add     eax, 4
0x84820B: push    eax; lpAddend
0x84820C: call    dword ptr ds:0A28078h
0x848212: mov     ecx, [esp+24h+value]
0x848216: push    ecx
0x848217: push    ebp
0x848218: mov     ecx, edi
0x84821A: call    sub_848FA0
0x84821F: mov     ebx, 1
0x848224: add     [esi+60h], ebx
0x848227: mov     [esp+24h+value], esi
0x84822B: mov     eax, [edi+38h]
0x84822E: lea     edx, [esp+24h+value]
0x848232: push    edx; value
0x848233: push    eax; index
0x848234: lea     ecx, [edi+40h]; this
0x848237: mov     [esp+2Ch+var_4], 0
0x84823F: call    NiTArray_NiD3DPass_SetAt; Oblivion render decode: refcounted NiTArray<NiD3DPass*>::SetAt used by Lighting30Shader_SetupRenderPass. Replaces the indexed pass pointer, updates end/numObjs, and AddRef/Releases the stored pass.
0x848244: or      eax, 0FFFFFFFFh
0x848247: add     [esi+60h], eax
0x84824A: mov     [esp+24h+var_4], eax
0x84824E: jnz     short loc_848257
0x848250: mov     ecx, esi
0x848252: call    NiD3DPass_ReleaseToPool; Release a renderer-owned NiD3DPass: release attached resources and return the pass object to the global pool when its reference count reaches zero.
0x848257: add     [edi+38h], ebx
0x84825A: mov     ecx, [esp+24h+var_C]
0x84825E: mov     large fs:0, ecx
0x848265: pop     ecx
0x848266: pop     edi
0x848267: pop     esi
0x848268: pop     ebp
0x848269: pop     ebx
0x84826A: add     esp, 10h
0x84826D: retn    10h
0x9D3360: lea     ecx, [ebp+10h]; void *
0x9D3363: jmp     sub_4027D0
0x9D3368: mov     edx, [esp+arg_4]
0x9D336C: lea     eax, [edx-14h]
0x9D336F: mov     ecx, [edx-18h]
0x9D3372: xor     ecx, eax
0x9D3374: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D3379: mov     eax, offset stru_AFB794
0x9D337E: jmp     ___CxxFrameHandler3
