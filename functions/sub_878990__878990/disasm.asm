0x878990: push    0FFFFFFFFh
0x878992: push    offset SEH_880560
0x878997: mov     eax, large fs:0
0x87899D: push    eax
0x87899E: push    ebx
0x87899F: push    ebp
0x8789A0: push    esi
0x8789A1: push    edi
0x8789A2: mov     eax, ds:0B30AACh
0x8789A7: xor     eax, esp
0x8789A9: push    eax
0x8789AA: lea     eax, [esp+20h+var_C]
0x8789AE: mov     large fs:0, eax
0x8789B4: mov     esi, ecx
0x8789B6: mov     ebx, [esp+20h+arg_8]
0x8789BA: mov     eax, [ebx+10h]
0x8789BD: mov     edi, ds:0B476C0h
0x8789C3: push    eax
0x8789C4: call    sub_848C40
0x8789C9: mov     ebp, [ebx+0Ch]
0x8789CC: push    ebp
0x8789CD: mov     ecx, esi
0x8789CF: call    sub_848E50
0x8789D4: mov     ebx, [ebx+10h]
0x8789D7: mov     ecx, [esp+20h+arg_0]
0x8789DB: mov     eax, [esi]
0x8789DD: mov     edx, [eax+0BCh]
0x8789E3: push    ebx
0x8789E4: push    ebp
0x8789E5: push    ecx
0x8789E6: mov     ecx, esi
0x8789E8: call    edx
0x8789EA: mov     eax, [edi+24h]
0x8789ED: mov     ecx, [esp+20h+arg_C]
0x8789F1: mov     ebx, [eax]
0x8789F3: mov     edx, [ecx]
0x8789F5: mov     eax, [edx+88h]
0x8789FB: push    0
0x8789FD: mov     [esp+24h+arg_8], ebx
0x878A01: call    eax
0x878A03: mov     ebx, [ebx+4]
0x878A06: mov     ebp, eax
0x878A08: cmp     ebx, ebp
0x878A0A: jz      short loc_878A41
0x878A0C: test    ebx, ebx
0x878A0E: jz      short loc_878A2C
0x878A10: lea     ecx, [ebx+4]
0x878A13: push    ecx; lpAddend
0x878A14: call    dword ptr ds:0A2807Ch
0x878A1A: test    eax, eax
0x878A1C: jnz     short loc_878A2C
0x878A1E: test    ebx, ebx
0x878A20: jz      short loc_878A2C
0x878A22: mov     edx, [ebx]
0x878A24: mov     eax, [edx]
0x878A26: push    1
0x878A28: mov     ecx, ebx
0x878A2A: call    eax
0x878A2C: test    ebp, ebp
0x878A2E: mov     ecx, [esp+20h+arg_8]
0x878A32: mov     [ecx+4], ebp
0x878A35: jz      short loc_878A41
0x878A37: add     ebp, 4
0x878A3A: push    ebp; lpAddend
0x878A3B: call    dword ptr ds:0A28078h
0x878A41: mov     edx, [edi+24h]
0x878A44: mov     eax, [esp+20h+arg_C]
0x878A48: mov     ebx, [edx+4]
0x878A4B: push    0
0x878A4D: push    eax
0x878A4E: mov     ecx, esi
0x878A50: mov     [esp+28h+arg_8], ebx
0x878A54: call    sub_848FD0
0x878A59: mov     ebx, [ebx+4]
0x878A5C: mov     ebp, eax
0x878A5E: cmp     ebx, ebp
0x878A60: jz      short loc_878A97
0x878A62: test    ebx, ebx
0x878A64: jz      short loc_878A82
0x878A66: lea     ecx, [ebx+4]
0x878A69: push    ecx; lpAddend
0x878A6A: call    dword ptr ds:0A2807Ch
0x878A70: test    eax, eax
0x878A72: jnz     short loc_878A82
0x878A74: test    ebx, ebx
0x878A76: jz      short loc_878A82
0x878A78: mov     edx, [ebx]
0x878A7A: mov     eax, [edx]
0x878A7C: push    1
0x878A7E: mov     ecx, ebx
0x878A80: call    eax
0x878A82: test    ebp, ebp
0x878A84: mov     ecx, [esp+20h+arg_8]
0x878A88: mov     [ecx+4], ebp
0x878A8B: jz      short loc_878A97
0x878A8D: add     ebp, 4
0x878A90: push    ebp; lpAddend
0x878A91: call    dword ptr ds:0A28078h
0x878A97: mov     edx, [edi+24h]
0x878A9A: mov     ebp, [edx+14h]
0x878A9D: mov     eax, ds:0B43110h
0x878AA2: mov     ebx, [ebp+4]
0x878AA5: cmp     ebx, eax
0x878AA7: mov     ecx, eax
0x878AA9: mov     [esp+20h+arg_C], ecx
0x878AAD: jz      short loc_878AE4
0x878AAF: test    ebx, ebx
0x878AB1: jz      short loc_878AD3
0x878AB3: lea     eax, [ebx+4]
0x878AB6: push    eax; lpAddend
0x878AB7: call    dword ptr ds:0A2807Ch
0x878ABD: test    eax, eax
0x878ABF: jnz     short loc_878ACF
0x878AC1: test    ebx, ebx
0x878AC3: jz      short loc_878ACF
0x878AC5: mov     edx, [ebx]
0x878AC7: mov     eax, [edx]
0x878AC9: push    1
0x878ACB: mov     ecx, ebx
0x878ACD: call    eax
0x878ACF: mov     ecx, [esp+20h+arg_C]
0x878AD3: test    ecx, ecx
0x878AD5: mov     [ebp+4], ecx
0x878AD8: jz      short loc_878AE4
0x878ADA: add     ecx, 4
0x878ADD: push    ecx; lpAddend
0x878ADE: call    dword ptr ds:0A28078h
0x878AE4: mov     ebx, 1
0x878AE9: add     [edi+60h], ebx
0x878AEC: mov     [esp+20h+arg_C], edi
0x878AF0: mov     edx, [esi+38h]
0x878AF3: lea     ecx, [esp+20h+arg_C]
0x878AF7: push    ecx
0x878AF8: push    edx
0x878AF9: lea     ecx, [esi+40h]
0x878AFC: mov     [esp+28h+var_4], 0
0x878B04: call    sub_76CE40
0x878B09: or      eax, 0FFFFFFFFh
0x878B0C: add     [edi+60h], eax
0x878B0F: mov     [esp+20h+var_4], eax
0x878B13: jnz     short loc_878B1C
0x878B15: mov     ecx, edi
0x878B17: call    sub_7604D0
0x878B1C: add     [esi+38h], ebx
0x878B1F: mov     ecx, [esp+20h+var_C]
0x878B23: mov     large fs:0, ecx
0x878B2A: pop     ecx
0x878B2B: pop     edi
0x878B2C: pop     esi
0x878B2D: pop     ebp
0x878B2E: pop     ebx
0x878B2F: add     esp, 0Ch
0x878B32: retn    10h
