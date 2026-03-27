0x6068D0: push    0FFFFFFFFh
0x6068D2: push    offset SEH_6068D0
0x6068D7: mov     eax, large fs:0
0x6068DD: push    eax
0x6068DE: push    ecx
0x6068DF: push    esi
0x6068E0: mov     eax, ds:0B30AACh
0x6068E5: xor     eax, esp
0x6068E7: push    eax
0x6068E8: lea     eax, [esp+18h+var_C]
0x6068EC: mov     large fs:0, eax
0x6068F2: mov     esi, ecx
0x6068F4: mov     [esp+18h+var_10], esi
0x6068F8: call    ??0TESPackage@@QAE@XZ; TESPackage::TESPackage(void)
0x6068FD: push    8; Size
0x6068FF: mov     [esp+1Ch+var_4], 0
0x606907: mov     dword ptr [esi], offset ??_7AlarmPackage@@6B@; const AlarmPackage::`vftable'
0x60690D: call    FormHeapAlloc
0x606912: add     esp, 4
0x606915: test    eax, eax
0x606917: jz      short loc_606928
0x606919: mov     dword ptr [eax], 0
0x60691F: mov     dword ptr [eax+4], 0
0x606926: jmp     short loc_60692A
0x606928: xor     eax, eax
0x60692A: mov     ecx, [esp+18h+arg_0]
0x60692E: test    ecx, ecx
0x606930: mov     [esi+3Ch], eax
0x606933: jz      short loc_60693D
0x606935: push    ecx
0x606936: mov     ecx, eax
0x606938: call    BSSimpleList_PushFront
0x60693D: mov     eax, esi
0x60693F: mov     ecx, [esp+18h+var_C]
0x606943: mov     large fs:0, ecx
0x60694A: pop     ecx
0x60694B: pop     esi
0x60694C: add     esp, 10h
0x60694F: retn    4
