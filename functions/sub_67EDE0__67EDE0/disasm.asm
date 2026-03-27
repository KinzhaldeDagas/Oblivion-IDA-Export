0x67EDE0: sub     esp, 10h
0x67EDE3: fld     dword ptr ds:0A32048h
0x67EDE9: push    ebp
0x67EDEA: mov     ebp, [esp+14h+arg_0]
0x67EDEE: fstp    [esp+14h+var_10]
0x67EDF2: test    ebp, ebp
0x67EDF4: jz      loc_67EEB0
0x67EDFA: push    esi
0x67EDFB: mov     esi, [esp+18h+arg_4]
0x67EDFF: test    esi, esi
0x67EE01: jz      loc_67EEAF
0x67EE07: mov     ecx, [esp+18h+arg_8]
0x67EE0B: test    ecx, ecx
0x67EE0D: jz      loc_67EEAF
0x67EE13: push    edi
0x67EE14: push    esi
0x67EE15: call    sub_5EC1F0
0x67EE1A: fstp    [esp+1Ch+arg_0]
0x67EE1E: movsx   eax, byte ptr [ebp+10h]
0x67EE22: movsx   edi, byte ptr [esi+10h]
0x67EE26: mov     ecx, edi
0x67EE28: mov     edx, eax
0x67EE2A: shr     ecx, 3
0x67EE2D: shr     edx, 3
0x67EE30: xor     cl, dl
0x67EE32: test    cl, 1
0x67EE35: jz      short loc_67EE45
0x67EE37: fld     dword ptr ds:0B3A420h
0x67EE3D: fadd    [esp+1Ch+arg_0]
0x67EE41: fstp    [esp+1Ch+arg_0]
0x67EE45: mov     ecx, edi
0x67EE47: shr     ecx, 6
0x67EE4A: shr     eax, 6
0x67EE4D: xor     cl, al
0x67EE4F: test    cl, 1
0x67EE52: pop     edi
0x67EE53: jz      short loc_67EE63
0x67EE55: fld     dword ptr ds:0B3A428h
0x67EE5B: fadd    [esp+18h+arg_0]
0x67EE5F: fstp    [esp+18h+arg_0]
0x67EE63: fldz
0x67EE65: fcom    [esp+18h+arg_0]
0x67EE69: fnstsw  ax
0x67EE6B: test    ah, 5
0x67EE6E: jp      short loc_67EEAB
0x67EE70: mov     ecx, esi
0x67EE72: fstp    st
0x67EE74: call    sub_4BEF40
0x67EE79: mov     ecx, ebp
0x67EE7B: mov     esi, eax
0x67EE7D: call    sub_4BEF40
0x67EE82: fld     dword ptr [eax]
0x67EE84: fsub    dword ptr [esi]
0x67EE86: lea     ecx, [esp+18h+var_C]
0x67EE8A: fstp    [esp+18h+var_C]
0x67EE8E: fld     dword ptr [eax+4]
0x67EE91: fsub    dword ptr [esi+4]
0x67EE94: fstp    [esp+18h+var_8]
0x67EE98: fld     dword ptr [eax+8]
0x67EE9B: fsub    dword ptr [esi+8]
0x67EE9E: fstp    [esp+18h+var_4]
0x67EEA2: call    sub_404C90
0x67EEA7: fadd    [esp+18h+arg_0]
0x67EEAB: fstp    [esp+18h+var_10]
0x67EEAF: pop     esi
0x67EEB0: fld     [esp+14h+var_10]
0x67EEB4: pop     ebp
0x67EEB5: add     esp, 10h
0x67EEB8: retn
