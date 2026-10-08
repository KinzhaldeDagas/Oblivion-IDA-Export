0x8496E0: push    0FFFFFFFFh
0x8496E2: push    offset SEH_850610
0x8496E7: mov     eax, large fs:0
0x8496ED: push    eax
0x8496EE: push    ebx
0x8496EF: push    esi
0x8496F0: push    edi
0x8496F1: mov     eax, ds:0B30AACh
0x8496F6: xor     eax, esp
0x8496F8: push    eax
0x8496F9: lea     eax, [esp+1Ch+var_C]
0x8496FD: mov     large fs:0, eax
0x849703: mov     esi, ecx
0x849705: mov     eax, [esp+1Ch+value]
0x849709: mov     eax, [eax+10h]
0x84970C: mov     edi, ds:0B455F0h
0x849712: push    eax
0x849713: call    sub_848C40
0x849718: test    edi, edi
0x84971A: mov     [esp+1Ch+value], edi
0x84971E: mov     ebx, 1
0x849723: jz      short loc_849728
0x849725: add     [edi+60h], ebx
0x849728: mov     edx, [esi+38h]
0x84972B: lea     ecx, [esp+1Ch+value]
0x84972F: push    ecx; value
0x849730: push    edx; index
0x849731: lea     ecx, [esi+40h]; this
0x849734: mov     [esp+24h+var_4], 0
0x84973C: call    NiTArray_NiD3DPass_SetAt; Oblivion render decode: refcounted NiTArray<NiD3DPass*>::SetAt used by Lighting30Shader_SetupRenderPass. Replaces the indexed pass pointer, updates end/numObjs, and AddRef/Releases the stored pass.
0x849741: or      eax, 0FFFFFFFFh
0x849744: test    edi, edi
0x849746: mov     [esp+1Ch+var_4], eax
0x84974A: jz      short loc_849758
0x84974C: add     [edi+60h], eax
0x84974F: jnz     short loc_849758
0x849751: mov     ecx, edi
0x849753: call    NiD3DPass_ReleaseToPool; Release a renderer-owned NiD3DPass: release attached resources and return the pass object to the global pool when its reference count reaches zero.
0x849758: add     [esi+38h], ebx
0x84975B: mov     ecx, [esp+1Ch+var_C]
0x84975F: mov     large fs:0, ecx
0x849766: pop     ecx
0x849767: pop     edi
0x849768: pop     esi
0x849769: pop     ebx
0x84976A: add     esp, 0Ch
0x84976D: retn    10h
0x9D3450: lea     ecx, [ebp+0Ch]; void *
0x9D3453: jmp     sub_4027D0
0x9D3458: mov     edx, [esp+arg_4]
0x9D345C: lea     eax, [edx-0Ch]
0x9D345F: mov     ecx, [edx-10h]
0x9D3462: xor     ecx, eax
0x9D3464: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D3469: mov     eax, offset stru_AFB870
0x9D346E: jmp     ___CxxFrameHandler3
