0x53AD60: sub     esp, 148h
0x53AD66: mov     eax, ds:0B30AACh
0x53AD6B: xor     eax, esp
0x53AD6D: mov     [esp+148h+var_4], eax
0x53AD74: push    0Eh
0x53AD76: lea     eax, [esp+14Ch+String]
0x53AD7A: push    offset aD_0; "%d"
0x53AD7F: push    eax
0x53AD80: call    __sprintf
0x53AD85: mov     ecx, ds:0B11A20h
0x53AD8B: add     esp, 0Ch
0x53AD8E: push    ecx; lpFileName
0x53AD8F: lea     edx, [esp+14Ch+String]
0x53AD93: push    edx; lpString
0x53AD94: push    offset aVersion_0; "VERSION"
0x53AD99: push    offset aDefault_0; "DEFAULT"
0x53AD9E: call    dword ptr ds:0A280B0h
0x53ADA4: xor     eax, eax
0x53ADA6: jmp     short loc_53ADB0
0x53ADA8: align 10h
0x53ADB0: mov     cl, byte ptr ds:word_B3F280[eax]
0x53ADB6: mov     [esp+eax+148h+var_108], cl
0x53ADBA: add     eax, 1
0x53ADBD: test    cl, cl
0x53ADBF: jnz     short loc_53ADB0
0x53ADC1: mov     eax, ds:0B11A20h
0x53ADC6: mov     edx, eax
0x53ADC8: mov     cl, [eax]
0x53ADCA: add     eax, 1
0x53ADCD: test    cl, cl
0x53ADCF: jnz     short loc_53ADC8
0x53ADD1: push    esi
0x53ADD2: push    edi
0x53ADD3: lea     edi, [esp+150h+var_108]
0x53ADD7: sub     eax, edx
0x53ADD9: add     edi, 0FFFFFFFFh
0x53ADDC: lea     esp, [esp+0]
0x53ADE0: mov     cl, [edi+1]
0x53ADE3: add     edi, 1
0x53ADE6: test    cl, cl
0x53ADE8: jnz     short loc_53ADE0
0x53ADEA: mov     ecx, eax
0x53ADEC: shr     ecx, 2
0x53ADEF: mov     esi, edx
0x53ADF1: rep movsd
0x53ADF3: mov     ecx, eax
0x53ADF5: and     ecx, 3
0x53ADF8: rep movsb
0x53ADFA: pop     edi
0x53ADFB: xor     eax, eax
0x53ADFD: pop     esi
0x53ADFE: mov     edi, edi
0x53AE00: mov     cl, [esp+eax+148h+var_108]
0x53AE04: mov     ds:byte_B11C44[eax], cl
0x53AE0A: add     eax, 1
0x53AE0D: test    cl, cl
0x53AE0F: jnz     short loc_53AE00
0x53AE11: mov     eax, ds:0B11C40h
0x53AE16: mov     edx, [eax+14h]
0x53AE19: push    1
0x53AE1B: mov     ecx, offset BlendSettingCollection
0x53AE20: call    edx
0x53AE22: test    al, al
0x53AE24: jz      short loc_53AE44
0x53AE26: mov     eax, ds:0B11C40h
0x53AE2B: mov     edx, [eax+1Ch]
0x53AE2E: mov     ecx, offset BlendSettingCollection
0x53AE33: call    edx
0x53AE35: mov     eax, ds:0B11C40h
0x53AE3A: mov     edx, [eax+18h]
0x53AE3D: mov     ecx, offset BlendSettingCollection
0x53AE42: call    edx
0x53AE44: mov     ecx, [esp+148h+var_4]
0x53AE4B: xor     ecx, esp
0x53AE4D: call    @__security_check_cookie@4; __security_check_cookie(x)
0x53AE52: add     esp, 148h
0x53AE58: retn
