0x723BF0: push    0FFFFFFFFh
0x723BF2: push    offset SEH_8C62B0
0x723BF7: mov     eax, large fs:0
0x723BFD: push    eax
0x723BFE: push    ecx
0x723BFF: push    esi
0x723C00: mov     eax, ds:0B30AACh
0x723C05: xor     eax, esp
0x723C07: push    eax
0x723C08: lea     eax, [esp+18h+var_C]
0x723C0C: mov     large fs:0, eax
0x723C12: push    104h; Size
0x723C17: call    FormHeapAlloc
0x723C1C: mov     esi, eax
0x723C1E: add     esp, 4
0x723C21: mov     [esp+18h+var_10], esi
0x723C25: test    esi, esi
0x723C27: mov     [esp+18h+var_4], 0
0x723C2F: jz      short loc_723C6C
0x723C31: mov     ecx, esi
0x723C33: call    sub_723F70
0x723C38: mov     dword ptr [esi], offset ??_7NiLODNode@@6B@; const NiLODNode::`vftable'
0x723C3E: mov     dword ptr [esi+0FCh], 0
0x723C48: mov     dword ptr [esi+0E0h], 0
0x723C52: mov     byte ptr [esi+100h], 1
0x723C59: mov     eax, esi
0x723C5B: mov     ecx, [esp+18h+var_C]
0x723C5F: mov     large fs:0, ecx
0x723C66: pop     ecx
0x723C67: pop     esi
0x723C68: add     esp, 10h
0x723C6B: retn
0x723C6C: xor     eax, eax
0x723C6E: mov     ecx, [esp+18h+var_C]
0x723C72: mov     large fs:0, ecx
0x723C79: pop     ecx
0x723C7A: pop     esi
0x723C7B: add     esp, 10h
0x723C7E: retn
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
