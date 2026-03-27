0x69C710: mov     eax, [esp+Src]
0x69C714: sub     esp, 8
0x69C717: push    ebx
0x69C718: push    esi
0x69C719: push    edi
0x69C71A: push    eax; Src
0x69C71B: mov     esi, ecx
0x69C71D: call    sub_69F770
0x69C722: push    4; a2
0x69C724: lea     ecx, [esi+7Ch]
0x69C727: push    ecx; a1
0x69C728: mov     ecx, esi
0x69C72A: call    TESForm_SaveDataToCurrentSaveGame
0x69C72F: push    4; a2
0x69C731: lea     edx, [esi+5Ch]
0x69C734: push    edx; a1
0x69C735: mov     ecx, esi
0x69C737: call    TESForm_SaveDataToCurrentSaveGame
0x69C73C: push    4; a2
0x69C73E: lea     eax, [esi+80h]
0x69C744: push    eax; a1
0x69C745: mov     ecx, esi
0x69C747: call    TESForm_SaveDataToCurrentSaveGame
0x69C74C: mov     ecx, ds:0B33B00h
0x69C752: push    4; Size
0x69C754: lea     edi, [esi+88h]
0x69C75A: push    edi; Src
0x69C75B: call    SaveLoad_SaveData
0x69C760: push    4; a2
0x69C762: lea     ecx, [esi+8Ch]
0x69C768: push    ecx; a1
0x69C769: mov     ecx, esi
0x69C76B: call    TESForm_SaveDataToCurrentSaveGame
0x69C770: xor     ebx, ebx
0x69C772: cmp     dword ptr [edi], 1
0x69C775: jnz     short loc_69C79C
0x69C777: fldz
0x69C779: mov     eax, [esi+98h]
0x69C77F: cmp     eax, ebx
0x69C781: fstp    [esp+14h+Src]
0x69C785: jz      short loc_69C78E
0x69C787: fld     dword ptr [eax+10h]
0x69C78A: fstp    [esp+14h+Src]
0x69C78E: push    4; a2
0x69C790: lea     edx, [esp+18h+Src]
0x69C794: push    edx; a1
0x69C795: mov     ecx, esi
0x69C797: call    TESForm_SaveDataToCurrentSaveGame
0x69C79C: mov     eax, ds:0B33B00h
0x69C7A1: cmp     byte ptr [eax+7Ch], 71h ; 'q'
0x69C7A5: jb      loc_69C843
0x69C7AB: push    ebp
0x69C7AC: push    4; a2
0x69C7AE: lea     ecx, [esi+84h]
0x69C7B4: push    ecx; a1
0x69C7B5: mov     ecx, esi
0x69C7B7: call    TESForm_SaveDataToCurrentSaveGame
0x69C7BC: mov     edx, ds:0B33B00h
0x69C7C2: push    2; a2
0x69C7C4: lea     eax, [esp+1Ch+var_8]
0x69C7C8: mov     [esp+1Ch+var_8], ebx
0x69C7CC: mov     ebp, [edx+14h]
0x69C7CF: push    eax; a1
0x69C7D0: mov     ecx, esi
0x69C7D2: call    TESForm_SaveDataToCurrentSaveGame
0x69C7D7: mov     edi, [esi+94h]
0x69C7DD: cmp     edi, ebx
0x69C7DF: jz      short loc_69C839
0x69C7E1: mov     [esp+18h+var_4], ebx
0x69C7E5: mov     eax, [edi]
0x69C7E7: cmp     eax, ebx
0x69C7E9: jz      short loc_69C7F2
0x69C7EB: mov     ecx, [eax+0Ch]
0x69C7EE: mov     [esp+18h+var_4], ecx
0x69C7F2: push    4
0x69C7F4: lea     edx, [esp+1Ch+var_4]
0x69C7F8: push    edx
0x69C7F9: mov     ecx, esi
0x69C7FB: call    TESForm_SaveFormIDToCurrentSaveGame
0x69C800: mov     eax, [esi+6Ch]
0x69C803: cmp     eax, ebx
0x69C805: mov     byte ptr [esp+18h+Src], bl
0x69C809: jz      short loc_69C81F
0x69C80B: mov     ecx, [edi+4]
0x69C80E: cmp     ecx, ebx
0x69C810: jz      short loc_69C81F
0x69C812: push    ecx
0x69C813: lea     ecx, [eax+0Ch]
0x69C816: call    EffectItemList_GetIndexOfItem
0x69C81B: mov     byte ptr [esp+18h+Src], al
0x69C81F: push    1; a2
0x69C821: lea     eax, [esp+1Ch+Src]
0x69C825: push    eax; a1
0x69C826: mov     ecx, esi
0x69C828: call    TESForm_SaveDataToCurrentSaveGame
0x69C82D: add     [esp+18h+var_8], 1
0x69C832: mov     edi, [edi+8]
0x69C835: cmp     edi, ebx
0x69C837: jnz     short loc_69C7E1
0x69C839: mov     cx, word ptr [esp+18h+var_8]
0x69C83E: mov     [ebp+0], cx
0x69C842: pop     ebp
0x69C843: pop     edi
0x69C844: pop     esi
0x69C845: pop     ebx
0x69C846: add     esp, 8
0x69C849: retn    4
