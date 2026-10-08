0x7D6F40: push    0FFFFFFFFh
0x7D6F42: push    offset SEH_8C62B0
0x7D6F47: mov     eax, large fs:0
0x7D6F4D: push    eax
0x7D6F4E: push    ecx
0x7D6F4F: push    esi
0x7D6F50: mov     eax, ds:0B30AACh
0x7D6F55: xor     eax, esp
0x7D6F57: push    eax
0x7D6F58: lea     eax, [esp+18h+var_C]
0x7D6F5C: mov     large fs:0, eax
0x7D6F62: mov     eax, [esp+18h+arg_8]
0x7D6F66: mov     ecx, ds:0B43104h
0x7D6F6C: mov     edx, [esp+18h+a2]
0x7D6F70: push    eax; a4
0x7D6F71: mov     eax, [esp+1Ch+a1]
0x7D6F75: push    ecx; a3
0x7D6F76: push    edx; a2
0x7D6F77: push    eax; a1
0x7D6F78: call    CreateNiRenderedTexture; DX10OBSE resource decode: creates NiRenderedTexture and asks the renderer to create its render-data texture; native render targets can later be sampled through the same stage/sampler SetTexture route.
0x7D6F7D: mov     esi, eax
0x7D6F7F: add     esp, 10h
0x7D6F82: test    esi, esi
0x7D6F84: jz      short loc_7D6FC3
0x7D6F86: push    24h ; '$'; Size
0x7D6F88: call    FormHeapAlloc
0x7D6F8D: add     esp, 4
0x7D6F90: mov     [esp+18h+var_10], eax
0x7D6F94: test    eax, eax
0x7D6F96: mov     [esp+18h+var_4], 0
0x7D6F9E: jz      short loc_7D6FC3
0x7D6FA0: mov     ecx, [esp+18h+a4]
0x7D6FA4: mov     edx, dword ptr [esp+18h+a3]
0x7D6FA8: push    ecx; a4
0x7D6FA9: push    edx; a3
0x7D6FAA: push    esi; a2
0x7D6FAB: mov     ecx, eax; this
0x7D6FAD: call    ??0BSRenderedTexture@@QAE@XZ; BSRenderedTexture::BSRenderedTexture(void)
0x7D6FB2: mov     ecx, [esp+18h+var_C]
0x7D6FB6: mov     large fs:0, ecx
0x7D6FBD: pop     ecx
0x7D6FBE: pop     esi
0x7D6FBF: add     esp, 10h
0x7D6FC2: retn
0x7D6FC3: xor     eax, eax
0x7D6FC5: mov     ecx, [esp+18h+var_C]
0x7D6FC9: mov     large fs:0, ecx
0x7D6FD0: pop     ecx
0x7D6FD1: pop     esi
0x7D6FD2: add     esp, 10h
0x7D6FD5: retn
0x9D62E0: mov     eax, [ebp-10h]
0x9D62E3: push    eax
0x9D62E4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D62E9: pop     ecx
0x9D62EA: retn
0x9D62EB: mov     edx, [esp+arg_4]
0x9D62EF: lea     eax, [edx-8]
0x9D62F2: mov     ecx, [edx-0Ch]
0x9D62F5: xor     ecx, eax
0x9D62F7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D62FC: mov     eax, offset stru_AFE21C
0x9D6301: jmp     ___CxxFrameHandler3
