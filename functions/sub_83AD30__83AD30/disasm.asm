0x83AD30: push    0FFFFFFFFh
0x83AD32: push    offset SEH_882120
0x83AD37: mov     eax, large fs:0
0x83AD3D: push    eax
0x83AD3E: push    ebx
0x83AD3F: push    ebp
0x83AD40: push    esi
0x83AD41: push    edi
0x83AD42: mov     eax, ds:0B30AACh
0x83AD47: xor     eax, esp
0x83AD49: push    eax
0x83AD4A: lea     eax, [esp+20h+var_C]
0x83AD4E: mov     large fs:0, eax
0x83AD54: mov     esi, ecx
0x83AD56: mov     ebx, [esp+20h+arg_8]
0x83AD5A: mov     eax, [ebx+10h]
0x83AD5D: mov     edi, ds:0B45778h
0x83AD63: push    eax
0x83AD64: call    sub_848C40
0x83AD69: mov     ebx, [ebx+0Ch]
0x83AD6C: push    ebx
0x83AD6D: mov     ecx, esi
0x83AD6F: call    sub_848E50
0x83AD74: mov     ecx, [esp+20h+arg_0]
0x83AD78: mov     eax, [esi]
0x83AD7A: mov     edx, [eax+0BCh]
0x83AD80: push    0
0x83AD82: push    ebx
0x83AD83: push    ecx
0x83AD84: mov     ecx, esi
0x83AD86: call    edx
0x83AD88: mov     eax, [edi+24h]
0x83AD8B: mov     ebx, [esp+20h+arg_C]
0x83AD8F: mov     ebp, [eax]
0x83AD91: mov     edx, [ebx]
0x83AD93: mov     eax, [edx+88h]
0x83AD99: push    0
0x83AD9B: mov     ecx, ebx
0x83AD9D: mov     [esp+24h+arg_8], ebp
0x83ADA1: call    eax
0x83ADA3: mov     ebp, [ebp+4]
0x83ADA6: cmp     ebp, eax
0x83ADA8: mov     [esp+20h+arg_0], eax
0x83ADAC: jz      short loc_83ADE8
0x83ADAE: test    ebp, ebp
0x83ADB0: jz      short loc_83ADD3
0x83ADB2: lea     ecx, [ebp+4]
0x83ADB5: push    ecx; lpAddend
0x83ADB6: call    dword ptr ds:0A2807Ch
0x83ADBC: test    eax, eax
0x83ADBE: jnz     short loc_83ADCF
0x83ADC0: test    ebp, ebp
0x83ADC2: jz      short loc_83ADCF
0x83ADC4: mov     edx, [ebp+0]
0x83ADC7: mov     eax, [edx]
0x83ADC9: push    1
0x83ADCB: mov     ecx, ebp
0x83ADCD: call    eax
0x83ADCF: mov     eax, [esp+20h+arg_0]
0x83ADD3: test    eax, eax
0x83ADD5: mov     ecx, [esp+20h+arg_8]
0x83ADD9: mov     [ecx+4], eax
0x83ADDC: jz      short loc_83ADE8
0x83ADDE: add     eax, 4
0x83ADE1: push    eax; lpAddend
0x83ADE2: call    dword ptr ds:0A28078h
0x83ADE8: mov     edx, [esp+20h+arg_8]
0x83ADEC: push    ebx
0x83ADED: push    edx
0x83ADEE: mov     ecx, esi
0x83ADF0: call    sub_848FA0
0x83ADF5: mov     eax, [edi+24h]
0x83ADF8: mov     ebp, [eax+4]
0x83ADFB: push    0
0x83ADFD: push    ebx
0x83ADFE: mov     ecx, esi
0x83AE00: mov     [esp+28h+arg_8], ebp
0x83AE04: call    sub_848FD0
0x83AE09: mov     ebp, [ebp+4]
0x83AE0C: cmp     ebp, eax
0x83AE0E: mov     [esp+20h+arg_0], eax
0x83AE12: jz      short loc_83AE4E
0x83AE14: test    ebp, ebp
0x83AE16: jz      short loc_83AE39
0x83AE18: lea     ecx, [ebp+4]
0x83AE1B: push    ecx; lpAddend
0x83AE1C: call    dword ptr ds:0A2807Ch
0x83AE22: test    eax, eax
0x83AE24: jnz     short loc_83AE35
0x83AE26: test    ebp, ebp
0x83AE28: jz      short loc_83AE35
0x83AE2A: mov     edx, [ebp+0]
0x83AE2D: mov     eax, [edx]
0x83AE2F: push    1
0x83AE31: mov     ecx, ebp
0x83AE33: call    eax
0x83AE35: mov     eax, [esp+20h+arg_0]
0x83AE39: test    eax, eax
0x83AE3B: mov     ecx, [esp+20h+arg_8]
0x83AE3F: mov     [ecx+4], eax
0x83AE42: jz      short loc_83AE4E
0x83AE44: add     eax, 4
0x83AE47: push    eax; lpAddend
0x83AE48: call    dword ptr ds:0A28078h
0x83AE4E: mov     edx, [esp+20h+arg_8]
0x83AE52: push    ebx
0x83AE53: push    edx
0x83AE54: mov     ecx, esi
0x83AE56: call    sub_848FA0
0x83AE5B: mov     ebx, 1
0x83AE60: add     [edi+60h], ebx
0x83AE63: mov     [esp+20h+arg_8], edi
0x83AE67: mov     ecx, [esi+38h]
0x83AE6A: lea     eax, [esp+20h+arg_8]
0x83AE6E: push    eax
0x83AE6F: push    ecx
0x83AE70: lea     ecx, [esi+40h]
0x83AE73: mov     [esp+28h+var_4], 0
0x83AE7B: call    sub_76CE40
0x83AE80: or      eax, 0FFFFFFFFh
0x83AE83: add     [edi+60h], eax
0x83AE86: mov     [esp+20h+var_4], eax
0x83AE8A: jnz     short loc_83AE93
0x83AE8C: mov     ecx, edi
0x83AE8E: call    sub_7604D0
0x83AE93: add     [esi+38h], ebx
0x83AE96: mov     ecx, [esp+20h+var_C]
0x83AE9A: mov     large fs:0, ecx
0x83AEA1: pop     ecx
0x83AEA2: pop     edi
0x83AEA3: pop     esi
0x83AEA4: pop     ebp
0x83AEA5: pop     ebx
0x83AEA6: add     esp, 0Ch
0x83AEA9: retn    10h
