0x6A46B0: mov     eax, [esp+arg_0]
0x6A46B4: push    esi
0x6A46B5: push    eax
0x6A46B6: mov     esi, ecx
0x6A46B8: call    ActiveEffect_Base_SaveSize
0x6A46BD: mov     edx, ds:0B33B00h
0x6A46C3: cmp     byte ptr [edx+7Ch], 2Ah ; '*'
0x6A46C7: movzx   ecx, ax
0x6A46CA: mov     [esp+4+arg_0], ecx
0x6A46CE: jb      short loc_6A46D5
0x6A46D0: add     [esp+4+arg_0], 2
0x6A46D5: mov     ecx, [esi+3Ch]
0x6A46D8: test    ecx, ecx
0x6A46DA: pop     esi
0x6A46DB: jz      short loc_6A46F0
0x6A46DD: call    ScriptEventList_GetSaveSize?
0x6A46E2: mov     cx, word ptr [esp+arg_0]
0x6A46E7: add     cx, ax
0x6A46EA: mov     ax, cx
0x6A46ED: retn    4
0x6A46F0: mov     ax, word ptr [esp+arg_0]
0x6A46F5: retn    4
