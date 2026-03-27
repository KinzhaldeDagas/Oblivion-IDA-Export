0x5A63F0: sub     esp, 10h
0x5A63F3: fldz
0x5A63F5: push    esi
0x5A63F6: mov     esi, [esp+14h+arg_0]
0x5A63FA: fst     [esp+14h+var_10]
0x5A63FE: fst     [esp+14h+var_C]
0x5A6402: mov     ecx, esi
0x5A6404: fst     [esp+14h+var_8]
0x5A6408: fstp    [esp+14h+var_4]
0x5A640C: call    ActiveEffect_Base_IsBoundObjWearable
0x5A6411: test    al, al
0x5A6413: jz      short loc_5A6430
0x5A6415: mov     edx, [esi+8]
0x5A6418: lea     eax, [esp+14h+var_8]
0x5A641C: push    eax
0x5A641D: lea     ecx, [esp+18h+var_10]
0x5A6421: push    ecx
0x5A6422: mov     ecx, ds:0B333C4h
0x5A6428: push    edx
0x5A6429: call    sub_662AA0
0x5A642E: jmp     short loc_5A643A
0x5A6430: fld     dword ptr [esi+1Ch]
0x5A6433: fsub    dword ptr [esi+4]
0x5A6436: fstp    [esp+14h+var_10]
0x5A643A: mov     esi, [esp+14h+arg_4]
0x5A643E: mov     ecx, esi
0x5A6440: call    ActiveEffect_Base_IsBoundObjWearable
0x5A6445: test    al, al
0x5A6447: jz      short loc_5A6464
0x5A6449: mov     edx, [esi+8]
0x5A644C: lea     eax, [esp+14h+var_4]
0x5A6450: push    eax
0x5A6451: lea     ecx, [esp+18h+var_C]
0x5A6455: push    ecx
0x5A6456: mov     ecx, ds:0B333C4h
0x5A645C: push    edx
0x5A645D: call    sub_662AA0
0x5A6462: jmp     short loc_5A646E
0x5A6464: fld     dword ptr [esi+1Ch]
0x5A6467: fsub    dword ptr [esi+4]
0x5A646A: fstp    [esp+14h+var_C]
0x5A646E: fld     [esp+14h+var_10]
0x5A6472: pop     esi
0x5A6473: fld     [esp+10h+var_C]
0x5A6477: fcom    st(1)
0x5A6479: fnstsw  ax
0x5A647B: test    ah, 5
0x5A647E: jp      short loc_5A648B
0x5A6480: fstp    st(1)
0x5A6482: or      eax, 0FFFFFFFFh
0x5A6485: fstp    st
0x5A6487: add     esp, 10h
0x5A648A: retn
0x5A648B: fucompp
0x5A648D: fnstsw  ax
0x5A648F: test    ah, 44h
0x5A6492: jp      short loc_5A649A
0x5A6494: xor     eax, eax
0x5A6496: add     esp, 10h
0x5A6499: retn
0x5A649A: mov     eax, 1
0x5A649F: add     esp, 10h
0x5A64A2: retn
