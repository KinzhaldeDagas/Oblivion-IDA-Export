0x537480: push    0FFFFFFFFh
0x537482: push    offset ??1TESTrapListener@@UAE@XZ_SEH
0x537487: mov     eax, large fs:0
0x53748D: push    eax
0x53748E: push    ecx
0x53748F: push    esi
0x537490: mov     eax, ds:0B30AACh
0x537495: xor     eax, esp
0x537497: push    eax
0x537498: lea     eax, [esp+18h+var_C]
0x53749C: mov     large fs:0, eax
0x5374A2: mov     esi, ecx
0x5374A4: mov     [esp+18h+var_10], esi
0x5374A8: mov     dword ptr [esi], offset ??_7TESTrapListener@@6BTESTrapListener@@@; const TESTrapListener::`vftable'{for `TESTrapListener'}
0x5374AE: mov     dword ptr [esi+14h], offset ??_7TESTrapListener@@6BhkPhantomListener@@@; const TESTrapListener::`vftable'{for `hkPhantomListener'}
0x5374B5: mov     [esp+18h+var_4], 0
0x5374BD: call    sub_536E50
0x5374C2: mov     ecx, esi; this
0x5374C4: mov     [esp+18h+var_4], 0FFFFFFFFh
0x5374CC: mov     dword ptr [esi+14h], offset ??_7hkPhantomListener@@6B@; const hkPhantomListener::`vftable'
0x5374D3: call    ??1bhkWaterListener@@UAE@XZ; bhkWaterListener::~bhkWaterListener(void)
0x5374D8: mov     ecx, [esp+18h+var_C]
0x5374DC: mov     large fs:0, ecx
0x5374E3: pop     ecx
0x5374E4: pop     esi
0x5374E5: add     esp, 10h
0x5374E8: retn
