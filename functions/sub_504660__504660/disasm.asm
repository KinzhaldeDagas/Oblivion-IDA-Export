0x504660: push    ecx
0x504661: mov     ecx, [esp+4+arg_10]
0x504665: mov     edx, [esp+4+arg_C]
0x504669: push    esi
0x50466A: mov     esi, [esp+8+a4]
0x50466E: push    edi
0x50466F: mov     edi, [esp+0Ch+l]
0x504673: lea     eax, [esp+0Ch+var_4]
0x504677: push    eax; UInt16
0x504678: mov     eax, [esp+10h+a3]
0x50467C: push    edi; l
0x50467D: push    ecx; a6
0x50467E: mov     ecx, [esp+18h+arg_4]
0x504682: push    edx; a5
0x504683: mov     edx, [esp+1Ch+a1]
0x504687: push    esi; a4
0x504688: push    eax; a3
0x504689: push    ecx; a2
0x50468A: push    edx; a1
0x50468B: mov     dword ptr [esp+2Ch+var_4], 0
0x504693: call    Script_ExtractArgs
0x504698: add     esp, 20h
0x50469B: test    al, al
0x50469D: jnz     short loc_5046A3
0x50469F: pop     edi
0x5046A0: pop     esi
0x5046A1: pop     ecx
0x5046A2: retn
0x5046A3: test    esi, esi
0x5046A5: fldz
0x5046A7: push    ebx
0x5046A8: mov     ebx, [esp+10h+arg_18]
0x5046AC: fstp    qword ptr [ebx]
0x5046AE: jz      short loc_5046CD
0x5046B0: test    edi, edi
0x5046B2: jz      short loc_5046CD
0x5046B4: mov     eax, dword ptr [esp+10h+var_4]
0x5046B8: push    10000000h
0x5046BD: push    eax
0x5046BE: mov     ecx, edi
0x5046C0: call    sub_4FB5F0
0x5046C5: test    al, al
0x5046C7: jz      short loc_5046CD
0x5046C9: fld1
0x5046CB: fstp    qword ptr [ebx]
0x5046CD: pop     ebx
0x5046CE: pop     edi
0x5046CF: mov     al, 1
0x5046D1: pop     esi
0x5046D2: pop     ecx
0x5046D3: retn
