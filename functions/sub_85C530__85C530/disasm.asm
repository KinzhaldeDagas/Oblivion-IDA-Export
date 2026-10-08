0x85C530: push    0FFFFFFFFh
0x85C532: push    offset SEH_85DE70
0x85C537: mov     eax, large fs:0
0x85C53D: push    eax
0x85C53E: push    ecx
0x85C53F: push    ebx
0x85C540: push    ebp
0x85C541: push    esi
0x85C542: push    edi
0x85C543: mov     eax, ds:0B30AACh
0x85C548: xor     eax, esp
0x85C54A: push    eax
0x85C54B: lea     eax, [esp+24h+var_C]
0x85C54F: mov     large fs:0, eax
0x85C555: mov     ebp, ecx
0x85C557: mov     esi, ds:0B477A8h
0x85C55D: mov     eax, [esi+24h]
0x85C560: mov     ecx, [esp+24h+arg_C]
0x85C564: mov     edi, [eax]
0x85C566: mov     edx, [ecx]
0x85C568: mov     eax, [edx+88h]
0x85C56E: push    0
0x85C570: mov     [esp+28h+var_10], edi
0x85C574: call    eax
0x85C576: mov     edi, [edi+4]
0x85C579: mov     ebx, eax
0x85C57B: cmp     edi, ebx
0x85C57D: jz      short loc_85C5B4
0x85C57F: test    edi, edi
0x85C581: jz      short loc_85C59F
0x85C583: lea     ecx, [edi+4]
0x85C586: push    ecx; lpAddend
0x85C587: call    dword ptr ds:0A2807Ch
0x85C58D: test    eax, eax
0x85C58F: jnz     short loc_85C59F
0x85C591: test    edi, edi
0x85C593: jz      short loc_85C59F
0x85C595: mov     edx, [edi]
0x85C597: mov     eax, [edx]
0x85C599: push    1
0x85C59B: mov     ecx, edi
0x85C59D: call    eax
0x85C59F: test    ebx, ebx
0x85C5A1: mov     ecx, [esp+24h+var_10]
0x85C5A5: mov     [ecx+4], ebx
0x85C5A8: jz      short loc_85C5B4
0x85C5AA: add     ebx, 4
0x85C5AD: push    ebx; lpAddend
0x85C5AE: call    dword ptr ds:0A28078h
0x85C5B4: cmp     byte ptr [esp+24h+value], 0
0x85C5B9: jnz     short loc_85C5F6
0x85C5BB: mov     edi, 1
0x85C5C0: add     [esi+60h], edi
0x85C5C3: mov     [esp+24h+value], esi
0x85C5C7: mov     eax, [ebp+38h]
0x85C5CA: lea     edx, [esp+24h+value]
0x85C5CE: push    edx; value
0x85C5CF: push    eax; index
0x85C5D0: lea     ecx, [ebp+40h]; this
0x85C5D3: mov     [esp+2Ch+var_4], 0
0x85C5DB: call    NiTArray_NiD3DPass_SetAt; Oblivion render decode: refcounted NiTArray<NiD3DPass*>::SetAt used by Lighting30Shader_SetupRenderPass. Replaces the indexed pass pointer, updates end/numObjs, and AddRef/Releases the stored pass.
0x85C5E0: or      eax, 0FFFFFFFFh
0x85C5E3: add     [esi+60h], eax
0x85C5E6: mov     [esp+24h+var_4], eax
0x85C5EA: jnz     short loc_85C5F3
0x85C5EC: mov     ecx, esi
0x85C5EE: call    NiD3DPass_ReleaseToPool; Release a renderer-owned NiD3DPass: release attached resources and return the pass object to the global pool when its reference count reaches zero.
0x85C5F3: add     [ebp+38h], edi
0x85C5F6: mov     ecx, [esp+24h+var_C]
0x85C5FA: mov     large fs:0, ecx
0x85C601: pop     ecx
0x85C602: pop     edi
0x85C603: pop     esi
0x85C604: pop     ebp
0x85C605: pop     ebx
0x85C606: add     esp, 10h
0x85C609: retn    14h
0x9D45B0: lea     ecx, [ebp+14h]; void *
0x9D45B3: jmp     sub_4027D0
0x9D45B8: mov     edx, [esp+arg_4]
0x9D45BC: lea     eax, [edx-14h]
0x9D45BF: mov     ecx, [edx-18h]
0x9D45C2: xor     ecx, eax
0x9D45C4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D45C9: mov     eax, offset stru_AFC640
0x9D45CE: jmp     ___CxxFrameHandler3
