0x4D7190: push    ebx
0x4D7191: push    esi
0x4D7192: mov     esi, ecx
0x4D7194: mov     eax, [esi+8]
0x4D7197: shr     eax, 5
0x4D719A: xor     bl, bl
0x4D719C: test    al, 1
0x4D719E: jz      short loc_4D71A5
0x4D71A0: pop     esi
0x4D71A1: xor     al, al
0x4D71A3: pop     ebx
0x4D71A4: retn
0x4D71A5: mov     edx, [esi]
0x4D71A7: mov     eax, [edx+170h]
0x4D71AD: call    eax
0x4D71AF: movzx   eax, byte ptr [eax+4]
0x4D71B3: cmp     eax, 17h
0x4D71B6: jz      short loc_4D71C0
0x4D71B8: add     eax, 0FFFFFFDDh
0x4D71BB: cmp     eax, 1
0x4D71BE: ja      short loc_4D71E7
0x4D71C0: mov     ecx, esi; this
0x4D71C2: call    TESObjectREFR_GetContainer
0x4D71C7: test    eax, eax
0x4D71C9: jz      short loc_4D71E7
0x4D71CB: push    eax
0x4D71CC: push    esi; a1
0x4D71CD: call    ContainerExtraData_GetContainerExtraDataForRef
0x4D71D2: add     esp, 8
0x4D71D5: test    eax, eax
0x4D71D7: jz      short loc_4D71E7
0x4D71D9: push    esi
0x4D71DA: mov     ecx, eax
0x4D71DC: call    sub_48E740
0x4D71E1: test    al, al
0x4D71E3: jz      short loc_4D71E7
0x4D71E5: mov     bl, 1
0x4D71E7: push    ebp
0x4D71E8: push    edi
0x4D71E9: lea     edi, [esi+44h]
0x4D71EC: mov     ecx, edi
0x4D71EE: call    ExtraDataList_GetExtraScript
0x4D71F3: mov     ebp, eax
0x4D71F5: test    ebp, ebp
0x4D71F7: jz      short loc_4D722E
0x4D71F9: mov     ecx, edi; this
0x4D71FB: call    ExtraDataList_GetExtraScriptEventList
0x4D7200: push    0; ArgList
0x4D7202: push    0; int
0x4D7204: mov     edi, eax
0x4D7206: push    edi; int
0x4D7207: push    esi; int
0x4D7208: mov     ecx, ebp; int
0x4D720A: call    Script_Run
0x4D720F: test    al, al
0x4D7211: jz      short loc_4D721C
0x4D7213: pop     edi
0x4D7214: pop     ebp
0x4D7215: mov     bl, 1
0x4D7217: pop     esi
0x4D7218: mov     al, bl
0x4D721A: pop     ebx
0x4D721B: retn
0x4D721C: test    edi, edi
0x4D721E: jz      short loc_4D722E
0x4D7220: mov     edx, [esi]
0x4D7222: mov     eax, [edx+40h]
0x4D7225: push    4000000h
0x4D722A: mov     ecx, esi
0x4D722C: call    eax
0x4D722E: pop     edi
0x4D722F: pop     ebp
0x4D7230: pop     esi
0x4D7231: mov     al, bl
0x4D7233: pop     ebx
0x4D7234: retn
