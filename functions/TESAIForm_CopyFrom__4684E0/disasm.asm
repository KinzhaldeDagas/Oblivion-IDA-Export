0x4684E0: mov     eax, [esp+arg_0]
0x4684E4: push    esi
0x4684E5: push    edi
0x4684E6: push    0; int
0x4684E8: push    offset ??_R0?AVTESAIForm@@@8; struct TypeDescriptor *
0x4684ED: push    offset ??_R0?AVBaseFormComponent@@@8; struct _s_RTTICompleteObjectLocator *
0x4684F2: push    0; int
0x4684F4: push    eax; void *
0x4684F5: mov     esi, ecx
0x4684F7: call    OblivionDynamicCast
0x4684FC: mov     edi, eax
0x4684FE: add     esp, 14h
0x468501: test    edi, edi
0x468503: jz      loc_468589
0x468509: movzx   ecx, byte ptr [edi+4]
0x46850D: mov     edx, [esi]
0x46850F: mov     eax, [edx+10h]
0x468512: mov     [esi+4], cl
0x468515: push    100h
0x46851A: mov     ecx, esi
0x46851C: call    eax
0x46851E: movzx   ecx, byte ptr [edi+5]
0x468522: mov     edx, [esi]
0x468524: mov     eax, [edx+10h]
0x468527: mov     [esi+5], cl
0x46852A: push    100h
0x46852F: mov     ecx, esi
0x468531: call    eax
0x468533: movzx   ecx, byte ptr [edi+6]
0x468537: mov     edx, [esi]
0x468539: mov     eax, [edx+10h]
0x46853C: mov     [esi+6], cl
0x46853F: push    100h
0x468544: mov     ecx, esi
0x468546: call    eax
0x468548: movzx   ecx, byte ptr [edi+7]
0x46854C: mov     edx, [esi]
0x46854E: mov     eax, [edx+10h]
0x468551: mov     [esi+7], cl
0x468554: push    100h
0x468559: mov     ecx, esi
0x46855B: call    eax
0x46855D: mov     ecx, [edi+8]
0x468560: mov     [esi+8], ecx
0x468563: movzx   eax, byte ptr [edi+0Ch]
0x468567: add     eax, 0Ch
0x46856A: lea     edx, [eax-0Ch]
0x46856D: cmp     edx, 14h
0x468570: ja      short loc_468577
0x468572: sub     al, 0Ch
0x468574: mov     [esi+0Ch], al
0x468577: mov     al, [edi+0Dh]
0x46857A: add     edi, 10h
0x46857D: push    edi
0x46857E: lea     ecx, [esi+10h]
0x468581: mov     [esi+0Dh], al
0x468584: call    sub_568F30
0x468589: pop     edi
0x46858A: pop     esi
0x46858B: retn    4
