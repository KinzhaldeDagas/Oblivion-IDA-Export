0x46DE60: push    ebp
0x46DE61: mov     ebp, esp
0x46DE63: sub     esp, 14h
0x46DE66: mov     eax, ds:0B30AACh
0x46DE6B: xor     eax, ebp
0x46DE6D: mov     [ebp+var_4], eax
0x46DE70: push    ebx
0x46DE71: push    esi
0x46DE72: push    edi
0x46DE73: mov     edi, ecx
0x46DE75: call    sub_46DE10
0x46DE7A: mov     eax, [ebp+a1]
0x46DE7D: mov     esi, [eax+254h]
0x46DE83: mov     eax, esi
0x46DE85: call    __alloca?
0x46DE8A: mov     ecx, [ebp+a1]; a1
0x46DE8D: mov     ebx, esp
0x46DE8F: push    esi; a4
0x46DE90: push    ebx; Dst
0x46DE91: mov     [ebp+var_10], ebx
0x46DE94: call    TESFile_GetChunkData
0x46DE99: mov     eax, [ebx]
0x46DE9B: xor     ecx, ecx
0x46DE9D: mov     esi, 4
0x46DEA2: mov     [edi], eax
0x46DEA4: mov     edx, esi
0x46DEA6: mul     edx
0x46DEA8: seto    cl
0x46DEAB: neg     ecx
0x46DEAD: or      ecx, eax
0x46DEAF: push    ecx; Size
0x46DEB0: call    FormHeapAlloc
0x46DEB5: mov     [edi+4], eax
0x46DEB8: mov     eax, [ebp+arg_0]
0x46DEBB: add     esp, 4
0x46DEBE: add     eax, esi
0x46DEC0: cmp     dword ptr [edi], 0
0x46DEC3: mov     [ebp+var_8], 0
0x46DECA: jbe     loc_46DF68
0x46DED0: jmp     short loc_46DED8
0x46DED2: mov     eax, [ebp+var_14]
0x46DED5: mov     ebx, [ebp+var_10]
0x46DED8: test    eax, eax
0x46DEDA: mov     [ebp+var_C], 0
0x46DEE1: jz      short loc_46DEE8
0x46DEE3: mov     ecx, [eax]
0x46DEE5: mov     [ebp+var_C], ecx
0x46DEE8: mov     edx, [eax+4]
0x46DEEB: push    8; Size
0x46DEED: mov     [ebp+var_14], edx
0x46DEF0: call    FormHeapAlloc
0x46DEF5: add     esp, 4
0x46DEF8: test    eax, eax
0x46DEFA: jz      short loc_46DF08
0x46DEFC: mov     byte ptr [eax], 0
0x46DEFF: mov     dword ptr [eax+4], 0
0x46DF06: jmp     short loc_46DF0A
0x46DF08: xor     eax, eax
0x46DF0A: mov     ecx, [edi+4]
0x46DF0D: mov     edx, [ebp+var_8]
0x46DF10: mov     [ecx+edx*4], eax
0x46DF13: mov     al, [esi+ebx]
0x46DF16: mov     ecx, [ebp+arg_0]
0x46DF19: movzx   ebx, al
0x46DF1C: mov     eax, [ebp+var_C]
0x46DF1F: push    eax
0x46DF20: push    0; int
0x46DF22: push    offset ??_R0?AVTESForm@@@8; struct TypeDescriptor *
0x46DF27: push    offset ??_R0?AVTESModelList@@@8; struct _s_RTTICompleteObjectLocator *
0x46DF2C: push    0; int
0x46DF2E: push    ecx; void *
0x46DF2F: add     esi, 1
0x46DF32: call    OblivionDynamicCast
0x46DF37: mov     edx, [ebp+var_10]
0x46DF3A: mov     ecx, [edi+4]
0x46DF3D: add     esp, 14h
0x46DF40: push    eax
0x46DF41: lea     eax, [esi+edx]
0x46DF44: mov     edx, [ebp+var_8]
0x46DF47: mov     ecx, [ecx+edx*4]
0x46DF4A: push    ebx
0x46DF4B: push    eax
0x46DF4C: call    sub_46D610
0x46DF51: lea     eax, [ebx+ebx*2]
0x46DF54: lea     esi, [esi+eax*8]
0x46DF57: mov     eax, [ebp+var_8]
0x46DF5A: add     eax, 1
0x46DF5D: cmp     eax, [edi]
0x46DF5F: mov     [ebp+var_8], eax
0x46DF62: jb      loc_46DED2
0x46DF68: lea     esp, [ebp-20h]
0x46DF6B: pop     edi
0x46DF6C: pop     esi
0x46DF6D: pop     ebx
0x46DF6E: mov     ecx, [ebp+var_4]
0x46DF71: xor     ecx, ebp
0x46DF73: call    @__security_check_cookie@4; __security_check_cookie(x)
0x46DF78: mov     esp, ebp
0x46DF7A: pop     ebp
0x46DF7B: retn    8
