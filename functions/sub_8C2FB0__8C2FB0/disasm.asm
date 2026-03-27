0x8C2FB0: push    0FFFFFFFFh
0x8C2FB2: push    offset SEH_8C62B0
0x8C2FB7: mov     eax, large fs:0
0x8C2FBD: push    eax
0x8C2FBE: push    ecx
0x8C2FBF: push    esi
0x8C2FC0: mov     eax, ds:0B30AACh
0x8C2FC5: xor     eax, esp
0x8C2FC7: push    eax
0x8C2FC8: lea     eax, [esp+18h+var_C]
0x8C2FCC: mov     large fs:0, eax
0x8C2FD2: push    10h; Size
0x8C2FD4: call    FormHeapAlloc
0x8C2FD9: mov     esi, eax
0x8C2FDB: add     esp, 4
0x8C2FDE: mov     [esp+18h+var_10], esi
0x8C2FE2: test    esi, esi
0x8C2FE4: mov     [esp+18h+var_4], 0
0x8C2FEC: jz      short loc_8C302C
0x8C2FEE: mov     ecx, esi; this
0x8C2FF0: call    ??0bhkRefObject@@QAE@XZ; bhkRefObject::bhkRefObject(void)
0x8C2FF5: mov     eax, 1
0x8C2FFA: mov     dword ptr [esi], offset ??_7bhkConstraint@@6B@; const bhkConstraint::`vftable'
0x8C3000: mov     dword ptr [esi+0Ch], 0
0x8C3007: add     ds:0BA7D4Ch, eax
0x8C300D: mov     dword ptr [esi], offset ??_7bhkBallAndSocketConstraint@@6B@; const bhkBallAndSocketConstraint::`vftable'
0x8C3013: add     ds:0BA80E8h, eax
0x8C3019: mov     eax, esi
0x8C301B: mov     ecx, [esp+18h+var_C]
0x8C301F: mov     large fs:0, ecx
0x8C3026: pop     ecx
0x8C3027: pop     esi
0x8C3028: add     esp, 10h
0x8C302B: retn
0x8C302C: xor     eax, eax
0x8C302E: mov     ecx, [esp+18h+var_C]
0x8C3032: mov     large fs:0, ecx
0x8C3039: pop     ecx
0x8C303A: pop     esi
0x8C303B: add     esp, 10h
0x8C303E: retn
