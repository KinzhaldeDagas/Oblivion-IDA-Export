0x46CCBC: test    byte ptr [esi+0Dh], 1
0x46CCC0: push    edi
0x46CCC1: movzx   edi, [esp+4+arg_C]
0x46CCC6: mov     [esp+4+arg_4], edi
0x46CCCA: jz      short loc_46CCE9
0x46CCCC: mov     eax, [esi]
0x46CCCE: mov     edx, [eax+10h]
0x46CCD1: mov     ecx, esi
0x46CCD3: call    edx
0x46CCD5: test    eax, eax
0x46CCD7: jz      short loc_46CCE1
0x46CCD9: sub     edi, eax
0x46CCDB: mov     [esp+4+arg_4], edi
0x46CCDF: jmp     short loc_46CCE9
0x46CCE1: mov     [esp+4+arg_4], 0FFFFFFFFh
0x46CCE9: lea     eax, [esi+4]
0x46CCEC: xor     edi, edi
0x46CCEE: xor     ebx, ebx
0x46CCF0: xor     dl, dl
0x46CCF2: test    eax, eax
0x46CCF4: push    ebp
0x46CCF5: mov     ebp, 1
0x46CCFA: jz      TESLeveledList_SimpleCalcLeveledForm___Done_
