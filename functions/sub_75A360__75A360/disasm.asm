0x75A360: push    esi
0x75A361: push    24h ; '$'; Size
0x75A363: call    FormHeapAlloc
0x75A368: mov     esi, eax
0x75A36A: add     esp, 4
0x75A36D: test    esi, esi
0x75A36F: jz      short loc_75A391
0x75A371: mov     ecx, esi
0x75A373: call    sub_752BF0
0x75A378: fldz
0x75A37A: mov     dword ptr [esi], offset ??_7NiPSysColorModifier@@6B@; const NiPSysColorModifier::`vftable'
0x75A380: mov     dword ptr [esi+18h], 0
0x75A387: fst     dword ptr [esi+1Ch]
0x75A38A: fstp    dword ptr [esi+20h]
0x75A38D: mov     eax, esi
0x75A38F: pop     esi
0x75A390: retn
0x75A391: xor     eax, eax
0x75A393: pop     esi
0x75A394: retn
