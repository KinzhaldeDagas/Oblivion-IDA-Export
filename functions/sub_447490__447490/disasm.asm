0x447490: push    ecx
0x447491: mov     eax, [esp+4+arg_0]
0x447495: test    eax, eax
0x447497: mov     [esp+4+var_4], 0
0x44749E: jz      short loc_4474C5
0x4474A0: cmp     byte ptr [eax], 0
0x4474A3: jz      short loc_4474C5
0x4474A5: lea     ecx, [esp+4+var_4]
0x4474A8: push    ecx
0x4474A9: push    eax
0x4474AA: mov     ecx, offset off_B06164
0x4474AF: call    NiTMap_GetAt
0x4474B4: test    al, al
0x4474B6: jz      short loc_4474C5
0x4474B8: mov     eax, [esp+4+var_4]
0x4474BB: test    eax, eax
0x4474BD: jz      short loc_4474C5
0x4474BF: cmp     byte ptr [eax+4], 0Ah
0x4474C3: jz      short loc_4474C7
0x4474C5: xor     eax, eax
0x4474C7: pop     ecx
0x4474C8: retn    4
