0x50E6A0: push    0FFFFFFFFh
0x50E6A2: push    offset Cmd_OutputLocalMapPictures_Execute_SEH
0x50E6A7: mov     eax, large fs:0
0x50E6AD: push    eax
0x50E6AE: sub     esp, 28h
0x50E6B1: push    ebx
0x50E6B2: push    ebp
0x50E6B3: push    esi
0x50E6B4: push    edi
0x50E6B5: mov     eax, ds:0B30AACh
0x50E6BA: xor     eax, esp
0x50E6BC: push    eax
0x50E6BD: lea     eax, [esp+48h+var_C]
0x50E6C1: mov     large fs:0, eax
0x50E6C7: xor     ebp, ebp
0x50E6C9: cmp     ds:0B42D44h, ebp
0x50E6CF: mov     byte ptr [esp+48h+var_34+3], 0
0x50E6D4: jnz     short loc_50E72D
0x50E6D6: push    ebp; char
0x50E6D7: push    1; char
0x50E6D9: lea     eax, [esp+50h+var_2C]
0x50E6DD: push    offset aDataTextures_4; "Data\\Textures\\Menus\\Map\\local\\MapP"...
0x50E6E2: push    eax; int
0x50E6E3: call    sub_7B8200
0x50E6E8: add     esp, 10h
0x50E6EB: push    eax
0x50E6EC: mov     ecx, offset dword_B42D44
0x50E6F1: mov     [esp+4Ch+var_4], ebp
0x50E6F5: call    sub_55E2A0
0x50E6FA: mov     eax, [esp+48h+var_2C]
0x50E6FE: cmp     eax, ebp
0x50E700: mov     [esp+48h+var_4], 0FFFFFFFFh
0x50E708: jz      short loc_50E728
0x50E70A: mov     esi, eax
0x50E70C: add     eax, 4
0x50E70F: push    eax; lpAddend
0x50E710: call    dword ptr ds:0A2807Ch
0x50E716: test    eax, eax
0x50E718: jnz     short loc_50E728
0x50E71A: cmp     esi, ebp
0x50E71C: jz      short loc_50E728
0x50E71E: mov     edx, [esi]
0x50E720: mov     eax, [edx]
0x50E722: push    1
0x50E724: mov     ecx, esi
0x50E726: call    eax
0x50E728: mov     byte ptr [esp+48h+var_34+3], 1
0x50E72D: mov     ecx, ds:0B333A0h
0x50E733: cmp     [ecx+34h], ebp
0x50E736: jnz     loc_50E7E8
0x50E73C: mov     eax, ds:0B06A2Ch
0x50E741: xor     edi, edi
0x50E743: cmp     edi, eax
0x50E745: jnb     loc_50E8FD
0x50E74B: xor     ebp, ebp
0x50E74D: lea     ecx, [ecx+0]
0x50E750: cmp     ebp, eax
0x50E752: jnb     loc_50E7E0
0x50E758: mov     edx, ds:0B333A0h
0x50E75E: mov     ecx, [edx+8]
0x50E761: push    ebp
0x50E762: push    edi
0x50E763: call    GetGridEntry
0x50E768: mov     esi, eax
0x50E76A: test    esi, esi
0x50E76C: jz      short loc_50E7D3
0x50E76E: mov     ecx, [esi]
0x50E770: test    ecx, ecx
0x50E772: jz      short loc_50E7D3
0x50E774: lea     eax, [esp+48h+var_2C]
0x50E778: push    eax
0x50E779: call    sub_4D06C0
0x50E77E: mov     ecx, [esp+48h+var_2C]
0x50E782: mov     bl, ds:0B3F958h
0x50E788: mov     byte ptr ds:0B3F958h, 0
0x50E78F: push    ecx
0x50E790: mov     ecx, [esi]
0x50E792: mov     [esp+4Ch+var_4], 1
0x50E79A: call    sub_4D1130
0x50E79F: mov     eax, [esp+48h+var_2C]
0x50E7A3: test    eax, eax
0x50E7A5: mov     ds:0B3F958h, bl
0x50E7AB: mov     [esp+48h+var_4], 0FFFFFFFFh
0x50E7B3: jz      short loc_50E7D3
0x50E7B5: mov     esi, eax
0x50E7B7: add     eax, 4
0x50E7BA: push    eax; lpAddend
0x50E7BB: call    dword ptr ds:0A2807Ch
0x50E7C1: test    eax, eax
0x50E7C3: jnz     short loc_50E7D3
0x50E7C5: test    esi, esi
0x50E7C7: jz      short loc_50E7D3
0x50E7C9: mov     edx, [esi]
0x50E7CB: mov     eax, [edx]
0x50E7CD: push    1
0x50E7CF: mov     ecx, esi
0x50E7D1: call    eax
0x50E7D3: mov     eax, ds:0B06A2Ch
0x50E7D8: add     ebp, 1
0x50E7DB: jmp     loc_50E750
0x50E7E0: add     edi, 1
0x50E7E3: jmp     loc_50E743
0x50E7E8: mov     ecx, ds:0B333C4h
0x50E7EE: mov     edx, [ecx]
0x50E7F0: mov     eax, [edx+174h]
0x50E7F6: call    eax
0x50E7F8: mov     ecx, [eax]
0x50E7FA: mov     [esp+48h+var_24], ecx
0x50E7FE: mov     edx, [eax+4]
0x50E801: mov     [esp+48h+var_20], edx
0x50E805: mov     eax, [eax+8]
0x50E808: mov     [esp+48h+var_1C], eax
0x50E80C: lea     esp, [esp+0]
0x50E810: mov     ecx, ds:0B06A2Ch
0x50E816: mov     edx, ecx
0x50E818: imul    edx, ecx
0x50E81B: cmp     ebp, edx
0x50E81D: jnb     loc_50E8FD
0x50E823: xor     edx, edx
0x50E825: mov     eax, ebp
0x50E827: div     ecx
0x50E829: push    1; float
0x50E82B: mov     edi, eax
0x50E82D: mov     eax, ds:0B333A0h
0x50E832: mov     ecx, [eax+34h]
0x50E835: mov     esi, edx
0x50E837: lea     edx, [esp+4Ch+var_18]
0x50E83B: push    edx; int
0x50E83C: lea     eax, [esp+50h+var_24]
0x50E840: push    eax; int
0x50E841: call    sub_4CCE20
0x50E846: fld     [esp+48h+var_18]
0x50E84A: fistp   [esp+48h+var_2C]
0x50E84E: mov     eax, [esp+48h+var_2C]
0x50E852: add     eax, 0FFFFF800h
0x50E857: sar     eax, 0Ch
0x50E85A: fld     [esp+48h+var_14]
0x50E85E: fistp   [esp+48h+var_28]
0x50E862: mov     ecx, [esp+48h+var_28]
0x50E866: mov     edx, ds:0B06A2Ch
0x50E86C: add     ecx, 0FFFFF800h
0x50E872: sar     ecx, 0Ch
0x50E875: shr     edx, 1
0x50E877: sub     ecx, edx
0x50E879: add     ecx, edi
0x50E87B: sub     eax, edx
0x50E87D: mov     edi, ecx
0x50E87F: mov     ecx, ds:0B333A0h
0x50E885: mov     ecx, [ecx+34h]
0x50E888: add     eax, esi
0x50E88A: push    edi
0x50E88B: mov     esi, eax
0x50E88D: push    esi
0x50E88E: lea     edx, [esp+50h+var_30]
0x50E892: push    edx
0x50E893: call    sub_4D0C20
0x50E898: mov     bl, ds:0B3F958h
0x50E89E: mov     eax, ds:0B333A0h
0x50E8A3: mov     edx, [esp+48h+var_30]
0x50E8A7: push    edi
0x50E8A8: push    esi
0x50E8A9: mov     byte ptr ds:0B3F958h, 0
0x50E8B0: mov     ecx, [eax+34h]
0x50E8B3: push    edx
0x50E8B4: mov     [esp+54h+var_4], 2
0x50E8BC: call    sub_4D1230
0x50E8C1: mov     eax, [esp+48h+var_30]
0x50E8C5: test    eax, eax
0x50E8C7: mov     ds:0B3F958h, bl
0x50E8CD: mov     [esp+48h+var_4], 0FFFFFFFFh
0x50E8D5: jz      short loc_50E8F5
0x50E8D7: mov     esi, eax
0x50E8D9: add     eax, 4
0x50E8DC: push    eax; lpAddend
0x50E8DD: call    dword ptr ds:0A2807Ch
0x50E8E3: test    eax, eax
0x50E8E5: jnz     short loc_50E8F5
0x50E8E7: test    esi, esi
0x50E8E9: jz      short loc_50E8F5
0x50E8EB: mov     eax, [esi]
0x50E8ED: mov     edx, [eax]
0x50E8EF: push    1
0x50E8F1: mov     ecx, esi
0x50E8F3: call    edx
0x50E8F5: add     ebp, 1
0x50E8F8: jmp     loc_50E810
0x50E8FD: cmp     byte ptr [esp+48h+var_34+3], 0
0x50E902: jz      short loc_50E934
0x50E904: mov     esi, ds:0B42D44h
0x50E90A: test    esi, esi
0x50E90C: jz      short loc_50E934
0x50E90E: lea     eax, [esi+4]
0x50E911: push    eax; lpAddend
0x50E912: call    dword ptr ds:0A2807Ch
0x50E918: test    eax, eax
0x50E91A: jnz     short loc_50E92A
0x50E91C: test    esi, esi
0x50E91E: jz      short loc_50E92A
0x50E920: mov     edx, [esi]
0x50E922: mov     eax, [edx]
0x50E924: push    1
0x50E926: mov     ecx, esi
0x50E928: call    eax
0x50E92A: mov     dword ptr ds:0B42D44h, 0
0x50E934: mov     al, 1
0x50E936: mov     ecx, dword ptr [esp+48h+var_C]
0x50E93A: mov     large fs:0, ecx
0x50E941: pop     ecx
0x50E942: pop     edi
0x50E943: pop     esi
0x50E944: pop     ebp
0x50E945: pop     ebx
0x50E946: add     esp, 34h
0x50E949: retn
