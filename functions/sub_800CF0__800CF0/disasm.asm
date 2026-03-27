0x800CF0: push    0FFFFFFFFh
0x800CF2: push    offset SEH_7B1E00
0x800CF7: mov     eax, large fs:0
0x800CFD: push    eax
0x800CFE: sub     esp, 8
0x800D01: push    ebx
0x800D02: push    ebp
0x800D03: push    esi
0x800D04: push    edi
0x800D05: mov     eax, ds:0B30AACh
0x800D0A: xor     eax, esp
0x800D0C: push    eax
0x800D0D: lea     eax, [esp+28h+var_C]
0x800D11: mov     large fs:0, eax
0x800D17: mov     esi, ecx
0x800D19: mov     eax, [esi]
0x800D1B: mov     edx, [eax+80h]
0x800D21: call    edx
0x800D23: xor     ebp, ebp
0x800D25: mov     [esp+28h+var_10], ebp
0x800D29: xor     edi, edi
0x800D2B: mov     [esp+28h+var_4], ebp
0x800D2F: mov     [esp+28h+var_14], edi
0x800D33: cmp     [esi+98h], edi
0x800D39: mov     byte ptr [esp+28h+var_4], 1
0x800D3E: jnz     loc_800DD0
0x800D44: mov     eax, [esi+9Ch]
0x800D4A: test    eax, eax
0x800D4C: jz      short loc_800D58
0x800D4E: mov     ebp, eax
0x800D50: add     dword ptr [ebp+60h], 1
0x800D54: mov     [esp+28h+var_10], ebp
0x800D58: mov     eax, [ebp+24h]
0x800D5B: mov     eax, [eax]
0x800D5D: test    eax, eax
0x800D5F: jz      short loc_800D6B
0x800D61: add     dword ptr [eax+5Ch], 1
0x800D65: mov     edi, eax
0x800D67: mov     [esp+28h+var_14], edi
0x800D6B: mov     ecx, [esi+7Ch]; this
0x800D6E: call    BSRenderedTexture__GetInnerTexture
0x800D73: push    eax; a2
0x800D74: mov     ecx, edi; this
0x800D76: call    sub_76C910
0x800D7B: cmp     dword ptr [esi+0A0h], 0
0x800D82: jz      short loc_800DBB
0x800D84: mov     ecx, [ebp+24h]
0x800D87: mov     ebx, [ecx+4]
0x800D8A: cmp     edi, ebx
0x800D8C: jz      short loc_800DAD
0x800D8E: test    edi, edi
0x800D90: jz      short loc_800D9F
0x800D92: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x800D96: jnz     short loc_800D9F
0x800D98: mov     ecx, edi
0x800D9A: call    sub_772560
0x800D9F: test    ebx, ebx
0x800DA1: mov     edi, ebx
0x800DA3: mov     [esp+28h+var_14], edi
0x800DA7: jz      short loc_800DAD
0x800DA9: add     dword ptr [ebx+5Ch], 1
0x800DAD: mov     eax, [esi+0A0h]
0x800DB3: push    eax; a2
0x800DB4: mov     ecx, edi; this
0x800DB6: call    sub_76C910
0x800DBB: mov     eax, [esi+38h]
0x800DBE: lea     edx, [esp+28h+var_10]
0x800DC2: push    edx
0x800DC3: push    eax
0x800DC4: lea     ecx, [esi+40h]
0x800DC7: call    sub_76CE40
0x800DCC: add     dword ptr [esi+38h], 1
0x800DD0: or      esi, 0FFFFFFFFh
0x800DD3: test    edi, edi
0x800DD5: mov     byte ptr [esp+28h+var_4], 0
0x800DDA: jz      short loc_800DE8
0x800DDC: add     [edi+5Ch], esi
0x800DDF: jnz     short loc_800DE8
0x800DE1: mov     ecx, edi
0x800DE3: call    sub_772560
0x800DE8: test    ebp, ebp
0x800DEA: mov     [esp+28h+var_4], esi
0x800DEE: jz      short loc_800DFC
0x800DF0: add     [ebp+60h], esi
0x800DF3: jnz     short loc_800DFC
0x800DF5: mov     ecx, ebp
0x800DF7: call    sub_7604D0
0x800DFC: xor     eax, eax
0x800DFE: mov     ecx, [esp+28h+var_C]
0x800E02: mov     large fs:0, ecx
0x800E09: pop     ecx
0x800E0A: pop     edi
0x800E0B: pop     esi
0x800E0C: pop     ebp
0x800E0D: pop     ebx
0x800E0E: add     esp, 14h
0x800E11: retn    1Ch
