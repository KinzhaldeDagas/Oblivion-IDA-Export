0x68E49E: push    1; Size
0x68E4A0: lea     edx, [esp+4+Dst+2]
0x68E4A4: push    edx; Dst
0x68E4A5: call    SaveLoad_LoadData
0x68E4AA: cmp     byte ptr [esp+Dst+2], bl
0x68E4AE: mov     [esp+arg_14], ebx
0x68E4B2: jbe     ActiveEffect_Base_LoadEffect___LoadUnk14_
