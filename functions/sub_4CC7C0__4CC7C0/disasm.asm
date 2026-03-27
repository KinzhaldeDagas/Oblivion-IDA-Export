0x4CC7C0: push    0FFFFFFFFh
0x4CC7C2: push    offset SEH_4CC7C0
0x4CC7C7: mov     eax, large fs:0
0x4CC7CD: push    eax
0x4CC7CE: push    ecx
0x4CC7CF: mov     eax, ds:0B30AACh
0x4CC7D4: xor     eax, esp
0x4CC7D6: push    eax
0x4CC7D7: lea     eax, [esp+14h+var_C]
0x4CC7DB: mov     large fs:0, eax
0x4CC7E1: mov     eax, ecx
0x4CC7E3: xor     ecx, ecx
0x4CC7E5: mov     edx, 1
0x4CC7EA: mov     dword ptr [eax], offset ??_7?$NiTArray@M@@6B@; const NiTArray<float>::`vftable'
0x4CC7F0: mov     [eax+8], cx
0x4CC7F4: mov     [eax+0Eh], dx
0x4CC7F8: mov     [eax+0Ah], cx
0x4CC7FC: mov     [eax+0Ch], cx
0x4CC800: mov     [eax+4], ecx
0x4CC803: mov     dword ptr [eax+10h], offset ??_7?$NiTArray@M@@6B@; const NiTArray<float>::`vftable'
0x4CC80A: mov     [eax+18h], cx
0x4CC80E: mov     [eax+1Eh], dx
0x4CC812: mov     [eax+1Ah], cx
0x4CC816: mov     [eax+1Ch], cx
0x4CC81A: mov     [eax+14h], ecx
0x4CC81D: mov     dword ptr [eax+20h], offset ??_7?$NiTArray@M@@6B@; const NiTArray<float>::`vftable'
0x4CC824: mov     [eax+28h], cx
0x4CC828: mov     [eax+2Eh], dx
0x4CC82C: mov     [eax+2Ah], cx
0x4CC830: mov     [eax+2Ch], cx
0x4CC834: mov     [eax+24h], ecx
0x4CC837: mov     ecx, [esp+14h+var_C]
0x4CC83B: mov     large fs:0, ecx
0x4CC842: pop     ecx
0x4CC843: add     esp, 10h
0x4CC846: retn
