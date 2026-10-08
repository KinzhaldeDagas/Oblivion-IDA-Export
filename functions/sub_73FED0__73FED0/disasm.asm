0x73FED0: push    0FFFFFFFFh; Pass223: Default NiRendererSpecificProperty producer for global 0x00B401D8, consumed by NiPropertyState slot 3.
0x73FED2: push    offset SEH_8C8970
0x73FED7: mov     eax, large fs:0
0x73FEDD: push    eax
0x73FEDE: push    ecx
0x73FEDF: push    esi
0x73FEE0: push    edi
0x73FEE1: mov     eax, ds:0B30AACh
0x73FEE6: xor     eax, esp
0x73FEE8: push    eax
0x73FEE9: lea     eax, [esp+1Ch+var_C]
0x73FEED: mov     large fs:0, eax
0x73FEF3: push    18h; Size
0x73FEF5: call    FormHeapAlloc
0x73FEFA: mov     esi, eax
0x73FEFC: add     esp, 4
0x73FEFF: mov     [esp+1Ch+var_10], esi
0x73FF03: test    esi, esi
0x73FF05: mov     [esp+1Ch+var_4], 0
0x73FF0D: jz      short loc_73FF1E
0x73FF0F: mov     ecx, esi; this
0x73FF11: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x73FF16: mov     dword ptr [esi], offset ??_7NiRendererSpecificProperty@@6B@; const NiRendererSpecificProperty::`vftable'
0x73FF1C: jmp     short loc_73FF20
0x73FF1E: xor     esi, esi
0x73FF20: mov     eax, ds:0B401D8h
0x73FF25: cmp     eax, esi
0x73FF27: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x73FF2F: jz      short loc_73FF67
0x73FF31: test    eax, eax
0x73FF33: jz      short loc_73FF53
0x73FF35: mov     edi, eax
0x73FF37: add     eax, 4
0x73FF3A: push    eax; lpAddend
0x73FF3B: call    dword ptr ds:0A2807Ch
0x73FF41: test    eax, eax
0x73FF43: jnz     short loc_73FF53
0x73FF45: test    edi, edi
0x73FF47: jz      short loc_73FF53
0x73FF49: mov     eax, [edi]
0x73FF4B: mov     edx, [eax]
0x73FF4D: push    1
0x73FF4F: mov     ecx, edi
0x73FF51: call    edx
0x73FF53: test    esi, esi
0x73FF55: mov     ds:0B401D8h, esi
0x73FF5B: jz      short loc_73FF67
0x73FF5D: add     esi, 4
0x73FF60: push    esi; lpAddend
0x73FF61: call    dword ptr ds:0A28078h
0x73FF67: mov     ecx, dword ptr [esp+1Ch+var_C]
0x73FF6B: mov     large fs:0, ecx
0x73FF72: pop     ecx
0x73FF73: pop     edi
0x73FF74: pop     esi
0x73FF75: add     esp, 10h
0x73FF78: retn
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
