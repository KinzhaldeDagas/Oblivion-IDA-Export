0x897490: mov     eax, [esp+arg_0]
0x897494: sub     esp, 18h
0x897497: push    ebx
0x897498: push    ebp
0x897499: push    esi
0x89749A: push    edi
0x89749B: mov     edi, [esp+28h+arg_4]
0x89749F: mov     ebp, edi
0x8974A1: xor     ebx, ebx
0x8974A3: lea     esi, [eax+8]
0x8974A6: sub     ebp, eax
0x8974A8: fld     dword ptr [esi-8]
0x8974AB: push    ecx
0x8974AC: fstp    [esp+2Ch+var_C]
0x8974B0: lea     eax, [esp+2Ch+var_18]
0x8974B4: fld     dword ptr [esi-4]
0x8974B7: lea     ecx, [esp+2Ch+var_C]
0x8974BB: fstp    [esp+2Ch+var_8]
0x8974BF: fld     dword ptr [esi]
0x8974C1: fstp    [esp+2Ch+var_4]
0x8974C5: fld     dword ptr [edi]
0x8974C7: fstp    [esp+2Ch+var_18]
0x8974CB: fld     dword ptr [edi+4]
0x8974CE: fstp    [esp+2Ch+var_14]
0x8974D2: fld     dword ptr [esi+ebp]
0x8974D5: fstp    [esp+2Ch+var_10]
0x8974D9: fld     [esp+2Ch+arg_8]
0x8974DD: fstp    [esp+2Ch+var_2C]; float
0x8974E0: push    eax; int
0x8974E1: push    ecx; int
0x8974E2: call    sub_8904E0
0x8974E7: add     esp, 0Ch
0x8974EA: test    al, al
0x8974EC: jz      short loc_897506
0x8974EE: add     ebx, 1
0x8974F1: add     esi, 0Ch
0x8974F4: add     edi, 0Ch
0x8974F7: cmp     ebx, 3
0x8974FA: jb      short loc_8974A8
0x8974FC: pop     edi
0x8974FD: pop     esi
0x8974FE: pop     ebp
0x8974FF: mov     al, 1
0x897501: pop     ebx
0x897502: add     esp, 18h
0x897505: retn
0x897506: pop     edi
0x897507: pop     esi
0x897508: pop     ebp
0x897509: xor     al, al
0x89750B: pop     ebx
0x89750C: add     esp, 18h
0x89750F: retn
