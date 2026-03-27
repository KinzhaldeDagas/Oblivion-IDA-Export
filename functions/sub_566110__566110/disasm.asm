0x566110: mov     eax, [esp+a3]
0x566114: push    esi
0x566115: push    edi
0x566116: mov     edi, [esp+8+Dst]
0x56611A: push    eax; a3
0x56611B: push    edi; Dst
0x56611C: mov     esi, ecx
0x56611E: call    TESForm_LoadModifiedForm
0x566123: test    edi, 10000000h
0x566129: jz      short loc_566132
0x56612B: or      dword ptr [esi+1Ch], 8000h
0x566132: test    edi, 8000000h
0x566138: jz      short loc_566141
0x56613A: or      dword ptr [esi+1Ch], 10000h
0x566141: pop     edi
0x566142: pop     esi
0x566143: retn    8
