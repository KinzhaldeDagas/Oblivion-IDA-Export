0x7478F0: mov     eax, [esp+Src]
0x7478F4: test    eax, eax
0x7478F6: jz      short loc_74791F
0x7478F8: cmp     byte ptr [eax], 0
0x7478FB: jz      short loc_74791F
0x7478FD: push    esi; MaxCount
0x7478FE: push    103h; Src
0x747903: push    eax; Src
0x747904: lea     esi, [ecx+8]
0x747907: push    104h; SizeInBytes
0x74790C: push    esi; Dst
0x74790D: call    _strncpy_s
0x747912: push    esi
0x747913: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x747918: add     esp, 14h
0x74791B: pop     esi
0x74791C: retn    4
0x74791F: mov     byte ptr [ecx+8], 0
0x747923: retn    4
