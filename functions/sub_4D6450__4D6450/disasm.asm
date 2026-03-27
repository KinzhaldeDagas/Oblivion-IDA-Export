0x4D6450: push    ecx
0x4D6451: push    esi
0x4D6452: mov     esi, ecx
0x4D6454: movsx   eax, byte ptr [esi+26h]
0x4D6458: cmp     eax, 6
0x4D645B: jz      short loc_4D6466
0x4D645D: cmp     eax, 5
0x4D6460: jnz     loc_4D6550
0x4D6466: mov     byte ptr [esi+26h], 4
0x4D646A: mov     ecx, ds:0B33A1Ch
0x4D6470: push    esi
0x4D6471: call    sub_43DE30
0x4D6476: mov     eax, ds:0B333A0h
0x4D647B: push    0
0x4D647D: mov     ecx, esi
0x4D647F: mov     byte ptr [eax+69h], 1
0x4D6483: call    sub_4CB670
0x4D6488: test    byte ptr [esi+24h], 1
0x4D648C: mov     ecx, ds:0B333A0h; this
0x4D6492: push    esi; a2
0x4D6493: jz      short loc_4D649C
0x4D6495: call    sub_43FD70
0x4D649A: jmp     short loc_4D64A1
0x4D649C: call    sub_43FF80
0x4D64A1: push    edi
0x4D64A2: mov     ecx, esi
0x4D64A4: call    sub_4D4DC0
0x4D64A9: mov     ecx, esi
0x4D64AB: call    sub_4D58B0
0x4D64B0: mov     edi, eax
0x4D64B2: call    sub_4E4980
0x4D64B7: test    al, al
0x4D64B9: jz      short loc_4D64C7
0x4D64BB: mov     ecx, [esi+44h]
0x4D64BE: test    ecx, ecx
0x4D64C0: jz      short loc_4D64C7
0x4D64C2: call    sub_4E54D0
0x4D64C7: mov     ecx, edi
0x4D64C9: call    sub_708B80
0x4D64CE: mov     ecx, ds:0B333A0h
0x4D64D4: mov     ecx, [ecx+0Ch]
0x4D64D7: mov     edx, [ecx]
0x4D64D9: mov     edx, [edx+88h]
0x4D64DF: push    edi
0x4D64E0: lea     eax, [esp+10h+var_4]
0x4D64E4: push    eax
0x4D64E5: call    edx
0x4D64E7: mov     edi, dword ptr [esp+0Ch+var_4]
0x4D64EB: test    edi, edi
0x4D64ED: jz      short loc_4D650B
0x4D64EF: lea     eax, [edi+4]
0x4D64F2: push    eax; lpAddend
0x4D64F3: call    dword ptr ds:0A2807Ch
0x4D64F9: test    eax, eax
0x4D64FB: jnz     short loc_4D650B
0x4D64FD: test    edi, edi
0x4D64FF: jz      short loc_4D650B
0x4D6501: mov     edx, [edi]
0x4D6503: mov     eax, [edx]
0x4D6505: push    1
0x4D6507: mov     ecx, edi
0x4D6509: call    eax
0x4D650B: push    esi; a2
0x4D650C: mov     ecx, offset stru_B35C80; this
0x4D6511: mov     byte ptr [esi+26h], 3
0x4D6515: call    sub_496EA0
0x4D651A: push    1
0x4D651C: lea     ecx, [esi+48h]
0x4D651F: push    ecx
0x4D6520: mov     ecx, offset ActorProcessManager_ptr
0x4D6525: call    sub_6786A0
0x4D652A: push    esi; a2
0x4D652B: mov     ecx, offset stru_B35C80; this
0x4D6530: call    sub_496F50
0x4D6535: mov     ecx, esi
0x4D6537: call    sub_4CAA30
0x4D653C: push    0
0x4D653E: mov     ecx, esi
0x4D6540: call    sub_4CB590
0x4D6545: mov     edx, ds:0B333A0h
0x4D654B: mov     byte ptr [edx+69h], 1
0x4D654F: pop     edi
0x4D6550: pop     esi
0x4D6551: pop     ecx
0x4D6552: retn
