0x4CB2B0: push    0FFFFFFFFh
0x4CB2B2: push    offset SEH_4CB2B0
0x4CB2B7: mov     eax, large fs:0
0x4CB2BD: push    eax
0x4CB2BE: sub     esp, 10h
0x4CB2C1: push    ebx
0x4CB2C2: push    ebp
0x4CB2C3: push    esi
0x4CB2C4: push    edi
0x4CB2C5: mov     eax, ds:0B30AACh
0x4CB2CA: xor     eax, esp
0x4CB2CC: push    eax
0x4CB2CD: lea     eax, [esp+30h+var_C]
0x4CB2D1: mov     large fs:0, eax
0x4CB2D7: mov     edi, ecx
0x4CB2D9: mov     [esp+30h+var_14], edi
0x4CB2DD: cmp     [esp+30h+arg_4], 0
0x4CB2E2: jz      loc_4CB492
0x4CB2E8: mov     ebp, [esp+30h+arg_0]
0x4CB2EC: test    ebp, ebp
0x4CB2EE: jz      loc_4CB492
0x4CB2F4: lea     ecx, [ebp+44h]
0x4CB2F7: call    sub_420680
0x4CB2FC: push    edi; a2
0x4CB2FD: mov     ecx, offset stru_B35C80; this
0x4CB302: mov     [esp+34h+var_18], eax
0x4CB306: call    sub_496EA0
0x4CB30B: lea     ebx, [edi+48h]
0x4CB30E: test    ebx, ebx
0x4CB310: mov     [esp+30h+var_1C], ebx
0x4CB314: jz      loc_4CB487
0x4CB31A: jmp     short loc_4CB324
0x4CB31C: align 10h
0x4CB320: mov     ebx, [esp+30h+var_1C]
0x4CB324: mov     esi, [ebx]
0x4CB326: test    esi, esi
0x4CB328: jz      loc_4CB487
0x4CB32E: mov     eax, [esi+8]
0x4CB331: mov     ecx, eax
0x4CB333: shr     ecx, 0Bh
0x4CB336: test    cl, 1
0x4CB339: jnz     def_4CB389; jumptable 004CB389 default case, cases 24,28-32,35-37
0x4CB33F: shr     eax, 5
0x4CB342: test    al, 1
0x4CB344: jnz     def_4CB389; jumptable 004CB389 default case, cases 24,28-32,35-37
0x4CB34A: push    0
0x4CB34C: push    ebp
0x4CB34D: mov     ecx, esi
0x4CB34F: call    TESOBjectREFR_IsOwnedBy
0x4CB354: test    al, al
0x4CB356: jz      def_4CB389; jumptable 004CB389 default case, cases 24,28-32,35-37
0x4CB35C: cmp     esi, [esp+30h+var_18]
0x4CB360: jz      def_4CB389; jumptable 004CB389 default case, cases 24,28-32,35-37
0x4CB366: mov     edx, [esi]
0x4CB368: mov     eax, [edx+170h]
0x4CB36E: mov     ecx, esi
0x4CB370: call    eax
0x4CB372: movzx   eax, byte ptr [eax+4]
0x4CB376: add     eax, 0FFFFFFEDh; switch 22 cases
0x4CB379: cmp     eax, 15h
0x4CB37C: ja      def_4CB389; jumptable 004CB389 default case, cases 24,28-32,35-37
0x4CB382: movzx   ecx, ds:byte_4CB4B4[eax]
0x4CB389: jmp     ds:jpt_4CB389[ecx*4]; switch jump
0x4CB390: push    0Ch; jumptable 004CB389 cases 19-22,25-27,33,34,38-40
0x4CB392: call    FormHeapAlloc
0x4CB397: mov     ebx, eax
0x4CB399: add     esp, 4
0x4CB39C: mov     [esp+30h+var_10], ebx
0x4CB3A0: xor     edi, edi
0x4CB3A2: cmp     ebx, edi
0x4CB3A4: mov     [esp+30h+var_4], edi
0x4CB3A8: jz      short loc_4CB3C3
0x4CB3AA: mov     edx, [esi]
0x4CB3AC: mov     eax, [edx+170h]
0x4CB3B2: push    edi
0x4CB3B3: mov     ecx, esi
0x4CB3B5: call    eax
0x4CB3B7: push    eax
0x4CB3B8: mov     ecx, ebx
0x4CB3BA: call    ContainerEntryExtraData_constr
0x4CB3BF: mov     ebp, eax
0x4CB3C1: jmp     short loc_4CB3C5
0x4CB3C3: xor     ebp, ebp
0x4CB3C5: or      ebx, 0FFFFFFFFh
0x4CB3C8: cmp     [ebp+0], edi
0x4CB3CB: mov     [esp+30h+var_4], ebx
0x4CB3CF: jnz     short loc_4CB3EB
0x4CB3D1: push    8; Size
0x4CB3D3: call    FormHeapAlloc
0x4CB3D8: add     esp, 4
0x4CB3DB: cmp     eax, edi
0x4CB3DD: jz      short loc_4CB3E6
0x4CB3DF: mov     [eax], edi
0x4CB3E1: mov     [eax+4], edi
0x4CB3E4: jmp     short loc_4CB3E8
0x4CB3E6: xor     eax, eax
0x4CB3E8: mov     [ebp+0], eax
0x4CB3EB: push    14h; Size
0x4CB3ED: call    FormHeapAlloc
0x4CB3F2: add     esp, 4
0x4CB3F5: mov     [esp+30h+var_10], eax
0x4CB3F9: cmp     eax, edi
0x4CB3FB: mov     [esp+30h+var_4], 1
0x4CB403: jz      short loc_4CB40E
0x4CB405: mov     ecx, eax
0x4CB407: call    ExtraDataList_constr
0x4CB40C: mov     edi, eax
0x4CB40E: mov     [esp+30h+var_4], ebx
0x4CB412: lea     ebx, [esi+44h]
0x4CB415: push    ebx
0x4CB416: mov     ecx, edi
0x4CB418: call    ExtraDataList_DuplicateListForContainer
0x4CB41D: push    esi
0x4CB41E: mov     ecx, edi
0x4CB420: call    sub_41E710
0x4CB425: mov     ecx, edi
0x4CB427: call    ExtraDataList_RemoveOwner
0x4CB42C: mov     ecx, [ebp+0]
0x4CB42F: push    edi
0x4CB430: call    BSSimpleList_PushFront
0x4CB435: mov     ecx, ebx
0x4CB437: call    ExtraDataList_GetExtraCount
0x4CB43C: movsx   ecx, ax
0x4CB43F: push    ecx
0x4CB440: mov     ecx, ebp
0x4CB442: call    sub_60D020
0x4CB447: mov     ecx, [esp+30h+arg_4]
0x4CB44B: push    1
0x4CB44D: push    ebp
0x4CB44E: call    ContainerExtraData_AddEntry
0x4CB453: mov     edi, [esp+30h+var_14]
0x4CB457: mov     ebp, [esp+30h+arg_0]
0x4CB45B: mov     ebx, [esp+30h+var_1C]
0x4CB45F: jmp     short def_4CB389; jumptable 004CB389 default case, cases 24,28-32,35-37
0x4CB461: lea     ecx, [esi+44h]; jumptable 004CB389 case 23
0x4CB464: call    ExtraDataList_GetContainerChanges
0x4CB469: mov     edx, [esp+30h+arg_4]
0x4CB46D: push    0
0x4CB46F: push    esi
0x4CB470: push    edx
0x4CB471: mov     ecx, eax
0x4CB473: call    sub_48E9A0
0x4CB478: mov     eax, [ebx+4]; jumptable 004CB389 default case, cases 24,28-32,35-37
0x4CB47B: test    eax, eax
0x4CB47D: mov     [esp+30h+var_1C], eax
0x4CB481: jnz     loc_4CB320
0x4CB487: push    edi; a2
0x4CB488: mov     ecx, offset stru_B35C80; this
0x4CB48D: call    sub_496F50
0x4CB492: mov     ecx, [esp+30h+var_C]
0x4CB496: mov     large fs:0, ecx
0x4CB49D: pop     ecx
0x4CB49E: pop     edi
0x4CB49F: pop     esi
0x4CB4A0: pop     ebp
0x4CB4A1: pop     ebx
0x4CB4A2: add     esp, 1Ch
0x4CB4A5: retn    8
