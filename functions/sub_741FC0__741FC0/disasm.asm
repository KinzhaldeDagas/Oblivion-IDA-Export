0x741FC0: push    0FFFFFFFFh
0x741FC2: push    offset SEH_8C62B0
0x741FC7: mov     eax, large fs:0
0x741FCD: push    eax
0x741FCE: push    ecx
0x741FCF: push    esi
0x741FD0: mov     eax, ds:0B30AACh
0x741FD5: xor     eax, esp
0x741FD7: push    eax
0x741FD8: lea     eax, [esp+18h+var_C]
0x741FDC: mov     large fs:0, eax
0x741FE2: push    0C0h ; 'À'; Size
0x741FE7: call    FormHeapAlloc
0x741FEC: mov     esi, eax
0x741FEE: add     esp, 4
0x741FF1: mov     [esp+18h+var_10], esi
0x741FF5: xor     eax, eax
0x741FF7: cmp     esi, eax
0x741FF9: mov     [esp+18h+var_4], eax
0x741FFD: jz      short loc_74200E
0x741FFF: mov     ecx, esi
0x742001: call    NiGeometry__NiGeometry_0
0x742006: mov     dword ptr [esi], offset ??_7NiParticles@@6B@; const NiParticles::`vftable'
0x74200C: mov     eax, esi
0x74200E: mov     ecx, [esp+18h+var_C]
0x742012: mov     large fs:0, ecx
0x742019: pop     ecx
0x74201A: pop     esi
0x74201B: add     esp, 10h
0x74201E: retn
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
