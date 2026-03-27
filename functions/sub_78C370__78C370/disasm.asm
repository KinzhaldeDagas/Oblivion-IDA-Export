0x78C370: push    ebp
0x78C371: mov     ebp, esp
0x78C373: push    0FFFFFFFFh
0x78C375: push    offset SEH_78C370
0x78C37A: mov     eax, large fs:0
0x78C380: push    eax
0x78C381: sub     esp, 4Ch
0x78C384: push    ebx
0x78C385: push    esi
0x78C386: push    edi
0x78C387: mov     eax, ds:0B30AACh
0x78C38C: xor     eax, ebp
0x78C38E: push    eax
0x78C38F: lea     eax, [ebp+var_C]
0x78C392: mov     large fs:0, eax
0x78C398: mov     [ebp+var_10], esp
0x78C39B: mov     eax, [ecx+40h]
0x78C39E: mov     edx, [eax]
0x78C3A0: mov     [ebp+var_38], edx
0x78C3A3: mov     edx, [eax+4]
0x78C3A6: mov     [ebp+var_34], edx
0x78C3A9: mov     edx, [eax+8]
0x78C3AC: mov     [ebp+var_30], edx
0x78C3AF: mov     edx, [eax+0Ch]
0x78C3B2: mov     [ebp+var_2C], edx
0x78C3B5: fld     [ebp+var_2C]
0x78C3B8: fadd    [ebp+var_38]
0x78C3BB: mov     edx, [eax+10h]
0x78C3BE: fld     qword ptr ds:0A2FAA0h
0x78C3C4: mov     [ebp+var_28], edx
0x78C3C7: mov     eax, [eax+14h]
0x78C3CA: fmul    st(1), st
0x78C3CC: fxch    st(1)
0x78C3CE: mov     [ebp+var_24], eax
0x78C3D1: mov     eax, [ecx]
0x78C3D3: fstp    [ebp+var_14]
0x78C3D6: mov     ecx, [ecx+0Ch]
0x78C3D9: fld     [ebp+var_28]
0x78C3DC: mov     [ebp+var_4], 0
0x78C3E3: fadd    [ebp+var_34]
0x78C3E6: fmul    st, st(1)
0x78C3E8: fstp    [ebp+var_18]
0x78C3EB: fld     [ebp+var_24]
0x78C3EE: fadd    [ebp+var_30]
0x78C3F1: fmulp   st(1), st
0x78C3F3: fstp    [ebp+var_1C]
0x78C3F6: fld     [ebp+var_14]
0x78C3F9: fstp    [ebp+var_2C]
0x78C3FC: fld     [ebp+var_18]
0x78C3FF: fstp    [ebp+var_28]
0x78C402: fld     [ebp+var_1C]
0x78C405: fstp    [ebp+var_24]
0x78C408: mov     edx, [eax+0D4h]
0x78C40E: movzx   eax, word ptr [eax+0C0h]
0x78C415: push    eax
0x78C416: push    edx
0x78C417: lea     edx, [ebp+var_2C]
0x78C41A: push    edx
0x78C41B: call    sub_793E10
0x78C420: mov     ecx, [ebp+var_C]
0x78C423: mov     large fs:0, ecx
0x78C42A: pop     ecx
0x78C42B: pop     edi
0x78C42C: pop     esi
0x78C42D: pop     ebx
0x78C42E: mov     esp, ebp
0x78C430: pop     ebp
0x78C431: retn
0x78C432: mov     ecx, [ebp+var_20]
0x78C435: mov     eax, [ecx]
0x78C437: mov     edx, [eax+4]
0x78C43A: call    edx
0x78C43C: push    eax
0x78C43D: push    offset aCspeedtreer_13; "CSpeedTreeRT::ComputeLeafStaticLighting"
0x78C442: push    offset aSFailedS; "%s - failed [%s]"
0x78C447: lea     esi, [ebp+var_3C]
0x78C44A: call    sub_7A54A0
0x78C44F: add     esp, 0Ch
0x78C452: cmp     dword ptr [eax+18h], 10h
0x78C456: mov     byte ptr [ebp+var_4], 2
0x78C45A: jb      short loc_78C461
0x78C45C: mov     eax, [eax+4]
0x78C45F: jmp     short loc_78C464
0x78C461: add     eax, 4
0x78C464: push    eax; Src
0x78C465: call    sub_7895E0
0x78C46A: add     esp, 4
0x78C46D: lea     ecx, [ebp+var_3C]
0x78C470: call    sub_79AB00
0x78C475: mov     eax, offset loc_78C47B
0x78C47A: retn
0x78C47B: mov     ecx, [ebp+var_C]
0x78C47E: mov     large fs:0, ecx
0x78C485: pop     ecx
0x78C486: pop     edi
0x78C487: pop     esi
0x78C488: pop     ebx
0x78C489: mov     esp, ebp
0x78C48B: pop     ebp
0x78C48C: retn
0x78C48D: push    offset aCspeedtreer_13; "CSpeedTreeRT::ComputeLeafStaticLighting"
0x78C492: push    offset aSThrewAnUnknow; "%s - threw an unknown system exception"
0x78C497: lea     esi, [ebp+var_58]
0x78C49A: call    sub_7A54A0
0x78C49F: add     esp, 8
0x78C4A2: cmp     dword ptr [eax+18h], 10h
0x78C4A6: mov     byte ptr [ebp+var_4], 3
0x78C4AA: jb      short loc_78C4B1
0x78C4AC: mov     eax, [eax+4]
0x78C4AF: jmp     short loc_78C4B4
0x78C4B1: add     eax, 4
0x78C4B4: push    eax; Src
0x78C4B5: call    sub_7895E0
0x78C4BA: add     esp, 4
0x78C4BD: lea     ecx, [ebp+var_58]
0x78C4C0: call    sub_79AB00
0x78C4C5: mov     eax, offset loc_78C420
0x78C4CA: retn
