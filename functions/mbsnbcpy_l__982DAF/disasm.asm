0x982DAF: push    ebp
0x982DB0: mov     ebp, esp
0x982DB2: sub     esp, 10h
0x982DB5: push    ebx
0x982DB6: push    esi
0x982DB7: mov     esi, [ebp+Dest]
0x982DBA: push    [ebp+arg_C]; struct localeinfo_struct *
0x982DBD: lea     ecx, [ebp+var_10]; this
0x982DC0: mov     [ebp+Dest], esi
0x982DC3: call    ??0_LocaleUpdate@@QAE@PAUlocaleinfo_struct@@@Z
0x982DC8: xor     ebx, ebx
0x982DCA: cmp     esi, ebx
0x982DCC: jnz     short loc_982DFB
0x982DCE: cmp     [ebp+Count], ebx
0x982DD1: jz      short loc_982DFB
0x982DD3: call    __errno
0x982DD8: push    ebx
0x982DD9: push    ebx
0x982DDA: push    ebx
0x982DDB: push    ebx
0x982DDC: push    ebx
0x982DDD: mov     dword ptr [eax], 16h
0x982DE3: call    __invalid_parameter
0x982DE8: add     esp, 14h
0x982DEB: cmp     [ebp+var_4], bl
0x982DEE: jz      short loc_982DF7
0x982DF0: mov     eax, [ebp+var_8]
0x982DF3: and     dword ptr [eax+70h], 0FFFFFFFDh
0x982DF7: xor     eax, eax
0x982DF9: jmp     short loc_982E7A
0x982DFB: mov     ecx, [ebp+Source]
0x982DFE: cmp     ecx, ebx
0x982E00: jnz     short loc_982E07
0x982E02: cmp     [ebp+Count], ebx
0x982E05: jnz     short loc_982DD3
0x982E07: mov     edx, [ebp+var_C]
0x982E0A: cmp     [edx+8], ebx
0x982E0D: jnz     short loc_982E2A
0x982E0F: push    [ebp+Count]; Count
0x982E12: push    ecx; Source
0x982E13: push    esi; Dest
0x982E14: call    _strncpy
0x982E19: add     esp, 0Ch
0x982E1C: cmp     [ebp+var_4], bl
0x982E1F: jz      short loc_982E7A
0x982E21: mov     ecx, [ebp+var_8]
0x982E24: and     dword ptr [ecx+70h], 0FFFFFFFDh
0x982E28: jmp     short loc_982E7A
0x982E2A: cmp     [ebp+Count], ebx
0x982E2D: jz      short loc_982E6B
0x982E2F: push    edi
0x982E30: mov     al, [ecx]
0x982E32: dec     [ebp+Count]
0x982E35: movzx   edi, al
0x982E38: test    byte ptr [edi+edx+1Dh], 4
0x982E3D: mov     [esi], al
0x982E3F: jz      short loc_982E7E
0x982E41: inc     esi
0x982E42: inc     ecx
0x982E43: cmp     [ebp+Count], ebx
0x982E46: jz      short loc_982E8B
0x982E48: mov     al, [ecx]
0x982E4A: dec     [ebp+Count]
0x982E4D: mov     [esi], al
0x982E4F: inc     esi
0x982E50: inc     ecx
0x982E51: cmp     al, bl
0x982E53: jnz     short loc_982E84
0x982E55: mov     [esi-2], bl
0x982E58: cmp     [ebp+Count], ebx
0x982E5B: jz      short loc_982E6A
0x982E5D: push    [ebp+Count]
0x982E60: push    ebx
0x982E61: push    esi
0x982E62: call    __memset
0x982E67: add     esp, 0Ch
0x982E6A: pop     edi
0x982E6B: cmp     [ebp+var_4], bl
0x982E6E: jz      short loc_982E77
0x982E70: mov     eax, [ebp+var_8]
0x982E73: and     dword ptr [eax+70h], 0FFFFFFFDh
0x982E77: mov     eax, [ebp+Dest]
0x982E7A: pop     esi
0x982E7B: pop     ebx
0x982E7C: leave
0x982E7D: retn
0x982E7E: inc     esi
0x982E7F: inc     ecx
0x982E80: cmp     al, bl
0x982E82: jz      short loc_982E58
0x982E84: cmp     [ebp+Count], ebx
0x982E87: jnz     short loc_982E30
0x982E89: jmp     short loc_982E6A
0x982E8B: mov     [esi-1], bl
0x982E8E: jmp     short loc_982E6A
