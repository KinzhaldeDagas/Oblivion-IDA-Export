0x68E600: mov     eax, ds:0B33B00h; Verified ActiveEffect::PostLink takes a TESObjectREFR linkContext and, for save version >=0x2A, walks this->members.hitEffectList and dispatches each hit effect's +0x84 postLink callback. The callback creates/restores visual state; ActiveEffect_Base_PostLink then registers each object with ActorProcessManager.
0x68E605: cmp     byte ptr [eax+7Ch], 2Ah ; '*'
0x68E609: push    ebx
0x68E60A: mov     ebx, ecx
0x68E60C: jb      short ActiveEffect_Base_PostLink___PersistentSound?
0x68E60E: push    esi
0x68E60F: mov     esi, [ebx+34h]
0x68E612: test    esi, esi
0x68E614: jz      short ActiveEffect_Base_PostLink___PersistentSound?_
0x68E616: push    ebp
0x68E617: mov     ebp, [esp+0Ch+linkContext]
0x68E61B: push    edi
0x68E61C: lea     esp, [esp+0]
