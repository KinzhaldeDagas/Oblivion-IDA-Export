0x80AD40: push    0FFFFFFFFh
0x80AD42: push    offset ??0SkinShader@@QAE@XZ_SEH
0x80AD47: mov     eax, large fs:0
0x80AD4D: push    eax
0x80AD4E: push    ecx
0x80AD4F: push    ebx
0x80AD50: push    ebp
0x80AD51: push    esi
0x80AD52: push    edi
0x80AD53: mov     eax, ds:0B30AACh
0x80AD58: xor     eax, esp
0x80AD5A: push    eax
0x80AD5B: lea     eax, [esp+24h+var_C]
0x80AD5F: mov     large fs:0, eax
0x80AD65: mov     esi, ecx
0x80AD67: mov     [esp+24h+var_10], esi
0x80AD6B: mov     ebx, [esp+24h+arg_4]
0x80AD6F: mov     ebp, [esp+24h+arg_0]
0x80AD73: push    0
0x80AD75: push    0
0x80AD77: push    ebx
0x80AD78: push    ebp
0x80AD79: call    ??0ShadowLightShader@@QAE@XZ; ShadowLightShader::ShadowLightShader(void)
0x80AD7E: push    offset sub_7016A0; a5
0x80AD83: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x80AD88: push    14h; size
0x80AD8A: push    4; a2
0x80AD8C: lea     eax, [esi+9Ch]
0x80AD92: push    eax; a1
0x80AD93: mov     [esp+38h+var_4], 0
0x80AD9B: mov     dword ptr [esi], offset ??_7SkinShader@@6B@; const SkinShader::`vftable'
0x80ADA1: call    ArrayConstructor
0x80ADA6: push    offset sub_7016A0; a5
0x80ADAB: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x80ADB0: push    0Ah; size
0x80ADB2: push    4; a2
0x80ADB4: lea     ecx, [esi+0ECh]
0x80ADBA: push    ecx; a1
0x80ADBB: mov     byte ptr [esp+38h+var_4], 1
0x80ADC0: call    ArrayConstructor
0x80ADC5: mov     byte ptr [esi+78h], 0
0x80ADC9: mov     edi, [esi+7Ch]
0x80ADCC: cmp     edi, ebp
0x80ADCE: mov     byte ptr [esp+24h+var_4], 2
0x80ADD3: jz      short loc_80AE06
0x80ADD5: test    edi, edi
0x80ADD7: jz      short loc_80ADF5
0x80ADD9: lea     edx, [edi+4]
0x80ADDC: push    edx; lpAddend
0x80ADDD: call    dword ptr ds:0A2807Ch
0x80ADE3: test    eax, eax
0x80ADE5: jnz     short loc_80ADF5
0x80ADE7: test    edi, edi
0x80ADE9: jz      short loc_80ADF5
0x80ADEB: mov     eax, [edi]
0x80ADED: mov     edx, [eax]
0x80ADEF: push    1
0x80ADF1: mov     ecx, edi
0x80ADF3: call    edx
0x80ADF5: test    ebp, ebp
0x80ADF7: mov     [esi+7Ch], ebp
0x80ADFA: jz      short loc_80AE06
0x80ADFC: add     ebp, 4
0x80ADFF: push    ebp; lpAddend
0x80AE00: call    dword ptr ds:0A28078h
0x80AE06: mov     edi, [esi+80h]
0x80AE0C: cmp     edi, ebx
0x80AE0E: jz      short loc_80AE44
0x80AE10: test    edi, edi
0x80AE12: jz      short loc_80AE30
0x80AE14: lea     eax, [edi+4]
0x80AE17: push    eax; lpAddend
0x80AE18: call    dword ptr ds:0A2807Ch
0x80AE1E: test    eax, eax
0x80AE20: jnz     short loc_80AE30
0x80AE22: test    edi, edi
0x80AE24: jz      short loc_80AE30
0x80AE26: mov     edx, [edi]
0x80AE28: mov     eax, [edx]
0x80AE2A: push    1
0x80AE2C: mov     ecx, edi
0x80AE2E: call    eax
0x80AE30: test    ebx, ebx
0x80AE32: mov     [esi+80h], ebx
0x80AE38: jz      short loc_80AE44
0x80AE3A: add     ebx, 4
0x80AE3D: push    ebx; lpAddend
0x80AE3E: call    dword ptr ds:0A28078h
0x80AE44: mov     dword ptr [esi+74h], 0FFFFFFFFh
0x80AE4B: mov     eax, esi
0x80AE4D: mov     ecx, dword ptr [esp+24h+var_C]
0x80AE51: mov     large fs:0, ecx
0x80AE58: pop     ecx
0x80AE59: pop     edi
0x80AE5A: pop     esi
0x80AE5B: pop     ebp
0x80AE5C: pop     ebx
0x80AE5D: add     esp, 10h
0x80AE60: retn    8
