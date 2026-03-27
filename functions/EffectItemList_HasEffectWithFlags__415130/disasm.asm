0x415130: cmp     dword ptr [ecx+8], 0
0x415134: jnz     short loc_415141
0x415136: cmp     dword ptr [ecx+4], 0
0x41513A: jnz     short loc_415141
0x41513C: xor     al, al
0x41513E: retn    4
0x415141: xor     al, al
0x415143: test    ecx, ecx
0x415145: jz      short EffectItemList_HasEffectWithFlags___Done
0x415147: push    esi
0x415148: mov     esi, [esp+4+arg_0]
0x41514C: lea     esp, [esp+0]
0x415150: test    al, al
0x415152: jnz     short loc_41517B
0x415154: mov     edx, [ecx+4]
0x415157: test    edx, edx
0x415159: jz      short EffectItemList_HasEffectWithFlags___EffectLoop_Continue
0x41515B: mov     edx, [edx+1Ch]
0x41515E: mov     edx, [edx+58h]
0x415161: test    esi, edx
0x415163: jz      short EffectItemList_HasEffectWithFlags___EffectLoop_Continue
0x415165: shr     edx, 16h
0x415168: test    dl, 1
0x41516B: jnz     short EffectItemList_HasEffectWithFlags___EffectLoop_Continue
0x41516D: mov     al, 1
