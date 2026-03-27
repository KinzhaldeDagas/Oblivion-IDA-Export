0x92A6D0: push    esi
0x92A6D1: mov     esi, [esp+4+arg_0]
0x92A6D5: mov     eax, [esi]
0x92A6D7: push    edi
0x92A6D8: mov     edi, ecx
0x92A6DA: push    edi
0x92A6DB: push    1
0x92A6DD: push    offset aCvxtranslate; "CvxTranslate"
0x92A6E2: mov     ecx, esi
0x92A6E4: call    dword ptr [eax]
0x92A6E6: mov     eax, [edi+10h]
0x92A6E9: mov     edx, [esi]
0x92A6EB: push    eax
0x92A6EC: push    1
0x92A6EE: push    offset aChild_0; "Child"
0x92A6F3: mov     ecx, esi
0x92A6F5: call    dword ptr [edx+8]
0x92A6F8: mov     edx, [esi]
0x92A6FA: mov     ecx, esi
0x92A6FC: call    dword ptr [edx+14h]
0x92A6FF: pop     edi
0x92A700: pop     esi
0x92A701: retn    4
