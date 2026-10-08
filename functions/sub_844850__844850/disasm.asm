0x844850: push    0FFFFFFFFh
0x844852: push    offset SEH_880560
0x844857: mov     eax, large fs:0
0x84485D: push    eax
0x84485E: push    ebx
0x84485F: push    ebp
0x844860: push    esi
0x844861: push    edi
0x844862: mov     eax, ds:0B30AACh
0x844867: xor     eax, esp
0x844869: push    eax
0x84486A: lea     eax, [esp+20h+var_C]
0x84486E: mov     large fs:0, eax
0x844874: mov     esi, ecx
0x844876: mov     eax, [esp+20h+arg_8]
0x84487A: mov     eax, [eax+10h]
0x84487D: mov     edx, [esi]
0x84487F: mov     edx, [edx+0BCh]
0x844885: mov     edi, ds:0B45A2Ch
0x84488B: push    eax
0x84488C: mov     eax, [esp+24h+arg_0]
0x844890: push    0
0x844892: push    eax
0x844893: call    edx
0x844895: mov     ecx, [esp+20h+value]
0x844899: mov     eax, [edi+24h]
0x84489C: mov     ebp, [eax]
0x84489E: push    0
0x8448A0: push    ecx
0x8448A1: mov     ecx, esi
0x8448A3: call    sub_848FD0
0x8448A8: mov     ebx, [ebp+4]
0x8448AB: cmp     ebx, eax
0x8448AD: mov     [esp+20h+arg_8], eax
0x8448B1: jz      short loc_8448E8
0x8448B3: test    ebx, ebx
0x8448B5: jz      short loc_8448D7
0x8448B7: lea     edx, [ebx+4]
0x8448BA: push    edx; lpAddend
0x8448BB: call    dword ptr ds:0A2807Ch
0x8448C1: test    eax, eax
0x8448C3: jnz     short loc_8448D3
0x8448C5: test    ebx, ebx
0x8448C7: jz      short loc_8448D3
0x8448C9: mov     eax, [ebx]
0x8448CB: mov     edx, [eax]
0x8448CD: push    1
0x8448CF: mov     ecx, ebx
0x8448D1: call    edx
0x8448D3: mov     eax, [esp+20h+arg_8]
0x8448D7: test    eax, eax
0x8448D9: mov     [ebp+4], eax
0x8448DC: jz      short loc_8448E8
0x8448DE: add     eax, 4
0x8448E1: push    eax; lpAddend
0x8448E2: call    dword ptr ds:0A28078h
0x8448E8: mov     eax, [esp+20h+value]
0x8448EC: push    eax
0x8448ED: push    ebp
0x8448EE: mov     ecx, esi
0x8448F0: call    sub_848FA0
0x8448F5: mov     ebx, 1
0x8448FA: add     [edi+60h], ebx
0x8448FD: mov     [esp+20h+value], edi
0x844901: mov     edx, [esi+38h]
0x844904: lea     ecx, [esp+20h+value]
0x844908: push    ecx; value
0x844909: push    edx; index
0x84490A: lea     ecx, [esi+40h]; this
0x84490D: mov     [esp+28h+var_4], 0
0x844915: call    NiTArray_NiD3DPass_SetAt; Oblivion render decode: refcounted NiTArray<NiD3DPass*>::SetAt used by Lighting30Shader_SetupRenderPass. Replaces the indexed pass pointer, updates end/numObjs, and AddRef/Releases the stored pass.
0x84491A: or      eax, 0FFFFFFFFh
0x84491D: add     [edi+60h], eax
0x844920: mov     [esp+20h+var_4], eax
0x844924: jnz     short loc_84492D
0x844926: mov     ecx, edi
0x844928: call    NiD3DPass_ReleaseToPool; Release a renderer-owned NiD3DPass: release attached resources and return the pass object to the global pool when its reference count reaches zero.
0x84492D: add     [esi+38h], ebx
0x844930: mov     ecx, dword ptr [esp+20h+var_C]
0x844934: mov     large fs:0, ecx
0x84493B: pop     ecx
0x84493C: pop     edi
0x84493D: pop     esi
0x84493E: pop     ebp
0x84493F: pop     ebx
0x844940: add     esp, 0Ch
0x844943: retn    10h
0x9D3390: lea     ecx, [ebp+10h]; void *
0x9D3393: jmp     sub_4027D0
0x9D3398: mov     edx, [esp+arg_4]
0x9D339C: lea     eax, [edx-10h]
0x9D339F: mov     ecx, [edx-14h]
0x9D33A2: xor     ecx, eax
0x9D33A4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D33A9: mov     eax, offset stru_AFB7C0
0x9D33AE: jmp     ___CxxFrameHandler3
