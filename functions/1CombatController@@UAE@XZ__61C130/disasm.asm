0x61C130: push    0FFFFFFFFh
0x61C132: push    offset ??1CombatController@@UAE@XZ_SEH
0x61C137: mov     eax, large fs:0
0x61C13D: push    eax
0x61C13E: sub     esp, 10h
0x61C141: push    ebx
0x61C142: push    ebp
0x61C143: push    esi
0x61C144: push    edi
0x61C145: mov     eax, ds:0B30AACh
0x61C14A: xor     eax, esp
0x61C14C: push    eax
0x61C14D: lea     eax, [esp+30h+var_C]
0x61C151: mov     large fs:0, eax
0x61C157: mov     esi, ecx
0x61C159: mov     [esp+30h+var_14], esi
0x61C15D: mov     dword ptr [esi], offset ??_7CombatController@@6B@; const CombatController::`vftable'
0x61C163: mov     ecx, ds:0B33B00h
0x61C169: xor     ebp, ebp
0x61C16B: mov     ebx, 1
0x61C170: sub     ds:0B3B914h, ebx
0x61C176: mov     [esp+30h+var_4], ebp
0x61C17A: call    sub_45A500
0x61C17F: test    al, al
0x61C181: jnz     short loc_61C19C
0x61C183: mov     ecx, [esi+3Ch]
0x61C186: cmp     ecx, ebp
0x61C188: jz      short loc_61C19C
0x61C18A: call    Actor_IsBlocking
0x61C18F: test    al, al
0x61C191: jz      short loc_61C19C
0x61C193: mov     ecx, [esi+3Ch]
0x61C196: push    ebp; float
0x61C197: call    sub_5F4AE0
0x61C19C: mov     edi, ds:0B333C4h
0x61C1A2: push    edi
0x61C1A3: mov     ecx, esi
0x61C1A5: call    sub_613670
0x61C1AA: test    al, al
0x61C1AC: jz      short loc_61C1B5
0x61C1AE: add     dword ptr [edi+7A0h], 0FFFFFFFFh
0x61C1B5: sub     ds:0B3B910h, ebx
0x61C1BB: jns     short loc_61C1C3
0x61C1BD: mov     ds:0B3B910h, ebp
0x61C1C3: mov     ecx, [esi+18Ch]
0x61C1C9: cmp     ecx, ebp
0x61C1CB: mov     [esi+1A4h], bl
0x61C1D1: jz      loc_61C25F
0x61C1D7: mov     edx, [ecx+4]
0x61C1DA: xor     eax, eax
0x61C1DC: cmp     edx, ebp
0x61C1DE: jbe     short loc_61C1F6
0x61C1E0: mov     edi, [ecx+8]
0x61C1E3: mov     ecx, edi
0x61C1E5: cmp     [ecx], ebp
0x61C1E7: jnz     loc_61C53A
0x61C1ED: add     eax, ebx
0x61C1EF: add     ecx, 4
0x61C1F2: cmp     eax, edx
0x61C1F4: jb      short loc_61C1E5
0x61C1F6: xor     eax, eax
0x61C1F8: cmp     eax, ebp
0x61C1FA: mov     [esp+30h+var_18], eax
0x61C1FE: jz      short loc_61C243
0x61C200: lea     eax, [esp+30h+var_1C]
0x61C204: push    eax
0x61C205: lea     ecx, [esp+34h+var_10]
0x61C209: push    ecx
0x61C20A: mov     ecx, [esi+18Ch]
0x61C210: lea     edx, [esp+38h+var_18]
0x61C214: push    edx
0x61C215: mov     [esp+3Ch+var_1C], ebp
0x61C219: call    sub_452600
0x61C21E: mov     edi, [esp+30h+var_1C]
0x61C222: cmp     edi, ebp
0x61C224: jz      short loc_61C23D
0x61C226: mov     ecx, edi
0x61C228: call    sub_6B7240
0x61C22D: mov     ecx, edi; this
0x61C22F: call    sub_6B73E0
0x61C234: push    edi
0x61C235: call    FormHeapFree
0x61C23A: add     esp, 4
0x61C23D: cmp     [esp+30h+var_18], ebp
0x61C241: jnz     short loc_61C200
0x61C243: mov     ecx, [esi+18Ch]
0x61C249: call    NiTMap_Clear
0x61C24E: mov     ecx, [esi+18Ch]
0x61C254: cmp     ecx, ebp
0x61C256: jz      short loc_61C25F
0x61C258: mov     eax, [ecx]
0x61C25A: mov     edx, [eax]
0x61C25C: push    ebx
0x61C25D: call    edx
0x61C25F: mov     edi, [esi+40h]
0x61C262: cmp     edi, ebp
0x61C264: jz      short loc_61C280
0x61C266: mov     eax, [edi]
0x61C268: cmp     eax, ebp
0x61C26A: jz      short loc_61C280
0x61C26C: lea     esp, [esp+0]
0x61C270: mov     eax, [eax]
0x61C272: push    eax
0x61C273: mov     ecx, esi
0x61C275: call    sub_6162D0
0x61C27A: mov     eax, [edi]
0x61C27C: cmp     eax, ebp
0x61C27E: jnz     short loc_61C270
0x61C280: mov     eax, [esi+40h]
0x61C283: cmp     eax, ebp
0x61C285: jz      short loc_61C290
0x61C287: push    eax
0x61C288: call    FormHeapFree
0x61C28D: add     esp, 4
0x61C290: cmp     [esi+118h], ebp
0x61C296: jz      short loc_61C29F
0x61C298: mov     ecx, esi
0x61C29A: call    sub_612C70
0x61C29F: mov     edi, [esi+60h]
0x61C2A2: cmp     edi, ebp
0x61C2A4: jz      short loc_61C2F7
0x61C2A6: mov     ebp, [edi+4]
0x61C2A9: test    ebp, ebp
0x61C2AB: jnz     short loc_61C2B1
0x61C2AD: cmp     [edi], ebp
0x61C2AF: jz      short loc_61C2F5
0x61C2B1: mov     eax, [edi]
0x61C2B3: test    eax, eax
0x61C2B5: jz      short loc_61C2EF
0x61C2B7: cmp     dword ptr [eax+4], 0
0x61C2BB: jz      short loc_61C2D4
0x61C2BD: mov     ebx, [eax+4]
0x61C2C0: test    ebx, ebx
0x61C2C2: jz      short loc_61C2D4
0x61C2C4: mov     ecx, ebx
0x61C2C6: call    ContainerEntryExtraData_DestroyDataTable
0x61C2CB: push    ebx
0x61C2CC: call    FormHeapFree
0x61C2D1: add     esp, 4
0x61C2D4: mov     eax, [edi]
0x61C2D6: cmp     dword ptr [eax], 0
0x61C2D9: jz      short loc_61C2E4
0x61C2DB: mov     ecx, [eax]
0x61C2DD: push    1
0x61C2DF: call    sub_419F10
0x61C2E4: mov     edi, [edi]
0x61C2E6: push    edi
0x61C2E7: call    FormHeapFree
0x61C2EC: add     esp, 4
0x61C2EF: test    ebp, ebp
0x61C2F1: mov     edi, ebp
0x61C2F3: jnz     short loc_61C2A6
0x61C2F5: xor     ebp, ebp
0x61C2F7: mov     ecx, [esi+60h]
0x61C2FA: cmp     ecx, ebp
0x61C2FC: jz      short loc_61C30F
0x61C2FE: call    BSSimpleList_Clear
0x61C303: mov     eax, [esi+60h]
0x61C306: push    eax
0x61C307: call    FormHeapFree
0x61C30C: add     esp, 4
0x61C30F: mov     ecx, [esi+68h]
0x61C312: cmp     ecx, ebp
0x61C314: jz      short loc_61C327
0x61C316: call    BSSimpleList_Clear
0x61C31B: mov     eax, [esi+68h]
0x61C31E: push    eax
0x61C31F: call    FormHeapFree
0x61C324: add     esp, 4
0x61C327: mov     edi, [esi+64h]
0x61C32A: cmp     edi, ebp
0x61C32C: jz      short loc_61C381
0x61C32E: mov     edi, edi
0x61C330: mov     ebp, [edi+4]
0x61C333: test    ebp, ebp
0x61C335: jnz     short loc_61C33B
0x61C337: cmp     [edi], ebp
0x61C339: jz      short loc_61C37F
0x61C33B: mov     eax, [edi]
0x61C33D: test    eax, eax
0x61C33F: jz      short loc_61C379
0x61C341: cmp     dword ptr [eax+4], 0
0x61C345: jz      short loc_61C35E
0x61C347: mov     ebx, [eax+4]
0x61C34A: test    ebx, ebx
0x61C34C: jz      short loc_61C35E
0x61C34E: mov     ecx, ebx
0x61C350: call    ContainerEntryExtraData_DestroyDataTable
0x61C355: push    ebx
0x61C356: call    FormHeapFree
0x61C35B: add     esp, 4
0x61C35E: mov     eax, [edi]
0x61C360: cmp     dword ptr [eax], 0
0x61C363: jz      short loc_61C36E
0x61C365: mov     ecx, [eax]
0x61C367: push    1
0x61C369: call    sub_419F10
0x61C36E: mov     edi, [edi]
0x61C370: push    edi
0x61C371: call    FormHeapFree
0x61C376: add     esp, 4
0x61C379: test    ebp, ebp
0x61C37B: mov     edi, ebp
0x61C37D: jnz     short loc_61C330
0x61C37F: xor     ebp, ebp
0x61C381: mov     ecx, [esi+64h]
0x61C384: cmp     ecx, ebp
0x61C386: jz      short loc_61C399
0x61C388: call    BSSimpleList_Clear
0x61C38D: mov     eax, [esi+64h]
0x61C390: push    eax
0x61C391: call    FormHeapFree
0x61C396: add     esp, 4
0x61C399: mov     edi, [esi+5Ch]
0x61C39C: cmp     edi, ebp
0x61C39E: jz      short loc_61C3EF
0x61C3A0: mov     ebp, [edi+4]
0x61C3A3: test    ebp, ebp
0x61C3A5: jnz     short loc_61C3AB
0x61C3A7: cmp     [edi], ebp
0x61C3A9: jz      short loc_61C3EF
0x61C3AB: mov     eax, [edi]
0x61C3AD: test    eax, eax
0x61C3AF: jz      short loc_61C3E9
0x61C3B1: cmp     dword ptr [eax+4], 0
0x61C3B5: jz      short loc_61C3CE
0x61C3B7: mov     ebx, [eax+4]
0x61C3BA: test    ebx, ebx
0x61C3BC: jz      short loc_61C3CE
0x61C3BE: mov     ecx, ebx
0x61C3C0: call    ContainerEntryExtraData_DestroyDataTable
0x61C3C5: push    ebx
0x61C3C6: call    FormHeapFree
0x61C3CB: add     esp, 4
0x61C3CE: mov     eax, [edi]
0x61C3D0: cmp     dword ptr [eax], 0
0x61C3D3: jz      short loc_61C3DE
0x61C3D5: mov     ecx, [eax]
0x61C3D7: push    1
0x61C3D9: call    sub_419F10
0x61C3DE: mov     edi, [edi]
0x61C3E0: push    edi
0x61C3E1: call    FormHeapFree
0x61C3E6: add     esp, 4
0x61C3E9: test    ebp, ebp
0x61C3EB: mov     edi, ebp
0x61C3ED: jnz     short loc_61C3A0
0x61C3EF: mov     ecx, [esi+5Ch]
0x61C3F2: test    ecx, ecx
0x61C3F4: jz      short loc_61C407
0x61C3F6: call    BSSimpleList_Clear
0x61C3FB: mov     eax, [esi+5Ch]
0x61C3FE: push    eax
0x61C3FF: call    FormHeapFree
0x61C404: add     esp, 4
0x61C407: mov     ecx, [esi+0A4h]
0x61C40D: test    ecx, ecx
0x61C40F: jz      short loc_61C425
0x61C411: call    BSSimpleList_Clear
0x61C416: mov     eax, [esi+0A4h]
0x61C41C: push    eax
0x61C41D: call    FormHeapFree
0x61C422: add     esp, 4
0x61C425: mov     eax, [esi+94h]
0x61C42B: test    eax, eax
0x61C42D: jz      short loc_61C44C
0x61C42F: cmp     dword ptr [eax], 0
0x61C432: jz      short loc_61C43D
0x61C434: mov     ecx, [eax]
0x61C436: push    1
0x61C438: call    sub_419F10
0x61C43D: mov     eax, [esi+94h]
0x61C443: push    eax
0x61C444: call    FormHeapFree
0x61C449: add     esp, 4
0x61C44C: mov     eax, [esi+98h]
0x61C452: test    eax, eax
0x61C454: jz      short loc_61C473
0x61C456: cmp     dword ptr [eax], 0
0x61C459: jz      short loc_61C464
0x61C45B: mov     ecx, [eax]
0x61C45D: push    1
0x61C45F: call    sub_419F10
0x61C464: mov     eax, [esi+98h]
0x61C46A: push    eax
0x61C46B: call    FormHeapFree
0x61C470: add     esp, 4
0x61C473: mov     eax, [esi+9Ch]
0x61C479: test    eax, eax
0x61C47B: jz      short loc_61C49A
0x61C47D: cmp     dword ptr [eax], 0
0x61C480: jz      short loc_61C48B
0x61C482: mov     ecx, [eax]
0x61C484: push    1
0x61C486: call    sub_419F10
0x61C48B: mov     eax, [esi+9Ch]
0x61C491: push    eax
0x61C492: call    FormHeapFree
0x61C497: add     esp, 4
0x61C49A: mov     eax, [esi+90h]
0x61C4A0: test    eax, eax
0x61C4A2: jz      short loc_61C4C1
0x61C4A4: cmp     dword ptr [eax], 0
0x61C4A7: jz      short loc_61C4B2
0x61C4A9: mov     ecx, [eax]
0x61C4AB: push    1
0x61C4AD: call    sub_419F10
0x61C4B2: mov     eax, [esi+90h]
0x61C4B8: push    eax
0x61C4B9: call    FormHeapFree
0x61C4BE: add     esp, 4
0x61C4C1: mov     eax, [esi+0A0h]
0x61C4C7: test    eax, eax
0x61C4C9: jz      short loc_61C4E8
0x61C4CB: cmp     dword ptr [eax], 0
0x61C4CE: jz      short loc_61C4D9
0x61C4D0: mov     ecx, [eax]
0x61C4D2: push    1
0x61C4D4: call    sub_419F10
0x61C4D9: mov     eax, [esi+0A0h]
0x61C4DF: push    eax
0x61C4E0: call    FormHeapFree
0x61C4E5: add     esp, 4
0x61C4E8: cmp     dword ptr [esi+160h], 0
0x61C4EF: jz      short loc_61C50D
0x61C4F1: mov     eax, [esi+160h]
0x61C4F7: mov     edi, [eax+4]
0x61C4FA: push    eax
0x61C4FB: call    FormHeapFree
0x61C500: add     esp, 4
0x61C503: test    edi, edi
0x61C505: mov     [esi+160h], edi
0x61C50B: jnz     short loc_61C4F1
0x61C50D: mov     ecx, esi; this
0x61C50F: mov     dword ptr [esi+15Ch], 0
0x61C519: mov     [esp+30h+var_4], 0FFFFFFFFh
0x61C521: call    ??1TESPackage@@UAE@XZ; TESPackage::~TESPackage(void)
0x61C526: mov     ecx, dword ptr [esp+30h+var_C]
0x61C52A: mov     large fs:0, ecx
0x61C531: pop     ecx
0x61C532: pop     edi
0x61C533: pop     esi
0x61C534: pop     ebp
0x61C535: pop     ebx
0x61C536: add     esp, 1Ch
0x61C539: retn
0x61C53A: mov     eax, [edi+eax*4]
0x61C53D: jmp     loc_61C1F8
