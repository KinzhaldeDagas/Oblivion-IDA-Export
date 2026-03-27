0x533E70: push    0FFFFFFFFh
0x533E72: push    offset ??1HavokFileStreambufReader@@UAE@XZ_SEH
0x533E77: mov     eax, large fs:0
0x533E7D: push    eax
0x533E7E: push    ecx
0x533E7F: push    esi
0x533E80: mov     eax, ds:0B30AACh
0x533E85: xor     eax, esp
0x533E87: push    eax
0x533E88: lea     eax, [esp+18h+var_C]
0x533E8C: mov     large fs:0, eax
0x533E92: mov     esi, ecx
0x533E94: mov     [esp+18h+var_10], esi
0x533E98: mov     dword ptr [esi], offset ??_7HavokFileStreambufReader@@6B@; const HavokFileStreambufReader::`vftable'
0x533E9E: mov     ecx, [esi+8]
0x533EA1: test    ecx, ecx
0x533EA3: mov     [esp+18h+var_4], 0
0x533EAB: jz      short loc_533EBB
0x533EAD: cmp     byte ptr [esi+0Ch], 0
0x533EB1: jz      short loc_533EBB
0x533EB3: mov     eax, [ecx]
0x533EB5: mov     edx, [eax]
0x533EB7: push    1
0x533EB9: call    edx
0x533EBB: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x533EC1: mov     ecx, dword ptr [esp+18h+var_C]
0x533EC5: mov     large fs:0, ecx
0x533ECC: pop     ecx
0x533ECD: pop     esi
0x533ECE: add     esp, 10h
0x533ED1: retn
