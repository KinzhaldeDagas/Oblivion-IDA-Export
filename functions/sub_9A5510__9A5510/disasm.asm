0x9A5510: mov     eax, [esp+arg_4]
0x9A5514: test    eax, eax
0x9A5516: jz      short loc_9A557F
0x9A5518: cmp     [esp+arg_8], 0
0x9A551D: fld     dword ptr [eax]
0x9A551F: push    esi
0x9A5520: mov     esi, [esp+4+arg_0]
0x9A5524: fstp    dword ptr [esi]
0x9A5526: fld     dword ptr [eax+4]
0x9A5529: fstp    dword ptr [esi+10h]
0x9A552C: fldz
0x9A552E: fst     dword ptr [esi+20h]
0x9A5531: fld     dword ptr [eax+8]
0x9A5534: fstp    dword ptr [esi+30h]
0x9A5537: fld     dword ptr [eax+0Ch]
0x9A553A: fstp    dword ptr [esi+4]
0x9A553D: fld     dword ptr [eax+10h]
0x9A5540: fstp    dword ptr [esi+14h]
0x9A5543: fst     dword ptr [esi+24h]
0x9A5546: fld     dword ptr [eax+14h]
0x9A5549: fstp    dword ptr [esi+34h]
0x9A554C: fst     dword ptr [esi+38h]
0x9A554F: fst     dword ptr [esi+28h]
0x9A5552: fst     dword ptr [esi+18h]
0x9A5555: fst     dword ptr [esi+8]
0x9A5558: fst     dword ptr [esi+3Ch]
0x9A555B: fst     dword ptr [esi+2Ch]
0x9A555E: fst     dword ptr [esi+1Ch]
0x9A5561: fstp    dword ptr [esi+0Ch]
0x9A5564: jz      short loc_9A556F
0x9A5566: push    esi
0x9A5567: push    0
0x9A5569: push    esi
0x9A556A: call    D3DXMatrixInverse_0
0x9A556F: cmp     [esp+4+arg_C], 0
0x9A5574: jz      short loc_9A557D
0x9A5576: push    esi
0x9A5577: push    esi
0x9A5578: call    D3DXMatrixTranspose_0
0x9A557D: pop     esi
0x9A557E: retn
0x9A557F: mov     eax, [esp+arg_0]
0x9A5583: fldz
0x9A5585: fst     dword ptr [eax+38h]
0x9A5588: fst     dword ptr [eax+34h]
0x9A558B: fst     dword ptr [eax+30h]
0x9A558E: fst     dword ptr [eax+2Ch]
0x9A5591: fst     dword ptr [eax+24h]
0x9A5594: fst     dword ptr [eax+20h]
0x9A5597: fst     dword ptr [eax+1Ch]
0x9A559A: fst     dword ptr [eax+18h]
0x9A559D: fst     dword ptr [eax+10h]
0x9A55A0: fst     dword ptr [eax+0Ch]
0x9A55A3: fst     dword ptr [eax+8]
0x9A55A6: fstp    dword ptr [eax+4]
0x9A55A9: fld1
0x9A55AB: fst     dword ptr [eax+3Ch]
0x9A55AE: fst     dword ptr [eax+28h]
0x9A55B1: fst     dword ptr [eax+14h]
0x9A55B4: fstp    dword ptr [eax]
0x9A55B6: retn
