0x625020: push    esi
0x625021: mov     esi, ecx
0x625023: mov     eax, [esi]
0x625025: mov     edx, [eax+154h]
0x62502B: call    edx
0x62502D: test    eax, eax
0x62502F: jz      short loc_625054
0x625031: mov     eax, [esi]
0x625033: mov     edx, [eax+388h]
0x625039: mov     ecx, esi
0x62503B: call    edx
0x62503D: test    eax, eax
0x62503F: jz      short loc_625054
0x625041: mov     eax, [esi]
0x625043: mov     edx, [eax+388h]
0x625049: mov     ecx, esi
0x62504B: call    edx
0x62504D: mov     ecx, eax
0x62504F: call    sub_5F0410
0x625054: mov     eax, [esp+4+a2]
0x625058: push    eax; a2
0x625059: mov     ecx, esi; this
0x62505B: call    TESObjectREFR_Set3D
0x625060: pop     esi
0x625061: retn    4
