0x68A280: push    0FFFFFFFFh
0x68A282: push    offset SEH_8C8970
0x68A287: mov     eax, large fs:0
0x68A28D: push    eax
0x68A28E: push    ecx
0x68A28F: push    esi
0x68A290: push    edi
0x68A291: mov     eax, ds:0B30AACh
0x68A296: xor     eax, esp
0x68A298: push    eax
0x68A299: lea     eax, [esp+1Ch+var_C]
0x68A29D: mov     large fs:0, eax
0x68A2A3: mov     edi, ecx
0x68A2A5: push    8; Size
0x68A2A7: call    FormHeapAlloc
0x68A2AC: add     esp, 4
0x68A2AF: mov     [esp+1Ch+var_10], eax
0x68A2B3: xor     esi, esi
0x68A2B5: cmp     eax, esi
0x68A2B7: mov     [esp+1Ch+var_4], esi
0x68A2BB: jz      short loc_68A2C6
0x68A2BD: mov     ecx, eax
0x68A2BF: call    sub_68B0C0
0x68A2C4: mov     esi, eax
0x68A2C6: push    1
0x68A2C8: mov     ecx, esi
0x68A2CA: mov     [esp+20h+var_4], 0FFFFFFFFh
0x68A2D2: call    sub_68B1D0
0x68A2D7: mov     eax, [esp+1Ch+arg_0]
0x68A2DB: push    eax
0x68A2DC: mov     ecx, esi
0x68A2DE: call    sub_68B200
0x68A2E3: push    esi
0x68A2E4: lea     ecx, [edi+4]
0x68A2E7: call    BSSimpleList_PushBack
0x68A2EC: mov     ecx, [esp+1Ch+var_C]
0x68A2F0: mov     large fs:0, ecx
0x68A2F7: pop     ecx
0x68A2F8: pop     edi
0x68A2F9: pop     esi
0x68A2FA: add     esp, 10h
0x68A2FD: retn    4
