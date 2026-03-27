0x51E240: sub     esp, 14h
0x51E243: cmp     [esp+14h+arg_C], 0
0x51E248: mov     eax, ds:0BA9DE4h
0x51E24D: push    edi
0x51E24E: mov     edi, ecx
0x51E250: mov     ecx, large fs:2Ch
0x51E257: mov     eax, [ecx+eax*4]
0x51E25A: mov     dl, [eax+185h]
0x51E260: mov     [esp+18h+var_C], edi
0x51E264: mov     [esp+18h+var_4], eax
0x51E268: mov     [esp+18h+var_11], dl
0x51E26C: jnz     short loc_51E275
0x51E26E: mov     byte ptr [eax+185h], 0
0x51E275: cmp     [esp+18h+arg_8], 0
0x51E27A: push    ebx
0x51E27B: push    esi
0x51E27C: mov     esi, [esp+20h+a1]
0x51E280: jnz     short loc_51E2AE
0x51E282: mov     eax, [esi]
0x51E284: mov     edx, [eax+190h]
0x51E28A: mov     ecx, esi
0x51E28C: call    edx
0x51E28E: test    al, al
0x51E290: jz      short loc_51E2AE
0x51E292: mov     ecx, [esi+58h]
0x51E295: test    ecx, ecx
0x51E297: jz      short loc_51E2AE
0x51E299: mov     eax, [ecx]
0x51E29B: mov     edx, [eax+138h]
0x51E2A1: call    edx
0x51E2A3: test    al, al
0x51E2A5: jz      short loc_51E2AE
0x51E2A7: mov     ecx, esi
0x51E2A9: call    UnequipWeapon
0x51E2AE: xor     ebx, ebx
0x51E2B0: cmp     edi, ebx
0x51E2B2: jz      short loc_51E2B9
0x51E2B4: lea     eax, [edi+44h]
0x51E2B7: jmp     short loc_51E2BB
0x51E2B9: xor     eax, eax
0x51E2BB: push    ebp
0x51E2BC: push    eax
0x51E2BD: push    esi; a1
0x51E2BE: call    ContainerExtraData_GetContainerExtraDataForRef
0x51E2C3: add     esp, 8
0x51E2C6: mov     ebp, eax
0x51E2C8: push    1
0x51E2CA: mov     ecx, ebp
0x51E2CC: call    ContainerExtraData_UnequipAll
0x51E2D1: push    ebx; int
0x51E2D2: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x51E2D7: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x51E2DC: push    ebx; int
0x51E2DD: push    esi; void *
0x51E2DE: call    OblivionDynamicCast
0x51E2E3: mov     edi, eax
0x51E2E5: add     esp, 14h
0x51E2E8: cmp     edi, ebx
0x51E2EA: jz      short loc_51E329
0x51E2EC: mov     ecx, [edi+58h]
0x51E2EF: cmp     ecx, ebx
0x51E2F1: jz      short loc_51E329
0x51E2F3: mov     eax, [ecx]
0x51E2F5: mov     edx, [eax+10Ch]
0x51E2FB: push    ebx
0x51E2FC: call    edx
0x51E2FE: mov     ecx, [edi+58h]
0x51E301: mov     eax, [ecx]
0x51E303: mov     edx, [eax+110h]
0x51E309: push    ebx
0x51E30A: call    edx
0x51E30C: mov     ecx, [edi+58h]
0x51E30F: mov     eax, [ecx]
0x51E311: mov     edx, [eax+108h]
0x51E317: push    ebx
0x51E318: call    edx
0x51E31A: mov     ecx, [edi+58h]
0x51E31D: mov     eax, [ecx]
0x51E31F: mov     edx, [eax+104h]
0x51E325: push    ebx
0x51E326: push    ebx
0x51E327: call    edx
0x51E329: cmp     [esp+24h+arg_4], bl
0x51E32D: mov     dword ptr [esp+24h+arg_C], ebx
0x51E331: mov     [esp+24h+a1], ebx
0x51E335: mov     [esp+24h+var_10], ebx
0x51E339: jz      short loc_51E34F
0x51E33B: mov     eax, [esp+24h+var_C]
0x51E33F: push    1
0x51E341: push    0Dh
0x51E343: push    eax
0x51E344: mov     ecx, ebp
0x51E346: call    sub_48C870
0x51E34B: mov     dword ptr [esp+24h+arg_C], eax
0x51E34F: cmp     [esp+24h+arg_8], bl
0x51E353: fldz
0x51E355: fstp    [esp+24h+var_8]
0x51E359: jz      short loc_51E3B7
0x51E35B: mov     ebx, [esp+24h+var_C]
0x51E35F: push    1
0x51E361: push    0FFFFFFFFh
0x51E363: lea     ecx, [esp+2Ch+var_8]
0x51E367: push    ecx
0x51E368: push    ebx
0x51E369: mov     ecx, ebp
0x51E36B: call    sub_48BDA0
0x51E370: test    eax, eax
0x51E372: mov     [esp+24h+a1], eax
0x51E376: jz      short loc_51E3B3
0x51E378: mov     edx, eax
0x51E37A: mov     eax, [edx+8]
0x51E37D: test    eax, eax
0x51E37F: jz      short loc_51E3B3
0x51E381: push    0; int
0x51E383: push    offset ??_R0?AVTESObjectWEAP@@@8; struct TypeDescriptor *
0x51E388: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x51E38D: push    0; int
0x51E38F: push    eax; void *
0x51E390: call    OblivionDynamicCast
0x51E395: add     esp, 14h
0x51E398: test    eax, eax
0x51E39A: jz      short loc_51E3B3
0x51E39C: cmp     byte ptr [eax+90h], 5
0x51E3A3: jnz     short loc_51E3B3
0x51E3A5: push    1
0x51E3A7: push    ebx
0x51E3A8: mov     ecx, ebp
0x51E3AA: call    sub_48B9C0
0x51E3AF: mov     [esp+24h+var_10], eax
0x51E3B3: mov     ebx, [esp+24h+a1]
0x51E3B7: mov     eax, dword ptr [esp+24h+arg_C]
0x51E3BB: test    eax, eax
0x51E3BD: jz      short loc_51E3FD
0x51E3BF: mov     eax, [eax+8]
0x51E3C2: mov     ecx, [esp+24h+var_C]
0x51E3C6: push    eax
0x51E3C7: call    sub_51D4C0
0x51E3CC: test    al, al
0x51E3CE: jz      short loc_51E3FD
0x51E3D0: mov     eax, dword ptr [esp+24h+arg_C]
0x51E3D4: mov     eax, [eax+8]
0x51E3D7: push    eax
0x51E3D8: mov     ecx, esi
0x51E3DA: call    Actor_IsObjectEquipped
0x51E3DF: test    al, al
0x51E3E1: jnz     short loc_51E3FD
0x51E3E3: mov     eax, dword ptr [esp+24h+arg_C]
0x51E3E7: mov     ecx, [eax+8]
0x51E3EA: mov     edx, [esi]
0x51E3EC: mov     edx, [edx+108h]
0x51E3F2: push    0
0x51E3F4: push    0
0x51E3F6: push    1
0x51E3F8: push    ecx
0x51E3F9: mov     ecx, esi
0x51E3FB: call    edx
0x51E3FD: test    ebx, ebx
0x51E3FF: jz      loc_51E4E1
0x51E405: mov     eax, [ebx+8]
0x51E408: mov     ecx, [esp+24h+var_C]
0x51E40C: push    eax
0x51E40D: call    sub_51D4C0
0x51E412: test    al, al
0x51E414: jz      loc_51E4E1
0x51E41A: mov     eax, [ebx+8]
0x51E41D: push    eax
0x51E41E: mov     ecx, esi
0x51E420: call    Actor_IsObjectEquipped
0x51E425: test    al, al
0x51E427: jnz     loc_51E4E1
0x51E42D: mov     ecx, [ebx+8]
0x51E430: mov     eax, [esi]
0x51E432: mov     edx, [eax+108h]
0x51E438: push    0
0x51E43A: push    0
0x51E43C: push    1
0x51E43E: push    ecx
0x51E43F: mov     ecx, esi
0x51E441: call    edx
0x51E443: mov     ebp, [esp+24h+var_10]
0x51E447: test    ebp, ebp
0x51E449: jz      short loc_51E486
0x51E44B: mov     eax, [ebp+8]
0x51E44E: push    eax
0x51E44F: mov     ecx, esi
0x51E451: call    Actor_IsObjectEquipped
0x51E456: test    al, al
0x51E458: jnz     short loc_51E486
0x51E45A: mov     ecx, [ebp+0]
0x51E45D: xor     eax, eax
0x51E45F: test    ecx, ecx
0x51E461: jz      short loc_51E465
0x51E463: mov     eax, [ecx]
0x51E465: mov     ecx, [esp+24h+var_10]
0x51E469: mov     ebp, [ebp+8]
0x51E46C: mov     ebx, [esi]
0x51E46E: push    0
0x51E470: push    eax
0x51E471: call    TESHealthForm_GetHealth
0x51E476: push    eax
0x51E477: mov     eax, [ebx+108h]
0x51E47D: push    ebp
0x51E47E: mov     ecx, esi
0x51E480: call    eax
0x51E482: mov     ebx, [esp+24h+a1]
0x51E486: test    edi, edi
0x51E488: jz      short loc_51E4E1
0x51E48A: mov     ecx, [edi+58h]
0x51E48D: test    ecx, ecx
0x51E48F: jz      short loc_51E4E1
0x51E491: mov     edx, [ecx]
0x51E493: mov     eax, [edx+124h]
0x51E499: push    0
0x51E49B: call    eax
0x51E49D: test    eax, eax
0x51E49F: jnz     short loc_51E4E1
0x51E4A1: mov     edx, [edi]
0x51E4A3: mov     eax, [edx+27Ch]
0x51E4A9: mov     ecx, edi
0x51E4AB: call    eax
0x51E4AD: test    eax, eax
0x51E4AF: jnz     short loc_51E4E1
0x51E4B1: mov     ecx, [edi+58h]
0x51E4B4: mov     edx, [ecx]
0x51E4B6: mov     eax, [edx+300h]
0x51E4BC: push    1
0x51E4BE: call    eax
0x51E4C0: mov     edx, [edi]
0x51E4C2: mov     eax, [edx+198h]
0x51E4C8: push    0
0x51E4CA: mov     ecx, edi
0x51E4CC: call    eax
0x51E4CE: test    al, al
0x51E4D0: jz      short loc_51E4E1
0x51E4D2: mov     ecx, [edi+58h]
0x51E4D5: mov     edx, [ecx]
0x51E4D7: mov     eax, [edx+308h]
0x51E4DD: push    1
0x51E4DF: call    eax
0x51E4E1: mov     ecx, dword ptr [esp+24h+arg_C]
0x51E4E5: test    ecx, ecx
0x51E4E7: pop     ebp
0x51E4E8: jz      short loc_51E4FC
0x51E4EA: call    ContainerEntryExtraData_DestroyDataTable
0x51E4EF: mov     ecx, dword ptr [esp+20h+arg_C]
0x51E4F3: push    ecx
0x51E4F4: call    FormHeapFree
0x51E4F9: add     esp, 4
0x51E4FC: test    ebx, ebx
0x51E4FE: jz      short loc_51E510
0x51E500: mov     ecx, ebx
0x51E502: call    ContainerEntryExtraData_DestroyDataTable
0x51E507: push    ebx
0x51E508: call    FormHeapFree
0x51E50D: add     esp, 4
0x51E510: mov     ecx, [esp+20h+var_10]
0x51E514: test    ecx, ecx
0x51E516: pop     esi
0x51E517: pop     ebx
0x51E518: jz      short loc_51E52C
0x51E51A: call    ContainerEntryExtraData_DestroyDataTable
0x51E51F: mov     edx, [esp+18h+var_10]
0x51E523: push    edx
0x51E524: call    FormHeapFree
0x51E529: add     esp, 4
0x51E52C: test    edi, edi
0x51E52E: mov     al, [esp+18h+var_11]
0x51E532: mov     ecx, [esp+18h+var_4]
0x51E536: mov     [ecx+185h], al
0x51E53C: jz      short loc_51E54D
0x51E53E: cmp     dword ptr [edi+58h], 0
0x51E542: jz      short loc_51E54D
0x51E544: push    1
0x51E546: mov     ecx, edi
0x51E548: call    sub_5EDA20
0x51E54D: pop     edi
0x51E54E: add     esp, 14h
0x51E551: retn    10h
