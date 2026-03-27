0x67ACA0: sub     esp, 10h
0x67ACA3: push    ebx
0x67ACA4: push    ebp
0x67ACA5: push    esi
0x67ACA6: mov     ebp, ecx
0x67ACA8: cmp     dword ptr [ebp+44h], 0
0x67ACAC: push    edi
0x67ACAD: lea     edi, [ebp+40h]
0x67ACB0: mov     [esp+20h+var_C], ebp
0x67ACB4: mov     [esp+20h+var_10], 0
0x67ACBC: jnz     short loc_67ACD0
0x67ACBE: xor     esi, esi
0x67ACC0: cmp     [edi], esi
0x67ACC2: mov     [esp+20h+var_10], 1
0x67ACCA: jnz     short loc_67ACD4
0x67ACCC: mov     bl, 1
0x67ACCE: jmp     short loc_67ACD6
0x67ACD0: mov     esi, [esp+20h+arg_0]
0x67ACD4: xor     bl, bl
0x67ACD6: test    byte ptr [esp+20h+var_10], 1
0x67ACDB: jz      short loc_67ACFE
0x67ACDD: and     [esp+20h+var_10], 0FFFFFFFEh
0x67ACE2: test    esi, esi
0x67ACE4: jz      short loc_67ACFE
0x67ACE6: lea     eax, [esi+4]
0x67ACE9: push    eax; lpAddend
0x67ACEA: call    dword ptr ds:0A2807Ch
0x67ACF0: test    eax, eax
0x67ACF2: jnz     short loc_67ACFE
0x67ACF4: mov     edx, [esi]
0x67ACF6: mov     eax, [edx]
0x67ACF8: push    1
0x67ACFA: mov     ecx, esi
0x67ACFC: call    eax
0x67ACFE: test    bl, bl
0x67AD00: jnz     loc_67AD9B
0x67AD06: test    edi, edi
0x67AD08: mov     bl, 1
0x67AD0A: jz      loc_67AD9B
0x67AD10: lea     ecx, [esp+20h+var_8]
0x67AD14: push    ecx
0x67AD15: mov     ecx, edi
0x67AD17: call    sub_677C70
0x67AD1C: mov     esi, [eax]
0x67AD1E: mov     eax, [esp+20h+var_8]
0x67AD22: test    eax, eax
0x67AD24: jz      short loc_67AD45
0x67AD26: mov     ebp, eax
0x67AD28: add     eax, 4
0x67AD2B: push    eax; lpAddend
0x67AD2C: call    dword ptr ds:0A2807Ch
0x67AD32: test    eax, eax
0x67AD34: jnz     short loc_67AD45
0x67AD36: test    ebp, ebp
0x67AD38: jz      short loc_67AD45
0x67AD3A: mov     edx, [ebp+0]
0x67AD3D: mov     eax, [edx]
0x67AD3F: push    1
0x67AD41: mov     ecx, ebp
0x67AD43: call    eax
0x67AD45: test    bl, bl
0x67AD47: jnz     short loc_67AD4C
0x67AD49: mov     edi, [edi+4]
0x67AD4C: test    esi, esi
0x67AD4E: jz      short loc_67AD86
0x67AD50: mov     edx, [esi]
0x67AD52: fld     [esp+20h+arg_0]
0x67AD56: mov     eax, [edx+50h]
0x67AD59: push    ecx
0x67AD5A: mov     ecx, esi
0x67AD5C: fstp    [esp+24h+var_24]
0x67AD5F: call    eax
0x67AD61: test    al, al
0x67AD63: jnz     short loc_67AD86
0x67AD65: push    ecx
0x67AD66: mov     eax, esp
0x67AD68: mov     [eax], esi
0x67AD6A: mov     [esp+24h+var_4], esp
0x67AD6E: add     esi, 4
0x67AD71: push    esi; lpAddend
0x67AD72: call    dword ptr ds:0A28078h
0x67AD78: mov     ecx, [esp+24h+var_C]
0x67AD7C: add     ecx, 40h ; '@'
0x67AD7F: call    sub_67A760
0x67AD84: jmp     short loc_67AD8F
0x67AD86: test    bl, bl
0x67AD88: jz      short loc_67AD8F
0x67AD8A: mov     edi, [edi+4]
0x67AD8D: xor     bl, bl
0x67AD8F: test    edi, edi
0x67AD91: jnz     loc_67AD10
0x67AD97: mov     ebp, [esp+20h+var_C]
0x67AD9B: add     ebp, 48h ; 'H'
0x67AD9E: cmp     dword ptr [ebp+4], 0
0x67ADA2: mov     [esp+20h+var_C], ebp
0x67ADA6: mov     eax, 2
0x67ADAB: jnz     short loc_67ADBC
0x67ADAD: or      [esp+20h+var_10], eax
0x67ADB1: xor     esi, esi
0x67ADB3: cmp     [ebp+0], esi
0x67ADB6: jnz     short loc_67ADC0
0x67ADB8: mov     bl, 1
0x67ADBA: jmp     short loc_67ADC2
0x67ADBC: mov     esi, [esp+20h+arg_0]
0x67ADC0: xor     bl, bl
0x67ADC2: test    byte ptr [esp+20h+var_10], al
0x67ADC6: jz      short loc_67ADE4
0x67ADC8: test    esi, esi
0x67ADCA: jz      short loc_67ADE4
0x67ADCC: lea     ecx, [esi+4]
0x67ADCF: push    ecx; lpAddend
0x67ADD0: call    dword ptr ds:0A2807Ch
0x67ADD6: test    eax, eax
0x67ADD8: jnz     short loc_67ADE4
0x67ADDA: mov     edx, [esi]
0x67ADDC: mov     eax, [edx]
0x67ADDE: push    1
0x67ADE0: mov     ecx, esi
0x67ADE2: call    eax
0x67ADE4: test    bl, bl
0x67ADE6: jnz     loc_67AE7E
0x67ADEC: mov     edi, ebp
0x67ADEE: test    edi, edi
0x67ADF0: mov     bl, 1
0x67ADF2: jz      loc_67AE7E
0x67ADF8: lea     ecx, [esp+20h+var_8]
0x67ADFC: push    ecx
0x67ADFD: mov     ecx, edi
0x67ADFF: call    sub_677C70
0x67AE04: mov     esi, [eax]
0x67AE06: mov     eax, [esp+20h+var_8]
0x67AE0A: test    eax, eax
0x67AE0C: jz      short loc_67AE31
0x67AE0E: mov     ebp, eax
0x67AE10: add     eax, 4
0x67AE13: push    eax; lpAddend
0x67AE14: call    dword ptr ds:0A2807Ch
0x67AE1A: test    eax, eax
0x67AE1C: jnz     short loc_67AE2D
0x67AE1E: test    ebp, ebp
0x67AE20: jz      short loc_67AE2D
0x67AE22: mov     edx, [ebp+0]
0x67AE25: mov     eax, [edx]
0x67AE27: push    1
0x67AE29: mov     ecx, ebp
0x67AE2B: call    eax
0x67AE2D: mov     ebp, [esp+20h+var_C]
0x67AE31: test    bl, bl
0x67AE33: jnz     short loc_67AE38
0x67AE35: mov     edi, [edi+4]
0x67AE38: test    esi, esi
0x67AE3A: jz      short loc_67AE6D
0x67AE3C: mov     edx, [esi]
0x67AE3E: fld     [esp+20h+arg_0]
0x67AE42: mov     eax, [edx+50h]
0x67AE45: push    ecx
0x67AE46: mov     ecx, esi
0x67AE48: fstp    [esp+24h+var_24]
0x67AE4B: call    eax
0x67AE4D: test    al, al
0x67AE4F: jnz     short loc_67AE6D
0x67AE51: push    ecx
0x67AE52: mov     eax, esp
0x67AE54: mov     [eax], esi
0x67AE56: mov     [esp+24h+var_4], esp
0x67AE5A: add     esi, 4
0x67AE5D: push    esi; lpAddend
0x67AE5E: call    dword ptr ds:0A28078h
0x67AE64: mov     ecx, ebp
0x67AE66: call    sub_67A760
0x67AE6B: jmp     short loc_67AE76
0x67AE6D: test    bl, bl
0x67AE6F: jz      short loc_67AE76
0x67AE71: mov     edi, [edi+4]
0x67AE74: xor     bl, bl
0x67AE76: test    edi, edi
0x67AE78: jnz     loc_67ADF8
0x67AE7E: pop     edi
0x67AE7F: pop     esi
0x67AE80: pop     ebp
0x67AE81: pop     ebx
0x67AE82: add     esp, 10h
0x67AE85: retn    4
