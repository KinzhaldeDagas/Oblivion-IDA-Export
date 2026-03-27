0x7EE4F0: push    0FFFFFFFFh
0x7EE4F2: push    offset ??1BSShaderLightingProperty@@UAE@XZ_SEH
0x7EE4F7: mov     eax, large fs:0
0x7EE4FD: push    eax
0x7EE4FE: push    ecx
0x7EE4FF: push    ebx
0x7EE500: push    ebp
0x7EE501: push    esi
0x7EE502: push    edi
0x7EE503: mov     eax, ds:0B30AACh
0x7EE508: xor     eax, esp
0x7EE50A: push    eax
0x7EE50B: lea     eax, [esp+24h+var_C]
0x7EE50F: mov     large fs:0, eax
0x7EE515: mov     edi, ecx
0x7EE517: mov     [esp+24h+var_10], edi
0x7EE51B: mov     dword ptr [edi], offset ??_7BSShaderLightingProperty@@6B@; const BSShaderLightingProperty::`vftable'
0x7EE521: lea     ecx, [edi+6Ch]
0x7EE524: mov     [esp+24h+var_4], 2
0x7EE52C: call    NiTPointerList__FreeAllNodes
0x7EE531: xor     ebx, ebx
0x7EE533: cmp     [edi+8Ch], ebx
0x7EE539: mov     [edi+7Ch], ebx
0x7EE53C: jz      short loc_7EE58B
0x7EE53E: lea     esi, [edi+80h]
0x7EE544: mov     eax, [edi+84h]
0x7EE54A: mov     ecx, [esi+4]
0x7EE54D: mov     ebp, [eax+8]
0x7EE550: mov     eax, [ecx]
0x7EE552: cmp     eax, ebx
0x7EE554: mov     [esi+4], eax
0x7EE557: jz      short loc_7EE55E
0x7EE559: mov     [eax+4], ebx
0x7EE55C: jmp     short loc_7EE561
0x7EE55E: mov     [esi+8], ebx
0x7EE561: mov     edx, [esi]
0x7EE563: mov     eax, [edx+8]
0x7EE566: push    ecx
0x7EE567: mov     ecx, esi
0x7EE569: call    eax
0x7EE56B: add     dword ptr [esi+0Ch], 0FFFFFFFFh
0x7EE56F: cmp     ebp, ebx
0x7EE571: jz      short loc_7EE583
0x7EE573: mov     ecx, ebp
0x7EE575: call    sub_56C0F0
0x7EE57A: push    ebp
0x7EE57B: call    FormHeapFree
0x7EE580: add     esp, 4
0x7EE583: cmp     [edi+8Ch], ebx
0x7EE589: jnz     short loc_7EE544
0x7EE58B: lea     ecx, [edi+80h]
0x7EE591: mov     [edi+90h], ebx
0x7EE597: mov     byte ptr [esp+24h+var_4], 1
0x7EE59C: call    ??1?$NiTPointerList@PAUDECAL_DATA@@@@UAE@XZ; NiTPointerList<DECAL_DATA *>::~NiTPointerList<DECAL_DATA *>(void)
0x7EE5A1: lea     ecx, [edi+6Ch]
0x7EE5A4: mov     byte ptr [esp+24h+var_4], bl
0x7EE5A8: call    ??1?$NiTPointerList@PAVShadowSceneLight@@@@UAE@XZ; NiTPointerList<ShadowSceneLight *>::~NiTPointerList<ShadowSceneLight *>(void)
0x7EE5AD: mov     ecx, edi; this
0x7EE5AF: mov     [esp+24h+var_4], 0FFFFFFFFh
0x7EE5B7: call    ??1BSShaderProperty@@UAE@XZ; BSShaderProperty::~BSShaderProperty(void)
0x7EE5BC: mov     ecx, dword ptr [esp+24h+var_C]
0x7EE5C0: mov     large fs:0, ecx
0x7EE5C7: pop     ecx
0x7EE5C8: pop     edi
0x7EE5C9: pop     esi
0x7EE5CA: pop     ebp
0x7EE5CB: pop     ebx
0x7EE5CC: add     esp, 10h
0x7EE5CF: retn
