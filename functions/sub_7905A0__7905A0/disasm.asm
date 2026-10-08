0x7905A0: push    ecx; Oblivion 1.2.0.416: checked-template thunk to the shared 24-byte copy-backward adapter; used by both vector<stVec> and branch-flare insert-fill paths.
0x7905A1: mov     ecx, [esp+4+destinationEnd]
0x7905A5: mov     edx, [esp+4+destinationEnd]
0x7905A9: mov     byte ptr [esp+4+var_4], 0
0x7905AD: mov     eax, [esp+4+var_4]
0x7905B0: push    eax
0x7905B1: mov     eax, [esp+8+destinationEnd]
0x7905B5: push    ecx
0x7905B6: mov     ecx, [esp+0Ch+last]
0x7905BA: push    edx
0x7905BB: mov     edx, [esp+10h+first]
0x7905BF: push    eax; destinationEnd
0x7905C0: push    ecx; last
0x7905C1: push    edx; first
0x7905C2: call    OB_stVector24_CopyBackwardRangeAdapter_010201A0; Oblivion 1.2.0.416: shared 24-byte copy-backward adapter; invokes the six-dword primitive and returns destinationEnd minus the source record count.
0x7905C7: add     esp, 1Ch
0x7905CA: retn
