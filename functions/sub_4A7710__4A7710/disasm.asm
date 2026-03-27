0x4A7710: sub     esp, 8
0x4A7713: push    esi
0x4A7714: push    edi
0x4A7715: mov     edi, [esp+10h+arg_0]
0x4A7719: test    edi, edi
0x4A771B: mov     esi, ecx
0x4A771D: jz      short loc_4A7781
0x4A771F: mov     ecx, [esi]
0x4A7721: test    ecx, ecx
0x4A7723: jz      short loc_4A7742
0x4A7725: fld     [esp+10h+arg_4]
0x4A7729: push    edi
0x4A772A: fstp    [esp+14h+var_8]
0x4A772E: call    sub_4A6A60
0x4A7733: fld     [esp+10h+var_8]
0x4A7737: fmul    st, st
0x4A7739: fcompp
0x4A773B: fnstsw  ax
0x4A773D: test    ah, 41h
0x4A7740: jz      short loc_4A7781
0x4A7742: push    edi
0x4A7743: mov     ecx, esi
0x4A7745: call    BSSimpleList_PushFront
0x4A774A: push    0
0x4A774C: mov     ecx, esi
0x4A774E: call    sub_4A7270
0x4A7753: test    al, al
0x4A7755: jz      short loc_4A778B
0x4A7757: mov     eax, [esi+4]
0x4A775A: test    eax, eax
0x4A775C: jz      short loc_4A777B
0x4A775E: mov     ecx, [eax+4]
0x4A7761: mov     [esi+4], ecx
0x4A7764: mov     edx, [eax]
0x4A7766: push    eax
0x4A7767: mov     [esi], edx
0x4A7769: call    FormHeapFree
0x4A776E: add     esp, 4
0x4A7771: pop     edi
0x4A7772: xor     al, al
0x4A7774: pop     esi
0x4A7775: add     esp, 8
0x4A7778: retn    8
0x4A777B: mov     dword ptr [esi], 0
0x4A7781: pop     edi
0x4A7782: xor     al, al
0x4A7784: pop     esi
0x4A7785: add     esp, 8
0x4A7788: retn    8
0x4A778B: add     dword ptr [esi+24h], 1
0x4A778F: fld     dword ptr [edi]
0x4A7791: fld     dword ptr [esi+10h]
0x4A7794: fcompp
0x4A7796: fnstsw  ax
0x4A7798: test    ah, 41h
0x4A779B: jnz     short loc_4A77A2
0x4A779D: fld     dword ptr [edi]
0x4A779F: fstp    dword ptr [esi+10h]
0x4A77A2: fld     dword ptr [edi+4]
0x4A77A5: fld     dword ptr [esi+14h]
0x4A77A8: fcompp
0x4A77AA: fnstsw  ax
0x4A77AC: test    ah, 41h
0x4A77AF: jnz     short loc_4A77B7
0x4A77B1: fld     dword ptr [edi+4]
0x4A77B4: fstp    dword ptr [esi+14h]
0x4A77B7: fld     dword ptr [edi]
0x4A77B9: fld     dword ptr [esi+18h]
0x4A77BC: fcompp
0x4A77BE: fnstsw  ax
0x4A77C0: test    ah, 5
0x4A77C3: jp      short loc_4A77CA
0x4A77C5: fld     dword ptr [edi]
0x4A77C7: fstp    dword ptr [esi+18h]
0x4A77CA: fld     dword ptr [edi+4]
0x4A77CD: fld     dword ptr [esi+1Ch]
0x4A77D0: fcompp
0x4A77D2: fnstsw  ax
0x4A77D4: test    ah, 5
0x4A77D7: jp      short loc_4A77DF
0x4A77D9: fld     dword ptr [edi+4]
0x4A77DC: fstp    dword ptr [esi+1Ch]
0x4A77DF: pop     edi
0x4A77E0: mov     al, 1
0x4A77E2: pop     esi
0x4A77E3: add     esp, 8
0x4A77E6: retn    8
