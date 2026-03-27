0x68E652: mov     ecx, [ebx+0Ch]
0x68E655: mov     edx, [ecx+1Ch]
0x68E658: mov     eax, [edx+58h]
0x68E65B: shr     eax, 0Ah
0x68E65E: test    al, 1
0x68E660: jz      short ActiveEffect_Base_PostLink___Done
0x68E662: mov     ecx, ebx
0x68E664: call    ActiveEffect_Base_PlayHitSoundOnTarget
