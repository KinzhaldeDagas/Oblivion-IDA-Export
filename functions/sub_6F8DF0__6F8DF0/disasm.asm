0x6F8DF0: push    0FFFFFFFFh
0x6F8DF2: push    offset SEH_6F8DF0
0x6F8DF7: mov     eax, large fs:0
0x6F8DFD: push    eax
0x6F8DFE: sub     esp, 7Ch
0x6F8E01: mov     eax, ds:0B30AACh
0x6F8E06: xor     eax, esp
0x6F8E08: mov     [esp+88h+var_10], eax
0x6F8E0C: push    esi; int
0x6F8E0D: mov     eax, ds:0B30AACh
0x6F8E12: xor     eax, esp
0x6F8E14: push    eax; int
0x6F8E15: lea     eax, [esp+90h+var_C]
0x6F8E1C: mov     large fs:0, eax
0x6F8E22: mov     eax, [esp+90h+arg_0]
0x6F8E29: mov     esi, ecx
0x6F8E2B: mov     [esp+90h+var_88], esi
0x6F8E2F: mov     [esi+4], eax
0x6F8E32: push    offset aC; "C"
0x6F8E37: lea     ecx, [esp+94h+var_84]
0x6F8E3B: mov     [esp+94h+var_4], 0
0x6F8E46: mov     dword ptr [esi], offset ??_7?$codecvt@DDH@std@@6B@; const std::codecvt<char,char,int>::`vftable'
0x6F8E4C: call    sub_6F84E0
0x6F8E51: lea     ecx, [esp+90h+var_84]; this
0x6F8E55: call    sub_6F7670
0x6F8E5A: mov     eax, esi
0x6F8E5C: mov     ecx, [esp+90h+var_C]
0x6F8E63: mov     large fs:0, ecx
0x6F8E6A: pop     ecx
0x6F8E6B: pop     esi
0x6F8E6C: mov     ecx, [esp+88h+var_10]
0x6F8E70: xor     ecx, esp
0x6F8E72: call    @__security_check_cookie@4; __security_check_cookie(x)
0x6F8E77: add     esp, 88h
0x6F8E7D: retn    4
0x6F6E00: mov     dword ptr [ecx], offset ??_7facet@locale@std@@6B@
0x6F6E06: retn
0x9C9050: mov     ecx, [ebp-88h]
0x9C9056: jmp     loc_6F6E00
0x9C905B: mov     edx, [esp+arg_4]
0x9C905F: lea     eax, [edx-80h]
0x9C9062: mov     ecx, [edx-84h]
0x9C9068: xor     ecx, eax
0x9C906A: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C906F: add     eax, 4
0x9C9072: mov     ecx, [edx-4]
0x9C9075: xor     ecx, eax
0x9C9077: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C907C: mov     eax, offset stru_AF19B0
0x9C9081: jmp     ___CxxFrameHandler3
