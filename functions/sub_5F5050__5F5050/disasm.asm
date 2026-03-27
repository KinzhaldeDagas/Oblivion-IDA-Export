0x5F5050: sub     esp, 8
0x5F5053: push    ebx
0x5F5054: push    edi
0x5F5055: mov     edi, ecx
0x5F5057: call    TESObjectREFR_GetAnimData
0x5F505C: mov     ebx, eax
0x5F505E: test    ebx, ebx
0x5F5060: jz      loc_5F5160
0x5F5066: cmp     dword ptr [edi+58h], 0
0x5F506A: jz      loc_5F5160
0x5F5070: mov     al, [esp+10h+arg_0]
0x5F5074: test    al, 1
0x5F5076: push    ebp
0x5F5077: mov     ebp, 0FFh
0x5F507C: jz      short loc_5F5085
0x5F507E: mov     ebp, 0Bh
0x5F5083: jmp     short loc_5F50A4
0x5F5085: test    al, 2
0x5F5087: jz      short loc_5F5090
0x5F5089: mov     ebp, 0Ch
0x5F508E: jmp     short loc_5F50A4
0x5F5090: test    al, 4
0x5F5092: jz      short loc_5F509B
0x5F5094: mov     ebp, 0Dh
0x5F5099: jmp     short loc_5F50A4
0x5F509B: test    al, 8
0x5F509D: jz      short loc_5F50A4
0x5F509F: mov     ebp, 0Eh
0x5F50A4: push    esi
0x5F50A5: push    0
0x5F50A7: push    0
0x5F50A9: push    ebp
0x5F50AA: mov     ecx, edi
0x5F50AC: call    Actor_LoadAnimGroup?
0x5F50B1: movzx   esi, ax
0x5F50B4: movzx   eax, si
0x5F50B7: add     eax, 0FFFFFFF5h
0x5F50BA: cmp     eax, 3
0x5F50BD: ja      loc_5F5151
0x5F50C3: push    0FFFFFFFFh
0x5F50C5: push    1
0x5F50C7: push    esi
0x5F50C8: mov     ecx, ebx
0x5F50CA: call    ActorAnimData_PlayAnimGroup
0x5F50CF: push    0
0x5F50D1: mov     ecx, ebx
0x5F50D3: call    sub_4706E0
0x5F50D8: push    eax
0x5F50D9: push    9
0x5F50DB: mov     ecx, edi
0x5F50DD: call    HighPRocess_DoAction?????
0x5F50E2: mov     eax, [edi]
0x5F50E4: mov     edx, [eax+3A4h]
0x5F50EA: push    1
0x5F50EC: push    esi
0x5F50ED: mov     ecx, edi
0x5F50EF: call    edx
0x5F50F1: fld1
0x5F50F3: and     esi, 0FF03h
0x5F50F9: fstp    dword ptr [esp+18h+arg_0]
0x5F50FD: mov     ecx, edi
0x5F50FF: or      esi, 3
0x5F5102: call    sub_5E3590
0x5F5107: fstp    dword ptr [esp+18h+var_8]
0x5F510B: push    esi
0x5F510C: mov     ecx, ebx
0x5F510E: call    sub_472330
0x5F5113: test    ax, ax
0x5F5116: jz      short loc_5F513B
0x5F5118: fld     dword ptr [esp+18h+var_8]
0x5F511C: push    esi
0x5F511D: mov     ecx, ebx
0x5F511F: fstp    [esp+1Ch+var_8]
0x5F5123: call    sub_472330
0x5F5128: movsx   eax, ax
0x5F512B: mov     dword ptr [esp+18h+arg_0], eax
0x5F512F: fild    dword ptr [esp+18h+arg_0]
0x5F5133: fdivr   [esp+18h+var_8]
0x5F5137: fstp    dword ptr [esp+18h+arg_0]
0x5F513B: fld     dword ptr [esp+18h+arg_0]
0x5F513F: pop     esi
0x5F5140: mov     eax, ebp
0x5F5142: fstp    dword ptr [ebx+0BCh]
0x5F5148: pop     ebp
0x5F5149: pop     edi
0x5F514A: pop     ebx
0x5F514B: add     esp, 8
0x5F514E: retn    4
0x5F5151: pop     esi
0x5F5152: pop     ebp
0x5F5153: pop     edi
0x5F5154: mov     eax, 0FFh
0x5F5159: pop     ebx
0x5F515A: add     esp, 8
0x5F515D: retn    4
0x5F5160: pop     edi
0x5F5161: mov     eax, 0FFh
0x5F5166: pop     ebx
0x5F5167: add     esp, 8
0x5F516A: retn    4
