0x4A2970: push    0FFFFFFFFh
0x4A2972: push    offset SEH_7F1810
0x4A2977: mov     eax, large fs:0
0x4A297D: push    eax
0x4A297E: push    ecx
0x4A297F: push    esi
0x4A2980: mov     eax, ds:0B30AACh
0x4A2985: xor     eax, esp
0x4A2987: push    eax
0x4A2988: lea     eax, [esp+18h+var_C]
0x4A298C: mov     large fs:0, eax
0x4A2992: mov     esi, ecx
0x4A2994: mov     [esp+18h+var_10], esi
0x4A2998: mov     dword ptr [esi], offset ??_7BSTexturePalette@@6B@; const BSTexturePalette::`vftable'
0x4A299E: mov     [esp+18h+var_4], 0
0x4A29A6: call    sub_4A2850
0x4A29AB: mov     ecx, [esi+0Ch]
0x4A29AE: call    NiTMap_Clear
0x4A29B3: mov     ecx, [esi+8]
0x4A29B6: call    NiTMap_Clear
0x4A29BB: mov     ecx, [esi+0Ch]
0x4A29BE: test    ecx, ecx
0x4A29C0: jz      short loc_4A29CA
0x4A29C2: mov     eax, [ecx]
0x4A29C4: mov     edx, [eax]
0x4A29C6: push    1
0x4A29C8: call    edx
0x4A29CA: mov     ecx, [esi+8]
0x4A29CD: test    ecx, ecx
0x4A29CF: jz      short loc_4A29D9
0x4A29D1: mov     eax, [ecx]
0x4A29D3: mov     edx, [eax]
0x4A29D5: push    1
0x4A29D7: call    edx
0x4A29D9: push    offset NiRefObject_objcount; lpAddend
0x4A29DE: mov     dword ptr [esi+0Ch], 0
0x4A29E5: mov     dword ptr [esi], offset ??_7NiRefObject@@6B@; const NiRefObject::`vftable'
0x4A29EB: call    dword ptr ds:0A2807Ch
0x4A29F1: mov     ecx, dword ptr [esp+18h+var_C]
0x4A29F5: mov     large fs:0, ecx
0x4A29FC: pop     ecx
0x4A29FD: pop     esi
0x4A29FE: add     esp, 10h
0x4A2A01: retn
