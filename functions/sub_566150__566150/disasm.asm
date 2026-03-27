0x566150: push    esi
0x566151: push    edi
0x566152: mov     edi, [esp+8+arg_0]
0x566156: push    edi
0x566157: mov     esi, ecx
0x566159: call    nullsub_returnvVoid_1arg
0x56615E: test    edi, 10000000h
0x566164: jz      short loc_56616D
0x566166: and     dword ptr [esi+1Ch], 0FFFF7FFFh
0x56616D: test    edi, 8000000h
0x566173: jz      short loc_56617C
0x566175: and     dword ptr [esi+1Ch], 0FFFEFFFFh
0x56617C: pop     edi
0x56617D: pop     esi
0x56617E: retn    4
