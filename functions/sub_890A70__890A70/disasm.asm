0x890A70: push    0FFFFFFFFh
0x890A72: push    offset SEH_890A70
0x890A77: mov     eax, large fs:0
0x890A7D: push    eax
0x890A7E: push    ecx
0x890A7F: push    esi
0x890A80: mov     eax, ds:0B30AACh
0x890A85: xor     eax, esp
0x890A87: push    eax
0x890A88: lea     eax, [esp+18h+var_C]
0x890A8C: mov     large fs:0, eax
0x890A92: mov     esi, ecx
0x890A94: mov     [esp+18h+var_10], esi
0x890A98: call    ??0bhkRefObject@@QAE@XZ; bhkRefObject::bhkRefObject(void)
0x890A9D: xor     eax, eax
0x890A9F: mov     dword ptr [esi], offset ??_7bhkWorldObject@@6B@; const bhkWorldObject::`vftable'
0x890AA5: mov     ecx, 1
0x890AAA: mov     [esi+0Ch], eax
0x890AAD: add     ds:0BA7D34h, ecx
0x890AB3: mov     dword ptr [esi], offset ??_7bhkPhantom@@6B@; const bhkPhantom::`vftable'
0x890AB9: add     ds:0BA7F5Ch, ecx
0x890ABF: mov     [esi+10h], al
0x890AC2: mov     dword ptr [esi], offset ??_7bhkAabbPhantom@@6B@; const bhkAabbPhantom::`vftable'
0x890AC8: add     ds:0BA802Ch, ecx
0x890ACE: mov     [esi+10h], al
0x890AD1: mov     [esp+18h+var_4], eax
0x890AD5: mov     eax, [esp+18h+arg_0]
0x890AD9: push    eax
0x890ADA: mov     ecx, esi
0x890ADC: mov     dword ptr [esi], offset ??_7bhkAvoidBox@@6B@; const bhkAvoidBox::`vftable'
0x890AE2: call    sub_88E6F0
0x890AE7: mov     eax, esi
0x890AE9: mov     ecx, [esp+18h+var_C]
0x890AED: mov     large fs:0, ecx
0x890AF4: pop     ecx
0x890AF5: pop     esi
0x890AF6: add     esp, 10h
0x890AF9: retn    4
