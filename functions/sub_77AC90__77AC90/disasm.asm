0x77AC90: mov     eax, [esp+arg_4]
0x77AC94: mov     edx, [esp+arg_C]
0x77AC98: push    ebx
0x77AC99: mov     ebx, [esp+4+arg_0]
0x77AC9D: test    ebx, ebx
0x77AC9F: push    ebp
0x77ACA0: mov     ebp, ecx
0x77ACA2: mov     ecx, [esp+8+arg_8]
0x77ACA6: mov     byte ptr [eax], 0
0x77ACA9: mov     byte ptr [ecx], 0
0x77ACAC: mov     byte ptr [edx], 0
0x77ACAF: jnz     short loc_77ACB8
0x77ACB1: pop     ebp
0x77ACB2: xor     eax, eax
0x77ACB4: pop     ebx
0x77ACB5: retn    10h
0x77ACB8: mov     eax, ds:0B3F928h
0x77ACBD: push    esi
0x77ACBE: push    edi
0x77ACBF: lea     edi, [eax+180h]
0x77ACC5: push    edi; lpCriticalSection
0x77ACC6: call    dword ptr ds:0A2806Ch
0x77ACCC: call    dword ptr ds:0A2808Ch
0x77ACD2: add     dword ptr [edi+7Ch], 1
0x77ACD6: mov     [edi+78h], eax
0x77ACD9: mov     esi, [ebx+24h]
0x77ACDC: test    esi, esi
0x77ACDE: jnz     short loc_77AD08
0x77ACE0: push    ebx
0x77ACE1: push    offset dword_B3F95C
0x77ACE6: call    NiRTTI_Cast
0x77ACEB: add     esp, 8
0x77ACEE: test    eax, eax
0x77ACF0: jz      short loc_77AD52
0x77ACF2: mov     ecx, [ebp+0Ch]
0x77ACF5: push    ecx
0x77ACF6: push    eax
0x77ACF7: call    sub_761270
0x77ACFC: mov     edx, [esp+18h+arg_4]
0x77AD00: add     esp, 8
0x77AD03: mov     esi, eax
0x77AD05: mov     byte ptr [edx], 1
0x77AD08: add     dword ptr [edi+7Ch], 0FFFFFFFFh
0x77AD0C: jnz     short loc_77AD15
0x77AD0E: mov     dword ptr [edi+78h], 0
0x77AD15: push    edi; lpCriticalSection
0x77AD16: call    dword ptr ds:0A28074h
0x77AD1C: mov     eax, [esi]
0x77AD1E: mov     edx, [eax+4]
0x77AD21: mov     ecx, esi
0x77AD23: call    edx
0x77AD25: test    eax, eax
0x77AD27: jz      short loc_77AD6F
0x77AD29: lea     ecx, [eax-1]
0x77AD2C: test    eax, ecx
0x77AD2E: setz    al
0x77AD31: test    al, al
0x77AD33: jz      short loc_77AD6F
0x77AD35: mov     edx, [esi]
0x77AD37: mov     eax, [edx+8]
0x77AD3A: mov     ecx, esi
0x77AD3C: call    eax
0x77AD3E: test    eax, eax
0x77AD40: jz      short loc_77AD6F
0x77AD42: lea     ecx, [eax-1]
0x77AD45: test    eax, ecx
0x77AD47: setz    al
0x77AD4A: test    al, al
0x77AD4C: jz      short loc_77AD6F
0x77AD4E: xor     al, al
0x77AD50: jmp     short loc_77AD71
0x77AD52: add     dword ptr [edi+7Ch], 0FFFFFFFFh
0x77AD56: jnz     short loc_77AD5F
0x77AD58: mov     dword ptr [edi+78h], 0
0x77AD5F: push    edi; lpCriticalSection
0x77AD60: call    dword ptr ds:0A28074h
0x77AD66: pop     edi
0x77AD67: pop     esi
0x77AD68: pop     ebp
0x77AD69: xor     eax, eax
0x77AD6B: pop     ebx
0x77AD6C: retn    10h
0x77AD6F: mov     al, 1
0x77AD71: mov     edx, [esp+10h+arg_C]
0x77AD75: mov     [edx], al
0x77AD77: mov     eax, [esi]
0x77AD79: mov     edx, [eax+18h]
0x77AD7C: mov     ecx, esi
0x77AD7E: call    edx
0x77AD80: test    eax, eax
0x77AD82: jnz     short loc_77AD91
0x77AD84: mov     edx, [esi]
0x77AD86: mov     eax, [edx+20h]
0x77AD89: mov     ecx, esi
0x77AD8B: call    eax
0x77AD8D: test    eax, eax
0x77AD8F: jz      short loc_77ADA1
0x77AD91: mov     edx, [eax]
0x77AD93: mov     ecx, eax
0x77AD95: mov     eax, [edx+14h]
0x77AD98: call    eax
0x77AD9A: pop     edi
0x77AD9B: pop     esi
0x77AD9C: pop     ebp
0x77AD9D: pop     ebx
0x77AD9E: retn    10h
0x77ADA1: mov     edx, [esi]
0x77ADA3: mov     eax, [edx+1Ch]
0x77ADA6: mov     ecx, esi
0x77ADA8: call    eax
0x77ADAA: mov     edi, eax
0x77ADAC: test    edi, edi
0x77ADAE: jz      short loc_77ADDE
0x77ADB0: mov     edx, [esi]
0x77ADB2: mov     eax, [edx+14h]
0x77ADB5: mov     ecx, esi
0x77ADB7: call    eax
0x77ADB9: test    eax, eax
0x77ADBB: jnz     short loc_77ADCF
0x77ADBD: mov     edx, [edi]
0x77ADBF: mov     eax, [edx+28h]
0x77ADC2: mov     ecx, edi
0x77ADC4: call    eax
0x77ADC6: mov     ecx, [esp+10h+arg_4]
0x77ADCA: mov     byte ptr [ecx], 1
0x77ADCD: jmp     short loc_77ADDE
0x77ADCF: cmp     byte ptr [ebx+40h], 0
0x77ADD3: jnz     short loc_77ADDE
0x77ADD5: mov     edx, [edi]
0x77ADD7: mov     eax, [edx+28h]
0x77ADDA: mov     ecx, edi
0x77ADDC: call    eax
0x77ADDE: mov     edx, [esi]
0x77ADE0: mov     eax, [edx+10h]
0x77ADE3: mov     ecx, esi
0x77ADE5: call    eax
0x77ADE7: mov     edx, [esp+10h+arg_8]
0x77ADEB: cmp     eax, 1
0x77ADEE: setnbe  cl
0x77ADF1: mov     [edx], cl
0x77ADF3: mov     eax, [esi]
0x77ADF5: mov     edx, [eax+14h]
0x77ADF8: mov     ecx, esi
0x77ADFA: call    edx
0x77ADFC: pop     edi
0x77ADFD: pop     esi
0x77ADFE: pop     ebp
0x77ADFF: pop     ebx
0x77AE00: retn    10h
