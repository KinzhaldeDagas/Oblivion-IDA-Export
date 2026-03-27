0x533F70: push    0FFFFFFFFh
0x533F72: push    offset ??1HavokFileStreambufReader@@UAE@XZ_SEH
0x533F77: mov     eax, large fs:0
0x533F7D: push    eax
0x533F7E: push    ecx
0x533F7F: push    esi
0x533F80: mov     eax, ds:0B30AACh
0x533F85: xor     eax, esp
0x533F87: push    eax
0x533F88: lea     eax, [esp+18h+var_C]
0x533F8C: mov     large fs:0, eax
0x533F92: mov     esi, ecx
0x533F94: mov     [esp+18h+var_10], esi
0x533F98: mov     dword ptr [esi], offset ??_7HavokFileStreambufWriter@@6B@; const HavokFileStreambufWriter::`vftable'
0x533F9E: mov     ecx, [esi+8]
0x533FA1: test    ecx, ecx
0x533FA3: mov     [esp+18h+var_4], 0
0x533FAB: jz      short loc_533FBB
0x533FAD: cmp     byte ptr [esi+0Ch], 0
0x533FB1: jz      short loc_533FBB
0x533FB3: mov     eax, [ecx]
0x533FB5: mov     edx, [eax]
0x533FB7: push    1
0x533FB9: call    edx
0x533FBB: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x533FC1: mov     ecx, dword ptr [esp+18h+var_C]
0x533FC5: mov     large fs:0, ecx
0x533FCC: pop     ecx
0x533FCD: pop     esi
0x533FCE: add     esp, 10h
0x533FD1: retn
