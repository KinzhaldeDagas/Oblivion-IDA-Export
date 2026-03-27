0x56AD60: sub     esp, 18h
0x56AD63: push    ebx
0x56AD64: push    esi
0x56AD65: mov     esi, ecx
0x56AD67: mov     eax, [esi]
0x56AD69: mov     ecx, [esi+4]
0x56AD6C: mov     edx, [esi+8]
0x56AD6F: mov     [esp+20h+Src], eax
0x56AD73: mov     eax, [esi+0Ch]
0x56AD76: mov     [esp+20h+var_C], eax
0x56AD7A: movzx   eax, word ptr [esi+8]
0x56AD7E: mov     [esp+20h+var_14], ecx
0x56AD82: mov     ecx, [esi+10h]
0x56AD85: mov     [esp+20h+var_10], edx
0x56AD89: mov     edx, [esi+14h]
0x56AD8C: push    edi
0x56AD8D: push    eax
0x56AD8E: mov     [esp+28h+var_8], ecx
0x56AD92: mov     [esp+28h+var_4], edx
0x56AD96: call    sub_56B170
0x56AD9B: mov     ebx, eax
0x56AD9D: add     esp, 4
0x56ADA0: xor     edi, edi
0x56ADA2: test    ebx, ebx
0x56ADA4: jle     short loc_56ADCE
0x56ADA6: movzx   ecx, word ptr [esi+8]
0x56ADAA: push    edi
0x56ADAB: push    ecx
0x56ADAC: call    sub_56B190
0x56ADB1: add     esp, 8
0x56ADB4: test    al, al
0x56ADB6: jz      short loc_56ADC7
0x56ADB8: mov     eax, [esp+edi*4+24h+var_C]
0x56ADBC: test    eax, eax
0x56ADBE: jz      short loc_56ADC7
0x56ADC0: mov     edx, [eax+0Ch]
0x56ADC3: mov     [esp+edi*4+24h+var_C], edx
0x56ADC7: add     edi, 1
0x56ADCA: cmp     edi, ebx
0x56ADCC: jl      short loc_56ADA6
0x56ADCE: test    byte ptr [esi], 4
0x56ADD1: jz      short loc_56ADE1
0x56ADD3: mov     esi, [esi+4]
0x56ADD6: test    esi, esi
0x56ADD8: jz      short loc_56ADE1
0x56ADDA: mov     eax, [esi+0Ch]
0x56ADDD: mov     [esp+24h+var_14], eax
0x56ADE1: push    18h; Size
0x56ADE3: lea     ecx, [esp+28h+Src]
0x56ADE7: push    ecx; Src
0x56ADE8: push    41445443h; int
0x56ADED: call    TESForm_PutFormRecordChunkData
0x56ADF2: add     esp, 0Ch
0x56ADF5: pop     edi
0x56ADF6: pop     esi
0x56ADF7: pop     ebx
0x56ADF8: add     esp, 18h
0x56ADFB: retn
