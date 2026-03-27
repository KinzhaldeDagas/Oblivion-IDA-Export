0x65A560: sub     esp, 18h
0x65A563: push    esi
0x65A564: mov     esi, [esp+1Ch+arg_0]
0x65A568: mov     eax, [esi]
0x65A56A: mov     edx, [eax+190h]
0x65A570: push    edi
0x65A571: mov     edi, ecx
0x65A573: mov     ecx, esi
0x65A575: call    edx
0x65A577: test    al, al
0x65A579: jz      short loc_65A5D7
0x65A57B: mov     eax, [esi]
0x65A57D: mov     edx, [eax+380h]
0x65A583: mov     ecx, esi
0x65A585: call    edx
0x65A587: test    eax, eax
0x65A589: jz      short loc_65A5D7
0x65A58B: mov     eax, [esi]
0x65A58D: mov     edx, [eax+154h]
0x65A593: push    offset aBip01Head; "Bip01 Head"
0x65A598: mov     ecx, esi
0x65A59A: call    edx
0x65A59C: push    eax; a1
0x65A59D: call    NiObjectNET_LookupObjectByName
0x65A5A2: mov     esi, eax
0x65A5A4: mov     eax, [edi]
0x65A5A6: mov     edx, [eax+174h]
0x65A5AC: add     esp, 8
0x65A5AF: mov     ecx, edi
0x65A5B1: call    edx
0x65A5B3: fld     dword ptr [esi+88h]
0x65A5B9: fsub    dword ptr [eax]
0x65A5BB: fstp    [esp+20h+var_C]
0x65A5BF: fld     dword ptr [esi+8Ch]
0x65A5C5: fsub    dword ptr [eax+4]
0x65A5C8: fstp    [esp+20h+var_8]
0x65A5CC: fld     dword ptr [esi+90h]
0x65A5D2: fsub    dword ptr [eax+8]
0x65A5D5: jmp     short loc_65A60B
0x65A5D7: mov     eax, [edi]
0x65A5D9: mov     edx, [eax+174h]
0x65A5DF: push    ebx
0x65A5E0: mov     ecx, edi
0x65A5E2: call    edx
0x65A5E4: mov     ebx, eax
0x65A5E6: mov     eax, [esi]
0x65A5E8: mov     edx, [eax+174h]
0x65A5EE: mov     ecx, esi
0x65A5F0: call    edx
0x65A5F2: fld     dword ptr [eax]
0x65A5F4: fsub    dword ptr [ebx]
0x65A5F6: fstp    [esp+24h+var_C]
0x65A5FA: fld     dword ptr [eax+4]
0x65A5FD: fsub    dword ptr [ebx+4]
0x65A600: fstp    [esp+24h+var_8]
0x65A604: fld     dword ptr [eax+8]
0x65A607: fsub    dword ptr [ebx+8]
0x65A60A: pop     ebx
0x65A60B: mov     eax, [esp+20h+var_C]
0x65A60F: fstp    [esp+20h+var_4]
0x65A613: mov     edx, [esp+20h+var_4]
0x65A617: mov     ecx, [esp+20h+var_8]
0x65A61B: mov     [esp+20h+var_18], eax
0x65A61F: lea     eax, [esp+20h+var_18]
0x65A623: push    eax
0x65A624: mov     [esp+24h+var_10], edx
0x65A628: mov     [esp+24h+var_14], ecx
0x65A62C: call    sub_683CB0
0x65A631: fstp    [esp+24h+arg_0]
0x65A635: mov     edx, [edi]
0x65A637: fld     [esp+24h+arg_0]
0x65A63B: mov     eax, [edx+1E8h]
0x65A641: fstp    [esp+24h+var_24]
0x65A644: mov     ecx, edi
0x65A646: call    eax
0x65A648: pop     edi
0x65A649: pop     esi
0x65A64A: add     esp, 18h
0x65A64D: retn    4
