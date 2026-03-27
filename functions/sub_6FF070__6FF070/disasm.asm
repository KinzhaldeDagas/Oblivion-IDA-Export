0x6FF070: push    esi
0x6FF071: push    edi
0x6FF072: mov     edi, [esp+8+arg_0]
0x6FF076: push    edi
0x6FF077: mov     esi, ecx
0x6FF079: call    sub_752CD0
0x6FF07E: test    al, al
0x6FF080: jz      short loc_6FF09A
0x6FF082: fld     dword ptr [edi+20h]
0x6FF085: fld     dword ptr [esi+20h]
0x6FF088: fucompp
0x6FF08A: fnstsw  ax
0x6FF08C: test    ah, 44h
0x6FF08F: jp      short loc_6FF098
0x6FF091: pop     edi
0x6FF092: mov     al, 1
0x6FF094: pop     esi
0x6FF095: retn    4
0x6FF098: xor     al, al
0x6FF09A: pop     edi
0x6FF09B: pop     esi
0x6FF09C: retn    4
