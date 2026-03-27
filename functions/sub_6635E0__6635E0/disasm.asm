0x6635E0: sub     esp, 0Ch
0x6635E3: push    esi
0x6635E4: push    edi
0x6635E5: mov     edi, [esp+14h+arg_0]
0x6635E9: mov     esi, ecx
0x6635EB: mov     ecx, [esi+edi*4+768h]
0x6635F2: test    ecx, ecx
0x6635F4: jz      short loc_663674
0x6635F6: call    sub_6B7240
0x6635FB: mov     eax, [esi]
0x6635FD: mov     edx, [eax+174h]
0x663603: mov     ecx, esi
0x663605: call    edx
0x663607: mov     ecx, [eax]
0x663609: mov     edx, [eax+4]
0x66360C: mov     eax, [eax+8]
0x66360F: sub     esp, 0Ch
0x663612: mov     [esp+20h+var_4], eax
0x663616: fld     [esp+20h+var_4]
0x66361A: fstp    [esp+20h+var_18]; float
0x66361E: mov     [esp+20h+var_8], edx
0x663622: fld     [esp+20h+var_8]
0x663626: mov     [esp+20h+var_C], ecx
0x66362A: mov     ecx, [esi+edi*4+768h]
0x663631: fstp    [esp+20h+var_1C]; float
0x663635: fld     [esp+20h+var_C]
0x663639: fstp    [esp+20h+var_20]; float
0x66363C: call    sub_6B7360
0x663641: mov     ecx, ds:0B33398h
0x663647: mov     ecx, [ecx+24h]
0x66364A: test    ecx, ecx
0x66364C: jz      short loc_66365E
0x66364E: mov     edx, [esi+edi*4+768h]
0x663655: mov     eax, [edx]
0x663657: push    esi
0x663658: push    eax
0x663659: call    sub_6AC3E0
0x66365E: mov     ecx, [esi+edi*4+768h]
0x663665: push    0
0x663667: call    sub_6B7190
0x66366C: pop     edi
0x66366D: pop     esi
0x66366E: add     esp, 0Ch
0x663671: retn    4
0x663674: push    edi
0x663675: call    Magic_GetSchoolFailureSound
0x66367A: add     esp, 4
0x66367D: test    eax, eax
0x66367F: jz      short loc_663699
0x663681: mov     eax, [eax+0Ch]
0x663684: push    1; a5
0x663686: push    2; a4
0x663688: push    0; a3
0x66368A: push    eax; a2
0x66368B: mov     ecx, esi; this
0x66368D: call    sub_65AC50
0x663692: mov     [esi+edi*4+768h], eax
0x663699: pop     edi
0x66369A: pop     esi
0x66369B: add     esp, 0Ch
0x66369E: retn    4
