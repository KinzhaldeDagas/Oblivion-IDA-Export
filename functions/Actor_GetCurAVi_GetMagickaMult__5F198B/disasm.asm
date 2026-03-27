0x5F198B: mov     edx, [eax+288h]
0x5F1991: push    28h ; '('
0x5F1993: call    edx
0x5F1995: fdiv    qword ptr ds:0A3F3E8h
0x5F199B: fstp    [esp+arg_14]
0x5F199F: fldz
0x5F19A1: fcomp   [esp+arg_14]
0x5F19A5: fnstsw  ax
0x5F19A7: test    ah, 44h
0x5F19AA: jp      short Actor_GetCurAVi___GetBaseActorForm
0x5F19AC: fld1
0x5F19AE: fstp    [esp+arg_14]
