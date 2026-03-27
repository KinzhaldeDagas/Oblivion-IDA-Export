0x68DF7A: mov     eax, ds:0B33B00h
0x68DF7F: mov     edi, [eax+84h]
0x68DF85: test    edi, edi
0x68DF87: mov     esi, [eax+14h]
0x68DF8A: jz      short loc_68DFC9
0x68DF8C: mov     edx, [edi]
0x68DF8E: push    edx; a1
0x68DF8F: call    TESForm_LookupByFormID
0x68DF94: mov     ecx, [edi+5]
0x68DF97: mov     edx, [eax]
0x68DF99: add     esp, 4
0x68DF9C: push    offset a_MagicActiveef; ".\\Magic\\ActiveEffect.cpp"
0x68DFA1: push    36Bh
0x68DFA6: push    ecx
0x68DFA7: mov     ecx, eax
0x68DFA9: mov     eax, [edx+0D4h]
0x68DFAF: call    eax
0x68DFB1: mov     ecx, [edi]
0x68DFB3: sub     esi, [esp+0Ch+arg_C]
0x68DFB7: push    eax
0x68DFB8: push    ecx
0x68DFB9: push    esi; ArgList
0x68DFBA: push    offset aSavegame5iForF; "SaveGame(): %-5i for form %08X %s with "...
0x68DFBF: call    sub_40FEC0
0x68DFC4: add     esp, 1Ch
0x68DFC7: jmp     short ActiveEffect_Base_SaveAEList___CheckRecordVersion_
0x68DFC9: sub     esi, [esp+arg_C]
0x68DFCD: push    offset a_MagicActiveef; ".\\Magic\\ActiveEffect.cpp"
0x68DFD2: push    36Bh
0x68DFD7: push    esi; ArgList
0x68DFD8: push    offset aSavegame5iEndi; "SaveGame(): %-5i ending at line %i in f"...
0x68DFDD: call    sub_40FEC0
0x68DFE2: add     esp, 10h
