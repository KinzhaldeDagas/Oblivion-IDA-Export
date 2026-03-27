0x71F730: push    0FFFFFFFFh
0x71F732: push    offset ??1NiDevImageConverter@@UAE@XZ_SEH
0x71F737: mov     eax, large fs:0
0x71F73D: push    eax
0x71F73E: push    ecx
0x71F73F: push    ebx
0x71F740: push    ebp
0x71F741: push    esi
0x71F742: push    edi
0x71F743: mov     eax, ds:0B30AACh
0x71F748: xor     eax, esp
0x71F74A: push    eax
0x71F74B: lea     eax, [esp+24h+var_C]
0x71F74F: mov     large fs:0, eax
0x71F755: mov     ebp, ecx
0x71F757: mov     [esp+24h+var_10], ebp
0x71F75B: mov     dword ptr [ebp+0], offset ??_7NiDevImageConverter@@6B@; const NiDevImageConverter::`vftable'
0x71F762: mov     eax, [ebp+89Ch]
0x71F768: xor     ebx, ebx
0x71F76A: cmp     eax, ebx
0x71F76C: mov     [esp+24h+var_4], 2
0x71F774: jz      short loc_71F7BB
0x71F776: lea     esi, [ebp+890h]
0x71F77C: lea     esp, [esp+0]
0x71F780: mov     eax, [esi+4]
0x71F783: mov     ecx, [eax]
0x71F785: cmp     ecx, ebx
0x71F787: mov     [esi+4], ecx
0x71F78A: jz      short loc_71F791
0x71F78C: mov     [ecx+4], ebx
0x71F78F: jmp     short loc_71F794
0x71F791: mov     [esi+8], ebx
0x71F794: mov     edx, [esi]
0x71F796: mov     edi, [eax+8]
0x71F799: push    eax
0x71F79A: mov     eax, [edx+8]
0x71F79D: mov     ecx, esi
0x71F79F: call    eax
0x71F7A1: add     dword ptr [esi+0Ch], 0FFFFFFFFh
0x71F7A5: cmp     edi, ebx
0x71F7A7: jz      short loc_71F7B3
0x71F7A9: mov     edx, [edi]
0x71F7AB: mov     eax, [edx]
0x71F7AD: push    1
0x71F7AF: mov     ecx, edi
0x71F7B1: call    eax
0x71F7B3: cmp     [ebp+89Ch], ebx
0x71F7B9: jnz     short loc_71F780
0x71F7BB: lea     ecx, [ebp+890h]
0x71F7C1: mov     byte ptr [esp+24h+var_4], 1
0x71F7C6: call    ??1?$NiTPointerList@PAVNiImageReader@@@@UAE@XZ; NiTPointerList<NiImageReader *>::~NiTPointerList<NiImageReader *>(void)
0x71F7CB: lea     ecx, [ebp+680h]; void *
0x71F7D1: mov     byte ptr [esp+24h+var_4], bl
0x71F7D5: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x71F7DA: mov     ecx, ebp; this
0x71F7DC: mov     [esp+24h+var_4], 0FFFFFFFFh
0x71F7E4: call    ??1NiImageConverter@@UAE@XZ; NiImageConverter::~NiImageConverter(void)
0x71F7E9: mov     ecx, [esp+24h+var_C]
0x71F7ED: mov     large fs:0, ecx
0x71F7F4: pop     ecx
0x71F7F5: pop     edi
0x71F7F6: pop     esi
0x71F7F7: pop     ebp
0x71F7F8: pop     ebx
0x71F7F9: add     esp, 10h
0x71F7FC: retn
