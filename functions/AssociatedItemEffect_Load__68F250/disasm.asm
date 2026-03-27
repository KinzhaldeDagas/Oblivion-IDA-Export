0x68F250: mov     eax, [esp+Dst]
0x68F254: push    esi
0x68F255: push    eax
0x68F256: mov     esi, ecx
0x68F258: call    ActiveEffect_Base_LoadEffect
0x68F25D: push    4; Size
0x68F25F: lea     ecx, [esp+0Ch]
0x68F263: push    ecx; Dst
0x68F264: mov     ecx, ds:0B33B00h
0x68F26A: call    SaveLoad_LoadFormID
0x68F26F: mov     edx, [esp+10h+var_8]
0x68F273: mov     [esi+38h], edx
0x68F276: pop     esi
0x68F277: retn    4
