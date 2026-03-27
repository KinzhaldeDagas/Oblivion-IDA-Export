0x415360: push    esi
0x415361: push    0
0x415363: push    3
0x415365: or      esi, 0FFFFFFFFh
0x415368: call    EffectItemList_GetStrongestItem
0x41536D: test    eax, eax
0x41536F: jz      short EffectItemList_GetSchoolAV___Return_Invalid
0x415371: mov     ecx, eax
0x415373: call    EffectItem_GetSchool
0x415378: push    eax
0x415379: call    Magic_GetSkillAVFromSchool
0x41537E: add     esp, 4
0x415381: pop     esi
0x415382: retn
