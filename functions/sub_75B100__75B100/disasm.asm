0x75B100: push    ecx
0x75B101: push    esi
0x75B102: push    edi
0x75B103: mov     edi, [esp+0Ch+arg_0]
0x75B107: push    edi
0x75B108: mov     esi, ecx
0x75B10A: call    sub_752DC0
0x75B10F: cmp     dword ptr [edi+0D8h], 0A010064h
0x75B119: mov     [esp+0Ch+arg_0], 2
0x75B121: push    1
0x75B123: ja      short loc_75B152
0x75B125: mov     edi, [edi+21Ch]
0x75B12B: mov     edx, [edi+4]
0x75B12E: lea     eax, [esp+10h+arg_0]
0x75B132: push    eax
0x75B133: push    2
0x75B135: lea     ecx, [esp+18h+var_4]
0x75B139: push    ecx
0x75B13A: push    edi
0x75B13B: call    edx
0x75B13D: mov     eax, [esp+20h+var_4]
0x75B141: add     esp, 14h
0x75B144: push    eax
0x75B145: mov     ecx, esi
0x75B147: call    sub_75A870
0x75B14C: pop     edi
0x75B14D: pop     esi
0x75B14E: pop     ecx
0x75B14F: retn    4
0x75B152: mov     eax, [edi+21Ch]
0x75B158: mov     edx, [eax+4]
0x75B15B: lea     ecx, [esp+10h+arg_0]
0x75B15F: push    ecx
0x75B160: push    2
0x75B162: lea     edi, [esi+18h]
0x75B165: push    edi
0x75B166: push    eax
0x75B167: call    edx
0x75B169: movzx   eax, word ptr [edi]
0x75B16C: add     esp, 14h
0x75B16F: push    eax
0x75B170: mov     ecx, esi
0x75B172: call    sub_75A870
0x75B177: pop     edi
0x75B178: pop     esi
0x75B179: pop     ecx
0x75B17A: retn    4
