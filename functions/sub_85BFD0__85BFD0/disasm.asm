0x85BFD0: push    0FFFFFFFFh
0x85BFD2: push    offset SEH_85E410
0x85BFD7: mov     eax, large fs:0
0x85BFDD: push    eax
0x85BFDE: sub     esp, 8
0x85BFE1: push    ebx
0x85BFE2: push    ebp
0x85BFE3: push    esi
0x85BFE4: push    edi
0x85BFE5: mov     eax, ds:0B30AACh
0x85BFEA: xor     eax, esp
0x85BFEC: push    eax
0x85BFED: lea     eax, [esp+28h+var_C]
0x85BFF1: mov     large fs:0, eax
0x85BFF7: mov     [esp+28h+var_14], ecx
0x85BFFB: mov     esi, ds:0B47794h
0x85C001: mov     eax, [esi+24h]
0x85C004: mov     ebp, [esp+28h+arg_C]
0x85C008: mov     edi, [eax]
0x85C00A: mov     edx, [ebp+0]
0x85C00D: mov     eax, [edx+88h]
0x85C013: push    0
0x85C015: mov     ecx, ebp
0x85C017: mov     [esp+2Ch+var_10], edi
0x85C01B: call    eax
0x85C01D: mov     edi, [edi+4]
0x85C020: mov     ebx, eax
0x85C022: cmp     edi, ebx
0x85C024: jz      short loc_85C05B
0x85C026: test    edi, edi
0x85C028: jz      short loc_85C046
0x85C02A: lea     ecx, [edi+4]
0x85C02D: push    ecx; lpAddend
0x85C02E: call    dword ptr ds:0A2807Ch
0x85C034: test    eax, eax
0x85C036: jnz     short loc_85C046
0x85C038: test    edi, edi
0x85C03A: jz      short loc_85C046
0x85C03C: mov     edx, [edi]
0x85C03E: mov     eax, [edx]
0x85C040: push    1
0x85C042: mov     ecx, edi
0x85C044: call    eax
0x85C046: test    ebx, ebx
0x85C048: mov     ecx, [esp+28h+var_10]
0x85C04C: mov     [ecx+4], ebx
0x85C04F: jz      short loc_85C05B
0x85C051: add     ebx, 4
0x85C054: push    ebx; lpAddend
0x85C055: call    dword ptr ds:0A28078h
0x85C05B: mov     edx, [esi+24h]
0x85C05E: mov     ecx, [esp+28h+var_14]
0x85C062: mov     ebx, [edx+4]
0x85C065: push    0
0x85C067: push    ebp
0x85C068: call    sub_848FD0
0x85C06D: mov     edi, [ebx+4]
0x85C070: mov     ebp, eax
0x85C072: cmp     edi, ebp
0x85C074: jz      short loc_85C0A7
0x85C076: test    edi, edi
0x85C078: jz      short loc_85C096
0x85C07A: lea     eax, [edi+4]
0x85C07D: push    eax; lpAddend
0x85C07E: call    dword ptr ds:0A2807Ch
0x85C084: test    eax, eax
0x85C086: jnz     short loc_85C096
0x85C088: test    edi, edi
0x85C08A: jz      short loc_85C096
0x85C08C: mov     edx, [edi]
0x85C08E: mov     eax, [edx]
0x85C090: push    1
0x85C092: mov     ecx, edi
0x85C094: call    eax
0x85C096: test    ebp, ebp
0x85C098: mov     [ebx+4], ebp
0x85C09B: jz      short loc_85C0A7
0x85C09D: add     ebp, 4
0x85C0A0: push    ebp; lpAddend
0x85C0A1: call    dword ptr ds:0A28078h
0x85C0A7: cmp     byte ptr [esp+28h+value], 0
0x85C0AC: jnz     short loc_85C0ED
0x85C0AE: mov     ebx, 1
0x85C0B3: add     [esi+60h], ebx
0x85C0B6: mov     [esp+28h+value], esi
0x85C0BA: mov     edi, [esp+28h+var_14]
0x85C0BE: mov     edx, [edi+38h]
0x85C0C1: lea     ecx, [esp+28h+value]
0x85C0C5: push    ecx; value
0x85C0C6: push    edx; index
0x85C0C7: lea     ecx, [edi+40h]; this
0x85C0CA: mov     [esp+30h+var_4], 0
0x85C0D2: call    NiTArray_NiD3DPass_SetAt; Oblivion render decode: refcounted NiTArray<NiD3DPass*>::SetAt used by Lighting30Shader_SetupRenderPass. Replaces the indexed pass pointer, updates end/numObjs, and AddRef/Releases the stored pass.
0x85C0D7: or      eax, 0FFFFFFFFh
0x85C0DA: add     [esi+60h], eax
0x85C0DD: mov     [esp+28h+var_4], eax
0x85C0E1: jnz     short loc_85C0EA
0x85C0E3: mov     ecx, esi
0x85C0E5: call    NiD3DPass_ReleaseToPool; Release a renderer-owned NiD3DPass: release attached resources and return the pass object to the global pool when its reference count reaches zero.
0x85C0EA: add     [edi+38h], ebx
0x85C0ED: mov     ecx, dword ptr [esp+28h+var_C]
0x85C0F1: mov     large fs:0, ecx
0x85C0F8: pop     ecx
0x85C0F9: pop     edi
0x85C0FA: pop     esi
0x85C0FB: pop     ebp
0x85C0FC: pop     ebx
0x85C0FD: add     esp, 14h
0x85C100: retn    14h
0x9D4580: lea     ecx, [ebp+14h]; void *
0x9D4583: jmp     sub_4027D0
0x9D4588: mov     edx, [esp+arg_4]
0x9D458C: lea     eax, [edx-18h]
0x9D458F: mov     ecx, [edx-1Ch]
0x9D4592: xor     ecx, eax
0x9D4594: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D4599: mov     eax, offset stru_AFC614
0x9D459E: jmp     ___CxxFrameHandler3
