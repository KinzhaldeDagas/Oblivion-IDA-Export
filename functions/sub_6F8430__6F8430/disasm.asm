0x6F8430: push    0FFFFFFFFh
0x6F8432: push    offset SEH_6F8D30
0x6F8437: mov     eax, large fs:0
0x6F843D: push    eax
0x6F843E: sub     esp, 20h
0x6F8441: push    ebx
0x6F8442: push    esi
0x6F8443: mov     eax, ds:0B30AACh
0x6F8448: xor     eax, esp
0x6F844A: push    eax
0x6F844B: lea     eax, [esp+38h+var_C]
0x6F844F: mov     large fs:0, eax
0x6F8455: mov     eax, [esp+38h+arg_4]
0x6F8459: xor     ebx, ebx
0x6F845B: push    0FFFFFFFFh
0x6F845D: push    ebx
0x6F845E: push    eax
0x6F845F: lea     ecx, [esp+44h+var_28]
0x6F8463: mov     [esp+44h+var_2C], ebx
0x6F8467: mov     [esp+44h+var_10], 0Fh
0x6F846F: mov     [esp+44h+var_14], ebx
0x6F8473: mov     byte ptr [esp+44h+var_24], bl
0x6F8477: call    sub_414420
0x6F847C: mov     ecx, [esp+38h+arg_8]
0x6F8480: push    0FFFFFFFFh; MaxCount
0x6F8482: push    ebx; int
0x6F8483: push    ecx; int
0x6F8484: lea     ecx, [esp+44h+var_28]
0x6F8488: mov     [esp+44h+var_4], ebx
0x6F848C: call    sub_6F6AF0
0x6F8491: mov     esi, [esp+38h+arg_0]
0x6F8495: push    0FFFFFFFFh
0x6F8497: push    ebx
0x6F8498: mov     dword ptr [esi+18h], 0Fh
0x6F849F: mov     [esi+14h], ebx
0x6F84A2: push    eax
0x6F84A3: mov     ecx, esi
0x6F84A5: mov     [esi+4], bl
0x6F84A8: call    sub_414420
0x6F84AD: cmp     [esp+38h+var_10], 10h
0x6F84B2: jb      short loc_6F84C1
0x6F84B4: mov     edx, [esp+38h+var_24]
0x6F84B8: push    edx
0x6F84B9: call    FormHeapFree
0x6F84BE: add     esp, 4
0x6F84C1: mov     eax, esi
0x6F84C3: mov     ecx, [esp+38h+var_C]
0x6F84C7: mov     large fs:0, ecx
0x6F84CE: pop     ecx
0x6F84CF: pop     esi
0x6F84D0: pop     ebx
0x6F84D1: add     esp, 2Ch
0x6F84D4: retn
