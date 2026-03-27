0x6507C0: push    esi
0x6507C1: mov     esi, ecx
0x6507C3: mov     ecx, [esi+120h]
0x6507C9: test    ecx, ecx
0x6507CB: jz      loc_6508BA
0x6507D1: movzx   eax, byte ptr [esi+124h]
0x6507D8: push    ebp
0x6507D9: push    edi
0x6507DA: push    0
0x6507DC: push    eax
0x6507DD: call    sub_4D7300
0x6507E2: mov     edi, [esp+0Ch+arg_0]
0x6507E6: mov     ecx, edi
0x6507E8: call    sub_5E12B0
0x6507ED: test    eax, eax
0x6507EF: jz      short loc_650801
0x6507F1: mov     edx, [eax]
0x6507F3: push    0
0x6507F5: mov     ecx, eax
0x6507F7: mov     eax, [edx+9Ch]
0x6507FD: push    0
0x6507FF: call    eax
0x650801: mov     eax, [esi+120h]
0x650807: mov     edx, [esi]
0x650809: mov     edx, [edx+370h]
0x65080F: push    7Fh
0x650811: push    eax
0x650812: push    0
0x650814: push    edi
0x650815: mov     ecx, esi
0x650817: call    edx
0x650819: movzx   eax, byte ptr [esi+136h]
0x650820: mov     ecx, [esi+120h]
0x650826: push    eax
0x650827: mov     eax, [ecx]
0x650829: mov     edx, [eax+170h]
0x65082F: call    edx
0x650831: mov     ecx, eax
0x650833: call    sub_4AEBE0
0x650838: push    ecx
0x650839: fchs
0x65083B: mov     ecx, edi
0x65083D: fstp    [esp+10h+var_10]; float
0x650840: call    sub_659B90
0x650845: mov     ebp, [edi]
0x650847: mov     eax, [ebp+1E0h]
0x65084D: mov     ecx, edi
0x65084F: call    eax
0x650851: fadd    qword ptr ds:0A3D5B8h
0x650857: mov     edx, [ebp+1E8h]
0x65085D: push    ecx
0x65085E: fstp    [esp+10h+arg_0]
0x650862: mov     ecx, edi
0x650864: fld     [esp+10h+arg_0]
0x650868: fstp    [esp+10h+var_10]
0x65086B: call    edx
0x65086D: fldz
0x65086F: push    ecx
0x650870: lea     ebp, [esi+128h]
0x650876: fstp    [esp+10h+var_10]; float
0x650879: mov     ecx, ebp
0x65087B: call    sub_6FAEE0
0x650880: mov     byte ptr [esi+136h], 0
0x650887: mov     eax, ds:0B3F9A8h
0x65088C: mov     [ebp+0], eax
0x65088F: mov     ecx, ds:0B3F9ACh
0x650895: mov     [ebp+4], ecx
0x650898: mov     edx, ds:0B3F9B0h
0x65089E: push    0
0x6508A0: mov     ecx, edi
0x6508A2: mov     [ebp+8], edx
0x6508A5: mov     dword ptr [esi+120h], 0
0x6508AF: call    sub_65AC20
0x6508B4: pop     edi
0x6508B5: pop     ebp
0x6508B6: pop     esi
0x6508B7: retn    4
0x6508BA: mov     ecx, [esp+4+arg_0]
0x6508BE: mov     eax, [esi]
0x6508C0: mov     edx, [eax+564h]
0x6508C6: push    ecx
0x6508C7: mov     ecx, esi
0x6508C9: call    edx
0x6508CB: pop     esi
0x6508CC: retn    4
