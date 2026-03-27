0x447160: push    ecx
0x447161: mov     eax, [esp+4+arg_0]
0x447165: test    eax, eax
0x447167: mov     [esp+4+var_4], 0
0x44716E: jz      short loc_44718F
0x447170: cmp     byte ptr [eax], 0
0x447173: jz      short loc_44718F
0x447175: lea     ecx, [esp+4+var_4]
0x447178: push    ecx
0x447179: push    eax
0x44717A: mov     ecx, offset off_B06164
0x44717F: call    NiTMap_GetAt
0x447184: test    al, al
0x447186: jz      short loc_44718F
0x447188: mov     eax, [esp+4+var_4]
0x44718B: pop     ecx
0x44718C: retn    4
0x44718F: xor     eax, eax
0x447191: pop     ecx
0x447192: retn    4
