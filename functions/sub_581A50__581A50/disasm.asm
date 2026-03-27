0x581A50: push    0FFFFFFFFh
0x581A52: push    offset SEH_581A50
0x581A57: mov     eax, large fs:0
0x581A5D: push    eax
0x581A5E: push    ecx
0x581A5F: push    ebx
0x581A60: push    ebp
0x581A61: push    esi
0x581A62: push    edi
0x581A63: mov     eax, ds:0B30AACh
0x581A68: xor     eax, esp
0x581A6A: push    eax
0x581A6B: lea     eax, [esp+24h+var_C]
0x581A6F: mov     large fs:0, eax
0x581A75: mov     ebp, ecx
0x581A77: mov     [esp+24h+var_10], ebp
0x581A7B: mov     ecx, [ebp+80h]
0x581A81: xor     ebx, ebx
0x581A83: cmp     ecx, ebx
0x581A85: mov     [esp+24h+var_4], 2
0x581A8D: jz      short loc_581A9D
0x581A8F: mov     eax, [ecx]
0x581A91: mov     edx, [eax]
0x581A93: push    1
0x581A95: call    edx
0x581A97: mov     [ebp+80h], ebx
0x581A9D: mov     ecx, ds:0B3A6FCh
0x581AA3: cmp     ecx, ebx
0x581AA5: jz      short loc_581AB7
0x581AA7: mov     esi, ecx
0x581AA9: call    sub_585940
0x581AAE: push    esi
0x581AAF: call    FormHeapFree
0x581AB4: add     esp, 4
0x581AB7: mov     ds:0B3A6FCh, ebx
0x581ABD: call    sub_572D90
0x581AC2: call    sub_577270
0x581AC7: mov     esi, [ebp+0]
0x581ACA: cmp     esi, ebx
0x581ACC: mov     edi, ds:0A2807Ch
0x581AD2: jz      short loc_581AEF
0x581AD4: lea     eax, [esi+4]
0x581AD7: push    eax; lpAddend
0x581AD8: call    edi ; InterlockedDecrement
0x581ADA: test    eax, eax
0x581ADC: jnz     short loc_581AEC
0x581ADE: cmp     esi, ebx
0x581AE0: jz      short loc_581AEC
0x581AE2: mov     edx, [esi]
0x581AE4: mov     eax, [edx]
0x581AE6: push    1
0x581AE8: mov     ecx, esi
0x581AEA: call    eax
0x581AEC: mov     [ebp+0], ebx
0x581AEF: cmp     [ebp+4], ebx
0x581AF2: jz      short loc_581B16
0x581AF4: mov     esi, [ebp+4]
0x581AF7: cmp     esi, ebx
0x581AF9: jz      short loc_581B16
0x581AFB: lea     ecx, [esi+4]
0x581AFE: push    ecx; lpAddend
0x581AFF: call    edi ; InterlockedDecrement
0x581B01: test    eax, eax
0x581B03: jnz     short loc_581B13
0x581B05: cmp     esi, ebx
0x581B07: jz      short loc_581B13
0x581B09: mov     edx, [esi]
0x581B0B: mov     eax, [edx]
0x581B0D: push    1
0x581B0F: mov     ecx, esi
0x581B11: call    eax
0x581B13: mov     [ebp+4], ebx
0x581B16: mov     byte ptr ds:0B3A6D4h, 1
0x581B1D: mov     ecx, [ebp+6Ch]
0x581B20: cmp     ecx, ebx
0x581B22: jz      short loc_581B2C
0x581B24: mov     edx, [ecx]
0x581B26: mov     eax, [edx]
0x581B28: push    1
0x581B2A: call    eax
0x581B2C: mov     ecx, [ebp+68h]
0x581B2F: cmp     ecx, ebx
0x581B31: jz      short loc_581B3B
0x581B33: mov     edx, [ecx]
0x581B35: mov     eax, [edx]
0x581B37: push    1
0x581B39: call    eax
0x581B3B: mov     ds:0B3A6D4h, bl
0x581B41: call    Menu_ClearB3A708
0x581B46: mov     ecx, [ebp+1Ch]
0x581B49: cmp     ecx, ebx
0x581B4B: jz      short loc_581B55
0x581B4D: mov     edx, [ecx]
0x581B4F: mov     eax, [edx]
0x581B51: push    1
0x581B53: call    eax
0x581B55: mov     esi, [ebp+78h]
0x581B58: cmp     esi, ebx
0x581B5A: jz      short loc_581B77
0x581B5C: lea     ecx, [esi+4]
0x581B5F: push    ecx; lpAddend
0x581B60: call    edi ; InterlockedDecrement
0x581B62: test    eax, eax
0x581B64: jnz     short loc_581B74
0x581B66: cmp     esi, ebx
0x581B68: jz      short loc_581B74
0x581B6A: mov     edx, [esi]
0x581B6C: mov     eax, [edx]
0x581B6E: push    1
0x581B70: mov     ecx, esi
0x581B72: call    eax
0x581B74: mov     [ebp+78h], ebx
0x581B77: mov     ds:0B3A6E0h, ebx
0x581B7D: call    sub_58BD50
0x581B82: mov     esi, [ebp+108h]
0x581B88: cmp     esi, ebx
0x581B8A: jz      short loc_581B9C
0x581B8C: mov     ecx, esi
0x581B8E: call    sub_538B60
0x581B93: push    esi
0x581B94: call    FormHeapFree
0x581B99: add     esp, 4
0x581B9C: mov     ecx, ebp
0x581B9E: call    sub_57D200
0x581BA3: call    sub_584DB0
0x581BA8: mov     cx, ds:0B13BCEh
0x581BAF: xor     edi, edi
0x581BB1: cmp     cx, bx
0x581BB4: jbe     short loc_581BFB
0x581BB6: jmp     short loc_581BC0
0x581BB8: align 10h
0x581BC0: mov     edx, ds:0B13BC8h
0x581BC6: mov     esi, [edx+edi*4]
0x581BC9: cmp     esi, ebx
0x581BCB: jz      short loc_581BF1
0x581BCD: mov     eax, [esi+8]
0x581BD0: push    eax
0x581BD1: call    FormHeapFree
0x581BD6: push    esi
0x581BD7: mov     [esi+8], ebx
0x581BDA: mov     [esi+0Eh], bx
0x581BDE: mov     [esi+0Ch], bx
0x581BE2: call    FormHeapFree
0x581BE7: mov     cx, ds:0B13BCEh
0x581BEE: add     esp, 8
0x581BF1: movzx   eax, cx
0x581BF4: add     edi, 1
0x581BF7: cmp     edi, eax
0x581BF9: jb      short loc_581BC0
0x581BFB: xor     eax, eax
0x581BFD: cmp     cx, bx
0x581C00: jbe     short loc_581C1A
0x581C02: mov     edx, ds:0B13BC8h
0x581C08: movzx   ecx, ax
0x581C0B: add     eax, 1
0x581C0E: mov     [edx+ecx*4], ebx
0x581C11: cmp     ax, ds:0B13BCEh
0x581C18: jb      short loc_581C02
0x581C1A: mov     edi, ds:0A2807Ch
0x581C20: mov     ds:0B13BCEh, bx
0x581C27: mov     ds:0B13BD0h, bx
0x581C2E: mov     esi, [ebp+78h]
0x581C31: cmp     esi, ebx
0x581C33: mov     byte ptr [esp+24h+var_4], 1
0x581C38: jz      short loc_581C52
0x581C3A: lea     eax, [esi+4]
0x581C3D: push    eax; lpAddend
0x581C3E: call    edi ; InterlockedDecrement
0x581C40: test    eax, eax
0x581C42: jnz     short loc_581C52
0x581C44: cmp     esi, ebx
0x581C46: jz      short loc_581C52
0x581C48: mov     edx, [esi]
0x581C4A: mov     eax, [edx]
0x581C4C: push    1
0x581C4E: mov     ecx, esi
0x581C50: call    eax
0x581C52: mov     esi, [ebp+4]
0x581C55: cmp     esi, ebx
0x581C57: mov     byte ptr [esp+24h+var_4], bl
0x581C5B: jz      short loc_581C75
0x581C5D: lea     ecx, [esi+4]
0x581C60: push    ecx; lpAddend
0x581C61: call    edi ; InterlockedDecrement
0x581C63: test    eax, eax
0x581C65: jnz     short loc_581C75
0x581C67: cmp     esi, ebx
0x581C69: jz      short loc_581C75
0x581C6B: mov     edx, [esi]
0x581C6D: mov     eax, [edx]
0x581C6F: push    1
0x581C71: mov     ecx, esi
0x581C73: call    eax
0x581C75: mov     ebp, [ebp+0]
0x581C78: cmp     ebp, ebx
0x581C7A: mov     [esp+24h+var_4], 0FFFFFFFFh
0x581C82: jz      short loc_581C9D
0x581C84: lea     ecx, [ebp+4]
0x581C87: push    ecx; lpAddend
0x581C88: call    edi ; InterlockedDecrement
0x581C8A: test    eax, eax
0x581C8C: jnz     short loc_581C9D
0x581C8E: cmp     ebp, ebx
0x581C90: jz      short loc_581C9D
0x581C92: mov     edx, [ebp+0]
0x581C95: mov     eax, [edx]
0x581C97: push    1
0x581C99: mov     ecx, ebp
0x581C9B: call    eax
0x581C9D: mov     ecx, dword ptr [esp+24h+var_C]
0x581CA1: mov     large fs:0, ecx
0x581CA8: pop     ecx
0x581CA9: pop     edi
0x581CAA: pop     esi
0x581CAB: pop     ebp
0x581CAC: pop     ebx
0x581CAD: add     esp, 10h
0x581CB0: retn
