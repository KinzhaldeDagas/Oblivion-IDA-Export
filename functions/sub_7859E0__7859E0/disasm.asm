0x7859E0: push    0FFFFFFFFh
0x7859E2: push    offset SEH_794340
0x7859E7: mov     eax, large fs:0
0x7859ED: push    eax
0x7859EE: sub     esp, 44h
0x7859F1: push    ebx
0x7859F2: push    ebp
0x7859F3: push    esi
0x7859F4: push    edi
0x7859F5: mov     eax, ds:0B30AACh
0x7859FA: xor     eax, esp
0x7859FC: push    eax
0x7859FD: lea     eax, [esp+64h+var_C]
0x785A01: mov     large fs:0, eax
0x785A07: mov     edi, ecx
0x785A09: cmp     dword ptr [edi+8], 7FFFFFEh
0x785A10: jb      short loc_785A5E
0x785A12: push    13h; MaxCount
0x785A14: xor     esi, esi
0x785A16: push    offset aMapSetTTooLong; "map/set<T> too long"
0x785A1B: lea     ecx, [esp+6Ch+var_50]
0x785A1F: mov     [esp+6Ch+var_38], 0Fh
0x785A27: mov     [esp+6Ch+var_3C], esi
0x785A2B: mov     [esp+6Ch+var_4C], 0
0x785A30: call    sub_414500
0x785A35: lea     eax, [esp+64h+var_50]
0x785A39: push    eax
0x785A3A: lea     ecx, [esp+68h+var_34]
0x785A3E: mov     [esp+68h+var_4], esi
0x785A42: call    sub_4146E0
0x785A47: push    offset __TI3?AVlength_error@std@@; throw info for 'class std::length_error'
0x785A4C: lea     ecx, [esp+68h+var_34]
0x785A50: push    ecx
0x785A51: mov     [esp+6Ch+var_34], offset ??_7length_error@std@@6B@; const std::length_error::`vftable'
0x785A59: call    ThrowException??
0x785A5E: mov     edx, [esp+64h+arg_C]
0x785A62: mov     eax, [edi+4]
0x785A65: mov     esi, [esp+64h+arg_8]
0x785A69: push    0
0x785A6B: push    edx
0x785A6C: push    eax
0x785A6D: push    esi
0x785A6E: push    eax
0x785A6F: call    sub_785360
0x785A74: mov     ebp, eax
0x785A76: mov     eax, [edi+4]
0x785A79: mov     ebx, 1
0x785A7E: add     [edi+8], ebx
0x785A81: cmp     esi, eax
0x785A83: jnz     short loc_785A95
0x785A85: mov     [eax+4], ebp
0x785A88: mov     eax, [edi+4]
0x785A8B: mov     [eax], ebp
0x785A8D: mov     ecx, [edi+4]
0x785A90: mov     [ecx+8], ebp
0x785A93: jmp     short loc_785AB7
0x785A95: cmp     byte ptr [esp+64h+arg_4], 0
0x785A9A: jz      short loc_785AA9
0x785A9C: mov     [esi], ebp
0x785A9E: mov     eax, [edi+4]
0x785AA1: cmp     esi, [eax]
0x785AA3: jnz     short loc_785AB7
0x785AA5: mov     [eax], ebp
0x785AA7: jmp     short loc_785AB7
0x785AA9: mov     [esi+8], ebp
0x785AAC: mov     eax, [edi+4]
0x785AAF: cmp     esi, [eax+8]
0x785AB2: jnz     short loc_785AB7
0x785AB4: mov     [eax+8], ebp
0x785AB7: mov     edx, [ebp+4]
0x785ABA: cmp     byte ptr [edx+2Ch], 0
0x785ABE: lea     eax, [ebp+4]
0x785AC1: mov     esi, ebp
0x785AC3: jnz     loc_785BB5
0x785AC9: lea     esp, [esp+0]
0x785AD0: mov     ecx, [eax]
0x785AD2: mov     edx, [ecx+4]
0x785AD5: cmp     ecx, [edx]
0x785AD7: jnz     short loc_785B2A
0x785AD9: mov     edx, [edx+8]
0x785ADC: cmp     byte ptr [edx+2Ch], 0
0x785AE0: jnz     short loc_785AFB
0x785AE2: mov     [ecx+2Ch], bl
0x785AE5: mov     [edx+2Ch], bl
0x785AE8: mov     edx, [eax]
0x785AEA: mov     ecx, [edx+4]
0x785AED: mov     byte ptr [ecx+2Ch], 0
0x785AF1: mov     edx, [eax]
0x785AF3: mov     esi, [edx+4]
0x785AF6: jmp     loc_785BA5
0x785AFB: cmp     esi, [ecx+8]
0x785AFE: jnz     short loc_785B0A
0x785B00: mov     esi, ecx
0x785B02: push    esi
0x785B03: mov     ecx, edi
0x785B05: call    sub_784740
0x785B0A: mov     eax, [esi+4]
0x785B0D: mov     [eax+2Ch], bl
0x785B10: mov     ecx, [esi+4]
0x785B13: mov     edx, [ecx+4]
0x785B16: mov     byte ptr [edx+2Ch], 0
0x785B1A: mov     eax, [esi+4]
0x785B1D: mov     ecx, [eax+4]
0x785B20: push    ecx
0x785B21: mov     ecx, edi
0x785B23: call    sub_784790
0x785B28: jmp     short loc_785BA5
0x785B2A: mov     edx, [edx]
0x785B2C: cmp     byte ptr [edx+2Ch], 0
0x785B30: jnz     short loc_785B48
0x785B32: mov     [ecx+2Ch], bl
0x785B35: mov     [edx+2Ch], bl
0x785B38: mov     edx, [eax]
0x785B3A: mov     ecx, [edx+4]
0x785B3D: mov     byte ptr [ecx+2Ch], 0
0x785B41: mov     edx, [eax]
0x785B43: mov     esi, [edx+4]
0x785B46: jmp     short loc_785BA5
0x785B48: cmp     esi, [ecx]
0x785B4A: jnz     short loc_785B56
0x785B4C: mov     esi, ecx
0x785B4E: push    esi
0x785B4F: mov     ecx, edi
0x785B51: call    sub_784790
0x785B56: mov     eax, [esi+4]
0x785B59: mov     [eax+2Ch], bl
0x785B5C: mov     ecx, [esi+4]
0x785B5F: mov     edx, [ecx+4]
0x785B62: mov     byte ptr [edx+2Ch], 0
0x785B66: mov     eax, [esi+4]
0x785B69: mov     eax, [eax+4]
0x785B6C: mov     ecx, [eax+8]
0x785B6F: mov     edx, [ecx]
0x785B71: mov     [eax+8], edx
0x785B74: mov     edx, [ecx]
0x785B76: cmp     byte ptr [edx+2Dh], 0
0x785B7A: jnz     short loc_785B7F
0x785B7C: mov     [edx+4], eax
0x785B7F: mov     edx, [eax+4]
0x785B82: mov     [ecx+4], edx
0x785B85: mov     edx, [edi+4]
0x785B88: cmp     eax, [edx+4]
0x785B8B: jnz     short loc_785B92
0x785B8D: mov     [edx+4], ecx
0x785B90: jmp     short loc_785BA0
0x785B92: mov     edx, [eax+4]
0x785B95: cmp     eax, [edx]
0x785B97: jnz     short loc_785B9D
0x785B99: mov     [edx], ecx
0x785B9B: jmp     short loc_785BA0
0x785B9D: mov     [edx+8], ecx
0x785BA0: mov     [ecx], eax
0x785BA2: mov     [eax+4], ecx
0x785BA5: mov     ecx, [esi+4]
0x785BA8: cmp     byte ptr [ecx+2Ch], 0
0x785BAC: lea     eax, [esi+4]
0x785BAF: jz      loc_785AD0
0x785BB5: mov     edx, [edi+4]
0x785BB8: mov     eax, [edx+4]
0x785BBB: mov     [eax+2Ch], bl
0x785BBE: mov     eax, [esp+64h+arg_0]
0x785BC2: mov     [eax+4], ebp
0x785BC5: mov     [eax], edi
0x785BC7: mov     ecx, [esp+64h+var_C]
0x785BCB: mov     large fs:0, ecx
0x785BD2: pop     ecx
0x785BD3: pop     edi
0x785BD4: pop     esi
0x785BD5: pop     ebp
0x785BD6: pop     ebx
0x785BD7: add     esp, 50h
0x785BDA: retn    10h
