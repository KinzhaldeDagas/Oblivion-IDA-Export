0x78D3F0: push    ebp
0x78D3F1: mov     ebp, esp
0x78D3F3: push    0FFFFFFFFh
0x78D3F5: push    offset SEH_78D3F0
0x78D3FA: mov     eax, large fs:0
0x78D400: push    eax
0x78D401: sub     esp, 40h
0x78D404: push    ebx
0x78D405: push    esi
0x78D406: push    edi
0x78D407: mov     eax, ds:0B30AACh
0x78D40C: xor     eax, ebp
0x78D40E: push    eax
0x78D40F: lea     eax, [ebp+var_C]
0x78D412: mov     large fs:0, eax
0x78D418: mov     [ebp+var_10], esp
0x78D41B: fld     [ebp+arg_0]
0x78D41E: push    0
0x78D420: fstp    dword ptr ds:0B42A0Ch
0x78D426: mov     [ebp+var_4], 0
0x78D42D: call    sub_78C4D0
0x78D432: add     esp, 4
0x78D435: mov     ecx, [ebp+var_C]
0x78D438: mov     large fs:0, ecx
0x78D43F: pop     ecx
0x78D440: pop     edi
0x78D441: pop     esi
0x78D442: pop     ebx
0x78D443: mov     esp, ebp
0x78D445: pop     ebp
0x78D446: retn
0x78D447: mov     ecx, [ebp+var_14]
0x78D44A: mov     eax, [ecx]
0x78D44C: mov     edx, [eax+4]
0x78D44F: call    edx
0x78D451: push    eax
0x78D452: push    offset aCspeedtreer_17; "CSpeedTreeRT::SetTime"
0x78D457: push    offset aSFailedS; "%s - failed [%s]"
0x78D45C: lea     esi, [ebp+var_30]
0x78D45F: call    sub_7A54A0
0x78D464: add     esp, 0Ch
0x78D467: cmp     dword ptr [eax+18h], 10h
0x78D46B: mov     byte ptr [ebp+var_4], 2
0x78D46F: jb      short loc_78D476
0x78D471: mov     eax, [eax+4]
0x78D474: jmp     short loc_78D479
0x78D476: add     eax, 4
0x78D479: push    eax; Src
0x78D47A: call    sub_7895E0
0x78D47F: add     esp, 4
0x78D482: lea     ecx, [ebp+var_30]
0x78D485: call    sub_79AB00
0x78D48A: mov     eax, offset loc_78D490
0x78D48F: retn
0x78D490: mov     ecx, [ebp+var_C]
0x78D493: mov     large fs:0, ecx
0x78D49A: pop     ecx
0x78D49B: pop     edi
0x78D49C: pop     esi
0x78D49D: pop     ebx
0x78D49E: mov     esp, ebp
0x78D4A0: pop     ebp
0x78D4A1: retn
0x78D4A2: push    offset aCspeedtreer_17; "CSpeedTreeRT::SetTime"
0x78D4A7: push    offset aSThrewAnUnknow; "%s - threw an unknown system exception"
0x78D4AC: lea     esi, [ebp+var_4C]
0x78D4AF: call    sub_7A54A0
0x78D4B4: add     esp, 8
0x78D4B7: cmp     dword ptr [eax+18h], 10h
0x78D4BB: mov     byte ptr [ebp+var_4], 3
0x78D4BF: jb      short loc_78D4C6
0x78D4C1: mov     eax, [eax+4]
0x78D4C4: jmp     short loc_78D4C9
0x78D4C6: add     eax, 4
0x78D4C9: push    eax; Src
0x78D4CA: call    sub_7895E0
0x78D4CF: add     esp, 4
0x78D4D2: lea     ecx, [ebp+var_4C]
0x78D4D5: call    sub_79AB00
0x78D4DA: mov     eax, offset loc_78D435
0x78D4DF: retn
