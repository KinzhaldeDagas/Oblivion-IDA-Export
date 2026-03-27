0x4CC070: sub     esp, 0Ch
0x4CC073: push    ebx
0x4CC074: push    ebp
0x4CC075: mov     ebx, ecx
0x4CC077: mov     ecx, [esp+14h+arg_0]; this
0x4CC07B: xor     al, al
0x4CC07D: xor     ebp, ebp
0x4CC07F: cmp     ecx, ebp
0x4CC081: mov     [esp+14h+var_A], al
0x4CC085: jz      loc_4CC197
0x4CC08B: push    esi
0x4CC08C: push    edi
0x4CC08D: push    1; a3
0x4CC08F: push    ebx; a2
0x4CC090: call    NiTMap_SetAt
0x4CC095: push    ebx; a2
0x4CC096: mov     ecx, offset stru_B35C80; this
0x4CC09B: call    sub_496EA0
0x4CC0A0: lea     esi, [ebx+48h]
0x4CC0A3: cmp     esi, ebp
0x4CC0A5: mov     [esp+1Ch+var_8], ebp
0x4CC0A9: mov     [esp+1Ch+var_4], ebp
0x4CC0AD: jz      loc_4CC133
0x4CC0B3: cmp     dword ptr [esi+4], 0
0x4CC0B7: jnz     short loc_4CC0BE
0x4CC0B9: cmp     dword ptr [esi], 0
0x4CC0BC: jz      short loc_4CC133
0x4CC0BE: mov     edi, [esi]
0x4CC0C0: cmp     edi, ds:0B333C4h
0x4CC0C6: jz      short loc_4CC125
0x4CC0C8: mov     eax, [edi]
0x4CC0CA: mov     edx, [eax+170h]
0x4CC0D0: mov     ecx, edi
0x4CC0D2: call    edx
0x4CC0D4: cmp     byte ptr [eax+4], 18h
0x4CC0D8: jnz     short loc_4CC100
0x4CC0DA: mov     ecx, edi; this
0x4CC0DC: call    GetTeleportExtraData
0x4CC0E1: test    eax, eax
0x4CC0E3: jz      short loc_4CC100
0x4CC0E5: mov     ecx, eax
0x4CC0E7: call    sub_42B460
0x4CC0EC: test    eax, eax
0x4CC0EE: jz      short loc_4CC100
0x4CC0F0: test    byte ptr [eax+24h], 1
0x4CC0F4: jz      short loc_4CC100
0x4CC0F6: push    eax
0x4CC0F7: lea     ecx, [esp+20h+var_8]
0x4CC0FB: call    BSSimpleList_PushFront
0x4CC100: mov     ecx, edi
0x4CC102: call    sub_4D8E40
0x4CC107: test    eax, eax
0x4CC109: jz      short loc_4CC12A
0x4CC10B: mov     eax, [edi]
0x4CC10D: mov     edx, [eax+118h]
0x4CC113: mov     ecx, edi
0x4CC115: call    edx
0x4CC117: test    ebp, ebp
0x4CC119: jz      short loc_4CC120
0x4CC11B: mov     esi, [ebp+4]
0x4CC11E: jmp     short loc_4CC12F
0x4CC120: lea     esi, [ebx+48h]
0x4CC123: jmp     short loc_4CC12F
0x4CC125: mov     [esp+1Ch+var_A], 1
0x4CC12A: mov     ebp, esi
0x4CC12C: mov     esi, [esi+4]
0x4CC12F: test    esi, esi
0x4CC131: jnz     short loc_4CC0B3
0x4CC133: push    ebx; a2
0x4CC134: mov     ecx, offset stru_B35C80; this
0x4CC139: call    sub_496F50
0x4CC13E: lea     esi, [esp+1Ch+var_8]
0x4CC142: cmp     dword ptr [esi+4], 0
0x4CC146: jnz     short loc_4CC14D
0x4CC148: cmp     dword ptr [esi], 0
0x4CC14B: jz      short loc_4CC188
0x4CC14D: mov     edi, [esi]
0x4CC14F: mov     ebx, [esp+1Ch+arg_0]
0x4CC153: lea     eax, [esp+1Ch+var_9]
0x4CC157: push    eax
0x4CC158: push    edi
0x4CC159: mov     ecx, ebx
0x4CC15B: mov     [esp+24h+var_9], 0
0x4CC160: call    sub_4D6760
0x4CC165: test    al, al
0x4CC167: jz      short loc_4CC170
0x4CC169: cmp     [esp+1Ch+var_9], 0
0x4CC16E: jnz     short loc_4CC181
0x4CC170: push    ebx
0x4CC171: mov     ecx, edi
0x4CC173: call    sub_4CC070
0x4CC178: test    al, al
0x4CC17A: jz      short loc_4CC181
0x4CC17C: mov     [esp+1Ch+var_A], 1
0x4CC181: mov     esi, [esi+4]
0x4CC184: test    esi, esi
0x4CC186: jnz     short loc_4CC142
0x4CC188: lea     ecx, [esp+1Ch+var_8]
0x4CC18C: call    BSSimpleList_Clear
0x4CC191: mov     al, [esp+1Ch+var_A]
0x4CC195: pop     edi
0x4CC196: pop     esi
0x4CC197: pop     ebp
0x4CC198: pop     ebx
0x4CC199: add     esp, 0Ch
0x4CC19C: retn    4
