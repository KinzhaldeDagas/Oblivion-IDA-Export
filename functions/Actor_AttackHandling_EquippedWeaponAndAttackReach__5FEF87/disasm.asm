0x5FEF87: mov     ecx, [edi+58h]
0x5FEF8A: xor     ebp, ebp
0x5FEF8C: cmp     ecx, ebp
0x5FEF8E: jz      short loc_5FEFCB
0x5FEF90: mov     edx, [ecx]
0x5FEF92: mov     eax, [edx+0ECh]
0x5FEF98: push    1
0x5FEF9A: call    eax
0x5FEF9C: cmp     eax, ebp
0x5FEF9E: mov     [esp+arg_2C], eax
0x5FEFA2: jz      short loc_5FEFA7
0x5FEFA4: mov     ebp, [eax+8]
0x5FEFA7: test    ebp, ebp
0x5FEFA9: mov     [esp+arg_28], ebp
0x5FEFAD: jz      short loc_5FEFD1
0x5FEFAF: fld     dword ptr [ebp+98h]
0x5FEFB5: push    ecx
0x5FEFB6: fstp    [esp+4+arg_4C]
0x5FEFBA: fld     [esp+4+arg_4C]
0x5FEFBE: fstp    [esp+4+var_4]; float
0x5FEFC1: call    Calc_GetCombatDistance
0x5FEFC6: add     esp, 4
0x5FEFC9: jmp     short loc_5FEFDD
0x5FEFCB: mov     [esp+arg_2C], ebp
0x5FEFCF: jmp     short loc_5FEFA7
0x5FEFD1: mov     edx, [edi]
0x5FEFD3: mov     eax, [edx+26Ch]
0x5FEFD9: mov     ecx, edi
0x5FEFDB: call    eax
0x5FEFDD: mov     edx, [edi]
0x5FEFDF: fstp    [esp+arg_34]
0x5FEFE3: mov     eax, [edx+0ECh]
0x5FEFE9: mov     ecx, edi
0x5FEFEB: call    eax
0x5FEFED: fmul    [esp+arg_34]
0x5FEFF1: test    esi, esi
0x5FEFF3: fstp    [esp+arg_34]
0x5FEFF7: jz      short Actor_AttackHandling___DetermineTarget
0x5FEFF9: mov     [esp+arg_2C], 0
