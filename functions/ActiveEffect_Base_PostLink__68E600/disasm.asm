0x68E600: mov     eax, ds:0B33B00h
0x68E605: cmp     byte ptr [eax+7Ch], 2Ah ; '*'
0x68E609: push    ebx
0x68E60A: mov     ebx, ecx
0x68E60C: jb      short ActiveEffect_Base_PostLink___PersistentSound?
0x68E60E: push    esi
0x68E60F: mov     esi, [ebx+34h]
0x68E612: test    esi, esi
0x68E614: jz      short ActiveEffect_Base_PostLink___PersistentSound?_
0x68E616: push    ebp
0x68E617: mov     ebp, [esp+0Ch+arg_0]
0x68E61B: push    edi
0x68E61C: lea     esp, [esp+0]
