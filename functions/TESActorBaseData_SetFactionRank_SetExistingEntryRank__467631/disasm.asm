0x467631: mov     dl, [esp+arg_C]
0x467635: cmp     dl, 0FFh
0x467638: jnz     short TESActorBaseData_SetFactionRank___SetRank
0x46763A: mov     ecx, [eax+4]
0x46763D: test    ecx, ecx
0x46763F: jz      short loc_467659
0x467641: mov     edx, [ecx+4]
0x467644: mov     [eax+4], edx
0x467647: mov     edx, [ecx]
0x467649: push    ecx
0x46764A: mov     [eax], edx
0x46764C: call    FormHeapFree
0x467651: add     esp, 4
0x467654: pop     edi
0x467655: pop     esi
0x467656: retn    8
0x467659: pop     edi
0x46765A: mov     dword ptr [eax], 0
0x467660: pop     esi
0x467661: retn    8
