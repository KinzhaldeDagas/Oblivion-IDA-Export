0x88AD90: sub     esp, 8
0x88AD93: push    esi
0x88AD94: mov     esi, ecx
0x88AD96: mov     eax, [esi+34h]
0x88AD99: test    eax, eax
0x88AD9B: jbe     loc_88AE53
0x88ADA1: cmp     eax, 0C8h ; 'È'
0x88ADA6: jb      short loc_88ADAF
0x88ADA8: mov     dword ptr [esi+34h], 0C8h ; 'È'
0x88ADAF: mov     eax, [esi]
0x88ADB1: mov     edx, [eax+58h]
0x88ADB4: push    ebp
0x88ADB5: call    edx
0x88ADB7: mov     ebp, eax
0x88ADB9: test    ebp, ebp
0x88ADBB: jz      loc_88AE52
0x88ADC1: mov     eax, [esi+34h]
0x88ADC4: mov     ecx, [esi+30h]
0x88ADC7: push    edi
0x88ADC8: push    eax
0x88ADC9: push    ecx
0x88ADCA: mov     ecx, ebp
0x88ADCC: call    sub_89CD00
0x88ADD1: xor     edi, edi
0x88ADD3: cmp     [esi+34h], edi
0x88ADD6: jbe     short loc_88AE34
0x88ADD8: mov     edx, [esi+30h]
0x88ADDB: mov     ecx, [edx+edi*4]
0x88ADDE: test    ecx, ecx
0x88ADE0: jz      short loc_88ADE7
0x88ADE2: mov     eax, [ecx+0Ch]
0x88ADE5: jmp     short loc_88ADE9
0x88ADE7: xor     eax, eax
0x88ADE9: test    eax, eax
0x88ADEB: jz      short loc_88ADF3
0x88ADED: and     byte ptr [eax+10h], 0FEh
0x88ADF1: jmp     short loc_88ADFB
0x88ADF3: push    ecx
0x88ADF4: mov     ecx, ebp
0x88ADF6: call    sub_899B30
0x88ADFB: mov     eax, [esi+30h]
0x88ADFE: mov     ecx, [eax+edi*4]
0x88AE01: test    ecx, ecx
0x88AE03: jz      short loc_88AE21
0x88AE05: push    offset dword_BA7B80
0x88AE0A: lea     edx, [esp+18h+var_8]
0x88AE0E: push    edx
0x88AE0F: call    sub_47F990
0x88AE14: mov     ecx, [eax]
0x88AE16: test    ecx, ecx
0x88AE18: jz      short loc_88AE21
0x88AE1A: mov     eax, [ecx]
0x88AE1C: mov     edx, [eax+50h]
0x88AE1F: call    edx
0x88AE21: mov     eax, [esi+30h]
0x88AE24: mov     ecx, [eax+edi*4]
0x88AE27: call    sub_8BC730
0x88AE2C: add     edi, 1
0x88AE2F: cmp     edi, [esi+34h]
0x88AE32: jb      short loc_88ADD8
0x88AE34: mov     ecx, [esi+34h]
0x88AE37: mov     edx, [esi+30h]
0x88AE3A: add     ecx, ecx
0x88AE3C: add     ecx, ecx
0x88AE3E: push    ecx
0x88AE3F: push    0
0x88AE41: push    edx
0x88AE42: call    __memset
0x88AE47: add     esp, 0Ch
0x88AE4A: mov     dword ptr [esi+34h], 0
0x88AE51: pop     edi
0x88AE52: pop     ebp
0x88AE53: pop     esi
0x88AE54: add     esp, 8
0x88AE57: retn
