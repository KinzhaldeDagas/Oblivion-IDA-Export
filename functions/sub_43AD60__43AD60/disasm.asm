0x43AD60: push    ecx
0x43AD61: push    esi
0x43AD62: mov     esi, ecx
0x43AD64: mov     eax, [esi+24h]
0x43AD67: test    eax, eax
0x43AD69: push    edi
0x43AD6A: jz      short loc_43AD7E
0x43AD6C: mov     ecx, [esi+28h]
0x43AD6F: push    ecx
0x43AD70: mov     ecx, dword_B35300
0x43AD76: push    eax
0x43AD77: call    sub_4A1F90
0x43AD7C: jmp     short loc_43AD97
0x43AD7E: mov     eax, [esi+20h]
0x43AD81: test    eax, eax
0x43AD83: jz      short loc_43AD97
0x43AD85: mov     edi, [esi+28h]
0x43AD88: mov     ecx, dword_B35300
0x43AD8E: mov     edx, [ecx]
0x43AD90: push    edi
0x43AD91: push    eax
0x43AD92: mov     eax, [edx+8]
0x43AD95: call    eax
0x43AD97: mov     edx, [esi]
0x43AD99: mov     eax, [edx+28h]
0x43AD9C: mov     ecx, esi
0x43AD9E: call    eax
0x43ADA0: mov     edi, ioManager
0x43ADA6: push    ecx
0x43ADA7: mov     eax, esp
0x43ADA9: mov     [eax], esi
0x43ADAB: mov     [esp+10h+var_4], esp
0x43ADAF: add     esi, 8
0x43ADB2: push    esi; lpAddend
0x43ADB3: call    ds:InterlockedIncrement
0x43ADB9: mov     ecx, [edi+34h]
0x43ADBC: call    sub_43A5F0
0x43ADC1: pop     edi
0x43ADC2: pop     esi
0x43ADC3: pop     ecx
0x43ADC4: retn
