0x54EBA0: push    0FFFFFFFFh
0x54EBA2: push    offset SEH_54EA00
0x54EBA7: mov     eax, large fs:0
0x54EBAD: push    eax
0x54EBAE: push    ecx
0x54EBAF: push    esi
0x54EBB0: mov     eax, ds:0B30AACh
0x54EBB5: xor     eax, esp
0x54EBB7: push    eax
0x54EBB8: lea     eax, [esp+18h+var_C]
0x54EBBC: mov     large fs:0, eax
0x54EBC2: mov     esi, ecx
0x54EBC4: mov     [esp+18h+var_10], esi
0x54EBC8: mov     dword ptr [esi], offset ??_7BSFaceGenKeyframeMultiple@@6B@; const BSFaceGenKeyframeMultiple::`vftable'
0x54EBCE: cmp     dword ptr [esi+10h], 0
0x54EBD2: mov     [esp+18h+var_4], 0
0x54EBDA: jz      short loc_54EBFA
0x54EBDC: mov     eax, [esi+0Ch]
0x54EBDF: test    eax, eax
0x54EBE1: jz      short loc_54EBF3
0x54EBE3: push    eax
0x54EBE4: call    FormHeapFree
0x54EBE9: add     esp, 4
0x54EBEC: mov     dword ptr [esi+0Ch], 0
0x54EBF3: mov     dword ptr [esi+10h], 0
0x54EBFA: mov     eax, [esi+10h]
0x54EBFD: test    eax, eax
0x54EBFF: jbe     short loc_54EC10
0x54EC01: push    1
0x54EC03: push    eax
0x54EC04: mov     eax, [esi+0Ch]
0x54EC07: push    eax
0x54EC08: call    sub_54F630
0x54EC0D: add     esp, 0Ch
0x54EC10: mov     dword ptr [esi], offset ??_7BSFaceGenKeyframe@@6B@; const BSFaceGenKeyframe::`vftable'
0x54EC16: mov     ecx, [esp+18h+var_C]
0x54EC1A: mov     large fs:0, ecx
0x54EC21: pop     ecx
0x54EC22: pop     esi
0x54EC23: add     esp, 10h
0x54EC26: retn
