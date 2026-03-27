0x65FCA0: push    ecx
0x65FCA1: push    esi
0x65FCA2: push    edi
0x65FCA3: mov     edi, [esp+0Ch+arg_0]
0x65FCA7: lea     eax, [edi-0Ch]
0x65FCAA: cmp     eax, 14h
0x65FCAD: mov     esi, ecx
0x65FCAF: ja      short loc_65FCF4
0x65FCB1: push    edi
0x65FCB2: push    2
0x65FCB4: call    ActorValue_GetGroupOffsetFromAV
0x65FCB9: movsx   ecx, al
0x65FCBC: push    edi
0x65FCBD: push    2
0x65FCBF: fld     dword ptr [esi+ecx*4+130h]
0x65FCC6: fstp    [esp+1Ch+arg_0]
0x65FCCA: call    ActorValue_GetGroupOffsetFromAV
0x65FCCF: movsx   edx, al
0x65FCD2: add     esp, 10h
0x65FCD5: pop     edi
0x65FCD6: fld     dword ptr [esi+edx*4+7A4h]
0x65FCDD: pop     esi
0x65FCDE: fstp    [esp+4+var_4]
0x65FCE1: fld     [esp+4+arg_0]
0x65FCE5: fdiv    [esp+4+var_4]
0x65FCE8: fstp    [esp+4+arg_0]
0x65FCEC: fld     [esp+4+arg_0]
0x65FCF0: pop     ecx
0x65FCF1: retn    4
0x65FCF4: fldz
0x65FCF6: pop     edi
0x65FCF7: pop     esi
0x65FCF8: pop     ecx
0x65FCF9: retn    4
