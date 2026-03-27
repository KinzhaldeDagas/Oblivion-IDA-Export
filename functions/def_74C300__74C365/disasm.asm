0x74C365: push    offset aUnknown_4; jumptable 0074C300 default case
0x74C36A: push    offset aM_eemissiontyp; "m_eEmissionType"
0x74C36F: call    TESOutput_PrintLabeledString
0x74C374: movzx   edi, word ptr [esi+0Ah]
0x74C378: movzx   edx, word ptr [esi+8]
0x74C37C: add     esp, 8
0x74C37F: cmp     edi, edx
0x74C381: mov     ebx, eax
0x74C383: jb      short loc_74C393
0x74C385: movzx   eax, word ptr [esi+0Eh]
0x74C389: add     eax, edi
0x74C38B: push    eax
0x74C38C: mov     ecx, esi
0x74C38E: call    NiTArray_SetSize
0x74C393: movzx   ecx, word ptr [esi+0Ah]
0x74C397: cmp     edi, ecx
0x74C399: jb      short loc_74C3AD
0x74C39B: test    ebx, ebx
0x74C39D: lea     edx, [edi+1]
0x74C3A0: mov     [esi+0Ah], dx
0x74C3A4: jz      short loc_74C3D0
0x74C3A6: add     word ptr [esi+0Ch], 1
0x74C3AB: jmp     short loc_74C3D0
0x74C3AD: test    ebx, ebx
0x74C3AF: jz      short loc_74C3C1
0x74C3B1: mov     eax, [esi+4]
0x74C3B4: cmp     dword ptr [eax+edi*4], 0
0x74C3B8: jnz     short loc_74C3D0
0x74C3BA: add     word ptr [esi+0Ch], 1
0x74C3BF: jmp     short loc_74C3D0
0x74C3C1: mov     ecx, [esi+4]
0x74C3C4: cmp     dword ptr [ecx+edi*4], 0
0x74C3C8: jz      short loc_74C3D0
0x74C3CA: add     word ptr [esi+0Ch], 0FFFFh
0x74C3D0: mov     edx, [esi+4]
0x74C3D3: mov     [edx+edi*4], ebx
0x74C3D6: mov     eax, [ebp+70h]
0x74C3D9: sub     eax, 0
0x74C3DC: jz      short loc_74C3FD
0x74C3DE: sub     eax, 1
0x74C3E1: jz      short loc_74C3F6
0x74C3E3: sub     eax, 1
0x74C3E6: jz      short loc_74C3EF
0x74C3E8: push    offset aUnknown_4; "UNKNOWN!!!"
0x74C3ED: jmp     short loc_74C402
0x74C3EF: push    offset aNi_velocity_us; "NI_VELOCITY_USE_DIRECTION"
0x74C3F4: jmp     short loc_74C402
0x74C3F6: push    offset aNi_velocity__0; "NI_VELOCITY_USE_RANDOM"
0x74C3FB: jmp     short loc_74C402
0x74C3FD: push    offset aNi_velocity__1; "NI_VELOCITY_USE_NORMALS"
0x74C402: push    offset aM_einitvelocit; "m_eInitVelocityType"
0x74C407: call    TESOutput_PrintLabeledString
0x74C40C: movzx   edi, word ptr [esi+0Ah]
0x74C410: mov     [esp+8+arg_10], eax
0x74C414: movzx   eax, word ptr [esi+8]
0x74C418: add     esp, 8
0x74C41B: cmp     edi, eax
0x74C41D: jb      short loc_74C42D
0x74C41F: movzx   ecx, word ptr [esi+0Eh]
0x74C423: add     ecx, edi
0x74C425: push    ecx
0x74C426: mov     ecx, esi
0x74C428: call    NiTArray_SetSize
0x74C42D: lea     edx, [esp+arg_10]
0x74C431: push    edx
0x74C432: push    edi
0x74C433: mov     ecx, esi
0x74C435: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x74C43A: fld     dword ptr [ebp+78h]
0x74C43D: push    ecx
0x74C43E: fstp    [esp+4+var_4]; float
0x74C441: push    offset aM_kemissionaxi; "m_kEmissionAxis.x"
0x74C446: call    TESOutput_PrintLabeledFloat
0x74C44B: movzx   edi, word ptr [esi+0Ah]
0x74C44F: mov     ebx, eax
0x74C451: movzx   eax, word ptr [esi+8]
0x74C455: add     esp, 8
0x74C458: cmp     edi, eax
0x74C45A: jb      short loc_74C46A
0x74C45C: movzx   ecx, word ptr [esi+0Eh]
0x74C460: add     ecx, edi
0x74C462: push    ecx
0x74C463: mov     ecx, esi
0x74C465: call    NiTArray_SetSize
0x74C46A: movzx   edx, word ptr [esi+0Ah]
0x74C46E: cmp     edi, edx
0x74C470: jb      short loc_74C484
0x74C472: test    ebx, ebx
0x74C474: lea     eax, [edi+1]
0x74C477: mov     [esi+0Ah], ax
0x74C47B: jz      short loc_74C4A7
0x74C47D: add     word ptr [esi+0Ch], 1
0x74C482: jmp     short loc_74C4A7
0x74C484: test    ebx, ebx
0x74C486: jz      short loc_74C498
0x74C488: mov     ecx, [esi+4]
0x74C48B: cmp     dword ptr [ecx+edi*4], 0
0x74C48F: jnz     short loc_74C4A7
0x74C491: add     word ptr [esi+0Ch], 1
0x74C496: jmp     short loc_74C4A7
0x74C498: mov     edx, [esi+4]
0x74C49B: cmp     dword ptr [edx+edi*4], 0
0x74C49F: jz      short loc_74C4A7
0x74C4A1: add     word ptr [esi+0Ch], 0FFFFh
0x74C4A7: mov     eax, [esi+4]
0x74C4AA: mov     [eax+edi*4], ebx
0x74C4AD: fld     dword ptr [ebp+7Ch]
0x74C4B0: push    ecx
0x74C4B1: fstp    [esp+4+var_4]; float
0x74C4B4: push    offset aM_kemissiona_0; "m_kEmissionAxis.y"
0x74C4B9: call    TESOutput_PrintLabeledFloat
0x74C4BE: movzx   edi, word ptr [esi+0Ah]
0x74C4C2: movzx   ecx, word ptr [esi+8]
0x74C4C6: add     esp, 8
0x74C4C9: cmp     edi, ecx
0x74C4CB: mov     ebx, eax
0x74C4CD: jb      short loc_74C4DD
0x74C4CF: movzx   edx, word ptr [esi+0Eh]
0x74C4D3: add     edx, edi
0x74C4D5: push    edx
0x74C4D6: mov     ecx, esi
0x74C4D8: call    NiTArray_SetSize
0x74C4DD: movzx   eax, word ptr [esi+0Ah]
0x74C4E1: cmp     edi, eax
0x74C4E3: jb      short loc_74C4F7
0x74C4E5: test    ebx, ebx
0x74C4E7: lea     ecx, [edi+1]
0x74C4EA: mov     [esi+0Ah], cx
0x74C4EE: jz      short loc_74C51A
0x74C4F0: add     word ptr [esi+0Ch], 1
0x74C4F5: jmp     short loc_74C51A
0x74C4F7: test    ebx, ebx
0x74C4F9: jz      short loc_74C50B
0x74C4FB: mov     edx, [esi+4]
0x74C4FE: cmp     dword ptr [edx+edi*4], 0
0x74C502: jnz     short loc_74C51A
0x74C504: add     word ptr [esi+0Ch], 1
0x74C509: jmp     short loc_74C51A
0x74C50B: mov     eax, [esi+4]
0x74C50E: cmp     dword ptr [eax+edi*4], 0
0x74C512: jz      short loc_74C51A
0x74C514: add     word ptr [esi+0Ch], 0FFFFh
0x74C51A: mov     ecx, [esi+4]
0x74C51D: mov     [ecx+edi*4], ebx
0x74C520: fld     dword ptr [ebp+80h]
0x74C526: push    ecx
0x74C527: fstp    [esp+4+var_4]; float
0x74C52A: push    offset aM_kemissiona_1; "m_kEmissionAxis.z"
0x74C52F: call    TESOutput_PrintLabeledFloat
0x74C534: movzx   edi, word ptr [esi+0Ah]
0x74C538: movzx   edx, word ptr [esi+8]
0x74C53C: add     esp, 8
0x74C53F: cmp     edi, edx
0x74C541: mov     ebx, eax
0x74C543: jb      short loc_74C553
0x74C545: movzx   eax, word ptr [esi+0Eh]
0x74C549: add     eax, edi
0x74C54B: push    eax
0x74C54C: mov     ecx, esi
0x74C54E: call    NiTArray_SetSize
0x74C553: movzx   ecx, word ptr [esi+0Ah]
0x74C557: cmp     edi, ecx
0x74C559: jb      short loc_74C578
0x74C55B: test    ebx, ebx
0x74C55D: lea     edx, [edi+1]
0x74C560: mov     [esi+0Ah], dx
0x74C564: jz      short loc_74C5A5
0x74C566: mov     edx, [esi+4]
0x74C569: add     word ptr [esi+0Ch], 1
0x74C56E: mov     [edx+edi*4], ebx
0x74C571: pop     edi
0x74C572: pop     esi
0x74C573: pop     ebp
0x74C574: pop     ebx
0x74C575: retn    4
0x74C578: test    ebx, ebx
0x74C57A: jz      short loc_74C596
0x74C57C: mov     eax, [esi+4]
0x74C57F: cmp     dword ptr [eax+edi*4], 0
0x74C583: jnz     short loc_74C5A5
0x74C585: add     word ptr [esi+0Ch], 1
0x74C58A: mov     edx, eax
0x74C58C: mov     [edx+edi*4], ebx
0x74C58F: pop     edi
0x74C590: pop     esi
0x74C591: pop     ebp
0x74C592: pop     ebx
0x74C593: retn    4
0x74C596: mov     ecx, [esi+4]
0x74C599: cmp     dword ptr [ecx+edi*4], 0
0x74C59D: jz      short loc_74C5A5
0x74C59F: add     word ptr [esi+0Ch], 0FFFFh
0x74C5A5: mov     edx, [esi+4]
0x74C5A8: mov     [edx+edi*4], ebx
0x74C5AB: pop     edi
0x74C5AC: pop     esi
0x74C5AD: pop     ebp
0x74C5AE: pop     ebx
0x74C5AF: retn    4
