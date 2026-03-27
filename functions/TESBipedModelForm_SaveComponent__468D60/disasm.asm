0x468D60: push    esi
0x468D61: mov     esi, ecx
0x468D63: push    4; Size
0x468D65: lea     eax, [esi+4]
0x468D68: push    eax; Src
0x468D69: push    54444D42h; int
0x468D6E: call    TESForm_PutFormRecordChunkData
0x468D73: add     esp, 0Ch
0x468D76: push    54444F4Dh
0x468D7B: push    42444F4Dh
0x468D80: push    4C444F4Dh
0x468D85: lea     ecx, [esi+8]
0x468D88: call    TESModel_Save
0x468D8D: push    54324F4Dh
0x468D92: push    42324F4Dh
0x468D97: push    32444F4Dh
0x468D9C: lea     ecx, [esi+38h]
0x468D9F: call    TESModel_Save
0x468DA4: push    4E4F4349h
0x468DA9: lea     ecx, [esi+68h]
0x468DAC: call    TESTexture_Save
0x468DB1: push    54334F4Dh
0x468DB6: push    42334F4Dh
0x468DBB: push    33444F4Dh
0x468DC0: lea     ecx, [esi+20h]
0x468DC3: call    TESModel_Save
0x468DC8: push    54344F4Dh
0x468DCD: push    42344F4Dh
0x468DD2: push    34444F4Dh
0x468DD7: lea     ecx, [esi+50h]
0x468DDA: call    TESModel_Save
0x468DDF: push    324F4349h
0x468DE4: lea     ecx, [esi+74h]
0x468DE7: call    TESTexture_Save
0x468DEC: pop     esi
0x468DED: retn
