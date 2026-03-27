0x68E236: cmp     dword ptr [esi+20h], 0
0x68E23A: jz      ActiveEffect_Base_PlayHitSoundOnTarget___Done_
0x68E240: mov     ecx, [esi+8]
0x68E243: mov     edx, [ecx]
0x68E245: mov     eax, [edx+18h]
0x68E248: call    eax
0x68E24A: cmp     eax, 4
0x68E24D: jz      ActiveEffect_Base_PlayHitSoundOnTarget___Done_
0x68E253: mov     ecx, [esi+20h]; this
0x68E256: test    ecx, ecx
0x68E258: jz      short loc_68E261
0x68E25A: call    MagicTarget_GetParentActor
0x68E25F: jmp     short loc_68E263
0x68E261: xor     eax, eax
0x68E263: mov     ecx, [esi+0Ch]
0x68E266: mov     edx, [ecx+1Ch]
0x68E269: push    ebx
0x68E26A: mov     ebx, [edx+58h]
0x68E26D: mov     edx, [edx+88h]
0x68E273: shr     ebx, 0Ah
0x68E276: and     bl, 1
0x68E279: test    edx, edx
0x68E27B: mov     byte ptr [esp+4+arg_4], bl
0x68E27F: jz      short ActiveEffect_Base_PlayHitSoundOnTarget___PlayOnActor
0x68E281: mov     ebx, [edx+3Ch]
0x68E284: mov     ecx, [edx+38h]
0x68E287: mov     edx, [edx+40h]
0x68E28A: shr     ebx, 4
0x68E28D: and     bl, 1
0x68E290: mov     [esp+4+arg_8], ecx
0x68E294: mov     [esp+4+arg_10], edx
0x68E298: mov     byte ptr [esp+4+arg_4], bl
