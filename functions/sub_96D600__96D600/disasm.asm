0x96D600: push    esi
0x96D601: push    14h; Size
0x96D603: mov     esi, ecx
0x96D605: call    FormHeapAlloc
0x96D60A: add     esp, 4
0x96D60D: test    eax, eax
0x96D60F: jz      short loc_96D633
0x96D611: lea     ecx, [esi+4]
0x96D614: mov     dword ptr [eax], offset ??_7NiSphereBV@@6B@; const NiSphereBV::`vftable'
0x96D61A: mov     edx, [ecx]
0x96D61C: mov     [eax+4], edx
0x96D61F: mov     edx, [ecx+4]
0x96D622: mov     [eax+8], edx
0x96D625: mov     edx, [ecx+8]
0x96D628: mov     [eax+0Ch], edx
0x96D62B: mov     ecx, [ecx+0Ch]
0x96D62E: mov     [eax+10h], ecx
0x96D631: pop     esi
0x96D632: retn
0x96D633: xor     eax, eax
0x96D635: pop     esi
0x96D636: retn
