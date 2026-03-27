0x4A0200: push    0FFFFFFFFh
0x4A0202: push    offset SEH_4A0200
0x4A0207: mov     eax, large fs:0
0x4A020D: push    eax
0x4A020E: push    ecx
0x4A020F: push    esi
0x4A0210: mov     eax, ds:0B30AACh
0x4A0215: xor     eax, esp
0x4A0217: push    eax
0x4A0218: lea     eax, [esp+18h+var_C]
0x4A021C: mov     large fs:0, eax
0x4A0222: mov     esi, ecx
0x4A0224: mov     [esp+18h+var_10], esi
0x4A0228: call    sub_721350
0x4A022D: fld1
0x4A022F: fstp    dword ptr [esi+0Ch]
0x4A0232: push    offset off_A3FA90; Src
0x4A0237: mov     ecx, esi
0x4A0239: mov     [esp+1Ch+var_4], 0
0x4A0241: mov     dword ptr [esi], offset ??_7FadeNodeMaxAlphaExtraData@@6B@; const FadeNodeMaxAlphaExtraData::`vftable'
0x4A0247: call    sub_721440
0x4A024C: mov     eax, esi
0x4A024E: mov     ecx, [esp+18h+var_C]
0x4A0252: mov     large fs:0, ecx
0x4A0259: pop     ecx
0x4A025A: pop     esi
0x4A025B: add     esp, 10h
0x4A025E: retn
