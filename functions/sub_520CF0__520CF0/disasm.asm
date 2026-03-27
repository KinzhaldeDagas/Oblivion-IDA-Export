0x520CF0: push    0FFFFFFFFh
0x520CF2: push    offset SEH_520CF0
0x520CF7: mov     eax, large fs:0
0x520CFD: push    eax
0x520CFE: sub     esp, 10h
0x520D01: push    ebx
0x520D02: push    ebp
0x520D03: push    esi
0x520D04: push    edi
0x520D05: mov     eax, ds:0B30AACh
0x520D0A: xor     eax, esp
0x520D0C: push    eax
0x520D0D: lea     eax, [esp+30h+var_C]
0x520D11: mov     large fs:0, eax
0x520D17: mov     esi, ecx
0x520D19: mov     eax, [esp+30h+a2]
0x520D1D: xor     edi, edi
0x520D1F: xor     bl, bl
0x520D21: cmp     eax, edi
0x520D23: jz      loc_520E62
0x520D29: cmp     byte ptr [eax+4], 3Ch ; '<'
0x520D2D: jnz     loc_520E7A
0x520D33: push    edi; int
0x520D34: push    offset ??_R0?AVTESIdleForm@@@8; struct TypeDescriptor *
0x520D39: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x520D3E: push    edi; int
0x520D3F: push    eax; void *
0x520D40: call    OblivionDynamicCast
0x520D45: mov     ebp, eax
0x520D47: add     esp, 14h
0x520D4A: cmp     ebp, edi
0x520D4C: mov     [esp+30h+a2], ebp
0x520D50: jz      loc_520E62
0x520D56: mov     [esp+30h+Str1], edi
0x520D5A: mov     [esp+30h+var_10], di
0x520D5F: mov     [esp+30h+var_E], di
0x520D64: mov     edx, [esi+18h]
0x520D67: lea     ecx, [esi+18h]
0x520D6A: lea     eax, [esp+30h+Str1]
0x520D6E: push    eax
0x520D6F: mov     eax, [edx+14h]
0x520D72: mov     [esp+34h+var_4], edi
0x520D76: call    eax
0x520D78: push    eax
0x520D79: call    sub_521370
0x520D7E: add     esp, 8
0x520D81: mov     [esp+30h+Str2], edi
0x520D85: mov     [esp+30h+var_18], di
0x520D8A: mov     [esp+30h+var_16], di
0x520D8F: mov     eax, [ebp+18h]
0x520D92: lea     ecx, [ebp+18h]
0x520D95: lea     edx, [esp+30h+Str2]
0x520D99: push    edx
0x520D9A: mov     edx, [eax+14h]
0x520D9D: mov     bl, 1
0x520D9F: mov     byte ptr [esp+34h+var_4], bl
0x520DA3: call    edx
0x520DA5: push    eax
0x520DA6: call    sub_521370
0x520DAB: mov     ecx, [esp+38h+Str2]
0x520DAF: add     esp, 8
0x520DB2: cmp     ecx, edi
0x520DB4: jz      short loc_520DCA
0x520DB6: mov     eax, [esp+30h+Str1]
0x520DBA: cmp     eax, edi
0x520DBC: jz      short loc_520DCA
0x520DBE: push    ecx; Str2
0x520DBF: push    eax; Str1
0x520DC0: call    __strcmp
0x520DC5: add     esp, 8
0x520DC8: jmp     short loc_520DD5
0x520DCA: xor     eax, eax
0x520DCC: cmp     ecx, edi
0x520DCE: setz    al
0x520DD1: lea     eax, [eax+eax-1]
0x520DD5: cmp     eax, edi
0x520DD7: jnz     short loc_520E3A
0x520DD9: mov     eax, [esi+8]
0x520DDC: shr     eax, 5
0x520DDF: and     al, bl
0x520DE1: jz      short loc_520DF1
0x520DE3: mov     ecx, [ebp+8]
0x520DE6: shr     ecx, 5
0x520DE9: test    bl, cl
0x520DEB: jnz     short loc_520DF1
0x520DED: xor     bl, bl
0x520DEF: jmp     short loc_520E3D
0x520DF1: mov     edx, [ebp+8]
0x520DF4: shr     edx, 5
0x520DF7: test    bl, dl
0x520DF9: jz      short loc_520DFF
0x520DFB: test    al, al
0x520DFD: jz      short loc_520E3D
0x520DFF: mov     ebp, esi
0x520E01: test    bl, bl
0x520E03: jz      short loc_520E3D
0x520E05: cmp     ebp, [esp+30h+a2]
0x520E09: jnz     short loc_520E0D
0x520E0B: xor     bl, bl
0x520E0D: mov     esi, [ebp+44h]
0x520E10: cmp     esi, edi
0x520E12: jz      short loc_520E31
0x520E14: test    bl, bl
0x520E16: jz      short loc_520E31
0x520E18: mov     eax, [esp+30h+a2]
0x520E1C: push    eax
0x520E1D: mov     ecx, esi
0x520E1F: call    sub_520590
0x520E24: test    al, al
0x520E26: jz      short loc_520E2A
0x520E28: xor     bl, bl
0x520E2A: mov     esi, [esi+44h]
0x520E2D: cmp     esi, edi
0x520E2F: jnz     short loc_520E14
0x520E31: mov     ebp, [ebp+40h]
0x520E34: cmp     ebp, edi
0x520E36: jnz     short loc_520E01
0x520E38: jmp     short loc_520E3D
0x520E3A: setl    bl
0x520E3D: mov     ecx, [esp+30h+Str2]
0x520E41: push    ecx
0x520E42: call    FormHeapFree
0x520E47: mov     edx, [esp+34h+Str1]
0x520E4B: push    edx
0x520E4C: mov     [esp+38h+Str2], edi
0x520E50: mov     [esp+38h+var_16], di
0x520E55: mov     [esp+38h+var_18], di
0x520E5A: call    FormHeapFree
0x520E5F: add     esp, 8
0x520E62: mov     al, bl
0x520E64: mov     ecx, [esp+30h+var_C]; this
0x520E68: mov     large fs:0, ecx
0x520E6F: pop     ecx
0x520E70: pop     edi
0x520E71: pop     esi
0x520E72: pop     ebp
0x520E73: pop     ebx
0x520E74: add     esp, 1Ch
0x520E77: retn    4
0x520E7A: push    eax; a2
0x520E7B: call    TESForm_LessThan
0x520E80: jmp     short loc_520E64
