0x503F90: mov     ecx, [esp+l]
0x503F94: fldz
0x503F96: mov     edx, [esp+arg_10]
0x503F9A: push    esi
0x503F9B: mov     esi, [esp+4+a4]
0x503F9F: push    edi
0x503FA0: mov     edi, dword ptr [esp+8+arg_18]
0x503FA4: lea     eax, [esp+8+arg_18]
0x503FA8: fstp    qword ptr [edi]
0x503FAA: push    eax; UInt16
0x503FAB: mov     eax, [esp+0Ch+arg_C]
0x503FAF: push    ecx; l
0x503FB0: mov     ecx, [esp+10h+a3]
0x503FB4: push    edx; a6
0x503FB5: mov     edx, [esp+14h+arg_4]
0x503FB9: push    eax; a5
0x503FBA: mov     eax, [esp+18h+a1]
0x503FBE: push    esi; a4
0x503FBF: push    ecx; a3
0x503FC0: push    edx; a2
0x503FC1: push    eax; a1
0x503FC2: mov     dword ptr [esp+28h+arg_18], 0
0x503FCA: call    Script_ExtractArgs
0x503FCF: add     esp, 20h
0x503FD2: test    al, al
0x503FD4: jnz     short loc_503FD9
0x503FD6: pop     edi
0x503FD7: pop     esi
0x503FD8: retn
0x503FD9: test    esi, esi
0x503FDB: jz      short loc_504000
0x503FDD: push    2
0x503FDF: mov     ecx, esi
0x503FE1: call    sub_4D8260
0x503FE6: test    al, al
0x503FE8: jz      short loc_503FEE
0x503FEA: fld1
0x503FEC: fstp    qword ptr [edi]
0x503FEE: push    1
0x503FF0: mov     ecx, esi
0x503FF2: call    sub_4D82E0
0x503FF7: push    2
0x503FF9: mov     ecx, esi
0x503FFB: call    sub_4D82E0
0x504000: pop     edi
0x504001: mov     al, 1
0x504003: pop     esi
0x504004: retn
