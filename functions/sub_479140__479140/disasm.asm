0x479140: mov     ecx, [esp+arg_8]
0x479144: test    ecx, ecx
0x479146: push    ebp
0x479147: mov     ebp, [esp+4+arg_4]
0x47914B: jz      short loc_47915B
0x47914D: push    offset off_A3CEAC
0x479152: call    NiObjectNET_GetExtraData
0x479157: test    eax, eax
0x479159: jnz     short loc_47916F
0x47915B: push    offset off_A3CEAC
0x479160: mov     ecx, ebp
0x479162: call    NiObjectNET_GetExtraData
0x479167: test    eax, eax
0x479169: jz      loc_47925B
0x47916F: push    edi
0x479170: push    eax
0x479171: push    offset dword_B3FCC0
0x479176: call    NiRTTI_Cast
0x47917B: mov     edi, eax
0x47917D: add     esp, 8
0x479180: test    edi, edi
0x479182: jz      loc_47923A
0x479188: cmp     [esp+8+arg_10], 7
0x47918D: push    ebx
0x47918E: setz    bl
0x479191: test    bl, bl
0x479193: push    esi
0x479194: jz      short loc_47919D
0x479196: mov     eax, [edi+0Ch]
0x479199: mov     byte ptr [eax+6], 4Ch ; 'L'
0x47919D: mov     eax, [edi+0Ch]
0x4791A0: mov     ecx, [esp+10h+a1]
0x4791A4: push    eax; a2
0x4791A5: push    ecx; a1
0x4791A6: call    NiObjectNET_LookupObjectByName
0x4791AB: add     esp, 8
0x4791AE: test    bl, bl
0x4791B0: mov     esi, eax
0x4791B2: jz      short loc_4791BB
0x4791B4: mov     edx, [edi+0Ch]
0x4791B7: mov     byte ptr [edx+6], 52h ; 'R'
0x4791BB: test    esi, esi
0x4791BD: jnz     loc_47927B
0x4791C3: mov     eax, [esp+10h+a1]
0x4791C7: push    eax
0x4791C8: call    sub_4DC270
0x4791CD: mov     esi, eax
0x4791CF: add     esp, 4
0x4791D2: test    esi, esi
0x4791D4: jz      short loc_479213
0x4791D6: mov     edx, [esi]
0x4791D8: mov     eax, [edx+170h]
0x4791DE: mov     ecx, esi
0x4791E0: call    eax
0x4791E2: test    eax, eax
0x4791E4: jz      short loc_479213
0x4791E6: mov     edx, [esi]
0x4791E8: mov     eax, [edx+170h]
0x4791EE: mov     ecx, esi
0x4791F0: call    eax
0x4791F2: cmp     byte ptr [eax+4], 24h ; '$'
0x4791F6: jnz     short loc_479213
0x4791F8: push    ebp
0x4791F9: call    sub_480770
0x4791FE: add     esp, 4
0x479201: pop     esi
0x479202: pop     ebx
0x479203: pop     edi
0x479204: push    1
0x479206: push    1
0x479208: push    ebp
0x479209: call    sub_88D000
0x47920E: add     esp, 0Ch
0x479211: pop     ebp
0x479212: retn
0x479213: mov     ecx, [ebp+8]
0x479216: mov     edx, [edi+0Ch]
0x479219: push    ecx
0x47921A: push    edx; ArgList
0x47921B: push    offset aCouldNotFindPa; "Could not find parent node '%s' for obj"...
0x479220: call    PrintError
0x479225: add     esp, 0Ch
0x479228: pop     esi
0x479229: pop     ebx
0x47922A: pop     edi
0x47922B: push    1
0x47922D: push    1
0x47922F: push    ebp
0x479230: call    sub_88D000
0x479235: add     esp, 0Ch
0x479238: pop     ebp
0x479239: retn
0x47923A: mov     eax, [ebp+8]
0x47923D: push    eax; ArgList
0x47923E: push    offset aExtraDataPrnOn; "Extra data 'Prn' on '%s' is not an NiSt"...
0x479243: call    PrintError
0x479248: add     esp, 8
0x47924B: pop     edi
0x47924C: push    1
0x47924E: push    1
0x479250: push    ebp
0x479251: call    sub_88D000
0x479256: add     esp, 0Ch
0x479259: pop     ebp
0x47925A: retn
0x47925B: mov     ecx, [ebp+8]
0x47925E: push    ecx; ArgList
0x47925F: push    offset aCouldNotFind_0; "Could not find parent node extra data f"...
0x479264: call    PrintError
0x479269: add     esp, 8
0x47926C: push    1
0x47926E: push    1
0x479270: push    ebp
0x479271: call    sub_88D000
0x479276: add     esp, 0Ch
0x479279: pop     ebp
0x47927A: retn
0x47927B: mov     edx, [esi]
0x47927D: mov     eax, [edx+84h]
0x479283: push    1
0x479285: push    ebp
0x479286: mov     ecx, esi
0x479288: call    eax
0x47928A: push    offset off_A3CE0C; a2
0x47928F: push    ebp; a1
0x479290: call    NiObjectNET_LookupObjectByName
0x479295: mov     edi, eax
0x479297: add     esp, 8
0x47929A: test    edi, edi
0x47929C: jz      short loc_4792DA
0x47929E: mov     edx, [esi]
0x4792A0: mov     eax, [edx+84h]
0x4792A6: push    1
0x4792A8: push    edi
0x4792A9: mov     ecx, esi
0x4792AB: call    eax
0x4792AD: push    1
0x4792AF: push    esi
0x4792B0: call    sub_897A90
0x4792B5: add     esp, 8
0x4792B8: mov     ecx, edi; this
0x4792BA: call    NiAVObject_InitializePropertyState
0x4792BF: mov     ecx, edi
0x4792C1: call    NiNode_UpdateDynamicEffectState
0x4792C6: lea     esi, [ebp+0ACh]
0x4792CC: mov     ecx, esi
0x4792CE: call    sub_4784A0
0x4792D3: mov     ecx, esi
0x4792D5: call    sub_477F90
0x4792DA: pop     esi
0x4792DB: pop     ebx
0x4792DC: pop     edi
0x4792DD: push    1
0x4792DF: push    1
0x4792E1: push    ebp
0x4792E2: call    sub_88D000
0x4792E7: add     esp, 0Ch
0x4792EA: pop     ebp
0x4792EB: retn
