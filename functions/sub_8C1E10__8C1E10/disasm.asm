0x8C1E10: push    0FFFFFFFFh
0x8C1E12: push    offset ??1bhkBallAndSocketConstraint@@UAE@XZ_SEH
0x8C1E17: mov     eax, large fs:0
0x8C1E1D: push    eax
0x8C1E1E: push    ecx
0x8C1E1F: push    esi
0x8C1E20: mov     eax, ds:0B30AACh
0x8C1E25: xor     eax, esp
0x8C1E27: push    eax
0x8C1E28: lea     eax, [esp+18h+var_C]
0x8C1E2C: mov     large fs:0, eax
0x8C1E32: mov     esi, ecx
0x8C1E34: mov     [esp+18h+var_10], esi
0x8C1E38: call    ??0bhkRefObject@@QAE@XZ; bhkRefObject::bhkRefObject(void)
0x8C1E3D: xor     eax, eax
0x8C1E3F: mov     [esi+0Ch], eax
0x8C1E42: mov     dword ptr [esi], offset ??_7bhkConstraint@@6B@; const bhkConstraint::`vftable'
0x8C1E48: add     dword ptr ds:0BA7D4Ch, 1
0x8C1E4F: mov     ecx, [esp+18h+arg_0]
0x8C1E53: cmp     ecx, eax
0x8C1E55: mov     [esp+18h+var_4], eax
0x8C1E59: mov     dword ptr [esi], offset ??_7bhkMalleableConstraint@@6B@; const bhkMalleableConstraint::`vftable'
0x8C1E5F: jz      short loc_8C1E64
0x8C1E61: lea     eax, [ecx+4]
0x8C1E64: push    eax
0x8C1E65: mov     ecx, esi
0x8C1E67: call    sub_8A0610
0x8C1E6C: add     dword ptr ds:0BA8088h, 1
0x8C1E73: mov     eax, esi
0x8C1E75: mov     ecx, [esp+18h+var_C]
0x8C1E79: mov     large fs:0, ecx
0x8C1E80: pop     ecx
0x8C1E81: pop     esi
0x8C1E82: add     esp, 10h
0x8C1E85: retn    4
