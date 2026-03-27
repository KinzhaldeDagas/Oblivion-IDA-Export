0x504460: push    ecx
0x504461: mov     ecx, [esp+4+arg_10]
0x504465: mov     edx, [esp+4+arg_C]
0x504469: push    esi
0x50446A: mov     esi, [esp+8+a4]
0x50446E: push    edi
0x50446F: mov     edi, [esp+0Ch+l]
0x504473: lea     eax, [esp+0Ch+var_4]
0x504477: push    eax; UInt16
0x504478: mov     eax, [esp+10h+a3]
0x50447C: push    edi; l
0x50447D: push    ecx; a6
0x50447E: mov     ecx, [esp+18h+arg_4]
0x504482: push    edx; a5
0x504483: mov     edx, [esp+1Ch+a1]
0x504487: push    esi; a4
0x504488: push    eax; a3
0x504489: push    ecx; a2
0x50448A: push    edx; a1
0x50448B: mov     dword ptr [esp+2Ch+var_4], 0
0x504493: call    Script_ExtractArgs
0x504498: add     esp, 20h
0x50449B: test    al, al
0x50449D: jnz     short loc_5044A3
0x50449F: pop     edi
0x5044A0: pop     esi
0x5044A1: pop     ecx
0x5044A2: retn
0x5044A3: test    esi, esi
0x5044A5: fldz
0x5044A7: push    ebx
0x5044A8: mov     ebx, [esp+10h+arg_18]
0x5044AC: fstp    qword ptr [ebx]
0x5044AE: jz      short loc_5044CD
0x5044B0: test    edi, edi
0x5044B2: jz      short loc_5044CD
0x5044B4: mov     eax, dword ptr [esp+10h+var_4]
0x5044B8: push    400h
0x5044BD: push    eax
0x5044BE: mov     ecx, edi
0x5044C0: call    sub_4FB5F0
0x5044C5: test    al, al
0x5044C7: jz      short loc_5044CD
0x5044C9: fld1
0x5044CB: fstp    qword ptr [ebx]
0x5044CD: pop     ebx
0x5044CE: pop     edi
0x5044CF: mov     al, 1
0x5044D1: pop     esi
0x5044D2: pop     ecx
0x5044D3: retn
