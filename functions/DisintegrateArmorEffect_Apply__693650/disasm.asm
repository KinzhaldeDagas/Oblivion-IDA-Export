0x693650: push    ecx
0x693651: push    edi
0x693652: mov     edi, ecx
0x693654: mov     ecx, [edi+20h]; this
0x693657: test    ecx, ecx
0x693659: jz      short loc_6936C4
0x69365B: push    esi
0x69365C: call    MagicTarget_GetParentActor
0x693661: mov     esi, eax
0x693663: test    esi, esi
0x693665: jz      short loc_6936C3
0x693667: mov     ecx, esi
0x693669: call    sub_5E5A00
0x69366E: test    eax, eax
0x693670: mov     [edi+38h], eax
0x693673: jz      short loc_6936C3
0x693675: fld     dword ptr [edi+18h]
0x693678: mov     edx, [esi]
0x69367A: push    1
0x69367C: push    ecx
0x69367D: fstp    [esp+14h+var_14]
0x693680: push    eax
0x693681: mov     eax, [edx+2C4h]
0x693687: mov     ecx, esi
0x693689: call    eax
0x69368B: cmp     byte ptr ds:0B3B908h, 0
0x693692: jz      short loc_6936C3
0x693694: fld     dword ptr [edi+18h]
0x693697: mov     ecx, [edi+38h]
0x69369A: fstp    [esp+0Ch+var_4]
0x69369E: sub     esp, 8
0x6936A1: fld     [esp+14h+var_4]
0x6936A5: fstp    qword ptr [esp+14h+var_14]
0x6936A8: call    sub_488DF0
0x6936AD: push    eax
0x6936AE: mov     ecx, esi; this
0x6936B0: call    TESObjectREFR_GetName
0x6936B5: push    eax
0x6936B6: push    offset aSSSTakes0_2fDi; "%s's %s takes %0.2f disintegrate armor "...
0x6936BB: call    Interface_ConsolePrint
0x6936C0: add     esp, 14h
0x6936C3: pop     esi
0x6936C4: pop     edi
0x6936C5: pop     ecx
0x6936C6: retn
