0x614C30: sub     esp, 8
0x614C33: mov     ecx, ds:0B33B00h
0x614C39: push    ebp
0x614C3A: push    edi
0x614C3B: push    2; Size
0x614C3D: lea     eax, [esp+14h+Src]
0x614C41: mov     [esp+14h+Src], 0
0x614C49: mov     ebp, [ecx+14h]
0x614C4C: push    eax; Src
0x614C4D: call    SaveLoad_SaveData
0x614C52: mov     edi, [esp+10h+arg_0]
0x614C56: test    edi, edi
0x614C58: jz      loc_614CF3
0x614C5E: push    esi
0x614C5F: nop
0x614C60: cmp     dword ptr [edi+4], 0
0x614C64: jnz     short loc_614C6B
0x614C66: cmp     dword ptr [edi], 0
0x614C69: jz      short loc_614CE1
0x614C6B: mov     esi, [edi]
0x614C6D: test    esi, esi
0x614C6F: jz      short loc_614CC3
0x614C71: cmp     dword ptr [esi+4], 0
0x614C75: push    1; Size
0x614C77: setnz   cl
0x614C7A: lea     edx, [esp+18h+arg_0]
0x614C7E: mov     byte ptr [esp+18h+arg_0], cl
0x614C82: mov     ecx, ds:0B33B00h
0x614C88: push    edx; Src
0x614C89: call    SaveLoad_SaveData
0x614C8E: mov     ecx, [esi+4]
0x614C91: test    ecx, ecx
0x614C93: jz      short loc_614C9A
0x614C95: call    SaveGame
0x614C9A: mov     ecx, [esi]; int
0x614C9C: test    ecx, ecx
0x614C9E: mov     [esp+14h+var_4], 0
0x614CA6: jz      short loc_614CB1
0x614CA8: call    MagicItem_GetFormID
0x614CAD: mov     [esp+14h+var_4], eax
0x614CB1: mov     ecx, ds:0B33B00h
0x614CB7: push    4
0x614CB9: lea     eax, [esp+18h+var_4]
0x614CBD: push    eax
0x614CBE: call    SaveLoad_SaveFormID
0x614CC3: add     [esp+14h+Src], 1
0x614CC8: mov     edi, [edi+4]
0x614CCB: test    edi, edi
0x614CCD: jnz     short loc_614C60
0x614CCF: mov     cx, word ptr [esp+14h+Src]
0x614CD4: pop     esi
0x614CD5: pop     edi
0x614CD6: mov     [ebp+0], cx
0x614CDA: pop     ebp
0x614CDB: add     esp, 8
0x614CDE: retn    4
0x614CE1: mov     dx, word ptr [esp+14h+Src]
0x614CE6: pop     esi
0x614CE7: pop     edi
0x614CE8: mov     [ebp+0], dx
0x614CEC: pop     ebp
0x614CED: add     esp, 8
0x614CF0: retn    4
0x614CF3: mov     ax, word ptr [esp+10h+Src]
0x614CF8: pop     edi
0x614CF9: mov     [ebp+0], ax
0x614CFD: pop     ebp
0x614CFE: add     esp, 8
0x614D01: retn    4
