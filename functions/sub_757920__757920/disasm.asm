0x757920: push    esi
0x757921: push    48h ; 'H'; Size
0x757923: call    FormHeapAlloc
0x757928: mov     esi, eax
0x75792A: add     esp, 4
0x75792D: test    esi, esi
0x75792F: jz      short loc_757942
0x757931: mov     ecx, esi
0x757933: call    sub_75F510
0x757938: mov     dword ptr [esi], offset ??_7NiPSysFieldMaxDistanceCtlr@@6B@; const NiPSysFieldMaxDistanceCtlr::`vftable'
0x75793E: mov     eax, esi
0x757940: pop     esi
0x757941: retn
0x757942: xor     eax, eax
0x757944: pop     esi
0x757945: retn
