0x68E92B: mov     eax, [esi+28h]
0x68E92E: cmp     eax, 4
0x68E931: jz      short ActiveEffect_Base_ProcessEffect___CheckForTargetDeath
0x68E933: cmp     eax, 1
0x68E936: jz      short ActiveEffect_Base_ProcessEffect___CheckForTargetDeath
0x68E938: mov     ecx, esi
0x68E93A: call    ActiveEffect_Base_IsBoundObjWearable
0x68E93F: test    al, al
0x68E941: jnz     short ActiveEffect_Base_ProcessEffect___CheckForTargetDeath
0x68E943: mov     ecx, [esi+0Ch]
0x68E946: mov     edx, [ecx+1Ch]
0x68E949: mov     eax, [edx+58h]
0x68E94C: shr     eax, 7
0x68E94F: test    al, 1
0x68E951: jnz     short loc_68E962
0x68E953: fld     dword ptr [esi+4]
0x68E956: fld     dword ptr [esi+1Ch]
0x68E959: fcompp
0x68E95B: fnstsw  ax
0x68E95D: test    ah, 41h
0x68E960: jp      short ActiveEffect_Base_ProcessEffect___CheckForTargetDeath
0x68E962: mov     byte ptr [esi+11h], 1
