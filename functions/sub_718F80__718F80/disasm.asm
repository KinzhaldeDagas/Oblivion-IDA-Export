0x718F80: push    0FFFFFFFFh
0x718F82: push    offset SEH_8C62B0
0x718F87: mov     eax, large fs:0
0x718F8D: push    eax
0x718F8E: push    ecx
0x718F8F: push    esi
0x718F90: mov     eax, ds:0B30AACh
0x718F95: xor     eax, esp
0x718F97: push    eax
0x718F98: lea     eax, [esp+18h+var_C]
0x718F9C: mov     large fs:0, eax
0x718FA2: push    24h ; '$'; Size
0x718FA4: call    FormHeapAlloc
0x718FA9: mov     esi, eax
0x718FAB: add     esp, 4
0x718FAE: mov     [esp+18h+var_10], esi
0x718FB2: test    esi, esi
0x718FB4: mov     [esp+18h+var_4], 0
0x718FBC: jz      short loc_718FF2
0x718FBE: mov     ecx, esi; this
0x718FC0: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x718FC5: mov     dword ptr [esi], offset ??_7NiStencilProperty@@6B@; const NiStencilProperty::`vftable'
0x718FCB: mov     dword ptr [esi+1Ch], 0
0x718FD2: mov     dword ptr [esi+20h], 0FFFFFFFFh
0x718FD9: mov     word ptr [esi+18h], 4180h
0x718FDF: mov     eax, esi
0x718FE1: mov     ecx, [esp+18h+var_C]
0x718FE5: mov     large fs:0, ecx
0x718FEC: pop     ecx
0x718FED: pop     esi
0x718FEE: add     esp, 10h
0x718FF1: retn
0x718FF2: xor     eax, eax
0x718FF4: mov     ecx, [esp+18h+var_C]
0x718FF8: mov     large fs:0, ecx
0x718FFF: pop     ecx
0x719000: pop     esi
0x719001: add     esp, 10h
0x719004: retn
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
