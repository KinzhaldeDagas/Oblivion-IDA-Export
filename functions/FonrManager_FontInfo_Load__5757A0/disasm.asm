0x5757A0: push    0FFFFFFFFh
0x5757A2: push    offset FonrManager_FontInfo_Load_SEH
0x5757A7: mov     eax, large fs:0
0x5757AD: push    eax
0x5757AE: push    ecx
0x5757AF: push    esi
0x5757B0: push    edi
0x5757B1: mov     eax, ds:0B30AACh
0x5757B6: xor     eax, esp
0x5757B8: push    eax
0x5757B9: lea     eax, [esp+1Ch+var_C]
0x5757BD: mov     large fs:0, eax
0x5757C3: mov     esi, ecx
0x5757C5: mov     [esp+1Ch+var_10], esi
0x5757C9: push    offset sub_7016A0; a5
0x5757CE: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x5757D3: push    8; size
0x5757D5: push    4; a2
0x5757D7: lea     eax, [esi+0Ch]
0x5757DA: push    eax; a1
0x5757DB: call    ArrayConstructor
0x5757E0: mov     edi, [esp+1Ch+arg_4]
0x5757E4: test    edi, edi
0x5757E6: mov     [esp+1Ch+var_4], 0
0x5757EE: mov     dword ptr [esi+4], 0
0x5757F5: mov     word ptr [esi], 0
0x5757FA: mov     dword ptr [esi+38h], 0
0x575801: jz      short loc_57584B
0x575803: mov     eax, edi
0x575805: lea     edx, [eax+1]
0x575808: mov     cl, [eax]
0x57580A: add     eax, 1
0x57580D: test    cl, cl
0x57580F: jnz     short loc_575808
0x575811: sub     eax, edx
0x575813: jz      short loc_575836
0x575815: add     eax, 1
0x575818: push    eax; Size
0x575819: call    FormHeapAlloc
0x57581E: add     esp, 4
0x575821: mov     [esi+4], eax
0x575824: mov     ecx, edi
0x575826: mov     edx, eax
0x575828: mov     al, [ecx]
0x57582A: mov     [edx], al
0x57582C: add     ecx, 1
0x57582F: add     edx, 1
0x575832: test    al, al
0x575834: jnz     short loc_575828
0x575836: cmp     [esp+1Ch+arg_8], 0
0x57583B: mov     ecx, [esp+1Ch+arg_0]
0x57583F: mov     [esi+8], ecx
0x575842: jz      short loc_57584B
0x575844: mov     ecx, esi
0x575846: call    sub_5744E0
0x57584B: mov     eax, esi
0x57584D: mov     ecx, [esp+1Ch+var_C]
0x575851: mov     large fs:0, ecx
0x575858: pop     ecx
0x575859: pop     edi
0x57585A: pop     esi
0x57585B: add     esp, 10h
0x57585E: retn    0Ch
