0x43AD10: push    ecx
0x43AD11: push    esi
0x43AD12: push    edi
0x43AD13: mov     esi, ecx
0x43AD15: call    sub_439400
0x43AD1A: mov     eax, [esi+28h]
0x43AD1D: test    eax, eax
0x43AD1F: jz      short loc_43AD4E
0x43AD21: mov     ecx, [esi+38h]
0x43AD24: push    ecx
0x43AD25: push    eax
0x43AD26: mov     ecx, esi
0x43AD28: call    sub_435060
0x43AD2D: mov     edi, ioManager
0x43AD33: push    ecx
0x43AD34: mov     eax, esp
0x43AD36: mov     [eax], esi
0x43AD38: mov     [esp+10h+var_4], esp
0x43AD3C: add     esi, 8
0x43AD3F: push    esi; lpAddend
0x43AD40: call    ds:InterlockedIncrement
0x43AD46: mov     ecx, [edi+34h]
0x43AD49: call    sub_43A5F0
0x43AD4E: pop     edi
0x43AD4F: pop     esi
0x43AD50: pop     ecx
0x43AD51: retn
