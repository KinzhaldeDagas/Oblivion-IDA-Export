0x5EAD00: sub     esp, 8
0x5EAD03: fld1
0x5EAD05: push    ebp
0x5EAD06: mov     ebp, [esp+0Ch+arg_0]
0x5EAD0A: fstp    [esp+0Ch+var_8]
0x5EAD0E: fldz
0x5EAD10: lea     eax, [ebp-8]
0x5EAD13: cmp     eax, 3
0x5EAD16: fstp    [esp+0Ch+var_4]
0x5EAD1A: push    esi
0x5EAD1B: mov     esi, ecx
0x5EAD1D: ja      Actor_GetBaseCalcAVf___SwitchAV
0x5EAD23: cmp     esi, ds:0B333C4h
0x5EAD29: jnz     short Actor_GetBaseCalcAVf___SwitchAV
0x5EAD2B: lea     ecx, [esp+10h+var_8]
0x5EAD2F: push    ecx
0x5EAD30: lea     edx, [esp+14h+var_4]
0x5EAD34: push    edx
0x5EAD35: push    ebp
0x5EAD36: mov     ecx, esi
0x5EAD38: call    Actor_GetBaseAVCalcFactors
0x5EAD3D: fldz
0x5EAD3F: fcomp   [esp+10h+var_8]
0x5EAD43: fnstsw  ax
0x5EAD45: test    ah, 44h
0x5EAD48: jp      short loc_5EAD50
0x5EAD4A: fld1
0x5EAD4C: fstp    [esp+10h+var_8]
0x5EAD50: mov     edx, [esi]
0x5EAD52: mov     eax, [edx+170h]
0x5EAD58: push    ebx
0x5EAD59: push    edi
0x5EAD5A: mov     ecx, esi
0x5EAD5C: xor     edi, edi
0x5EAD5E: call    eax
0x5EAD60: mov     ebx, eax
0x5EAD62: test    ebx, ebx
0x5EAD64: jz      short Actor_GetBaseCalcAVf___GetBaseAV
0x5EAD66: mov     edx, [esi]
0x5EAD68: mov     eax, [edx+190h]
0x5EAD6E: mov     ecx, esi
0x5EAD70: call    eax
0x5EAD72: test    al, al
0x5EAD74: jz      short Actor_GetBaseCalcAVf___GetBaseAV
0x5EAD76: mov     edi, ebx
