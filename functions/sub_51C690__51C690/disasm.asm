0x51C690: mov     eax, [ecx+0F8h]; Verified TESCreature virtual +0x44 setter: forwards supplied path to bloodSpray TESModel::SetModelPath. Path is stored in the creature's TESModel subobject.
0x51C696: mov     eax, [eax+18h]
0x51C699: add     ecx, 0F8h ; 'ø'
0x51C69F: jmp     eax
