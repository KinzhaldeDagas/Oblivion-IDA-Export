0x658790: sub     esp, 8
0x658793: push    esi
0x658794: push    edi
0x658795: mov     edi, [esp+10h+arg_4]
0x658799: mov     esi, ecx
0x65879B: push    edi
0x65879C: lea     ecx, [esi+94h]
0x6587A2: call    AVCollection_GetAV
0x6587A7: fstp    [esp+10h+var_8]
0x6587AB: mov     eax, [esp+10h+arg_8]
0x6587AF: mov     ecx, [esp+10h+arg_0]
0x6587B3: push    eax
0x6587B4: push    edi
0x6587B5: push    ecx
0x6587B6: mov     ecx, esi
0x6587B8: call    LowProcess_GetAViCur
0x6587BD: mov     [esp+10h+arg_4], eax
0x6587C1: fild    [esp+10h+arg_4]
0x6587C5: fadd    [esp+10h+var_8]
0x6587C9: call    Double_To_SInt32
0x6587CE: pop     edi
0x6587CF: pop     esi
0x6587D0: add     esp, 8
0x6587D3: retn    0Ch
