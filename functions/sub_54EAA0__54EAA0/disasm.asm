0x54EAA0: push    0FFFFFFFFh
0x54EAA2: push    offset SEH_54EAA0
0x54EAA7: mov     eax, large fs:0
0x54EAAD: push    eax
0x54EAAE: push    ecx
0x54EAAF: push    ebx
0x54EAB0: push    esi
0x54EAB1: push    edi
0x54EAB2: mov     eax, ds:0B30AACh
0x54EAB7: xor     eax, esp
0x54EAB9: push    eax
0x54EABA: lea     eax, [esp+20h+var_C]
0x54EABE: mov     large fs:0, eax
0x54EAC4: mov     esi, ecx
0x54EAC6: mov     [esp+20h+var_10], esi
0x54EACA: fldz
0x54EACC: mov     dword ptr [esi+4], 0FFFFFFFFh
0x54EAD3: fstp    dword ptr [esi+8]
0x54EAD6: mov     ebx, [esp+20h+arg_0]
0x54EADA: mov     dword ptr [esi], offset ??_7BSFaceGenKeyframeMultiple@@6B@; const BSFaceGenKeyframeMultiple::`vftable'
0x54EAE0: mov     eax, [ebx]
0x54EAE2: mov     edx, [eax+4]
0x54EAE5: xor     edi, edi
0x54EAE7: mov     ecx, ebx
0x54EAE9: mov     [esp+20h+var_4], edi
0x54EAED: call    edx
0x54EAEF: cmp     eax, [esi+4]
0x54EAF2: jz      short loc_54EAF7
0x54EAF4: mov     [esi+4], eax
0x54EAF7: mov     eax, [ebx]
0x54EAF9: mov     edx, [eax+0Ch]
0x54EAFC: mov     ecx, ebx
0x54EAFE: call    edx
0x54EB00: fstp    [esp+20h+arg_0]
0x54EB04: fld     [esp+20h+arg_0]
0x54EB08: fld     st
0x54EB0A: fld     dword ptr [esi+8]
0x54EB0D: fucompp
0x54EB0F: fnstsw  ax
0x54EB11: test    ah, 44h
0x54EB14: jnp     short loc_54EB1B
0x54EB16: fstp    dword ptr [esi+8]
0x54EB19: jmp     short loc_54EB1D
0x54EB1B: fstp    st
0x54EB1D: mov     [esi+0Ch], edi
0x54EB20: mov     [esi+10h], edi
0x54EB23: mov     eax, [ebx]
0x54EB25: mov     edx, [eax+50h]
0x54EB28: push    1
0x54EB2A: mov     ecx, ebx
0x54EB2C: call    edx
0x54EB2E: push    eax
0x54EB2F: mov     ecx, esi
0x54EB31: call    sub_54E860
0x54EB36: cmp     [esi+10h], edi
0x54EB39: jbe     short loc_54EB7B
0x54EB3B: jmp     short loc_54EB40
0x54EB3D: align 10h
0x54EB40: mov     eax, [ebx]
0x54EB42: mov     edx, [eax+48h]
0x54EB45: push    edi
0x54EB46: mov     ecx, ebx
0x54EB48: call    edx
0x54EB4A: fstp    [esp+20h+arg_0]
0x54EB4E: cmp     edi, [esi+10h]
0x54EB51: jnb     short loc_54EB73
0x54EB53: mov     eax, [esi+0Ch]
0x54EB56: fld     dword ptr [eax+edi*4]
0x54EB59: lea     ecx, [eax+edi*4]
0x54EB5C: fld     [esp+20h+arg_0]
0x54EB60: fld     st
0x54EB62: fucomp  st(2)
0x54EB64: fnstsw  ax
0x54EB66: fstp    st(1)
0x54EB68: test    ah, 44h
0x54EB6B: jnp     short loc_54EB71
0x54EB6D: fstp    dword ptr [ecx]
0x54EB6F: jmp     short loc_54EB73
0x54EB71: fstp    st
0x54EB73: add     edi, 1
0x54EB76: cmp     edi, [esi+10h]
0x54EB79: jb      short loc_54EB40
0x54EB7B: mov     eax, esi
0x54EB7D: mov     ecx, dword ptr [esp+20h+var_C]
0x54EB81: mov     large fs:0, ecx
0x54EB88: pop     ecx
0x54EB89: pop     edi
0x54EB8A: pop     esi
0x54EB8B: pop     ebx
0x54EB8C: add     esp, 10h
0x54EB8F: retn    4
