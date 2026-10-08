0x42A140: mov     eax, ecx; Construct the actor's type-0x59 cache entry and transfer ownership of the supplied MenuTopic pointer to it.
0x42A142: mov     ecx, [esp+arg_0]
0x42A146: mov     byte ptr [eax+4], 59h ; 'Y'; Oblivion registers this cache as extra-data type 0x59. Fallout's analogous ExtraInfoGeneralTopic uses type 0x4D (x4y6:0x82276370), so extra-data numeric IDs are executable-specific.
0x42A14A: mov     dword ptr [eax+8], 0
0x42A151: mov     dword ptr [eax], offset ??_7ExtraInfoGeneralTopic@@6B@; const ExtraInfoGeneralTopic::`vftable'
0x42A157: mov     [eax+0Ch], ecx
0x42A15A: retn    4
