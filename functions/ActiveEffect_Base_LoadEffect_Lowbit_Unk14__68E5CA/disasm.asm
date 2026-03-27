0x68E5CA: cmp     al, 41h ; 'A'
0x68E5CC: jb      short ActiveEffect_Base_LoadEffect___Epilogue
0x68E5CE: push    1; Size
0x68E5D0: lea     edx, [esp+4+Dst]
0x68E5D4: push    edx; Dst
0x68E5D5: call    SaveLoad_LoadData
0x68E5DA: cmp     [esp+Dst], bl
0x68E5DE: jz      short ActiveEffect_Base_LoadEffect___Epilogue
0x68E5E0: or      dword ptr [ebp+14h], 6
