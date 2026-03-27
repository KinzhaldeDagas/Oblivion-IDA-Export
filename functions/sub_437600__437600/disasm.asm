0x437600: sub     esp, 0Ch
0x437603: push    esi
0x437604: mov     esi, ecx
0x437606: mov     eax, [esi+30h]
0x437609: mov     ecx, [eax]
0x43760B: push    edi
0x43760C: push    1
0x43760E: call    sub_4BA780
0x437613: mov     edi, eax
0x437615: test    edi, edi
0x437617: jz      short loc_43768C
0x437619: lea     ecx, [esp+14h+var_C]
0x43761D: call    sub_7B20B0
0x437622: mov     eax, [esi+30h]
0x437625: mov     ecx, [eax]
0x437627: mov     edx, [ecx+0Ch]
0x43762A: mov     [esp+14h+var_4], edx
0x43762E: mov     [esp+14h+var_8], edi
0x437632: mov     [esp+14h+var_C], 0
0x43763A: movzx   ecx, word ptr [eax+10h]
0x43763E: mov     edx, [eax+18h]
0x437641: push    ecx
0x437642: mov     ecx, [eax+14h]
0x437645: push    edx
0x437646: push    ecx
0x437647: mov     ecx, [eax+0Ch]
0x43764A: lea     edx, [esp+20h+var_C]
0x43764E: push    edx
0x43764F: mov     edx, [eax+8]
0x437652: mov     eax, [eax+4]
0x437655: push    ecx
0x437656: push    edx
0x437657: push    eax
0x437658: call    sub_7B4010
0x43765D: mov     ecx, [esp+30h+var_8]
0x437661: add     esp, 1Ch
0x437664: test    ecx, ecx
0x437666: jz      short loc_437670
0x437668: mov     edx, [ecx]
0x43766A: mov     eax, [edx]
0x43766C: push    1
0x43766E: call    eax
0x437670: mov     esi, dword_B34424
0x437676: fldz
0x437678: push    1; a3
0x43767A: push    ecx
0x43767B: mov     ecx, esi; this
0x43767D: fstp    [esp+1Ch+a2]; a2
0x437680: call    NiAVObject_UpdateNiAVObject
0x437685: mov     ecx, esi; this
0x437687: call    NiAVObject_InitializePropertyState
0x43768C: pop     edi
0x43768D: pop     esi
0x43768E: add     esp, 0Ch
0x437691: retn
