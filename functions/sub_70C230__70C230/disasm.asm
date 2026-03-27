0x70C230: sub     esp, 1Ch
0x70C233: mov     eax, [esp+1Ch+arg_0]
0x70C237: push    esi
0x70C238: mov     esi, ecx
0x70C23A: fld     dword ptr [esi+64h]
0x70C23D: fstp    [esp+20h+var_C]
0x70C241: fld     dword ptr [esi+70h]
0x70C244: fstp    [esp+20h+var_8]
0x70C248: fld     dword ptr [esi+7Ch]
0x70C24B: fstp    [esp+20h+var_4]
0x70C24F: fld     dword ptr [eax]
0x70C251: fsub    dword ptr [esi+88h]
0x70C257: fstp    [esp+20h+var_18]
0x70C25B: fld     dword ptr [eax+4]
0x70C25E: fsub    dword ptr [esi+8Ch]
0x70C264: fstp    [esp+20h+var_14]
0x70C268: fld     dword ptr [eax+8]
0x70C26B: fsub    dword ptr [esi+90h]
0x70C271: fstp    [esp+20h+var_10]
0x70C275: fld     [esp+20h+var_18]
0x70C279: fmul    [esp+20h+var_C]
0x70C27D: fld     [esp+20h+var_14]
0x70C281: fmul    [esp+20h+var_8]
0x70C285: faddp   st(1), st
0x70C287: fld     [esp+20h+var_10]
0x70C28B: fmul    [esp+20h+var_4]
0x70C28F: faddp   st(1), st
0x70C291: fstp    [esp+20h+arg_0]
0x70C295: fld     [esp+20h+arg_0]
0x70C299: fld     st
0x70C29B: fsub    dword ptr [eax+0Ch]
0x70C29E: fstp    [esp+20h+arg_0]
0x70C2A2: fadd    dword ptr [eax+0Ch]
0x70C2A5: fstp    [esp+20h+var_1C]
0x70C2A9: fldz
0x70C2AB: fld     [esp+20h+var_1C]
0x70C2AF: fcom    st(1)
0x70C2B1: fnstsw  ax
0x70C2B3: fstp    st(1)
0x70C2B5: test    ah, 41h
0x70C2B8: jp      short loc_70C2C5
0x70C2BA: fstp    st
0x70C2BC: xor     al, al
0x70C2BE: pop     esi
0x70C2BF: add     esp, 1Ch
0x70C2C2: retn    4
0x70C2C5: fld     st
0x70C2C7: fdiv    dword ptr [esi+10Ch]
0x70C2CD: fstp    [esp+20h+var_1C]
0x70C2D1: fld     [esp+20h+arg_0]
0x70C2D5: fld     [esp+20h+var_1C]
0x70C2D9: fcom    st(1)
0x70C2DB: fnstsw  ax
0x70C2DD: fstp    st(1)
0x70C2DF: test    ah, 41h
0x70C2E2: jnz     short loc_70C2EA
0x70C2E4: fstp    [esp+20h+arg_0]
0x70C2E8: jmp     short loc_70C2EC
0x70C2EA: fstp    st
0x70C2EC: fld     [esp+20h+arg_0]
0x70C2F0: fld     dword ptr [esi+108h]
0x70C2F6: fcompp
0x70C2F8: fnstsw  ax
0x70C2FA: test    ah, 41h
0x70C2FD: jnz     short loc_70C309
0x70C2FF: fld     dword ptr [esi+108h]
0x70C305: fstp    [esp+20h+arg_0]
0x70C309: fld     [esp+20h+arg_0]
0x70C30D: mov     eax, [esi]
0x70C30F: mov     edx, [eax+74h]
0x70C312: fstp    dword ptr [esi+0FCh]
0x70C318: fstp    dword ptr [esi+100h]
0x70C31E: call    edx
0x70C320: mov     eax, [esi]
0x70C322: mov     edx, [eax+78h]
0x70C325: mov     ecx, esi
0x70C327: call    edx
0x70C329: mov     al, 1
0x70C32B: pop     esi
0x70C32C: add     esp, 1Ch
0x70C32F: retn    4
