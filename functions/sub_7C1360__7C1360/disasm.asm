0x7C1360: push    ecx
0x7C1361: mov     eax, [ecx+40h]
0x7C1364: test    eax, eax
0x7C1366: mov     edx, ds:0B2C994h
0x7C136C: push    esi
0x7C136D: mov     esi, ds:0B3F928h
0x7C1373: push    edi
0x7C1374: movzx   edi, word ptr ds:0B2C67Ch
0x7C137B: jz      short loc_7C1387
0x7C137D: cmp     edi, [eax+8]
0x7C1380: ja      short loc_7C1387
0x7C1382: cmp     edi, [eax+0Ch]
0x7C1385: jbe     short loc_7C13DD
0x7C1387: cmp     dword ptr [ecx+44h], 0
0x7C138B: lea     eax, [ecx+44h]
0x7C138E: mov     [esp+0Ch+var_4], eax
0x7C1392: jnz     short loc_7C13DB
0x7C1394: push    ebx
0x7C1395: push    ebp
0x7C1396: push    edx; a1
0x7C1397: call    CreateSurfaceData
0x7C139C: mov     ebx, eax
0x7C139E: mov     eax, [esi]
0x7C13A0: mov     edx, [eax+98h]
0x7C13A6: add     esp, 4
0x7C13A9: push    ebx
0x7C13AA: mov     ecx, esi
0x7C13AC: call    edx
0x7C13AE: mov     ebp, eax
0x7C13B0: push    ebp
0x7C13B1: push    esi
0x7C13B2: push    edi
0x7C13B3: push    edi
0x7C13B4: call    sub_70BC70
0x7C13B9: mov     ecx, [esp+24h+var_4]; this
0x7C13BD: add     esp, 10h
0x7C13C0: push    eax; a2
0x7C13C1: call    NiSmartPointer_Set??
0x7C13C6: push    ebp
0x7C13C7: call    FormHeapFree
0x7C13CC: push    ebx
0x7C13CD: call    FormHeapFree
0x7C13D2: mov     eax, [esp+1Ch+var_4]
0x7C13D6: add     esp, 8
0x7C13D9: pop     ebp
0x7C13DA: pop     ebx
0x7C13DB: mov     eax, [eax]
0x7C13DD: pop     edi
0x7C13DE: pop     esi
0x7C13DF: pop     ecx
0x7C13E0: retn
