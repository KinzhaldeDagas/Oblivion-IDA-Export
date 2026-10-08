0x7B7650: push    0FFFFFFFFh
0x7B7652: push    offset SEH_8C8970
0x7B7657: mov     eax, large fs:0
0x7B765D: push    eax
0x7B765E: push    ecx
0x7B765F: push    esi
0x7B7660: push    edi
0x7B7661: mov     eax, ds:0B30AACh
0x7B7666: xor     eax, esp
0x7B7668: push    eax
0x7B7669: lea     eax, [esp+1Ch+var_C]
0x7B766D: mov     large fs:0, eax
0x7B7673: mov     eax, ds:0B430FCh
0x7B7678: test    eax, eax
0x7B767A: jnz     short loc_7B76F3
0x7B767C: push    226Ch; Size
0x7B7681: call    FormHeapAlloc
0x7B7686: add     esp, 4
0x7B7689: mov     [esp+1Ch+var_10], eax
0x7B768D: test    eax, eax
0x7B768F: mov     [esp+1Ch+var_4], 0
0x7B7697: jz      short loc_7B76A4
0x7B7699: mov     ecx, eax; this
0x7B769B: call    ??0BSShaderAccumulator@@QAE@XZ; BSShaderAccumulator constructor. Constructs 0x1A3 selector-indexed BSTPersistentList<...,BSShaderProperty::RenderPass *> elements at this+0x104 with stride 0x14, covering selectors 0x000..0x1A2. Bucket(selector) = this + 0x104 + 0x14*uint16(selector).
0x7B76A0: mov     esi, eax
0x7B76A2: jmp     short loc_7B76A6
0x7B76A4: xor     esi, esi
0x7B76A6: mov     eax, ds:0B430FCh
0x7B76AB: cmp     eax, esi
0x7B76AD: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x7B76B5: jz      short loc_7B76F3
0x7B76B7: test    eax, eax
0x7B76B9: jz      short loc_7B76D9
0x7B76BB: mov     edi, eax
0x7B76BD: add     eax, 4
0x7B76C0: push    eax; lpAddend
0x7B76C1: call    dword ptr ds:0A2807Ch
0x7B76C7: test    eax, eax
0x7B76C9: jnz     short loc_7B76D9
0x7B76CB: test    edi, edi
0x7B76CD: jz      short loc_7B76D9
0x7B76CF: mov     eax, [edi]
0x7B76D1: mov     edx, [eax]
0x7B76D3: push    1
0x7B76D5: mov     ecx, edi
0x7B76D7: call    edx
0x7B76D9: test    esi, esi
0x7B76DB: mov     eax, esi
0x7B76DD: mov     ds:0B430FCh, eax
0x7B76E2: jz      short loc_7B76F3
0x7B76E4: add     esi, 4
0x7B76E7: push    esi; lpAddend
0x7B76E8: call    dword ptr ds:0A28078h
0x7B76EE: mov     eax, ds:0B430FCh
0x7B76F3: mov     ecx, dword ptr [esp+1Ch+var_C]
0x7B76F7: mov     large fs:0, ecx
0x7B76FE: pop     ecx
0x7B76FF: pop     edi
0x7B7700: pop     esi
0x7B7701: add     esp, 10h
0x7B7704: retn
0x9CA7E0: mov     eax, [ebp-10h]
0x9CA7E3: push    eax
0x9CA7E4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9CA7E9: pop     ecx
0x9CA7EA: retn
0x9CA7EB: mov     edx, [esp+arg_4]
0x9CA7EF: lea     eax, [edx-0Ch]
0x9CA7F2: mov     ecx, [edx-10h]
0x9CA7F5: xor     ecx, eax
0x9CA7F7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CA7FC: mov     eax, offset stru_AF2E8C
0x9CA801: jmp     ___CxxFrameHandler3
