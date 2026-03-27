0x6E4140: push    0FFFFFFFFh
0x6E4142: push    offset SEH_8C62B0
0x6E4147: mov     eax, large fs:0
0x6E414D: push    eax
0x6E414E: push    ecx
0x6E414F: push    esi
0x6E4150: mov     eax, ds:0B30AACh
0x6E4155: xor     eax, esp
0x6E4157: push    eax
0x6E4158: lea     eax, [esp+18h+var_C]
0x6E415C: mov     large fs:0, eax
0x6E4162: mov     esi, ecx
0x6E4164: push    24h ; '$'; Size
0x6E4166: call    FormHeapAlloc
0x6E416B: add     esp, 4
0x6E416E: mov     [esp+18h+var_10], eax
0x6E4172: test    eax, eax
0x6E4174: mov     [esp+18h+var_4], 0
0x6E417C: jz      short loc_6E41BA
0x6E417E: mov     edx, [esi+44h]
0x6E4181: mov     ecx, [edx+0Ch]
0x6E4184: add     edx, 0Ch
0x6E4187: sub     esp, 10h
0x6E418A: mov     esi, esp
0x6E418C: mov     [esi], ecx
0x6E418E: mov     ecx, [edx+4]
0x6E4191: mov     [esi+4], ecx
0x6E4194: mov     ecx, [edx+8]
0x6E4197: mov     edx, [edx+0Ch]
0x6E419A: mov     [esi+8], ecx
0x6E419D: mov     ecx, eax
0x6E419F: mov     [esi+0Ch], edx
0x6E41A2: call    sub_6E38D0
0x6E41A7: mov     ecx, [esp+18h+var_C]
0x6E41AB: mov     large fs:0, ecx
0x6E41B2: pop     ecx
0x6E41B3: pop     esi
0x6E41B4: add     esp, 10h
0x6E41B7: retn    4
0x6E41BA: xor     eax, eax
0x6E41BC: mov     ecx, [esp+18h+var_C]
0x6E41C0: mov     large fs:0, ecx
0x6E41C7: pop     ecx
0x6E41C8: pop     esi
0x6E41C9: add     esp, 10h
0x6E41CC: retn    4
