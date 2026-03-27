0x684530: push    0FFFFFFFFh
0x684532: push    offset SEH_6CED50
0x684537: mov     eax, large fs:0
0x68453D: push    eax
0x68453E: sub     esp, 8
0x684541: push    ebx
0x684542: push    ebp
0x684543: push    esi
0x684544: push    edi
0x684545: mov     eax, ds:0B30AACh
0x68454A: xor     eax, esp
0x68454C: push    eax
0x68454D: lea     eax, [esp+28h+var_C]
0x684551: mov     large fs:0, eax
0x684557: mov     eax, ds:0B33EA0h
0x68455C: fild    dword ptr ds:0B33EA0h
0x684562: test    eax, eax
0x684564: jge     short loc_68456C
0x684566: fadd    dword ptr ds:0A2FC78h
0x68456C: mov     ebp, [esp+28h+arg_4]
0x684570: fstp    [esp+28h+var_14]
0x684574: mov     [esp+28h+var_10], 0
0x68457C: mov     esi, offset dword_B3C094
0x684581: xor     ebx, ebx
0x684583: mov     edi, [esi]
0x684585: test    edi, edi
0x684587: jz      short loc_6845D4
0x684589: fld     [esp+28h+var_14]
0x68458D: fsub    dword ptr [edi+18h]
0x684590: fcomp   qword ptr ds:0A74C98h
0x684596: fnstsw  ax
0x684598: test    ah, 5
0x68459B: jp      loc_684666
0x6845A1: mov     ecx, [esp+28h+arg_0]
0x6845A5: cmp     [edi], ecx
0x6845A7: jnz     short loc_6845D4
0x6845A9: fld     dword ptr ds:0A417B4h
0x6845AF: push    ecx
0x6845B0: mov     ecx, ebp
0x6845B2: fstp    [esp+2Ch+var_2C]; float
0x6845B5: call    sub_6899C0
0x6845BA: push    eax; int
0x6845BB: lea     ecx, [edi+4]
0x6845BE: call    sub_6899C0
0x6845C3: push    eax; int
0x6845C4: call    sub_47D810
0x6845C9: add     esp, 0Ch
0x6845CC: test    al, al
0x6845CE: jz      short loc_6845D4
0x6845D0: mov     [esp+28h+var_10], edi
0x6845D4: mov     ebx, esi
0x6845D6: mov     esi, [esi+4]
0x6845D9: test    esi, esi
0x6845DB: jnz     short loc_684583
0x6845DD: mov     eax, [esp+28h+var_10]
0x6845E1: test    eax, eax
0x6845E3: jnz     loc_6846C3
0x6845E9: push    20h ; ' '; Size
0x6845EB: call    FormHeapAlloc
0x6845F0: mov     esi, eax
0x6845F2: add     esp, 4
0x6845F5: mov     [esp+28h+var_10], esi
0x6845F9: xor     eax, eax
0x6845FB: cmp     esi, eax
0x6845FD: mov     [esp+28h+var_4], eax
0x684601: jz      short loc_68460D
0x684603: lea     ecx, [esi+4]
0x684606: call    sub_68CB30
0x68460B: mov     eax, esi
0x68460D: mov     edx, [esp+28h+arg_0]
0x684611: fld     [esp+28h+var_14]
0x684615: mov     [eax], edx
0x684617: mov     ecx, [ebp+0]
0x68461A: mov     [eax+4], ecx
0x68461D: mov     edx, [ebp+4]
0x684620: mov     [eax+8], edx
0x684623: mov     ecx, [ebp+8]
0x684626: mov     [eax+0Ch], ecx
0x684629: mov     edx, [ebp+0Ch]
0x68462C: mov     [eax+10h], edx
0x68462F: mov     ecx, [ebp+10h]
0x684632: fstp    dword ptr [eax+18h]
0x684635: mov     dl, [esp+28h+arg_8]
0x684639: mov     [eax+14h], ecx
0x68463C: push    eax
0x68463D: mov     ecx, offset dword_B3C094
0x684642: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x68464A: mov     [eax+1Ch], dl
0x68464D: call    BSSimpleList_PushFront
0x684652: mov     ecx, [esp+28h+var_C]
0x684656: mov     large fs:0, ecx
0x68465D: pop     ecx
0x68465E: pop     edi
0x68465F: pop     esi
0x684660: pop     ebp
0x684661: pop     ebx
0x684662: add     esp, 14h
0x684665: retn
0x684666: test    ebx, ebx
0x684668: jz      short loc_68468B
0x68466A: push    edi
0x68466B: mov     ecx, ebx
0x68466D: call    BSSimpleList_Remove
0x684672: lea     ecx, [edi+4]; void *
0x684675: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x68467A: push    edi
0x68467B: call    FormHeapFree
0x684680: mov     esi, [ebx+4]
0x684683: add     esp, 4
0x684686: jmp     loc_6845D9
0x68468B: mov     eax, [esi+4]
0x68468E: test    eax, eax
0x684690: jz      short loc_6846A7
0x684692: mov     edx, [eax+4]
0x684695: mov     [esi+4], edx
0x684698: mov     ecx, [eax]
0x68469A: push    eax
0x68469B: mov     [esi], ecx
0x68469D: call    FormHeapFree
0x6846A2: add     esp, 4
0x6846A5: jmp     short loc_6846AD
0x6846A7: mov     dword ptr [esi], 0
0x6846AD: lea     ecx, [edi+4]; void *
0x6846B0: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x6846B5: push    edi
0x6846B6: call    FormHeapFree
0x6846BB: add     esp, 4
0x6846BE: jmp     loc_6845D9
0x6846C3: fld     [esp+28h+var_14]
0x6846C7: fstp    dword ptr [eax+18h]
0x6846CA: mov     ecx, [ebp+0]
0x6846CD: mov     [eax+4], ecx
0x6846D0: mov     edx, [ebp+4]
0x6846D3: mov     [eax+8], edx
0x6846D6: mov     ecx, [ebp+8]
0x6846D9: mov     [eax+0Ch], ecx
0x6846DC: mov     edx, [ebp+0Ch]
0x6846DF: mov     [eax+10h], edx
0x6846E2: mov     ecx, [ebp+10h]
0x6846E5: mov     dl, [esp+28h+arg_8]
0x6846E9: mov     [eax+14h], ecx
0x6846EC: mov     [eax+1Ch], dl
0x6846EF: mov     ecx, [esp+28h+var_C]
0x6846F3: mov     large fs:0, ecx
0x6846FA: pop     ecx
0x6846FB: pop     edi
0x6846FC: pop     esi
0x6846FD: pop     ebp
0x6846FE: pop     ebx
0x6846FF: add     esp, 14h
0x684702: retn
