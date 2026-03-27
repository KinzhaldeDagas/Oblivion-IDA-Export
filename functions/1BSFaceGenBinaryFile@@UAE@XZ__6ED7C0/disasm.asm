0x6ED7C0: push    0FFFFFFFFh
0x6ED7C2: push    offset ??1BSFaceGenBinaryFile@@UAE@XZ_SEH
0x6ED7C7: mov     eax, large fs:0
0x6ED7CD: push    eax
0x6ED7CE: push    ecx
0x6ED7CF: push    esi
0x6ED7D0: mov     eax, ds:0B30AACh
0x6ED7D5: xor     eax, esp
0x6ED7D7: push    eax
0x6ED7D8: lea     eax, [esp+18h+var_C]
0x6ED7DC: mov     large fs:0, eax
0x6ED7E2: mov     esi, ecx
0x6ED7E4: mov     [esp+18h+var_10], esi
0x6ED7E8: mov     dword ptr [esi], offset ??_7BSFaceGenBinaryFile@@6B@; const BSFaceGenBinaryFile::`vftable'
0x6ED7EE: mov     ecx, [esi+40h]
0x6ED7F1: test    ecx, ecx
0x6ED7F3: mov     [esp+18h+var_4], 0
0x6ED7FB: jz      short loc_6ED805
0x6ED7FD: mov     eax, [ecx]
0x6ED7FF: mov     edx, [eax]
0x6ED801: push    1
0x6ED803: call    edx
0x6ED805: mov     ecx, esi; this
0x6ED807: mov     dword ptr [esi+40h], 0
0x6ED80E: mov     [esp+18h+var_4], 0FFFFFFFFh
0x6ED816: call    ??1FutBinaryFileC@@UAE@XZ; FutBinaryFileC::~FutBinaryFileC(void)
0x6ED81B: mov     ecx, dword ptr [esp+18h+var_C]
0x6ED81F: mov     large fs:0, ecx
0x6ED826: pop     ecx
0x6ED827: pop     esi
0x6ED828: add     esp, 10h
0x6ED82B: retn
