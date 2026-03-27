0x8B9900: sub     esp, 1Ch
0x8B9903: push    ebx
0x8B9904: push    esi
0x8B9905: mov     esi, [esp+24h+arg_0]
0x8B9909: push    edi
0x8B990A: push    esi
0x8B990B: mov     edi, ecx
0x8B990D: call    sub_8A5C10
0x8B9912: mov     eax, ds:0BA8018h
0x8B9917: push    eax; ArgList
0x8B9918: call    TESOutput_PrintString
0x8B991D: movzx   ebx, word ptr [esi+0Ah]
0x8B9921: movzx   ecx, word ptr [esi+8]
0x8B9925: add     esp, 4
0x8B9928: cmp     ebx, ecx
0x8B992A: mov     [esp+28h+arg_0], eax
0x8B992E: jb      short loc_8B993E
0x8B9930: movzx   edx, word ptr [esi+0Eh]
0x8B9934: add     edx, ebx
0x8B9936: push    edx
0x8B9937: mov     ecx, esi
0x8B9939: call    NiTArray_SetSize
0x8B993E: lea     eax, [esp+28h+arg_0]
0x8B9942: push    eax
0x8B9943: push    ebx
0x8B9944: mov     ecx, esi
0x8B9946: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8B994B: fld     dword ptr [edi+20h]
0x8B994E: fstp    [esp+28h+var_C]
0x8B9952: add     edi, 30h ; '0'
0x8B9955: fld     dword ptr [edi-0Ch]
0x8B9958: lea     ecx, [esp+28h+var_1C]
0x8B995C: fstp    [esp+28h+var_8]
0x8B9960: push    edi
0x8B9961: fld     dword ptr [edi-8]
0x8B9964: push    ecx
0x8B9965: fstp    [esp+30h+var_4]
0x8B9969: fld     dword ptr [edi-4]
0x8B996C: fstp    [esp+30h+var_10]
0x8B9970: call    sub_43F3E0
0x8B9975: add     esp, 8
0x8B9978: push    offset aLocalRot; "Local Rot"
0x8B997D: lea     ecx, [esp+2Ch+var_10]
0x8B9981: call    sub_7153C0
0x8B9986: movzx   edi, word ptr [esi+0Ah]
0x8B998A: movzx   edx, word ptr [esi+8]
0x8B998E: cmp     edi, edx
0x8B9990: mov     [esp+28h+arg_0], eax
0x8B9994: jb      short loc_8B99A4
0x8B9996: movzx   eax, word ptr [esi+0Eh]
0x8B999A: add     eax, edi
0x8B999C: push    eax
0x8B999D: mov     ecx, esi
0x8B999F: call    NiTArray_SetSize
0x8B99A4: lea     ecx, [esp+28h+arg_0]
0x8B99A8: push    ecx
0x8B99A9: push    edi
0x8B99AA: mov     ecx, esi
0x8B99AC: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8B99B1: push    offset aLocalPos; "Local Pos"
0x8B99B6: lea     ecx, [esp+2Ch+var_1C]
0x8B99BA: call    sub_707280
0x8B99BF: movzx   edi, word ptr [esi+0Ah]
0x8B99C3: movzx   edx, word ptr [esi+8]
0x8B99C7: cmp     edi, edx
0x8B99C9: mov     [esp+28h+arg_0], eax
0x8B99CD: jb      short loc_8B99DD
0x8B99CF: movzx   eax, word ptr [esi+0Eh]
0x8B99D3: add     eax, edi
0x8B99D5: push    eax
0x8B99D6: mov     ecx, esi
0x8B99D8: call    NiTArray_SetSize
0x8B99DD: lea     ecx, [esp+28h+arg_0]
0x8B99E1: push    ecx
0x8B99E2: push    edi
0x8B99E3: mov     ecx, esi
0x8B99E5: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8B99EA: pop     edi
0x8B99EB: pop     esi
0x8B99EC: pop     ebx
0x8B99ED: add     esp, 1Ch
0x8B99F0: retn    4
