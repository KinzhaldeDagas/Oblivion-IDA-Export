0x6BEE00: push    0FFFFFFFFh
0x6BEE02: push    offset SEH_6C20D0
0x6BEE07: mov     eax, large fs:0
0x6BEE0D: push    eax
0x6BEE0E: sub     esp, 18h
0x6BEE11: push    ebx
0x6BEE12: push    ebp
0x6BEE13: push    esi
0x6BEE14: push    edi
0x6BEE15: mov     eax, ds:0B30AACh
0x6BEE1A: xor     eax, esp
0x6BEE1C: push    eax
0x6BEE1D: lea     eax, [esp+38h+var_C]
0x6BEE21: mov     large fs:0, eax
0x6BEE27: mov     ebp, [esp+38h+arg_8]
0x6BEE2B: fld     [esp+38h+arg_0]
0x6BEE2F: mov     eax, [esp+38h+arg_4]
0x6BEE33: mov     edx, [ebp+0]
0x6BEE36: mov     edi, [eax]
0x6BEE38: push    14h; char
0x6BEE3A: lea     ecx, [esp+3Ch+var_24]
0x6BEE3E: push    ecx; int
0x6BEE3F: push    edx; int
0x6BEE40: push    edi; int
0x6BEE41: push    ecx
0x6BEE42: fstp    [esp+4Ch+var_4C]; float
0x6BEE45: call    sub_6D31B0
0x6BEE4A: add     esp, 14h
0x6BEE4D: test    al, al
0x6BEE4F: jz      loc_6BEF86
0x6BEE55: mov     esi, [ebp+0]
0x6BEE58: add     esi, 1
0x6BEE5B: xor     ecx, ecx
0x6BEE5D: mov     eax, esi
0x6BEE5F: mov     edx, 14h
0x6BEE64: mul     edx
0x6BEE66: seto    cl
0x6BEE69: neg     ecx
0x6BEE6B: or      ecx, eax
0x6BEE6D: xor     eax, eax
0x6BEE6F: add     ecx, 4
0x6BEE72: setb    al
0x6BEE75: neg     eax
0x6BEE77: or      eax, ecx
0x6BEE79: push    eax; Size
0x6BEE7A: call    FormHeapAlloc
0x6BEE7F: add     esp, 4
0x6BEE82: mov     [esp+38h+var_20], eax
0x6BEE86: test    eax, eax
0x6BEE88: mov     [esp+38h+var_4], 0
0x6BEE90: jz      short loc_6BEEAE
0x6BEE92: push    offset ?ClearComponentReferences@TESTexture@@UAEXXZ?; a5
0x6BEE97: push    offset sub_6C1F90; a4
0x6BEE9C: push    esi; size
0x6BEE9D: lea     ebx, [eax+4]
0x6BEEA0: push    14h; a2
0x6BEEA2: push    ebx; a1
0x6BEEA3: mov     [eax], esi
0x6BEEA5: call    ArrayConstructor
0x6BEEAA: mov     esi, ebx
0x6BEEAC: jmp     short loc_6BEEB0
0x6BEEAE: xor     esi, esi
0x6BEEB0: mov     eax, [esp+38h+var_24]
0x6BEEB4: lea     ecx, [eax+eax*4]
0x6BEEB7: add     ecx, ecx
0x6BEEB9: add     ecx, ecx
0x6BEEBB: push    ecx; Size
0x6BEEBC: push    edi; Src
0x6BEEBD: push    esi; Dst
0x6BEEBE: mov     [esp+44h+var_4], 0FFFFFFFFh
0x6BEEC6: call    _memcpy
0x6BEECB: mov     ecx, [ebp+0]
0x6BEECE: mov     edx, [esp+44h+var_24]
0x6BEED2: add     esp, 0Ch
0x6BEED5: cmp     ecx, edx
0x6BEED7: jbe     short loc_6BEEFB
0x6BEED9: sub     ecx, edx
0x6BEEDB: lea     eax, [edx+edx*4]
0x6BEEDE: lea     edx, [ecx+ecx*4]
0x6BEEE1: add     edx, edx
0x6BEEE3: add     eax, eax
0x6BEEE5: add     eax, eax
0x6BEEE7: add     edx, edx
0x6BEEE9: push    edx; Size
0x6BEEEA: lea     ecx, [eax+edi]
0x6BEEED: push    ecx; Src
0x6BEEEE: lea     edx, [eax+esi+14h]
0x6BEEF2: push    edx; Dst
0x6BEEF3: call    _memcpy
0x6BEEF8: add     esp, 0Ch
0x6BEEFB: mov     eax, [ebp+0]
0x6BEEFE: fld     [esp+38h+arg_0]
0x6BEF02: push    14h; char
0x6BEF04: push    eax; int
0x6BEF05: push    1; int
0x6BEF07: push    edi; int
0x6BEF08: push    ecx
0x6BEF09: lea     ecx, [esp+4Ch+var_1C]
0x6BEF0D: fstp    [esp+4Ch+var_4C]; float
0x6BEF10: push    ecx; int
0x6BEF11: call    sub_6BE280
0x6BEF16: fld     [esp+50h+arg_0]
0x6BEF1A: mov     eax, [esp+50h+var_24]
0x6BEF1E: lea     edx, [eax+eax*4]
0x6BEF21: lea     eax, [esi+edx*4]
0x6BEF24: fstp    dword ptr [eax]
0x6BEF26: mov     ecx, [esp+50h+var_1C]
0x6BEF2A: mov     [eax+4], ecx
0x6BEF2D: mov     edx, [esp+50h+var_18]
0x6BEF31: mov     [eax+8], edx
0x6BEF34: mov     ecx, [esp+50h+var_14]
0x6BEF38: mov     [eax+0Ch], ecx
0x6BEF3B: mov     edx, [esp+50h+var_10]
0x6BEF3F: mov     [eax+10h], edx
0x6BEF42: add     dword ptr [ebp+0], 1
0x6BEF46: add     esp, 18h
0x6BEF49: test    edi, edi
0x6BEF4B: jz      short loc_6BEF6A
0x6BEF4D: mov     eax, [edi-4]
0x6BEF50: push    offset ?ClearComponentReferences@TESTexture@@UAEXXZ?; void (__thiscall *)(void *)
0x6BEF55: lea     ebx, [edi-4]
0x6BEF58: push    eax; int
0x6BEF59: push    14h; unsigned int
0x6BEF5B: push    edi; void *
0x6BEF5C: call    $LN21
0x6BEF61: push    ebx
0x6BEF62: call    FormHeapFree
0x6BEF67: add     esp, 4
0x6BEF6A: mov     ecx, [esp+38h+arg_4]
0x6BEF6E: mov     [ecx], esi
0x6BEF70: mov     al, 1
0x6BEF72: mov     ecx, [esp+38h+var_C]
0x6BEF76: mov     large fs:0, ecx
0x6BEF7D: pop     ecx
0x6BEF7E: pop     edi
0x6BEF7F: pop     esi
0x6BEF80: pop     ebp
0x6BEF81: pop     ebx
0x6BEF82: add     esp, 24h
0x6BEF85: retn
0x6BEF86: xor     al, al
0x6BEF88: mov     ecx, [esp+38h+var_C]
0x6BEF8C: mov     large fs:0, ecx
0x6BEF93: pop     ecx
0x6BEF94: pop     edi
0x6BEF95: pop     esi
0x6BEF96: pop     ebp
0x6BEF97: pop     ebx
0x6BEF98: add     esp, 24h
0x6BEF9B: retn
