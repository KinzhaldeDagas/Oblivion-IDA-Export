0x6E8370: push    0FFFFFFFFh
0x6E8372: push    offset SEH_8C62B0
0x6E8377: mov     eax, large fs:0
0x6E837D: push    eax
0x6E837E: push    ecx
0x6E837F: push    esi
0x6E8380: mov     eax, ds:0B30AACh
0x6E8385: xor     eax, esp
0x6E8387: push    eax
0x6E8388: lea     eax, [esp+18h+var_C]
0x6E838C: mov     large fs:0, eax
0x6E8392: push    18h; Size
0x6E8394: call    FormHeapAlloc
0x6E8399: mov     esi, eax
0x6E839B: add     esp, 4
0x6E839E: mov     [esp+18h+var_10], esi
0x6E83A2: test    esi, esi
0x6E83A4: mov     [esp+18h+var_4], 0
0x6E83AC: jz      short loc_6E83E4
0x6E83AE: mov     ecx, esi
0x6E83B0: call    sub_6EC220
0x6E83B5: mov     dword ptr [esi], offset ??_7NiBoolInterpolator@@6B@; const NiBoolInterpolator::`vftable'
0x6E83BB: mov     al, ds:0A7C6ACh
0x6E83C0: mov     [esi+0Ch], al
0x6E83C3: mov     dword ptr [esi+10h], 0
0x6E83CA: mov     dword ptr [esi+14h], 0
0x6E83D1: mov     eax, esi
0x6E83D3: mov     ecx, [esp+18h+var_C]
0x6E83D7: mov     large fs:0, ecx
0x6E83DE: pop     ecx
0x6E83DF: pop     esi
0x6E83E0: add     esp, 10h
0x6E83E3: retn
0x6E83E4: xor     eax, eax
0x6E83E6: mov     ecx, [esp+18h+var_C]
0x6E83EA: mov     large fs:0, ecx
0x6E83F1: pop     ecx
0x6E83F2: pop     esi
0x6E83F3: add     esp, 10h
0x6E83F6: retn
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
