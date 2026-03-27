0x471F20: push    0FFFFFFFFh
0x471F22: push    offset SEH_808DF0
0x471F27: mov     eax, large fs:0
0x471F2D: push    eax
0x471F2E: sub     esp, 8
0x471F31: push    ebx
0x471F32: push    ebp
0x471F33: push    esi
0x471F34: push    edi
0x471F35: mov     eax, ds:0B30AACh
0x471F3A: xor     eax, esp
0x471F3C: push    eax
0x471F3D: lea     eax, [esp+28h+var_C]
0x471F41: mov     large fs:0, eax
0x471F47: mov     esi, ecx
0x471F49: mov     eax, [esi+4]
0x471F4C: test    eax, eax
0x471F4E: jz      loc_472014
0x471F54: cmp     dword ptr [esi+8], 0
0x471F58: jz      loc_472014
0x471F5E: mov     ebp, [eax+0Ch]
0x471F61: test    ebp, ebp
0x471F63: mov     ebx, ds:0A28078h
0x471F69: mov     [esp+28h+var_14], ebp
0x471F6D: jz      short loc_471F75
0x471F6F: lea     eax, [ebp+4]
0x471F72: push    eax; lpAddend
0x471F73: call    ebx ; InterlockedIncrement
0x471F75: mov     ecx, [esi+8]
0x471F78: mov     edi, [ecx+0Ch]
0x471F7B: test    edi, edi
0x471F7D: mov     [esp+28h+var_4], 0
0x471F85: mov     [esp+28h+var_10], edi
0x471F89: jz      short loc_471F91
0x471F8B: lea     edx, [edi+4]
0x471F8E: push    edx; lpAddend
0x471F8F: call    ebx ; InterlockedIncrement
0x471F91: mov     ecx, [esi+4]; this
0x471F94: push    0; a2
0x471F96: mov     byte ptr [esp+2Ch+var_4], 1
0x471F9B: call    sub_478300
0x471FA0: mov     ecx, [esi+8]; this
0x471FA3: push    0; a2
0x471FA5: call    sub_478300
0x471FAA: fld     dword ptr [esi+94h]
0x471FB0: push    1; a3
0x471FB2: push    ecx
0x471FB3: mov     ecx, [esi+4]; this
0x471FB6: fstp    [esp+30h+a2]; a2
0x471FB9: call    NiAVObject_UpdateNiAVObject
0x471FBE: mov     ecx, [esi+4]; this
0x471FC1: push    ebp; a2
0x471FC2: call    sub_478300
0x471FC7: mov     ecx, [esi+8]; this
0x471FCA: push    edi; a2
0x471FCB: call    sub_478300
0x471FD0: test    edi, edi
0x471FD2: mov     esi, ds:0A2807Ch
0x471FD8: mov     byte ptr [esp+28h+var_4], 0
0x471FDD: jz      short loc_471FF3
0x471FDF: lea     eax, [edi+4]
0x471FE2: push    eax; lpAddend
0x471FE3: call    esi ; InterlockedDecrement
0x471FE5: test    eax, eax
0x471FE7: jnz     short loc_471FF3
0x471FE9: mov     edx, [edi]
0x471FEB: mov     eax, [edx]
0x471FED: push    1
0x471FEF: mov     ecx, edi
0x471FF1: call    eax
0x471FF3: test    ebp, ebp
0x471FF5: mov     [esp+28h+var_4], 0FFFFFFFFh
0x471FFD: jz      short loc_472014
0x471FFF: lea     ecx, [ebp+4]
0x472002: push    ecx; lpAddend
0x472003: call    esi ; InterlockedDecrement
0x472005: test    eax, eax
0x472007: jnz     short loc_472014
0x472009: mov     edx, [ebp+0]
0x47200C: mov     eax, [edx]
0x47200E: push    1
0x472010: mov     ecx, ebp
0x472012: call    eax
0x472014: mov     ecx, dword ptr [esp+28h+var_C]
0x472018: mov     large fs:0, ecx
0x47201F: pop     ecx
0x472020: pop     edi
0x472021: pop     esi
0x472022: pop     ebp
0x472023: pop     ebx
0x472024: add     esp, 14h
0x472027: retn
