0x504760: push    ecx
0x504761: mov     ecx, [esp+4+arg_10]
0x504765: mov     edx, [esp+4+arg_C]
0x504769: push    esi
0x50476A: mov     esi, [esp+8+a4]
0x50476E: push    edi
0x50476F: mov     edi, [esp+0Ch+l]
0x504773: lea     eax, [esp+0Ch+var_4]
0x504777: push    eax; UInt16
0x504778: mov     eax, [esp+10h+a3]
0x50477C: push    edi; l
0x50477D: push    ecx; a6
0x50477E: mov     ecx, [esp+18h+arg_4]
0x504782: push    edx; a5
0x504783: mov     edx, [esp+1Ch+a1]
0x504787: push    esi; a4
0x504788: push    eax; a3
0x504789: push    ecx; a2
0x50478A: push    edx; a1
0x50478B: mov     dword ptr [esp+2Ch+var_4], 0
0x504793: call    Script_ExtractArgs
0x504798: add     esp, 20h
0x50479B: test    al, al
0x50479D: jnz     short loc_5047A3
0x50479F: pop     edi
0x5047A0: pop     esi
0x5047A1: pop     ecx
0x5047A2: retn
0x5047A3: test    esi, esi
0x5047A5: fldz
0x5047A7: push    ebx
0x5047A8: mov     ebx, [esp+10h+arg_18]
0x5047AC: fstp    qword ptr [ebx]
0x5047AE: jz      short loc_5047CD
0x5047B0: test    edi, edi
0x5047B2: jz      short loc_5047CD
0x5047B4: mov     eax, dword ptr [esp+10h+var_4]
0x5047B8: push    40000000h
0x5047BD: push    eax
0x5047BE: mov     ecx, edi
0x5047C0: call    sub_4FB5F0
0x5047C5: test    al, al
0x5047C7: jz      short loc_5047CD
0x5047C9: fld1
0x5047CB: fstp    qword ptr [ebx]
0x5047CD: pop     ebx
0x5047CE: pop     edi
0x5047CF: mov     al, 1
0x5047D1: pop     esi
0x5047D2: pop     ecx
0x5047D3: retn
