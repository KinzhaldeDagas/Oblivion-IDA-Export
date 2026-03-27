0x701E00: push    0FFFFFFFFh
0x701E02: push    offset ??0bhkBallAndSocketConstraint@@QAE@XZ_SEH
0x701E07: mov     eax, large fs:0
0x701E0D: push    eax
0x701E0E: push    ecx
0x701E0F: push    ebx
0x701E10: push    esi
0x701E11: push    edi
0x701E12: mov     eax, ds:0B30AACh
0x701E17: xor     eax, esp
0x701E19: push    eax
0x701E1A: lea     eax, [esp+20h+var_C]
0x701E1E: mov     large fs:0, eax
0x701E24: push    48h ; 'H'; Size
0x701E26: call    FormHeapAlloc
0x701E2B: add     esp, 4
0x701E2E: mov     [esp+20h+var_10], eax
0x701E32: xor     esi, esi
0x701E34: cmp     eax, esi
0x701E36: mov     [esp+20h+var_4], esi
0x701E3A: jz      short loc_701E45
0x701E3C: mov     ecx, eax; this
0x701E3E: call    ??0NiSourceTexture@@QAE@XZ; NiSourceTexture::NiSourceTexture(void)
0x701E43: mov     esi, eax
0x701E45: mov     eax, [esp+20h+arg_4]
0x701E49: mov     ecx, [eax]
0x701E4B: mov     ebx, [esp+20h+Src]
0x701E4F: mov     [esi+18h], ecx
0x701E52: mov     edx, [eax+4]
0x701E55: mov     cl, [esp+20h+arg_8]
0x701E59: mov     [esi+1Ch], edx
0x701E5C: mov     eax, [eax+8]
0x701E5F: mov     [esi+20h], eax
0x701E62: mov     eax, ebx
0x701E64: mov     [esp+20h+var_4], 0FFFFFFFFh
0x701E6C: mov     [esi+41h], cl
0x701E6F: lea     edx, [eax+1]
0x701E72: mov     cl, [eax]
0x701E74: add     eax, 1
0x701E77: test    cl, cl
0x701E79: jnz     short loc_701E72
0x701E7B: sub     eax, edx
0x701E7D: lea     edi, [eax+1]
0x701E80: push    edi; Size
0x701E81: call    FormHeapAlloc
0x701E86: push    ebx; Src
0x701E87: push    edi; SizeInBytes
0x701E88: push    eax; Dst
0x701E89: mov     [esi+34h], eax
0x701E8C: call    _strcpy_s
0x701E91: mov     edx, [esi+34h]
0x701E94: push    edx
0x701E95: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x701E9A: mov     eax, [esi+34h]
0x701E9D: push    eax; Src
0x701E9E: call    sub_71B090
0x701EA3: add     esp, 18h
0x701EA6: mov     [esi+38h], eax
0x701EA9: cmp     byte ptr ds:0B256CCh, 0
0x701EB0: jz      short loc_701EDE
0x701EB2: mov     edx, [esi]
0x701EB4: mov     eax, [edx+5Ch]
0x701EB7: mov     ecx, esi
0x701EB9: call    eax
0x701EBB: test    al, al
0x701EBD: jnz     short loc_701EDE
0x701EBF: mov     edx, [esi]
0x701EC1: mov     eax, [edx]
0x701EC3: push    1
0x701EC5: mov     ecx, esi
0x701EC7: call    eax
0x701EC9: xor     eax, eax
0x701ECB: mov     ecx, [esp+20h+var_C]
0x701ECF: mov     large fs:0, ecx
0x701ED6: pop     ecx
0x701ED7: pop     edi
0x701ED8: pop     esi
0x701ED9: pop     ebx
0x701EDA: add     esp, 10h
0x701EDD: retn
0x701EDE: mov     eax, esi
0x701EE0: mov     ecx, [esp+20h+var_C]
0x701EE4: mov     large fs:0, ecx
0x701EEB: pop     ecx
0x701EEC: pop     edi
0x701EED: pop     esi
0x701EEE: pop     ebx
0x701EEF: add     esp, 10h
0x701EF2: retn
