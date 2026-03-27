0x67AB40: sub     esp, 14h
0x67AB43: cmp     [esp+14h+arg_0], 0
0x67AB48: push    ebx
0x67AB49: push    ebp
0x67AB4A: push    esi
0x67AB4B: push    edi
0x67AB4C: mov     [esp+24h+var_14], 0
0x67AB54: jz      loc_67AC91
0x67AB5A: lea     ebp, [ecx+40h]
0x67AB5D: mov     ecx, ebp
0x67AB5F: call    sub_677CA0
0x67AB64: test    al, al
0x67AB66: jnz     loc_67AC91
0x67AB6C: test    ebp, ebp
0x67AB6E: mov     [esp+24h+var_10], 0
0x67AB76: jz      loc_67AC91
0x67AB7C: lea     esp, [esp+0]
0x67AB80: cmp     dword ptr [ebp+4], 0
0x67AB84: jnz     short loc_67AB9A
0x67AB86: or      [esp+24h+var_14], 1
0x67AB8B: xor     esi, esi
0x67AB8D: cmp     [ebp+0], esi
0x67AB90: mov     [esp+24h+var_C], esi
0x67AB94: jnz     short loc_67AB9E
0x67AB96: mov     bl, 1
0x67AB98: jmp     short loc_67ABA0
0x67AB9A: mov     esi, [esp+24h+var_C]
0x67AB9E: xor     bl, bl
0x67ABA0: test    byte ptr [esp+24h+var_14], 1
0x67ABA5: jz      short loc_67ABC8
0x67ABA7: and     [esp+24h+var_14], 0FFFFFFFEh
0x67ABAC: test    esi, esi
0x67ABAE: jz      short loc_67ABC8
0x67ABB0: lea     eax, [esi+4]
0x67ABB3: push    eax; lpAddend
0x67ABB4: call    dword ptr ds:0A2807Ch
0x67ABBA: test    eax, eax
0x67ABBC: jnz     short loc_67ABC8
0x67ABBE: mov     edx, [esi]
0x67ABC0: mov     eax, [edx]
0x67ABC2: push    1
0x67ABC4: mov     ecx, esi
0x67ABC6: call    eax
0x67ABC8: test    bl, bl
0x67ABCA: jnz     loc_67AC91
0x67ABD0: lea     ecx, [esp+24h+var_8]
0x67ABD4: push    ecx
0x67ABD5: mov     ecx, ebp
0x67ABD7: call    sub_677C70
0x67ABDC: mov     esi, [eax]
0x67ABDE: mov     eax, [esp+24h+var_8]
0x67ABE2: test    eax, eax
0x67ABE4: jz      short loc_67AC04
0x67ABE6: mov     edi, eax
0x67ABE8: add     eax, 4
0x67ABEB: push    eax; lpAddend
0x67ABEC: call    dword ptr ds:0A2807Ch
0x67ABF2: test    eax, eax
0x67ABF4: jnz     short loc_67AC04
0x67ABF6: test    edi, edi
0x67ABF8: jz      short loc_67AC04
0x67ABFA: mov     edx, [edi]
0x67ABFC: mov     eax, [edx]
0x67ABFE: push    1
0x67AC00: mov     ecx, edi
0x67AC02: call    eax
0x67AC04: mov     edx, [esi]
0x67AC06: mov     eax, [edx+54h]
0x67AC09: mov     ecx, esi
0x67AC0B: call    eax
0x67AC0D: test    eax, eax
0x67AC0F: jnz     short loc_67AC19
0x67AC11: push    eax
0x67AC12: push    offset ??_R0?AVBSTempEffectDecal@@@8; BSTempEffectDecal `RTTI Type Descriptor'
0x67AC17: jmp     short loc_67AC2E
0x67AC19: mov     edx, [esi]
0x67AC1B: mov     eax, [edx+54h]
0x67AC1E: mov     ecx, esi
0x67AC20: call    eax
0x67AC22: cmp     eax, 1
0x67AC25: jnz     short loc_67AC82
0x67AC27: push    0; int
0x67AC29: push    offset ??_R0?AVBSTempEffectGeometryDecal@@@8; struct TypeDescriptor *
0x67AC2E: push    offset ??_R0?AVBSTempEffect@@@8; struct _s_RTTICompleteObjectLocator *
0x67AC33: push    0; int
0x67AC35: push    esi; void *
0x67AC36: call    OblivionDynamicCast
0x67AC3B: add     esp, 14h
0x67AC3E: test    eax, eax
0x67AC40: jz      short loc_67AC82
0x67AC42: mov     eax, [eax+18h]
0x67AC45: test    eax, eax
0x67AC47: jz      short loc_67AC82
0x67AC49: mov     ecx, [esp+24h+arg_0]
0x67AC4D: cmp     [eax+48h], ecx
0x67AC50: jnz     short loc_67AC82
0x67AC52: mov     edi, [esp+24h+var_10]
0x67AC56: test    edi, edi
0x67AC58: jz      short loc_67AC79
0x67AC5A: push    ecx
0x67AC5B: mov     eax, esp
0x67AC5D: mov     [eax], esi
0x67AC5F: mov     [esp+28h+var_4], esp
0x67AC63: add     esi, 4
0x67AC66: push    esi; lpAddend
0x67AC67: call    dword ptr ds:0A28078h
0x67AC6D: mov     ecx, edi
0x67AC6F: call    sub_67A760
0x67AC74: mov     ebp, [edi+4]
0x67AC77: jmp     short loc_67AC89
0x67AC79: mov     ecx, ebp
0x67AC7B: call    sub_67A850
0x67AC80: jmp     short loc_67AC89
0x67AC82: mov     [esp+24h+var_10], ebp
0x67AC86: mov     ebp, [ebp+4]
0x67AC89: test    ebp, ebp
0x67AC8B: jnz     loc_67AB80
0x67AC91: pop     edi
0x67AC92: pop     esi
0x67AC93: pop     ebp
0x67AC94: pop     ebx
0x67AC95: add     esp, 14h
0x67AC98: retn    4
