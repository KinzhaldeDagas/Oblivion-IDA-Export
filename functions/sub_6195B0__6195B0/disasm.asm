0x6195B0: sub     esp, 8
0x6195B3: fldz
0x6195B5: push    esi
0x6195B6: push    edi; a5
0x6195B7: fst     [esp+10h+var_4]
0x6195BB: mov     esi, ecx
0x6195BD: fstp    [esp+10h+var_8]
0x6195C1: lea     eax, [esp+10h+var_8]
0x6195C5: push    eax
0x6195C6: lea     ecx, [esp+14h+var_4]
0x6195CA: push    ecx
0x6195CB: mov     ecx, esi
0x6195CD: call    sub_6142D0
0x6195D2: fldz
0x6195D4: fcomp   dword ptr [esi+184h]
0x6195DA: fnstsw  ax
0x6195DC: test    ah, 41h
0x6195DF: jnz     short loc_6195FD
0x6195E1: mov     edi, [esi+3Ch]; a1
0x6195E4: push    0; a4
0x6195E6: mov     ecx, esi
0x6195E8: call    sub_6135F0
0x6195ED: push    eax; a3
0x6195EE: push    edi; a2
0x6195EF: call    TESObjectREFR_GetDistanceBetween?
0x6195F4: fstp    dword ptr [esi+184h]
0x6195FA: add     esp, 0Ch
0x6195FD: fld     dword ptr [esi+184h]
0x619603: fld     [esp+10h+var_8]
0x619607: fcompp
0x619609: fnstsw  ax
0x61960B: test    ah, 5
0x61960E: jp      short loc_619633
0x619610: push    ebx
0x619611: mov     ebx, [esi+3Ch]
0x619614: mov     edi, [ebx]
0x619616: mov     ecx, esi
0x619618: add     edi, 340h
0x61961E: call    sub_6135F0
0x619623: mov     edx, [edi]
0x619625: push    eax
0x619626: mov     ecx, ebx
0x619628: call    edx
0x61962A: pop     ebx
0x61962B: pop     edi
0x61962C: mov     al, 1
0x61962E: pop     esi
0x61962F: add     esp, 8
0x619632: retn
0x619633: pop     edi
0x619634: xor     al, al
0x619636: pop     esi
0x619637: add     esp, 8
0x61963A: retn
