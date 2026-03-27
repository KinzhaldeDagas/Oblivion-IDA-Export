0x79AD70: push    ebp
0x79AD71: mov     ebp, esp
0x79AD73: push    0FFFFFFFFh
0x79AD75: push    offset SEH_79AD70
0x79AD7A: mov     eax, large fs:0
0x79AD80: push    eax
0x79AD81: sub     esp, 8
0x79AD84: push    ebx
0x79AD85: push    esi
0x79AD86: push    edi
0x79AD87: mov     eax, ds:0B30AACh
0x79AD8C: xor     eax, ebp
0x79AD8E: push    eax
0x79AD8F: lea     eax, [ebp+var_C]
0x79AD92: mov     large fs:0, eax
0x79AD98: mov     [ebp+var_10], esp
0x79AD9B: mov     edi, ecx
0x79AD9D: mov     [ebp+var_14], edi
0x79ADA0: mov     esi, [ebp+arg_0]
0x79ADA3: mov     eax, [esi+4]
0x79ADA6: test    eax, eax
0x79ADA8: jz      short loc_79ADC2
0x79ADAA: mov     ecx, [esi+8]
0x79ADAD: sub     ecx, eax
0x79ADAF: mov     eax, 92492493h
0x79ADB4: imul    ecx
0x79ADB6: add     edx, ecx
0x79ADB8: sar     edx, 5
0x79ADBB: mov     eax, edx
0x79ADBD: shr     eax, 1Fh
0x79ADC0: add     eax, edx
0x79ADC2: push    eax; char *
0x79ADC3: mov     ecx, edi
0x79ADC5: call    sub_79ACC0
0x79ADCA: test    al, al
0x79ADCC: jz      short loc_79AE13
0x79ADCE: mov     ebx, [esi+8]
0x79ADD1: cmp     [esi+4], ebx
0x79ADD4: mov     [ebp+var_4], 0
0x79ADDB: jbe     short loc_79ADE2
0x79ADDD: call    __invalid_parameter_noinfo
0x79ADE2: mov     ecx, [esi+4]
0x79ADE5: cmp     ecx, [esi+8]
0x79ADE8: mov     [ebp+arg_0], ecx
0x79ADEB: jbe     short loc_79ADF5
0x79ADED: call    __invalid_parameter_noinfo
0x79ADF2: mov     ecx, [ebp+arg_0]
0x79ADF5: mov     eax, [edi+4]
0x79ADF8: mov     byte ptr [ebp+arg_0], 0
0x79ADFC: mov     edx, [ebp+arg_0]
0x79ADFF: push    edx
0x79AE00: mov     edx, [ebp+arg_0]
0x79AE03: push    edx
0x79AE04: push    edi
0x79AE05: push    eax
0x79AE06: push    ebx
0x79AE07: push    ecx
0x79AE08: call    sub_79A9B0
0x79AE0D: add     esp, 18h
0x79AE10: mov     [edi+8], eax
0x79AE13: mov     eax, edi
0x79AE15: mov     ecx, [ebp+var_C]
0x79AE18: mov     large fs:0, ecx
0x79AE1F: pop     ecx
0x79AE20: pop     edi
0x79AE21: pop     esi
0x79AE22: pop     ebx
0x79AE23: mov     esp, ebp
0x79AE25: pop     ebp
0x79AE26: retn    4
0x79AE29: mov     ecx, [ebp+var_14]; void *
0x79AE2C: call    sub_794EB0
0x79AE31: push    0
0x79AE33: push    0
0x79AE35: call    ThrowException??
