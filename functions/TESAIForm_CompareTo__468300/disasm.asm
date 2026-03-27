0x468300: mov     eax, [esp+arg_0]
0x468304: push    esi
0x468305: push    0; int
0x468307: push    offset ??_R0?AVTESAIForm@@@8; struct TypeDescriptor *
0x46830C: push    offset ??_R0?AVBaseFormComponent@@@8; struct _s_RTTICompleteObjectLocator *
0x468311: push    0; int
0x468313: push    eax; void *
0x468314: mov     esi, ecx
0x468316: call    OblivionDynamicCast
0x46831B: add     esp, 14h
0x46831E: test    eax, eax
0x468320: jnz     short loc_468328
0x468322: mov     al, 1
0x468324: pop     esi
0x468325: retn    4
0x468328: mov     cl, [esi+4]
0x46832B: cmp     cl, [eax+4]
0x46832E: jnz     short loc_468322
0x468330: mov     dl, [esi+5]
0x468333: cmp     dl, [eax+5]
0x468336: jnz     short loc_468322
0x468338: mov     cl, [esi+6]
0x46833B: cmp     cl, [eax+6]
0x46833E: jnz     short loc_468322
0x468340: mov     dl, [esi+7]
0x468343: cmp     dl, [eax+7]
0x468346: jnz     short loc_468322
0x468348: mov     ecx, [esi+8]
0x46834B: cmp     ecx, [eax+8]
0x46834E: jnz     short loc_468322
0x468350: movzx   edx, byte ptr [eax+0Ch]
0x468354: movzx   ecx, byte ptr [esi+0Ch]
0x468358: add     edx, 0Ch
0x46835B: add     ecx, 0Ch
0x46835E: cmp     ecx, edx
0x468360: jnz     short loc_468322
0x468362: mov     dl, [esi+0Dh]
0x468365: cmp     dl, [eax+0Dh]
0x468368: jnz     short loc_468322
0x46836A: add     eax, 10h
0x46836D: push    eax
0x46836E: lea     ecx, [esi+10h]
0x468371: call    sub_568FD0
0x468376: test    al, al
0x468378: setnz   al
0x46837B: pop     esi
0x46837C: retn    4
