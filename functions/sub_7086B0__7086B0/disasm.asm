0x7086B0: push    ecx
0x7086B1: push    ebx
0x7086B2: push    esi
0x7086B3: mov     esi, dword ptr [esp+0Ch+arg_0]
0x7086B7: push    edi
0x7086B8: mov     edi, ecx
0x7086BA: push    esi
0x7086BB: mov     [esp+14h+var_4], edi
0x7086BF: call    sub_700540
0x7086C4: mov     eax, ds:0B3FA80h
0x7086C9: push    eax; ArgList
0x7086CA: call    TESOutput_PrintString
0x7086CF: movzx   ebx, word ptr [esi+0Ah]
0x7086D3: movzx   ecx, word ptr [esi+8]
0x7086D7: add     esp, 4
0x7086DA: cmp     ebx, ecx
0x7086DC: mov     dword ptr [esp+10h+arg_0], eax
0x7086E0: jb      short loc_7086F0
0x7086E2: movzx   edx, word ptr [esi+0Eh]
0x7086E6: add     edx, ebx
0x7086E8: push    edx
0x7086E9: mov     ecx, esi
0x7086EB: call    NiTArray_SetSize
0x7086F0: lea     eax, [esp+10h+arg_0]
0x7086F4: push    eax
0x7086F5: push    ebx
0x7086F6: mov     ecx, esi
0x7086F8: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7086FD: mov     cl, [edi+18h]
0x708700: and     cl, 1
0x708703: mov     [esp+10h+arg_0], cl
0x708707: mov     edx, dword ptr [esp+10h+arg_0]
0x70870B: push    edx; char
0x70870C: push    offset aM_bappculled; "m_bAppCulled"
0x708711: call    TESOutput_PrintLabeledBool
0x708716: movzx   ebx, word ptr [esi+0Ah]
0x70871A: mov     dword ptr [esp+18h+arg_0], eax
0x70871E: movzx   eax, word ptr [esi+8]
0x708722: add     esp, 8
0x708725: cmp     ebx, eax
0x708727: jb      short loc_708737
0x708729: movzx   ecx, word ptr [esi+0Eh]
0x70872D: add     ecx, ebx
0x70872F: push    ecx
0x708730: mov     ecx, esi
0x708732: call    NiTArray_SetSize
0x708737: lea     edx, [esp+10h+arg_0]
0x70873B: push    edx
0x70873C: push    ebx
0x70873D: mov     ecx, esi
0x70873F: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x708744: push    offset aM_localtransla; "m_localTranslate"
0x708749: lea     ecx, [edi+54h]
0x70874C: call    sub_707280
0x708751: movzx   ebx, word ptr [esi+0Ah]
0x708755: mov     dword ptr [esp+10h+arg_0], eax
0x708759: movzx   eax, word ptr [esi+8]
0x70875D: cmp     ebx, eax
0x70875F: jb      short loc_70876F
0x708761: movzx   ecx, word ptr [esi+0Eh]
0x708765: add     ecx, ebx
0x708767: push    ecx
0x708768: mov     ecx, esi
0x70876A: call    NiTArray_SetSize
0x70876F: lea     edx, [esp+10h+arg_0]
0x708773: push    edx
0x708774: push    ebx
0x708775: mov     ecx, esi
0x708777: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x70877C: push    offset aM_localrotate; "m_localRotate"
0x708781: lea     ecx, [edi+30h]
0x708784: call    sub_711A50
0x708789: movzx   ebx, word ptr [esi+0Ah]
0x70878D: mov     dword ptr [esp+10h+arg_0], eax
0x708791: movzx   eax, word ptr [esi+8]
0x708795: cmp     ebx, eax
0x708797: jb      short loc_7087A7
0x708799: movzx   ecx, word ptr [esi+0Eh]
0x70879D: add     ecx, ebx
0x70879F: push    ecx
0x7087A0: mov     ecx, esi
0x7087A2: call    NiTArray_SetSize
0x7087A7: lea     edx, [esp+10h+arg_0]
0x7087AB: push    edx
0x7087AC: push    ebx
0x7087AD: mov     ecx, esi
0x7087AF: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7087B4: fld     dword ptr [edi+60h]
0x7087B7: push    ecx
0x7087B8: fstp    [esp+14h+var_14]; float
0x7087BB: push    offset aM_flocalscale; "m_fLocalScale"
0x7087C0: call    TESOutput_PrintLabeledFloat
0x7087C5: movzx   ebx, word ptr [esi+0Ah]
0x7087C9: mov     dword ptr [esp+18h+arg_0], eax
0x7087CD: movzx   eax, word ptr [esi+8]
0x7087D1: add     esp, 8
0x7087D4: cmp     ebx, eax
0x7087D6: jb      short loc_7087E6
0x7087D8: movzx   ecx, word ptr [esi+0Eh]
0x7087DC: add     ecx, ebx
0x7087DE: push    ecx
0x7087DF: mov     ecx, esi
0x7087E1: call    NiTArray_SetSize
0x7087E6: lea     edx, [esp+10h+arg_0]
0x7087EA: push    edx
0x7087EB: push    ebx
0x7087EC: mov     ecx, esi
0x7087EE: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7087F3: push    offset aM_worldtransla; "m_worldTranslate"
0x7087F8: lea     ecx, [edi+88h]
0x7087FE: call    sub_707280
0x708803: movzx   ebx, word ptr [esi+0Ah]
0x708807: mov     dword ptr [esp+10h+arg_0], eax
0x70880B: movzx   eax, word ptr [esi+8]
0x70880F: cmp     ebx, eax
0x708811: jb      short loc_708821
0x708813: movzx   ecx, word ptr [esi+0Eh]
0x708817: add     ecx, ebx
0x708819: push    ecx
0x70881A: mov     ecx, esi
0x70881C: call    NiTArray_SetSize
0x708821: lea     edx, [esp+10h+arg_0]
0x708825: push    edx
0x708826: push    ebx
0x708827: mov     ecx, esi
0x708829: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x70882E: push    offset aM_worldrotate; "m_worldRotate"
0x708833: lea     ecx, [edi+64h]
0x708836: call    sub_711A50
0x70883B: movzx   ebx, word ptr [esi+0Ah]
0x70883F: mov     dword ptr [esp+10h+arg_0], eax
0x708843: movzx   eax, word ptr [esi+8]
0x708847: cmp     ebx, eax
0x708849: jb      short loc_708859
0x70884B: movzx   ecx, word ptr [esi+0Eh]
0x70884F: add     ecx, ebx
0x708851: push    ecx
0x708852: mov     ecx, esi
0x708854: call    NiTArray_SetSize
0x708859: lea     edx, [esp+10h+arg_0]
0x70885D: push    edx
0x70885E: push    ebx
0x70885F: mov     ecx, esi
0x708861: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x708866: fld     dword ptr [edi+94h]
0x70886C: push    ecx
0x70886D: fstp    [esp+14h+var_14]; float
0x708870: push    offset aM_worldscale; "m_worldScale"
0x708875: call    TESOutput_PrintLabeledFloat
0x70887A: movzx   ebx, word ptr [esi+0Ah]
0x70887E: mov     dword ptr [esp+18h+arg_0], eax
0x708882: movzx   eax, word ptr [esi+8]
0x708886: add     esp, 8
0x708889: cmp     ebx, eax
0x70888B: jb      short loc_70889B
0x70888D: movzx   ecx, word ptr [esi+0Eh]
0x708891: add     ecx, ebx
0x708893: push    ecx
0x708894: mov     ecx, esi
0x708896: call    NiTArray_SetSize
0x70889B: lea     edx, [esp+10h+arg_0]
0x70889F: push    edx
0x7088A0: push    ebx
0x7088A1: mov     ecx, esi
0x7088A3: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7088A8: push    offset aM_kworldbound; "m_kWorldBound"
0x7088AD: lea     ecx, [edi+20h]
0x7088B0: call    sub_72A040
0x7088B5: movzx   ebx, word ptr [esi+0Ah]
0x7088B9: mov     dword ptr [esp+10h+arg_0], eax
0x7088BD: movzx   eax, word ptr [esi+8]
0x7088C1: cmp     ebx, eax
0x7088C3: jb      short loc_7088D3
0x7088C5: movzx   ecx, word ptr [esi+0Eh]
0x7088C9: add     ecx, ebx
0x7088CB: push    ecx
0x7088CC: mov     ecx, esi
0x7088CE: call    NiTArray_SetSize
0x7088D3: lea     edx, [esp+10h+arg_0]
0x7088D7: push    edx
0x7088D8: push    ebx
0x7088D9: mov     ecx, esi
0x7088DB: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7088E0: mov     al, [edi+18h]
0x7088E3: shr     al, 1
0x7088E5: and     al, 1
0x7088E7: mov     [esp+10h+arg_0], al
0x7088EB: mov     ecx, dword ptr [esp+10h+arg_0]
0x7088EF: push    ecx; char
0x7088F0: push    offset aSelupdate; "SelUpdate"
0x7088F5: call    TESOutput_PrintLabeledBool
0x7088FA: movzx   ebx, word ptr [esi+0Ah]
0x7088FE: movzx   edx, word ptr [esi+8]
0x708902: add     esp, 8
0x708905: cmp     ebx, edx
0x708907: mov     dword ptr [esp+10h+arg_0], eax
0x70890B: jb      short loc_70891B
0x70890D: movzx   eax, word ptr [esi+0Eh]
0x708911: add     eax, ebx
0x708913: push    eax
0x708914: mov     ecx, esi
0x708916: call    NiTArray_SetSize
0x70891B: lea     ecx, [esp+10h+arg_0]
0x70891F: push    ecx
0x708920: push    ebx
0x708921: mov     ecx, esi
0x708923: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x708928: mov     dl, [edi+18h]
0x70892B: shr     dl, 2
0x70892E: and     dl, 1
0x708931: mov     [esp+10h+arg_0], dl
0x708935: mov     eax, dword ptr [esp+10h+arg_0]
0x708939: push    eax; char
0x70893A: push    offset aSelupdatetrans; "SelUpdateTransforms"
0x70893F: call    TESOutput_PrintLabeledBool
0x708944: movzx   ebx, word ptr [esi+0Ah]
0x708948: movzx   ecx, word ptr [esi+8]
0x70894C: add     esp, 8
0x70894F: cmp     ebx, ecx
0x708951: mov     dword ptr [esp+10h+arg_0], eax
0x708955: jb      short loc_708965
0x708957: movzx   edx, word ptr [esi+0Eh]
0x70895B: add     edx, ebx
0x70895D: push    edx
0x70895E: mov     ecx, esi
0x708960: call    NiTArray_SetSize
0x708965: lea     eax, [esp+10h+arg_0]
0x708969: push    eax
0x70896A: push    ebx
0x70896B: mov     ecx, esi
0x70896D: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x708972: mov     cl, [edi+18h]
0x708975: shr     cl, 4
0x708978: and     cl, 1
0x70897B: mov     [esp+10h+arg_0], cl
0x70897F: mov     edx, dword ptr [esp+10h+arg_0]
0x708983: push    edx; char
0x708984: push    offset aSelupdaterigid; "SelUpdateRigid"
0x708989: call    TESOutput_PrintLabeledBool
0x70898E: movzx   ebx, word ptr [esi+0Ah]
0x708992: mov     dword ptr [esp+18h+arg_0], eax
0x708996: movzx   eax, word ptr [esi+8]
0x70899A: add     esp, 8
0x70899D: cmp     ebx, eax
0x70899F: jb      short loc_7089AF
0x7089A1: movzx   ecx, word ptr [esi+0Eh]
0x7089A5: add     ecx, ebx
0x7089A7: push    ecx
0x7089A8: mov     ecx, esi
0x7089AA: call    NiTArray_SetSize
0x7089AF: lea     edx, [esp+10h+arg_0]
0x7089B3: push    edx
0x7089B4: push    ebx
0x7089B5: mov     ecx, esi
0x7089B7: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7089BC: mov     al, [edi+18h]
0x7089BF: shr     al, 3
0x7089C2: and     al, 1
0x7089C4: mov     [esp+10h+arg_0], al
0x7089C8: mov     ecx, dword ptr [esp+10h+arg_0]
0x7089CC: push    ecx; char
0x7089CD: push    offset aSelupdatepropc; "SelUpdatePropControllers"
0x7089D2: call    TESOutput_PrintLabeledBool
0x7089D7: movzx   ebx, word ptr [esi+0Ah]
0x7089DB: movzx   edx, word ptr [esi+8]
0x7089DF: add     esp, 8
0x7089E2: cmp     ebx, edx
0x7089E4: mov     dword ptr [esp+10h+arg_0], eax
0x7089E8: jb      short loc_7089F8
0x7089EA: movzx   eax, word ptr [esi+0Eh]
0x7089EE: add     eax, ebx
0x7089F0: push    eax
0x7089F1: mov     ecx, esi
0x7089F3: call    NiTArray_SetSize
0x7089F8: lea     ecx, [esp+10h+arg_0]
0x7089FC: push    ecx
0x7089FD: push    ebx
0x7089FE: mov     ecx, esi
0x708A00: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x708A05: cmp     dword ptr [edi+0A4h], 0
0x708A0C: jz      loc_708AAB
0x708A12: push    ebp
0x708A13: mov     ebp, [edi+9Ch]
0x708A19: test    ebp, ebp
0x708A1B: jz      loc_708AAA
0x708A21: mov     edi, [ebp+8]
0x708A24: mov     edx, [edi]
0x708A26: lea     eax, [ebp+8]
0x708A29: mov     eax, [edx+4]
0x708A2C: mov     ebp, [ebp+0]
0x708A2F: mov     ecx, edi
0x708A31: call    eax
0x708A33: mov     eax, [eax]
0x708A35: push    edi; int
0x708A36: push    eax; ArgList
0x708A37: call    TESOutput_PrintLabeledPointer
0x708A3C: movzx   edi, word ptr [esi+0Ah]
0x708A40: movzx   ecx, word ptr [esi+8]
0x708A44: add     esp, 8
0x708A47: cmp     edi, ecx
0x708A49: mov     ebx, eax
0x708A4B: jb      short loc_708A5B
0x708A4D: movzx   edx, word ptr [esi+0Eh]
0x708A51: add     edx, edi
0x708A53: push    edx
0x708A54: mov     ecx, esi
0x708A56: call    NiTArray_SetSize
0x708A5B: movzx   eax, word ptr [esi+0Ah]
0x708A5F: cmp     edi, eax
0x708A61: jb      short loc_708A75
0x708A63: test    ebx, ebx
0x708A65: lea     ecx, [edi+1]
0x708A68: mov     [esi+0Ah], cx
0x708A6C: jz      short loc_708A98
0x708A6E: add     word ptr [esi+0Ch], 1
0x708A73: jmp     short loc_708A98
0x708A75: test    ebx, ebx
0x708A77: jz      short loc_708A89
0x708A79: mov     edx, [esi+4]
0x708A7C: cmp     dword ptr [edx+edi*4], 0
0x708A80: jnz     short loc_708A98
0x708A82: add     word ptr [esi+0Ch], 1
0x708A87: jmp     short loc_708A98
0x708A89: mov     eax, [esi+4]
0x708A8C: cmp     dword ptr [eax+edi*4], 0
0x708A90: jz      short loc_708A98
0x708A92: add     word ptr [esi+0Ch], 0FFFFh
0x708A98: test    ebp, ebp
0x708A9A: mov     ecx, [esi+4]
0x708A9D: mov     [ecx+edi*4], ebx
0x708AA0: jnz     loc_708A21
0x708AA6: mov     edi, [esp+14h+var_4]
0x708AAA: pop     ebp
0x708AAB: mov     edi, [edi+0A8h]
0x708AB1: test    edi, edi
0x708AB3: jz      short loc_708AEE
0x708AB5: push    edi; int
0x708AB6: push    offset aM_spcollisiono; "m_spCollisionObject"
0x708ABB: call    TESOutput_PrintLabeledPointer
0x708AC0: movzx   edi, word ptr [esi+0Ah]
0x708AC4: movzx   edx, word ptr [esi+8]
0x708AC8: add     esp, 8
0x708ACB: cmp     edi, edx
0x708ACD: mov     dword ptr [esp+10h+arg_0], eax
0x708AD1: jb      short loc_708AE1
0x708AD3: movzx   eax, word ptr [esi+0Eh]
0x708AD7: add     eax, edi
0x708AD9: push    eax
0x708ADA: mov     ecx, esi
0x708ADC: call    NiTArray_SetSize
0x708AE1: lea     ecx, [esp+10h+arg_0]
0x708AE5: push    ecx
0x708AE6: push    edi
0x708AE7: mov     ecx, esi
0x708AE9: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x708AEE: pop     edi
0x708AEF: pop     esi
0x708AF0: pop     ebx
0x708AF1: pop     ecx
0x708AF2: retn    4
