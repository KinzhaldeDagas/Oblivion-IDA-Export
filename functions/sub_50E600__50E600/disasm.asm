0x50E600: push    ecx
0x50E601: push    edi
0x50E602: call    sub_4F9FA0
0x50E607: push    0
0x50E609: mov     byte ptr [esp+0Ch+var_4], al
0x50E60D: call    sub_4F9F90
0x50E612: mov     edi, ds:0B33A98h
0x50E618: add     esp, 4
0x50E61B: add     edi, 84h ; '„'
0x50E621: jz      short loc_50E663
0x50E623: push    ebx
0x50E624: push    esi
0x50E625: cmp     dword ptr [edi+4], 0
0x50E629: jnz     short loc_50E630
0x50E62B: cmp     dword ptr [edi], 0
0x50E62E: jz      short loc_50E661
0x50E630: mov     ebx, [edi]
0x50E632: lea     esi, [ebx+40h]
0x50E635: test    esi, esi
0x50E637: jz      short loc_50E65A
0x50E639: lea     esp, [esp+0]
0x50E640: cmp     dword ptr [esi+4], 0
0x50E644: jnz     short loc_50E64B
0x50E646: cmp     dword ptr [esi], 0
0x50E649: jz      short loc_50E65A
0x50E64B: mov     ecx, [esi]
0x50E64D: push    ebx
0x50E64E: call    sub_52B080
0x50E653: mov     esi, [esi+4]
0x50E656: test    esi, esi
0x50E658: jnz     short loc_50E640
0x50E65A: mov     edi, [edi+4]
0x50E65D: test    edi, edi
0x50E65F: jnz     short loc_50E625
0x50E661: pop     esi
0x50E662: pop     ebx
0x50E663: mov     eax, [esp+8+var_4]
0x50E667: push    eax
0x50E668: call    sub_4F9F90
0x50E66D: add     esp, 4
0x50E670: cmp     byte ptr ds:0B361ACh, 0
0x50E677: pop     edi
0x50E678: jz      short loc_50E693
0x50E67A: mov     ecx, [esp+4+arg_18]
0x50E67E: fld     qword ptr [ecx]
0x50E680: sub     esp, 8
0x50E683: fstp    [esp+0Ch+var_C]
0x50E686: push    offset aAllQuestStages; "All Quest Stages Completed."
0x50E68B: call    Interface_ConsolePrint
0x50E690: add     esp, 0Ch
0x50E693: mov     al, 1
0x50E695: pop     ecx
0x50E696: retn
