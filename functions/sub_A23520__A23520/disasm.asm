0xA23520: push    offset unk_B1210C
0xA23525: mov     ecx, offset dword_B07CFC
0xA2352A: call    BSSimpleList_Remove
0xA2352F: mov     eax, off_B12110; "bLoadBackgroundFaceGen:BackgroundLoad"
0xA23534: test    eax, eax
0xA23536: jz      short locret_A23544
0xA23538: cmp     byte ptr [eax], 53h ; 'S'
0xA2353B: jnz     short locret_A23544
0xA2353D: push    eax
0xA2353E: call    FormHeapFree
0xA23543: pop     ecx
0xA23544: retn
