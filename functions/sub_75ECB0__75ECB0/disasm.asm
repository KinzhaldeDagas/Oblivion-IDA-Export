0x75ECB0: push    esi
0x75ECB1: mov     esi, ecx
0x75ECB3: call    NiObject_constr
0x75ECB8: fld     [esp+4+arg_0]
0x75ECBC: mov     al, [esp+4+arg_4]
0x75ECC0: fstp    dword ptr [esi+8]
0x75ECC3: mov     cl, [esp+4+arg_8]
0x75ECC7: fldz
0x75ECC9: mov     edx, [esp+4+arg_C]
0x75ECCD: mov     [esi+0Ch], al
0x75ECD0: mov     dword ptr [esi], offset ??_7NiPSysCollider@@6B@; const NiPSysCollider::`vftable'
0x75ECD6: mov     [esi+0Dh], cl
0x75ECD9: mov     [esi+10h], edx
0x75ECDC: mov     eax, ds:0B3F9A8h
0x75ECE1: mov     [esi+14h], eax
0x75ECE4: mov     ecx, ds:0B3F9ACh
0x75ECEA: mov     [esi+18h], ecx
0x75ECED: mov     edx, ds:0B3F9B0h
0x75ECF3: fstp    dword ptr [esi+20h]
0x75ECF6: xor     eax, eax
0x75ECF8: mov     [esi+24h], eax
0x75ECFB: mov     [esi+1Ch], edx
0x75ECFE: mov     [esi+28h], eax
0x75ED01: mov     eax, esi
0x75ED03: pop     esi
0x75ED04: retn    10h
