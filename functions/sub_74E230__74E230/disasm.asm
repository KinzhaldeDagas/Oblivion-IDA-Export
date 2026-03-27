0x74E230: push    esi
0x74E231: push    edi
0x74E232: push    38h ; '8'; Size
0x74E234: mov     edi, ecx
0x74E236: call    FormHeapAlloc
0x74E23B: mov     esi, eax
0x74E23D: add     esp, 4
0x74E240: test    esi, esi
0x74E242: jz      short loc_74E295
0x74E244: mov     ecx, esi
0x74E246: call    sub_752BF0
0x74E24B: fldz
0x74E24D: fst     dword ptr [esi+18h]
0x74E250: mov     dword ptr [esi], offset ??_7NiPSysRotationModifier@@6B@; const NiPSysRotationModifier::`vftable'
0x74E256: fst     dword ptr [esi+1Ch]
0x74E259: fst     dword ptr [esi+20h]
0x74E25C: fstp    dword ptr [esi+24h]
0x74E25F: mov     eax, ds:0B258D0h
0x74E264: mov     [esi+28h], eax
0x74E267: mov     ecx, ds:0B258D4h
0x74E26D: mov     eax, [esp+8+arg_0]
0x74E271: mov     [esi+2Ch], ecx
0x74E274: mov     edx, ds:0B258D8h
0x74E27A: push    eax
0x74E27B: push    esi
0x74E27C: mov     ecx, edi
0x74E27E: mov     [esi+30h], edx
0x74E281: mov     byte ptr [esi+34h], 1
0x74E285: mov     byte ptr [esi+35h], 0
0x74E289: call    sub_74E160
0x74E28E: pop     edi
0x74E28F: mov     eax, esi
0x74E291: pop     esi
0x74E292: retn    4
0x74E295: mov     eax, [esp+8+arg_0]
0x74E299: push    eax
0x74E29A: xor     esi, esi
0x74E29C: push    esi
0x74E29D: mov     ecx, edi
0x74E29F: call    sub_74E160
0x74E2A4: pop     edi
0x74E2A5: mov     eax, esi
0x74E2A7: pop     esi
0x74E2A8: retn    4
