0x6C1440: push    esi
0x6C1441: mov     esi, [esp+4+arg_4]
0x6C1445: push    edi
0x6C1446: mov     edi, [esp+8+arg_0]
0x6C144A: push    esi
0x6C144B: push    edi
0x6C144C: call    sub_6BB490
0x6C1451: add     esp, 8
0x6C1454: test    al, al
0x6C1456: jnz     short loc_6C145B
0x6C1458: pop     edi
0x6C1459: pop     esi
0x6C145A: retn
0x6C145B: fld     dword ptr [edi+8]
0x6C145E: fld     dword ptr [esi+8]
0x6C1461: fucompp
0x6C1463: fnstsw  ax
0x6C1465: test    ah, 44h
0x6C1468: jp      short loc_6C14AE
0x6C146A: fld     dword ptr [edi+0Ch]
0x6C146D: fld     dword ptr [esi+0Ch]
0x6C1470: fucompp
0x6C1472: fnstsw  ax
0x6C1474: test    ah, 44h
0x6C1477: jp      short loc_6C14AE
0x6C1479: fld     dword ptr [edi+10h]
0x6C147C: fld     dword ptr [esi+10h]
0x6C147F: fucompp
0x6C1481: fnstsw  ax
0x6C1483: test    ah, 44h
0x6C1486: jp      short loc_6C14AE
0x6C1488: fld     dword ptr [edi+14h]
0x6C148B: fld     dword ptr [esi+14h]
0x6C148E: fucompp
0x6C1490: fnstsw  ax
0x6C1492: test    ah, 44h
0x6C1495: jp      short loc_6C14AE
0x6C1497: fld     dword ptr [edi+18h]
0x6C149A: fld     dword ptr [esi+18h]
0x6C149D: fucompp
0x6C149F: fnstsw  ax
0x6C14A1: test    ah, 44h
0x6C14A4: jp      short loc_6C14AE
0x6C14A6: pop     edi
0x6C14A7: mov     eax, 1
0x6C14AC: pop     esi
0x6C14AD: retn
0x6C14AE: pop     edi
0x6C14AF: xor     eax, eax
0x6C14B1: pop     esi
0x6C14B2: retn
