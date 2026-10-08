0x843FD0: push    0FFFFFFFFh
0x843FD2: push    offset SEH_880560
0x843FD7: mov     eax, large fs:0
0x843FDD: push    eax
0x843FDE: push    ebx
0x843FDF: push    ebp
0x843FE0: push    esi
0x843FE1: push    edi
0x843FE2: mov     eax, ds:0B30AACh
0x843FE7: xor     eax, esp
0x843FE9: push    eax
0x843FEA: lea     eax, [esp+20h+var_C]
0x843FEE: mov     large fs:0, eax
0x843FF4: mov     esi, ecx
0x843FF6: mov     eax, [esp+20h+arg_8]
0x843FFA: mov     eax, [eax+10h]
0x843FFD: mov     edx, [esi]
0x843FFF: mov     edx, [edx+0BCh]
0x844005: mov     edi, ds:0B45A00h
0x84400B: push    eax
0x84400C: mov     eax, [esp+24h+arg_0]
0x844010: push    0
0x844012: push    eax
0x844013: call    edx
0x844015: mov     ecx, [esp+20h+value]
0x844019: mov     eax, [edi+24h]
0x84401C: mov     ebp, [eax]
0x84401E: push    0
0x844020: push    ecx
0x844021: mov     ecx, esi
0x844023: call    sub_848FD0
0x844028: mov     ebx, [ebp+4]
0x84402B: cmp     ebx, eax
0x84402D: mov     [esp+20h+arg_8], eax
0x844031: jz      short loc_844068
0x844033: test    ebx, ebx
0x844035: jz      short loc_844057
0x844037: lea     edx, [ebx+4]
0x84403A: push    edx; lpAddend
0x84403B: call    dword ptr ds:0A2807Ch
0x844041: test    eax, eax
0x844043: jnz     short loc_844053
0x844045: test    ebx, ebx
0x844047: jz      short loc_844053
0x844049: mov     eax, [ebx]
0x84404B: mov     edx, [eax]
0x84404D: push    1
0x84404F: mov     ecx, ebx
0x844051: call    edx
0x844053: mov     eax, [esp+20h+arg_8]
0x844057: test    eax, eax
0x844059: mov     [ebp+4], eax
0x84405C: jz      short loc_844068
0x84405E: add     eax, 4
0x844061: push    eax; lpAddend
0x844062: call    dword ptr ds:0A28078h
0x844068: mov     eax, [esp+20h+value]
0x84406C: push    eax
0x84406D: push    ebp
0x84406E: mov     ecx, esi
0x844070: call    sub_848FA0
0x844075: mov     ebx, 1
0x84407A: add     [edi+60h], ebx
0x84407D: mov     [esp+20h+value], edi
0x844081: mov     edx, [esi+38h]
0x844084: lea     ecx, [esp+20h+value]
0x844088: push    ecx; value
0x844089: push    edx; index
0x84408A: lea     ecx, [esi+40h]; this
0x84408D: mov     [esp+28h+var_4], 0
0x844095: call    NiTArray_NiD3DPass_SetAt; Oblivion render decode: refcounted NiTArray<NiD3DPass*>::SetAt used by Lighting30Shader_SetupRenderPass. Replaces the indexed pass pointer, updates end/numObjs, and AddRef/Releases the stored pass.
0x84409A: or      eax, 0FFFFFFFFh
0x84409D: add     [edi+60h], eax
0x8440A0: mov     [esp+20h+var_4], eax
0x8440A4: jnz     short loc_8440AD
0x8440A6: mov     ecx, edi
0x8440A8: call    NiD3DPass_ReleaseToPool; Release a renderer-owned NiD3DPass: release attached resources and return the pass object to the global pool when its reference count reaches zero.
0x8440AD: add     [esi+38h], ebx
0x8440B0: mov     ecx, dword ptr [esp+20h+var_C]
0x8440B4: mov     large fs:0, ecx
0x8440BB: pop     ecx
0x8440BC: pop     edi
0x8440BD: pop     esi
0x8440BE: pop     ebp
0x8440BF: pop     ebx
0x8440C0: add     esp, 0Ch
0x8440C3: retn    10h
0x9D3390: lea     ecx, [ebp+10h]; void *
0x9D3393: jmp     sub_4027D0
0x9D3398: mov     edx, [esp+arg_4]
0x9D339C: lea     eax, [edx-10h]
0x9D339F: mov     ecx, [edx-14h]
0x9D33A2: xor     ecx, eax
0x9D33A4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D33A9: mov     eax, offset stru_AFB7C0
0x9D33AE: jmp     ___CxxFrameHandler3
