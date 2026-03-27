0x5E20A6: push    8; Size
0x5E20A8: call    FormHeapAlloc
0x5E20AD: fld     [esp+4+arg_14]
0x5E20B1: add     esp, 4
0x5E20B4: mov     esi, eax
0x5E20B6: call    Double_To_SInt32
0x5E20BB: mov     ecx, [esp+arg_10]
0x5E20BF: mov     [esi+4], ecx
0x5E20C2: push    esi
0x5E20C3: mov     ecx, ebp
0x5E20C5: mov     [esi], eax
0x5E20C7: call    BSSimpleList_PushFront
0x5E20CC: pop     edi
0x5E20CD: pop     esi
0x5E20CE: pop     ebp
0x5E20CF: pop     ebx
0x5E20D0: retn    8
