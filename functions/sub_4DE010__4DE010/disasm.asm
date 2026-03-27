0x4DE010: cmp     byte ptr ds:0B09870h, 0
0x4DE017: jnz     loc_4DE0D8
0x4DE01D: cmp     byte ptr ds:0B09868h, 0
0x4DE024: push    ebp
0x4DE025: mov     ebp, [esp+4+arg_0]
0x4DE029: push    esi
0x4DE02A: push    edi
0x4DE02B: jz      loc_4DE0C6
0x4DE031: test    ebp, ebp
0x4DE033: jz      loc_4DE0C6
0x4DE039: mov     ecx, ebp
0x4DE03B: call    sub_452A60
0x4DE040: mov     edi, eax
0x4DE042: push    edi
0x4DE043: call    sub_4DC270
0x4DE048: mov     esi, eax
0x4DE04A: add     esp, 4
0x4DE04D: test    esi, esi
0x4DE04F: jz      short loc_4DE0C6
0x4DE051: mov     eax, [esi]
0x4DE053: mov     edx, [eax+170h]
0x4DE059: mov     ecx, esi
0x4DE05B: call    edx
0x4DE05D: test    eax, eax
0x4DE05F: jz      short loc_4DE0C6
0x4DE061: mov     eax, [esi]
0x4DE063: mov     edx, [eax+170h]
0x4DE069: mov     ecx, esi
0x4DE06B: call    edx
0x4DE06D: movzx   eax, byte ptr [eax+4]
0x4DE071: push    eax
0x4DE072: call    TESContainer_IsInventoryItemType
0x4DE077: add     esp, 4
0x4DE07A: test    al, al
0x4DE07C: jz      short loc_4DE0C6
0x4DE07E: mov     eax, [esi]
0x4DE080: mov     edx, [eax+170h]
0x4DE086: mov     ecx, esi
0x4DE088: call    edx
0x4DE08A: cmp     byte ptr [eax+4], 1Ah
0x4DE08E: jnz     short loc_4DE0A9
0x4DE090: mov     eax, [esi]
0x4DE092: mov     edx, [eax+170h]
0x4DE098: mov     ecx, esi
0x4DE09A: call    edx
0x4DE09C: test    eax, eax
0x4DE09E: jz      short loc_4DE0A9
0x4DE0A0: mov     eax, [eax+7Ch]
0x4DE0A3: shr     eax, 1
0x4DE0A5: test    al, 1
0x4DE0A7: jz      short loc_4DE0C6
0x4DE0A9: mov     cx, [edi+18h]
0x4DE0AD: mov     edx, [esp+0Ch+arg_4]
0x4DE0B1: and     cx, 0FFF9h
0x4DE0B6: or      cx, 10h
0x4DE0BA: mov     [edi+18h], cx
0x4DE0BE: pop     edi
0x4DE0BF: pop     esi
0x4DE0C0: mov     byte ptr [edx+4], 0
0x4DE0C4: pop     ebp
0x4DE0C5: retn
0x4DE0C6: mov     eax, [esp+0Ch+arg_4]
0x4DE0CA: push    eax
0x4DE0CB: push    ebp
0x4DE0CC: call    sub_88A870
0x4DE0D1: add     esp, 8
0x4DE0D4: pop     edi
0x4DE0D5: pop     esi
0x4DE0D6: pop     ebp
0x4DE0D7: retn
0x4DE0D8: mov     ecx, [esp+arg_0]
0x4DE0DC: call    sub_452A60
0x4DE0E1: mov     cx, [eax+18h]
0x4DE0E5: mov     edx, [esp+arg_4]
0x4DE0E9: and     cx, 0FFF9h
0x4DE0EE: or      cx, 10h
0x4DE0F2: mov     [eax+18h], cx
0x4DE0F6: mov     byte ptr [edx+4], 0
0x4DE0FA: retn
