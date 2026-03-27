0x438930: push    0FFFFFFFFh
0x438932: push    offset SEH_68C280
0x438937: mov     eax, large fs:0
0x43893D: push    eax
0x43893E: push    ebp
0x43893F: push    esi
0x438940: push    edi
0x438941: mov     eax, ___security_cookie
0x438946: xor     eax, esp
0x438948: push    eax
0x438949: lea     eax, [esp+1Ch+var_C]
0x43894D: mov     large fs:0, eax
0x438953: mov     esi, ecx
0x438955: mov     ebp, [esp+1Ch+arg_4]
0x438959: xor     ecx, ecx
0x43895B: mov     eax, ebp
0x43895D: mov     edx, 4
0x438962: mul     edx
0x438964: seto    cl
0x438967: mov     dword ptr [esi], offset ??_7?$LockFreeMap@PAVTESObjectREFR@@V?$NiPointer@VQueuedReference@@@@@@6B@; const LockFreeMap<TESObjectREFR *,NiPointer<QueuedReference>>::`vftable'
0x43896D: mov     dword ptr [esi+18h], 0
0x438974: mov     [esi+8], ebp
0x438977: neg     ecx
0x438979: or      ecx, eax
0x43897B: push    ecx; Size
0x43897C: call    FormHeapAlloc
0x438981: mov     edi, eax
0x438983: add     esp, 4
0x438986: mov     [esp+1Ch+arg_4], edi
0x43898A: test    edi, edi
0x43898C: mov     [esp+1Ch+var_4], 0
0x438994: jz      short loc_4389A6
0x438996: push    offset unknown_libname_1_0; Microsoft VisualC 2-14/net runtime
0x43899B: push    ebp
0x43899C: push    4
0x43899E: push    edi
0x43899F: call    sub_401080
0x4389A4: jmp     short loc_4389A8
0x4389A6: xor     edi, edi
0x4389A8: mov     [esi+0Ch], edi
0x4389AB: mov     edi, [esp+1Ch+a2]
0x4389AF: xor     ecx, ecx
0x4389B1: lea     eax, [edi+edi*2]
0x4389B4: mov     edx, 4
0x4389B9: mul     edx
0x4389BB: seto    cl
0x4389BE: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x4389C6: neg     ecx
0x4389C8: or      ecx, eax
0x4389CA: push    ecx; Size
0x4389CB: call    FormHeapAlloc
0x4389D0: mov     [esi+4], eax
0x4389D3: mov     eax, [esp+20h+arg_8]
0x4389D7: push    10h; Size
0x4389D9: mov     [esi+10h], eax
0x4389DC: call    FormHeapAlloc
0x4389E1: add     esp, 8
0x4389E4: mov     [esp+1Ch+arg_4], eax
0x4389E8: test    eax, eax
0x4389EA: mov     [esp+1Ch+var_4], 1
0x4389F2: jz      short loc_4389FE
0x4389F4: push    edi; a2
0x4389F5: mov     ecx, eax; this
0x4389F7: call    ThreadSpecificInterfaceManager__ThreadSpecificInterfaceManager
0x4389FC: jmp     short loc_438A00
0x4389FE: xor     eax, eax
0x438A00: mov     [esi+14h], eax
0x438A03: mov     eax, esi
0x438A05: mov     ecx, [esp+1Ch+var_C]
0x438A09: mov     large fs:0, ecx
0x438A10: pop     ecx
0x438A11: pop     edi
0x438A12: pop     esi
0x438A13: pop     ebp
0x438A14: add     esp, 0Ch
0x438A17: retn    0Ch
