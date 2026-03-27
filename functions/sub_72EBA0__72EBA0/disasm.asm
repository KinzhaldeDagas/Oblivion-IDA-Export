0x72EBA0: sub     esp, 1Ch
0x72EBA3: mov     eax, ds:0B30AACh
0x72EBA8: xor     eax, esp
0x72EBAA: mov     [esp+1Ch+var_4], eax
0x72EBAE: mov     eax, [esp+1Ch+arg_14]
0x72EBB2: push    ebx
0x72EBB3: push    ebp
0x72EBB4: mov     ebp, [esp+24h+arg_0]
0x72EBB8: push    esi
0x72EBB9: mov     esi, [esp+28h+arg_10]
0x72EBBD: push    edi
0x72EBBE: mov     edi, [esp+2Ch+arg_C]
0x72EBC2: mov     ebx, ecx
0x72EBC4: movzx   ecx, word ptr [ebp+40h]
0x72EBC8: push    esi
0x72EBC9: push    edi
0x72EBCA: mov     [esp+34h+var_1C], ecx
0x72EBCE: push    ebp
0x72EBCF: mov     ecx, ebx
0x72EBD1: mov     [esp+38h+var_10], ebx
0x72EBD5: mov     [esp+38h+var_14], eax
0x72EBD9: call    sub_72E960
0x72EBDE: mov     edx, [esp+2Ch+arg_8]
0x72EBE2: push    esi
0x72EBE3: push    edx
0x72EBE4: mov     ecx, ebx
0x72EBE6: call    sub_72DE70
0x72EBEB: mov     eax, [esp+2Ch+var_1C]
0x72EBEF: xor     ecx, ecx
0x72EBF1: mov     edx, 4
0x72EBF6: mul     edx
0x72EBF8: seto    cl
0x72EBFB: neg     ecx
0x72EBFD: or      ecx, eax
0x72EBFF: push    ecx; Size
0x72EC00: call    FormHeapAlloc
0x72EC05: mov     ecx, [esp+30h+var_14]
0x72EC09: mov     [ecx], eax
0x72EC0B: mov     eax, [esi+8]
0x72EC0E: push    eax; Size
0x72EC0F: call    FormHeapAlloc
0x72EC14: mov     ecx, eax
0x72EC16: xor     eax, eax
0x72EC18: add     esp, 8
0x72EC1B: cmp     [esi+8], eax
0x72EC1E: mov     [esp+2Ch+var_18], ecx
0x72EC22: jbe     short loc_72EC30
0x72EC24: mov     byte ptr [eax+ecx], 0
0x72EC28: add     eax, 1
0x72EC2B: cmp     eax, [esi+8]
0x72EC2E: jb      short loc_72EC24
0x72EC30: xor     ebx, ebx
0x72EC32: cmp     [esp+2Ch+var_1C], ebx
0x72EC36: jbe     loc_72ECCD
0x72EC3C: lea     esp, [esp+0]
0x72EC40: mov     edx, [ebp+0]
0x72EC43: mov     edx, [edx+60h]
0x72EC46: lea     eax, [esp+2Ch+var_8]
0x72EC4A: push    eax
0x72EC4B: lea     ecx, [esp+30h+var_A]
0x72EC4F: push    ecx
0x72EC50: lea     eax, [esp+34h+var_C]
0x72EC54: push    eax
0x72EC55: push    ebx
0x72EC56: mov     ecx, ebp
0x72EC58: call    edx
0x72EC5A: mov     cx, word ptr [esp+2Ch+var_C]
0x72EC5F: mov     ax, word ptr [esp+2Ch+var_A]
0x72EC64: cmp     cx, ax
0x72EC67: jz      short loc_72EC78
0x72EC69: mov     dx, word ptr [esp+2Ch+var_8]
0x72EC6E: cmp     ax, dx
0x72EC71: jz      short loc_72EC78
0x72EC73: cmp     dx, cx
0x72EC76: jnz     short loc_72EC87
0x72EC78: mov     eax, [esp+2Ch+var_14]
0x72EC7C: mov     ecx, [eax]
0x72EC7E: mov     dword ptr [ecx+ebx*4], 0FFFFFFFFh
0x72EC85: jmp     short loc_72ECC0
0x72EC87: mov     edx, [esp+2Ch+var_18]
0x72EC8B: push    1
0x72EC8D: push    edx
0x72EC8E: push    edi
0x72EC8F: lea     eax, [esp+38h+var_C]
0x72EC93: push    eax
0x72EC94: push    esi
0x72EC95: call    sub_72DFB0
0x72EC9A: add     esp, 14h
0x72EC9D: test    eax, eax
0x72EC9F: jge     short loc_72ECB7
0x72ECA1: mov     ecx, [esp+2Ch+var_18]
0x72ECA5: push    0
0x72ECA7: push    ecx
0x72ECA8: push    edi
0x72ECA9: lea     edx, [esp+38h+var_C]
0x72ECAD: push    edx
0x72ECAE: push    esi
0x72ECAF: call    sub_72DFB0
0x72ECB4: add     esp, 14h
0x72ECB7: mov     ecx, [esp+2Ch+var_14]
0x72ECBB: mov     edx, [ecx]
0x72ECBD: mov     [edx+ebx*4], eax
0x72ECC0: add     ebx, 1
0x72ECC3: cmp     ebx, [esp+2Ch+var_1C]
0x72ECC7: jb      loc_72EC40
0x72ECCD: xor     edx, edx
0x72ECCF: cmp     [esi+8], edx
0x72ECD2: jbe     short loc_72ED1E
0x72ECD4: mov     eax, [esp+2Ch+var_18]
0x72ECD8: cmp     byte ptr [edx+eax], 0
0x72ECDC: jz      short loc_72ECE3
0x72ECDE: add     edx, 1
0x72ECE1: jmp     short loc_72ED19
0x72ECE3: add     dword ptr [esi+8], 0FFFFFFFFh
0x72ECE7: mov     eax, [esi]
0x72ECE9: mov     ecx, [esi+8]
0x72ECEC: mov     ecx, [eax+ecx*4]
0x72ECEF: mov     [eax+edx*4], ecx
0x72ECF2: mov     edi, [esi+8]
0x72ECF5: xor     eax, eax
0x72ECF7: cmp     [esp+2Ch+var_1C], eax
0x72ECFB: jbe     short loc_72ED19
0x72ECFD: lea     ecx, [ecx+0]
0x72ED00: mov     ecx, [esp+2Ch+var_14]
0x72ED04: mov     ecx, [ecx]
0x72ED06: cmp     [ecx+eax*4], edi
0x72ED09: lea     ecx, [ecx+eax*4]
0x72ED0C: jnz     short loc_72ED10
0x72ED0E: mov     [ecx], edx
0x72ED10: add     eax, 1
0x72ED13: cmp     eax, [esp+2Ch+var_1C]
0x72ED17: jb      short loc_72ED00
0x72ED19: cmp     edx, [esi+8]
0x72ED1C: jb      short loc_72ECD4
0x72ED1E: mov     ecx, [esp+2Ch+var_18]
0x72ED22: mov     edx, [esi+8]
0x72ED25: mov     eax, [esp+2Ch+var_10]
0x72ED29: push    ecx
0x72ED2A: mov     [eax+8], edx
0x72ED2D: call    FormHeapFree
0x72ED32: mov     ecx, [esp+30h+var_4]
0x72ED36: add     esp, 4
0x72ED39: pop     edi
0x72ED3A: pop     esi
0x72ED3B: pop     ebp
0x72ED3C: pop     ebx
0x72ED3D: xor     ecx, esp
0x72ED3F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x72ED44: add     esp, 1Ch
0x72ED47: retn    18h
