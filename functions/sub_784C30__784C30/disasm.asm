0x784C30: push    0FFFFFFFFh
0x784C32: push    offset SEH_784C30
0x784C37: mov     eax, large fs:0
0x784C3D: push    eax
0x784C3E: sub     esp, 48h
0x784C41: push    ebx
0x784C42: push    ebp
0x784C43: push    esi
0x784C44: push    edi
0x784C45: mov     eax, ds:0B30AACh
0x784C4A: xor     eax, esp
0x784C4C: push    eax
0x784C4D: lea     eax, [esp+68h+var_C]
0x784C51: mov     large fs:0, eax
0x784C57: mov     ebx, ecx
0x784C59: mov     [esp+68h+var_54], ebx
0x784C5D: mov     eax, [esp+68h+arg_8]
0x784C61: cmp     byte ptr [eax+2Dh], 0
0x784C65: jz      short loc_784CB3
0x784C67: push    1Bh; MaxCount
0x784C69: xor     esi, esi
0x784C6B: push    offset aInvalidMapSetT; "invalid map/set<T> iterator"
0x784C70: lea     ecx, [esp+70h+var_50]
0x784C74: mov     [esp+70h+var_38], 0Fh
0x784C7C: mov     [esp+70h+var_3C], esi
0x784C80: mov     [esp+70h+var_4C], 0
0x784C85: call    sub_414500
0x784C8A: lea     eax, [esp+68h+var_50]
0x784C8E: push    eax
0x784C8F: lea     ecx, [esp+6Ch+var_34]
0x784C93: mov     [esp+6Ch+var_4], esi
0x784C97: call    sub_4146E0
0x784C9C: push    offset __TI3?AVout_of_range@std@@; throw info for 'class std::out_of_range'
0x784CA1: lea     ecx, [esp+6Ch+var_34]
0x784CA5: push    ecx
0x784CA6: mov     [esp+70h+var_34], offset ??_7out_of_range@std@@6B@; const std::out_of_range::`vftable'
0x784CAE: call    ThrowException??
0x784CB3: lea     ecx, [esp+68h+arg_4]
0x784CB7: mov     ebp, eax
0x784CB9: call    sub_7846D0
0x784CBE: mov     eax, [ebp+0]
0x784CC1: cmp     byte ptr [eax+2Dh], 0
0x784CC5: jz      short loc_784CCC
0x784CC7: mov     edi, [ebp+8]
0x784CCA: jmp     short loc_784CE4
0x784CCC: mov     edx, [ebp+8]
0x784CCF: cmp     byte ptr [edx+2Dh], 0
0x784CD3: jz      short loc_784CD9
0x784CD5: mov     edi, eax
0x784CD7: jmp     short loc_784CE4
0x784CD9: mov     ecx, [esp+68h+arg_8]
0x784CDD: cmp     ecx, ebp
0x784CDF: mov     edi, [ecx+8]
0x784CE2: jnz     short loc_784D4B
0x784CE4: cmp     byte ptr [edi+2Dh], 0
0x784CE8: mov     esi, [ebp+4]
0x784CEB: jnz     short loc_784CF0
0x784CED: mov     [edi+4], esi
0x784CF0: mov     eax, [ebx+4]
0x784CF3: cmp     [eax+4], ebp
0x784CF6: jnz     short loc_784CFD
0x784CF8: mov     [eax+4], edi
0x784CFB: jmp     short loc_784D08
0x784CFD: cmp     [esi], ebp
0x784CFF: jnz     short loc_784D05
0x784D01: mov     [esi], edi
0x784D03: jmp     short loc_784D08
0x784D05: mov     [esi+8], edi
0x784D08: mov     ebx, [ebx+4]
0x784D0B: cmp     [ebx], ebp
0x784D0D: jnz     short loc_784D24
0x784D0F: cmp     byte ptr [edi+2Dh], 0
0x784D13: jz      short loc_784D19
0x784D15: mov     eax, esi
0x784D17: jmp     short loc_784D22
0x784D19: push    edi
0x784D1A: call    sub_784070
0x784D1F: add     esp, 4
0x784D22: mov     [ebx], eax
0x784D24: mov     eax, [esp+68h+var_54]
0x784D28: mov     ebx, [eax+4]
0x784D2B: cmp     [ebx+8], ebp
0x784D2E: jnz     short loc_784DA3
0x784D30: cmp     byte ptr [edi+2Dh], 0
0x784D34: jz      short loc_784D3D
0x784D36: mov     eax, esi
0x784D38: mov     [ebx+8], eax
0x784D3B: jmp     short loc_784DA3
0x784D3D: push    edi
0x784D3E: call    sub_784090
0x784D43: add     esp, 4
0x784D46: mov     [ebx+8], eax
0x784D49: jmp     short loc_784DA3
0x784D4B: mov     [eax+4], ecx
0x784D4E: mov     edx, [ebp+0]
0x784D51: mov     [ecx], edx
0x784D53: cmp     ecx, [ebp+8]
0x784D56: jnz     short loc_784D5C
0x784D58: mov     esi, ecx
0x784D5A: jmp     short loc_784D76
0x784D5C: cmp     byte ptr [edi+2Dh], 0
0x784D60: mov     esi, [ecx+4]
0x784D63: jnz     short loc_784D68
0x784D65: mov     [edi+4], esi
0x784D68: mov     [esi], edi
0x784D6A: mov     eax, [ebp+8]
0x784D6D: mov     [ecx+8], eax
0x784D70: mov     edx, [ebp+8]
0x784D73: mov     [edx+4], ecx
0x784D76: mov     eax, [ebx+4]
0x784D79: cmp     [eax+4], ebp
0x784D7C: jnz     short loc_784D83
0x784D7E: mov     [eax+4], ecx
0x784D81: jmp     short loc_784D91
0x784D83: mov     eax, [ebp+4]
0x784D86: cmp     [eax], ebp
0x784D88: jnz     short loc_784D8E
0x784D8A: mov     [eax], ecx
0x784D8C: jmp     short loc_784D91
0x784D8E: mov     [eax+8], ecx
0x784D91: mov     eax, [ebp+4]
0x784D94: mov     [ecx+4], eax
0x784D97: mov     dl, [ebp+2Ch]
0x784D9A: mov     al, [ecx+2Ch]
0x784D9D: mov     [ecx+2Ch], dl
0x784DA0: mov     [ebp+2Ch], al
0x784DA3: mov     bl, 1
0x784DA5: cmp     [ebp+2Ch], bl
0x784DA8: jnz     loc_784EAF
0x784DAE: mov     ecx, [esp+68h+var_54]
0x784DB2: mov     eax, [ecx+4]
0x784DB5: cmp     edi, [eax+4]
0x784DB8: jz      loc_784EAC
0x784DBE: mov     edi, edi
0x784DC0: cmp     [edi+2Ch], bl
0x784DC3: jnz     loc_784EAC
0x784DC9: mov     eax, [esi]
0x784DCB: cmp     edi, eax
0x784DCD: jnz     short loc_784E36
0x784DCF: mov     eax, [esi+8]
0x784DD2: cmp     byte ptr [eax+2Ch], 0
0x784DD6: jnz     short loc_784DEC
0x784DD8: mov     [eax+2Ch], bl
0x784DDB: push    esi
0x784DDC: mov     byte ptr [esi+2Ch], 0
0x784DE0: call    sub_784740
0x784DE5: mov     eax, [esi+8]
0x784DE8: mov     ecx, [esp+68h+var_54]
0x784DEC: cmp     byte ptr [eax+2Dh], 0
0x784DF0: jnz     short loc_784E68
0x784DF2: mov     edx, [eax]
0x784DF4: cmp     [edx+2Ch], bl
0x784DF7: jnz     short loc_784E01
0x784DF9: mov     edx, [eax+8]
0x784DFC: cmp     [edx+2Ch], bl
0x784DFF: jz      short loc_784E64
0x784E01: mov     edx, [eax+8]
0x784E04: cmp     [edx+2Ch], bl
0x784E07: jnz     short loc_784E1F
0x784E09: mov     edx, [eax]
0x784E0B: mov     [edx+2Ch], bl
0x784E0E: push    eax
0x784E0F: mov     byte ptr [eax+2Ch], 0
0x784E13: call    sub_784790
0x784E18: mov     eax, [esi+8]
0x784E1B: mov     ecx, [esp+68h+var_54]
0x784E1F: mov     dl, [esi+2Ch]
0x784E22: mov     [eax+2Ch], dl
0x784E25: mov     [esi+2Ch], bl
0x784E28: mov     eax, [eax+8]
0x784E2B: push    esi
0x784E2C: mov     [eax+2Ch], bl
0x784E2F: call    sub_784740
0x784E34: jmp     short loc_784EAC
0x784E36: cmp     byte ptr [eax+2Ch], 0
0x784E3A: jnz     short loc_784E4F
0x784E3C: mov     [eax+2Ch], bl
0x784E3F: push    esi
0x784E40: mov     byte ptr [esi+2Ch], 0
0x784E44: call    sub_784790
0x784E49: mov     eax, [esi]
0x784E4B: mov     ecx, [esp+68h+var_54]
0x784E4F: cmp     byte ptr [eax+2Dh], 0
0x784E53: jnz     short loc_784E68
0x784E55: mov     edx, [eax+8]
0x784E58: cmp     [edx+2Ch], bl
0x784E5B: jnz     short loc_784E7B
0x784E5D: mov     edx, [eax]
0x784E5F: cmp     [edx+2Ch], bl
0x784E62: jnz     short loc_784E7B
0x784E64: mov     byte ptr [eax+2Ch], 0
0x784E68: mov     eax, [ecx+4]
0x784E6B: mov     edi, esi
0x784E6D: cmp     edi, [eax+4]
0x784E70: mov     esi, [esi+4]
0x784E73: jnz     loc_784DC0
0x784E79: jmp     short loc_784EAC
0x784E7B: mov     edx, [eax]
0x784E7D: cmp     [edx+2Ch], bl
0x784E80: jnz     short loc_784E98
0x784E82: mov     edx, [eax+8]
0x784E85: mov     [edx+2Ch], bl
0x784E88: push    eax
0x784E89: mov     byte ptr [eax+2Ch], 0
0x784E8D: call    sub_784740
0x784E92: mov     eax, [esi]
0x784E94: mov     ecx, [esp+68h+var_54]
0x784E98: mov     dl, [esi+2Ch]
0x784E9B: mov     [eax+2Ch], dl
0x784E9E: mov     [esi+2Ch], bl
0x784EA1: mov     eax, [eax]
0x784EA3: push    esi
0x784EA4: mov     [eax+2Ch], bl
0x784EA7: call    sub_784790
0x784EAC: mov     [edi+2Ch], bl
0x784EAF: cmp     dword ptr [ebp+24h], 10h
0x784EB3: jb      short loc_784EC1
0x784EB5: mov     ecx, [ebp+10h]
0x784EB8: push    ecx
0x784EB9: call    FormHeapFree
0x784EBE: add     esp, 4
0x784EC1: mov     dword ptr [ebp+24h], 0Fh
0x784EC8: mov     dword ptr [ebp+20h], 0
0x784ECF: push    ebp
0x784ED0: mov     byte ptr [ebp+10h], 0
0x784ED4: call    FormHeapFree
0x784ED9: mov     ecx, [esp+6Ch+var_54]
0x784EDD: mov     eax, [ecx+8]
0x784EE0: add     esp, 4
0x784EE3: test    eax, eax
0x784EE5: jbe     short loc_784EED
0x784EE7: add     eax, 0FFFFFFFFh
0x784EEA: mov     [ecx+8], eax
0x784EED: mov     eax, [esp+68h+arg_0]
0x784EF1: mov     edx, [esp+68h+arg_4]
0x784EF5: mov     ecx, [esp+68h+arg_8]
0x784EF9: mov     [eax], edx
0x784EFB: mov     [eax+4], ecx
0x784EFE: mov     ecx, [esp+68h+var_C]
0x784F02: mov     large fs:0, ecx
0x784F09: pop     ecx
0x784F0A: pop     edi
0x784F0B: pop     esi
0x784F0C: pop     ebp
0x784F0D: pop     ebx
0x784F0E: add     esp, 54h
0x784F11: retn    0Ch
