0x467320: mov     eax, ecx
0x467322: xor     ecx, ecx
0x467324: mov     dword ptr [eax], offset ??_7TESActorBaseData@@6B@; Verified typed prefix through +0x50 only; complete table extends further. Blood slots +0x28/+0x30 are independent disable flags; +0x38/+0x40 are texture/particle getters. TESCreature ctor 0x51EB80 installs its component vtable at complete-object +0x24. Unknown slots intentionally remain untyped.
0x46732A: mov     [eax+18h], ecx
0x46732D: mov     [eax+1Ch], ecx
0x467330: mov     edx, 32h ; '2'
0x467335: mov     [eax+4], ecx
0x467338: mov     [eax+8], dx
0x46733C: mov     [eax+0Ah], dx
0x467340: mov     [eax+0Ch], cx
0x467344: mov     word ptr [eax+0Eh], 1
0x46734A: mov     [eax+10h], cx
0x46734E: mov     [eax+12h], cx
0x467352: mov     [eax+14h], ecx
0x467355: retn
