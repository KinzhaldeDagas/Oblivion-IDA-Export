0x497640: sub     esp, 2Ch
0x497643: push    ebx
0x497644: mov     ebx, [esp+30h+arg_0]
0x497648: test    ebx, ebx
0x49764A: push    ebp
0x49764B: push    esi
0x49764C: push    edi
0x49764D: mov     edi, ecx
0x49764F: mov     [esp+3Ch+var_28], edi
0x497653: mov     [esp+3Ch+var_29], 1
0x497658: jz      loc_49779A
0x49765E: movzx   eax, byte ptr [edi]
0x497661: mov     esi, [esp+3Ch+arg_4]
0x497665: cmp     [esi], eax
0x497667: jnb     loc_49779A
0x49766D: push    ebx
0x49766E: call    sub_497420
0x497673: mov     ebp, eax
0x497675: add     esp, 4
0x497678: test    ebp, ebp
0x49767A: jz      loc_497734
0x497680: mov     eax, [ebp+10h]
0x497683: test    eax, eax
0x497685: jz      short loc_497698
0x497687: mov     eax, [eax+8]
0x49768A: test    eax, eax
0x49768C: jz      short loc_497698
0x49768E: add     eax, 14h
0x497691: jz      short loc_497698
0x497693: mov     ecx, [eax+1Ch]
0x497696: jmp     short loc_49769A
0x497698: xor     ecx, ecx
0x49769A: mov     eax, [esi]
0x49769C: lea     edx, ds:0[eax*8]
0x4976A3: sub     edx, eax
0x4976A5: mov     eax, [edi+4]
0x4976A8: shr     ecx, 8
0x4976AB: lea     eax, [eax+edx*4]
0x4976AE: and     ecx, 1Fh
0x4976B1: cmp     [eax], cl
0x4976B3: jz      short loc_4976C1
0x4976B5: pop     edi
0x4976B6: pop     esi
0x4976B7: pop     ebp
0x4976B8: xor     al, al
0x4976BA: pop     ebx
0x4976BB: add     esp, 2Ch
0x4976BE: retn    8
0x4976C1: mov     ecx, [eax+4]
0x4976C4: mov     [ebx+54h], ecx
0x4976C7: mov     edx, [eax+8]
0x4976CA: add     eax, 4
0x4976CD: mov     [ebx+58h], edx
0x4976D0: mov     eax, [eax+8]
0x4976D3: mov     [ebx+5Ch], eax
0x4976D6: mov     eax, [esi]
0x4976D8: mov     edx, [edi+4]
0x4976DB: lea     ecx, ds:0[eax*8]
0x4976E2: sub     ecx, eax
0x4976E4: fld     dword ptr [edx+ecx*4+18h]
0x4976E8: lea     eax, [edx+ecx*4]
0x4976EB: sub     esp, 0Ch
0x4976EE: fstp    [esp+48h+var_40]; float
0x4976F2: lea     ecx, [esp+48h+var_24]
0x4976F6: fld     dword ptr [eax+14h]
0x4976F9: fstp    [esp+48h+var_44]; float
0x4976FD: fld     dword ptr [eax+10h]
0x497700: fstp    [esp+48h+var_48]; float
0x497703: call    sub_711580
0x497708: lea     edi, [ebx+30h]
0x49770B: mov     ecx, 9
0x497710: lea     esi, [esp+3Ch+var_24]
0x497714: rep movsd
0x497716: mov     eax, [ebp+0]
0x497719: mov     edx, [eax+70h]
0x49771C: or      word ptr [ebp+0Ch], 40h
0x497721: push    0
0x497723: push    1
0x497725: mov     ecx, ebp
0x497727: call    edx
0x497729: mov     eax, [esp+3Ch+arg_4]
0x49772D: add     dword ptr [eax], 1
0x497730: mov     edi, [esp+3Ch+var_28]
0x497734: mov     eax, [ebx]
0x497736: mov     edx, [eax+74h]
0x497739: mov     ecx, ebx
0x49773B: call    edx
0x49773D: movzx   ebp, word ptr [ebx+0B6h]
0x497744: xor     esi, esi
0x497746: test    ebp, ebp
0x497748: jbe     short loc_49779A
0x49774A: lea     ebx, [ebx+0]
0x497750: movzx   eax, word ptr [ebx+0B6h]
0x497757: cmp     eax, esi
0x497759: jbe     short loc_497788
0x49775B: mov     ecx, [ebx+0B0h]
0x497761: mov     ecx, [ecx+esi*4]
0x497764: test    ecx, ecx
0x497766: jz      short loc_497788
0x497768: mov     edx, [ecx]
0x49776A: mov     eax, [edx+8]
0x49776D: call    eax
0x49776F: test    eax, eax
0x497771: jz      short loc_497788
0x497773: mov     ecx, [esp+3Ch+arg_4]
0x497777: push    ecx
0x497778: push    eax
0x497779: mov     ecx, edi
0x49777B: call    sub_497640
0x497780: test    al, al
0x497782: jnz     short loc_497788
0x497784: mov     [esp+3Ch+var_29], al
0x497788: movzx   edx, byte ptr [edi]
0x49778B: mov     eax, [esp+3Ch+arg_4]
0x49778F: cmp     [eax], edx
0x497791: jnb     short loc_49779A
0x497793: add     esi, 1
0x497796: cmp     esi, ebp
0x497798: jb      short loc_497750
0x49779A: mov     al, [esp+3Ch+var_29]
0x49779E: pop     edi
0x49779F: pop     esi
0x4977A0: pop     ebp
0x4977A1: pop     ebx
0x4977A2: add     esp, 2Ch
0x4977A5: retn    8
