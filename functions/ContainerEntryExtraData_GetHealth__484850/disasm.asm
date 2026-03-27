0x484850: sub     esp, 8
0x484853: push    esi
0x484854: push    edi
0x484855: push    0; int
0x484857: push    offset ??_R0?AVTESHealthForm@@@8; struct TypeDescriptor *
0x48485C: mov     esi, ecx
0x48485E: mov     eax, [esi+8]
0x484861: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x484866: push    0; int
0x484868: push    eax; void *
0x484869: call    OblivionDynamicCast
0x48486E: mov     edi, eax
0x484870: add     esp, 14h
0x484873: test    edi, edi
0x484875: jz      loc_48495C
0x48487B: mov     eax, [esi]
0x48487D: test    eax, eax
0x48487F: jz      loc_484932
0x484885: mov     esi, [eax]
0x484887: test    esi, esi
0x484889: jz      loc_484932
0x48488F: mov     ecx, esi
0x484891: call    ExtraDataList_GetHealthData
0x484896: fcomp   dword ptr ds:0A30634h
0x48489C: fnstsw  ax
0x48489E: test    ah, 44h
0x4848A1: jnp     short loc_4848FA
0x4848A3: mov     ecx, esi
0x4848A5: call    ExtraDataList_GetHealthData
0x4848AA: cmp     byte ptr [esp+10h+arg_0], 0
0x4848AF: jz      loc_484962
0x4848B5: mov     edx, [edi]
0x4848B7: fstp    [esp+10h+var_8]
0x4848BB: mov     eax, [edx+10h]
0x4848BE: mov     ecx, edi
0x4848C0: call    eax
0x4848C2: test    eax, eax
0x4848C4: mov     [esp+10h+arg_0], eax
0x4848C8: fild    [esp+10h+arg_0]
0x4848CC: jge     short loc_4848D4
0x4848CE: fadd    dword ptr ds:0A2FC78h
0x4848D4: fdivr   [esp+10h+var_8]
0x4848D8: push    ecx
0x4848D9: fmul    qword ptr ds:0A309F0h
0x4848DF: fstp    [esp+14h+arg_0]
0x4848E3: fld     [esp+14h+arg_0]
0x4848E7: fstp    [esp+14h+var_14]; float
0x4848EA: call    sub_4842F0
0x4848EF: add     esp, 4
0x4848F2: pop     edi
0x4848F3: pop     esi
0x4848F4: add     esp, 8
0x4848F7: retn    4
0x4848FA: cmp     byte ptr [esp+10h+arg_0], 0
0x4848FF: jnz     short loc_484924
0x484901: mov     edx, [edi]
0x484903: mov     eax, [edx+10h]
0x484906: mov     ecx, edi
0x484908: call    eax
0x48490A: test    eax, eax
0x48490C: mov     [esp+10h+arg_0], eax
0x484910: fild    [esp+10h+arg_0]
0x484914: jge     short loc_484962
0x484916: fadd    dword ptr ds:0A2FC78h
0x48491C: pop     edi
0x48491D: pop     esi
0x48491E: add     esp, 8
0x484921: retn    4
0x484924: fld     dword ptr ds:0A2FE7Ch
0x48492A: pop     edi
0x48492B: pop     esi
0x48492C: add     esp, 8
0x48492F: retn    4
0x484932: cmp     byte ptr [esp+10h+arg_0], 0
0x484937: jnz     short loc_484924
0x484939: mov     edx, [edi]
0x48493B: mov     eax, [edx+10h]
0x48493E: mov     ecx, edi
0x484940: call    eax
0x484942: test    eax, eax
0x484944: mov     [esp+10h+arg_0], eax
0x484948: fild    [esp+10h+arg_0]
0x48494C: jge     short loc_484962
0x48494E: fadd    dword ptr ds:0A2FC78h
0x484954: pop     edi
0x484955: pop     esi
0x484956: add     esp, 8
0x484959: retn    4
0x48495C: fld     dword ptr ds:0A30634h
0x484962: pop     edi
0x484963: pop     esi
0x484964: add     esp, 8
0x484967: retn    4
