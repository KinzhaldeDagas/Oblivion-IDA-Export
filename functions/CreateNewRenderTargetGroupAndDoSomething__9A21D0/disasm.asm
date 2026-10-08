0x9A21D0: push    0FFFFFFFFh; Creates a one-color-target NiRenderTargetGroup, attaches the supplied Ni2DBuffer at slot 0, and optionally attaches a NiDepthStencilBuffer.
0x9A21D2: push    offset SEH_864830
0x9A21D7: mov     eax, large fs:0
0x9A21DD: push    eax
0x9A21DE: push    esi
0x9A21DF: push    edi
0x9A21E0: mov     eax, ___security_cookie
0x9A21E5: xor     eax, esp
0x9A21E7: push    eax
0x9A21E8: lea     eax, [esp+18h+var_C]
0x9A21EC: mov     large fs:0, eax
0x9A21F2: mov     ecx, [esp+18h+renderer]
0x9A21F6: test    ecx, ecx
0x9A21F8: jnz     short loc_9A220E
0x9A21FA: xor     eax, eax
0x9A21FC: mov     ecx, [esp+18h+var_C]
0x9A2200: mov     large fs:0, ecx
0x9A2207: pop     ecx
0x9A2208: pop     edi
0x9A2209: pop     esi
0x9A220A: add     esp, 0Ch
0x9A220D: retn
0x9A220E: mov     edi, [esp+18h+colorBuffer]
0x9A2212: test    edi, edi
0x9A2214: jz      short loc_9A21FA
0x9A2216: mov     eax, [ecx]
0x9A2218: mov     edx, [eax+9Ch]
0x9A221E: call    edx
0x9A2220: cmp     eax, 1
0x9A2223: jb      short loc_9A21FA
0x9A2225: push    24h ; '$'; Size
0x9A2227: call    FormHeapAlloc
0x9A222C: add     esp, 4
0x9A222F: mov     [esp+18h+renderer], eax
0x9A2233: test    eax, eax
0x9A2235: mov     [esp+18h+var_4], 0
0x9A223D: jz      short loc_9A224A
0x9A223F: mov     ecx, eax; this
0x9A2241: call    ??0NiRenderTargetGroup@@QAE@XZ; NiRenderTargetGroup::NiRenderTargetGroup(void)
0x9A2246: mov     esi, eax
0x9A2248: jmp     short loc_9A224C
0x9A224A: xor     esi, esi
0x9A224C: mov     eax, [esi]
0x9A224E: mov     edx, [eax+68h]
0x9A2251: push    0
0x9A2253: push    edi
0x9A2254: mov     ecx, esi
0x9A2256: mov     [esp+20h+var_4], 0FFFFFFFFh
0x9A225E: mov     dword ptr [esi+18h], 1
0x9A2265: call    edx
0x9A2267: mov     eax, [esp+18h+depthBuffer]
0x9A226B: test    eax, eax
0x9A226D: jz      short loc_9A2279
0x9A226F: mov     edx, [esi]
0x9A2271: push    eax
0x9A2272: mov     eax, [edx+6Ch]
0x9A2275: mov     ecx, esi
0x9A2277: call    eax
0x9A2279: mov     eax, esi
0x9A227B: mov     ecx, [esp+18h+var_C]
0x9A227F: mov     large fs:0, ecx
0x9A2286: pop     ecx
0x9A2287: pop     edi
0x9A2288: pop     esi
0x9A2289: add     esp, 0Ch
0x9A228C: retn
0x9D7DE0: mov     eax, [ebp+8]
0x9D7DE3: push    eax
0x9D7DE4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D7DE9: pop     ecx
0x9D7DEA: retn
0x9D7DEB: mov     edx, [esp+arg_4]
0x9D7DEF: lea     eax, [edx-8]
0x9D7DF2: mov     ecx, [edx-0Ch]
0x9D7DF5: xor     ecx, eax
0x9D7DF7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D7DFC: mov     eax, offset stru_B002B4
0x9D7E01: jmp     ___CxxFrameHandler3
