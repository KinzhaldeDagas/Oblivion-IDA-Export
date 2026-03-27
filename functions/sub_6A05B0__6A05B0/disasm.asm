0x6A05B0: sub     esp, 8
0x6A05B3: push    esi
0x6A05B4: mov     esi, ecx
0x6A05B6: mov     eax, [esi+1Ch]
0x6A05B9: mov     ecx, [eax+0Ch]
0x6A05BC: push    4
0x6A05BE: lea     edx, [esp+10h+var_8]
0x6A05C2: mov     [esp+10h+var_8], ecx
0x6A05C6: mov     ecx, ds:0B33B00h
0x6A05CC: push    edx
0x6A05CD: call    SaveLoad_SaveFormID
0x6A05D2: mov     eax, [esi+34h]
0x6A05D5: mov     ecx, [eax+0Ch]
0x6A05D8: push    4
0x6A05DA: lea     edx, [esp+10h+var_4]
0x6A05DE: mov     [esp+10h+var_4], ecx
0x6A05E2: mov     ecx, ds:0B33B00h
0x6A05E8: push    edx
0x6A05E9: call    SaveLoad_SaveFormID
0x6A05EE: mov     ecx, [esi+1Ch]
0x6A05F1: mov     eax, [esi]
0x6A05F3: mov     edx, [eax+78h]
0x6A05F6: push    ecx
0x6A05F7: push    0
0x6A05F9: mov     ecx, esi
0x6A05FB: call    edx
0x6A05FD: pop     esi
0x6A05FE: add     esp, 8
0x6A0601: retn
