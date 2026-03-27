0x402E50: push    0FFFFFFFFh
0x402E52: push    offset SEH_402E50
0x402E57: mov     eax, large fs:0
0x402E5D: push    eax
0x402E5E: sub     esp, 14h
0x402E61: push    esi
0x402E62: push    edi
0x402E63: mov     eax, ___security_cookie
0x402E68: xor     eax, esp
0x402E6A: push    eax
0x402E6B: lea     eax, [esp+2Ch+var_C]
0x402E6F: mov     large fs:0, eax
0x402E75: xor     edi, edi
0x402E77: mov     [esp+2Ch+var_18], edi
0x402E7B: mov     esi, [esp+2Ch+arg_0]
0x402E7F: mov     [esi], edi
0x402E81: mov     [esi+4], di
0x402E85: mov     [esi+6], di
0x402E89: mov     eax, [ecx]
0x402E8B: cmp     eax, edi
0x402E8D: mov     [esp+2Ch+var_4], edi
0x402E91: mov     [esp+2Ch+var_18], 1
0x402E99: jz      short loc_402EA0
0x402E9B: fld     dword ptr [eax+24h]
0x402E9E: jmp     short loc_402EA6
0x402EA0: fld     ds:flt_A2F940
0x402EA6: mov     eax, [ecx+8]
0x402EA9: fstp    [esp+2Ch+var_20]
0x402EAD: cmp     eax, edi
0x402EAF: jz      short loc_402EB6
0x402EB1: fld     dword ptr [eax+24h]
0x402EB4: jmp     short loc_402EBC
0x402EB6: fld     ds:flt_A2F944
0x402EBC: mov     ecx, [ecx+4]
0x402EBF: fstp    [esp+2Ch+var_1C]
0x402EC3: cmp     ecx, edi
0x402EC5: jz      short loc_402EDC
0x402EC7: fld     dword ptr [ecx+24h]
0x402ECA: fstp    dword ptr [esp+2Ch+var_14]
0x402ECE: fld     dword ptr [esp+2Ch+var_14]
0x402ED2: call    Double_To_SInt32
0x402ED7: movsx   eax, al
0x402EDA: jmp     short loc_402EE1
0x402EDC: mov     eax, 7
0x402EE1: mov     eax, off_B06FA4[eax*4]
0x402EE8: cmp     eax, edi
0x402EEA: jz      short loc_402EEE
0x402EEC: mov     edi, [eax]
0x402EEE: fld     [esp+2Ch+var_20]
0x402EF2: fnstcw  word ptr [esp+2Ch+var_20]
0x402EF6: movzx   eax, word ptr [esp+2Ch+var_20]
0x402EFB: or      eax, 0C00h
0x402F00: mov     dword ptr [esp+2Ch+var_14], eax
0x402F04: fldcw   word ptr [esp+2Ch+var_14]
0x402F08: fistp   [esp+2Ch+var_14]
0x402F0C: mov     eax, dword ptr [esp+2Ch+var_14]
0x402F10: push    eax
0x402F11: fldcw   word ptr [esp+30h+var_20]
0x402F15: fld     [esp+30h+var_1C]
0x402F19: call    Double_To_SInt32
0x402F1E: movsx   ecx, al
0x402F21: push    ecx
0x402F22: push    edi; ArgList
0x402F23: push    offset aSD3eD; "%s %d, 3E%d"
0x402F28: push    esi; int
0x402F29: call    BSStringT_Static_Format
0x402F2E: add     esp, 14h
0x402F31: mov     eax, esi
0x402F33: mov     ecx, [esp+2Ch+var_C]
0x402F37: mov     large fs:0, ecx
0x402F3E: pop     ecx
0x402F3F: pop     edi
0x402F40: pop     esi
0x402F41: add     esp, 20h
0x402F44: retn    4
