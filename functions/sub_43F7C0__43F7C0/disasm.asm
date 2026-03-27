0x43F7C0: mov     eax, ds:0B333A0h
0x43F7C5: sub     esp, 10h
0x43F7C8: cmp     dword ptr [eax+34h], 0
0x43F7CC: push    edi
0x43F7CD: mov     edi, ecx
0x43F7CF: jz      short loc_43F7DA
0x43F7D1: xor     eax, eax
0x43F7D3: pop     edi
0x43F7D4: add     esp, 10h
0x43F7D7: retn    10h
0x43F7DA: fld     [esp+14h+arg_C]
0x43F7DE: push    ebx
0x43F7DF: push    esi
0x43F7E0: push    ecx
0x43F7E1: lea     ecx, [esp+20h+var_10]
0x43F7E5: fstp    [esp+20h+var_20]; float
0x43F7E8: push    ecx; int
0x43F7E9: mov     ecx, edi
0x43F7EB: xor     ebx, ebx
0x43F7ED: call    sub_43F720
0x43F7F2: mov     esi, [esp+1Ch+arg_8]
0x43F7F6: mov     edx, [esp+1Ch+arg_4]
0x43F7FA: mov     eax, [esp+1Ch+arg_0]
0x43F7FE: push    esi
0x43F7FF: push    edx
0x43F800: push    eax
0x43F801: lea     ecx, [esp+28h+var_10]
0x43F805: push    ecx
0x43F806: call    sub_47E320
0x43F80B: add     esp, 10h
0x43F80E: test    al, al
0x43F810: jz      short loc_43F833
0x43F812: mov     edi, [edi+74h]
0x43F815: fld     dword ptr [esi+4]
0x43F818: mov     ecx, ds:0B33A98h
0x43F81E: push    ebx; int
0x43F81F: push    edi; int
0x43F820: sub     esp, 8
0x43F823: fstp    [esp+2Ch+var_28]; float
0x43F827: fld     dword ptr [esi]
0x43F829: fstp    [esp+2Ch+var_2C]; float
0x43F82C: call    sub_44A270
0x43F831: mov     ebx, eax
0x43F833: pop     esi
0x43F834: mov     eax, ebx
0x43F836: pop     ebx
0x43F837: pop     edi
0x43F838: add     esp, 10h
0x43F83B: retn    10h
