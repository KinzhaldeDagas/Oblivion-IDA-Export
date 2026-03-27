0x4F8740: fldz
0x4F8742: sub     esp, 8
0x4F8745: push    esi
0x4F8746: mov     esi, [esp+0Ch+arg_0]
0x4F874A: test    esi, esi
0x4F874C: push    edi
0x4F874D: mov     edi, [esp+10h+arg_C]
0x4F8751: fstp    qword ptr [edi]
0x4F8753: jz      loc_4F87DF
0x4F8759: mov     eax, [esi]
0x4F875B: mov     edx, [eax+198h]
0x4F8761: push    0
0x4F8763: mov     ecx, esi
0x4F8765: call    edx
0x4F8767: test    al, al
0x4F8769: jz      short loc_4F87DF
0x4F876B: mov     eax, [esi]
0x4F876D: mov     edx, [eax+190h]
0x4F8773: mov     ecx, esi
0x4F8775: call    edx
0x4F8777: test    al, al
0x4F8779: jz      short loc_4F87DF
0x4F877B: mov     ecx, [esi+58h]
0x4F877E: test    ecx, ecx
0x4F8780: jz      short loc_4F87DF
0x4F8782: mov     eax, [ecx]
0x4F8784: mov     edx, [eax+4F0h]
0x4F878A: call    edx
0x4F878C: fstp    [esp+10h+arg_C]
0x4F8790: fldz
0x4F8792: fcomp   [esp+10h+arg_C]
0x4F8796: fnstsw  ax
0x4F8798: test    ah, 5
0x4F879B: jp      short loc_4F87DF
0x4F879D: mov     ecx, offset TimeGlobals
0x4F87A2: call    TimeGlobals_GetGameDaysPassed
0x4F87A7: test    eax, eax
0x4F87A9: mov     [esp+10h+arg_0], eax
0x4F87AD: fild    [esp+10h+arg_0]
0x4F87B1: jge     short loc_4F87B9
0x4F87B3: fadd    dword ptr ds:0A2FC78h
0x4F87B9: fmul    qword ptr ds:0A2F920h
0x4F87BF: mov     ecx, offset TimeGlobals
0x4F87C4: fstp    [esp+10h+var_C+4]
0x4F87C8: call    TimeGlobals_GetGameHour
0x4F87CD: fadd    [esp+10h+var_C+4]
0x4F87D1: fstp    [esp+10h+arg_0]
0x4F87D5: fld     [esp+10h+arg_0]
0x4F87D9: fsub    [esp+10h+arg_C]
0x4F87DD: fstp    qword ptr [edi]
0x4F87DF: pop     edi
0x4F87E0: mov     al, 1
0x4F87E2: pop     esi
0x4F87E3: add     esp, 8
0x4F87E6: retn
