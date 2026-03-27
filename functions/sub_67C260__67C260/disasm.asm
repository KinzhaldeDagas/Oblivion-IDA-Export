0x67C260: push    0FFFFFFFFh
0x67C262: push    offset SEH_6068D0
0x67C267: mov     eax, large fs:0
0x67C26D: push    eax
0x67C26E: push    ecx
0x67C26F: push    esi
0x67C270: mov     eax, ds:0B30AACh
0x67C275: xor     eax, esp
0x67C277: push    eax
0x67C278: lea     eax, [esp+18h+var_C]
0x67C27C: mov     large fs:0, eax
0x67C282: mov     esi, ecx
0x67C284: mov     [esp+18h+var_10], esi
0x67C288: call    ??0TESPackage@@QAE@XZ; TESPackage::TESPackage(void)
0x67C28D: push    13h
0x67C28F: mov     ecx, esi
0x67C291: mov     [esp+1Ch+var_4], 0
0x67C299: mov     dword ptr [esi], offset ??_7SpectatorPackage@@6B@; const SpectatorPackage::`vftable'
0x67C29F: call    TESPackage_SetType?
0x67C2A4: fldz
0x67C2A6: mov     eax, [esp+18h+arg_0]
0x67C2AA: mov     [esi+3Ch], eax
0x67C2AD: mov     ecx, ds:0B3F9A8h
0x67C2B3: mov     [esi+44h], ecx
0x67C2B6: mov     edx, ds:0B3F9ACh
0x67C2BC: mov     [esi+48h], edx
0x67C2BF: mov     eax, ds:0B3F9B0h
0x67C2C4: fstp    dword ptr [esi+50h]
0x67C2C7: mov     [esi+4Ch], eax
0x67C2CA: mov     eax, esi
0x67C2CC: mov     ecx, [esp+18h+var_C]
0x67C2D0: mov     large fs:0, ecx
0x67C2D7: pop     ecx
0x67C2D8: pop     esi
0x67C2D9: add     esp, 10h
0x67C2DC: retn    4
