0x4F5440: fldz
0x4F5442: push    esi
0x4F5443: mov     esi, [esp+4+arg_0]
0x4F5447: test    esi, esi
0x4F5449: push    edi
0x4F544A: mov     edi, [esp+8+arg_C]
0x4F544E: fstp    qword ptr [edi]
0x4F5450: jz      short loc_4F5476
0x4F5452: mov     eax, [esi]
0x4F5454: mov     edx, [eax+190h]
0x4F545A: mov     ecx, esi
0x4F545C: call    edx
0x4F545E: test    al, al
0x4F5460: jz      short loc_4F5476
0x4F5462: mov     ecx, esi
0x4F5464: call    sub_5E0E80
0x4F5469: movzx   eax, al
0x4F546C: mov     [esp+8+arg_C], eax
0x4F5470: fild    [esp+8+arg_C]
0x4F5474: fstp    qword ptr [edi]
0x4F5476: cmp     byte ptr ds:0B361ACh, 0
0x4F547D: jz      short loc_4F5494
0x4F547F: fld     qword ptr [edi]
0x4F5481: sub     esp, 8
0x4F5484: fstp    [esp+10h+var_10]
0x4F5487: push    offset aIsContinuingPa; "is continuing package near PC value %0."...
0x4F548C: call    Interface_ConsolePrint
0x4F5491: add     esp, 0Ch
0x4F5494: pop     edi
0x4F5495: mov     al, 1
0x4F5497: pop     esi
0x4F5498: retn
