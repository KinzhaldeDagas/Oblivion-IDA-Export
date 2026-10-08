0x5E58D0: mov     ecx, [ecx+58h]
0x5E58D3: test    ecx, ecx
0x5E58D5: jz      short locret_5E58E1
0x5E58D7: mov     eax, [ecx]
0x5E58D9: mov     eax, [eax+39Ch]; Not a skill-use call: this Actor/Character/Creature helper dispatches one argument through its process object's unrelated +0x39C slot. Player_ModExperience requires actorValue, useIndex, and scale.
0x5E58DF: jmp     eax
0x5E58E1: retn    4
