0x6DBBC0: push    esi
0x6DBBC1: mov     esi, ecx
0x6DBBC3: test    byte ptr [esi+0Ch], 1
0x6DBBC7: jz      short loc_6DBBD7
0x6DBBC9: call    sub_6DBB10
0x6DBBCE: fstp    dword ptr [esi+24h]
0x6DBBD1: and     word ptr [esi+0Ch], 0FFFEh
0x6DBBD7: pop     esi
0x6DBBD8: retn
