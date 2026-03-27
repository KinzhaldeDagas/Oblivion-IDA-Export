0x4A7B10: sub     esp, 108h
0x4A7B16: mov     eax, ds:0B30AACh
0x4A7B1B: xor     eax, esp
0x4A7B1D: mov     [esp+108h+var_4], eax
0x4A7B24: mov     ax, ds:0A403A0h
0x4A7B2A: push    ebx
0x4A7B2B: mov     ebx, [esp+10Ch+arg_0]
0x4A7B32: push    ebp
0x4A7B33: mov     ebp, ecx
0x4A7B35: mov     edx, [ebp+4]
0x4A7B38: mov     cl, ds:0A403A2h
0x4A7B3E: mov     word ptr [esp+110h+ArgList], ax
0x4A7B43: mov     eax, edx
0x4A7B45: push    esi
0x4A7B46: mov     [esp+114h+var_102], cl
0x4A7B4A: mov     esi, eax
0x4A7B4C: lea     esp, [esp+0]
0x4A7B50: mov     cl, [eax]
0x4A7B52: add     eax, 1
0x4A7B55: test    cl, cl
0x4A7B57: jnz     short loc_4A7B50
0x4A7B59: push    edi
0x4A7B5A: lea     edi, [esp+118h+ArgList]
0x4A7B5E: sub     eax, esi
0x4A7B60: add     edi, 0FFFFFFFFh
0x4A7B63: mov     cl, [edi+1]
0x4A7B66: add     edi, 1
0x4A7B69: test    cl, cl
0x4A7B6B: jnz     short loc_4A7B63
0x4A7B6D: mov     ecx, eax
0x4A7B6F: shr     ecx, 2
0x4A7B72: rep movsd
0x4A7B74: mov     ecx, eax
0x4A7B76: and     ecx, 3
0x4A7B79: push    edx
0x4A7B7A: rep movsb
0x4A7B7C: call    Setting_GetTypeFromName
0x4A7B81: add     esp, 4
0x4A7B84: cmp     eax, 6; switch 7 cases
0x4A7B87: pop     edi
0x4A7B88: ja      Setting_BuildOutputArray___def_4A7B8E; jumptable 004A7B8E default case, case 4
0x4A7B8E: jmp     ds:jpt_4A7B8E[eax*4]; switch jump
0x4A7B95: movzx   edx, byte ptr [ebp+0]; jumptable 004A7B8E case 0
0x4A7B99: push    edx; char
0x4A7B9A: lea     eax, [esp+118h+ArgList]
0x4A7B9E: push    eax; ArgList
0x4A7B9F: call    TESOutput_PrintLabeledBool
0x4A7BA4: add     esp, 8
0x4A7BA7: lea     ecx, [esp+114h+var_108]
0x4A7BAB: push    ecx
0x4A7BAC: mov     ecx, ebx
0x4A7BAE: mov     [esp+118h+var_108], eax
0x4A7BB2: call    NiTArray_Add
0x4A7BB7: jmp     Setting_BuildOutputArray___Done
0x4A7BBC: movzx   edx, byte ptr [ebp+0]; jumptable 004A7B8E cases 1,2
0x4A7BC0: push    edx; char
0x4A7BC1: lea     eax, [esp+118h+ArgList]
0x4A7BC5: push    eax; ArgList
0x4A7BC6: call    TESOutput_PrintLabeledChar
0x4A7BCB: add     esp, 8
0x4A7BCE: lea     ecx, [esp+114h+var_108]
0x4A7BD2: push    ecx
0x4A7BD3: mov     ecx, ebx
0x4A7BD5: mov     [esp+118h+var_108], eax
0x4A7BD9: call    NiTArray_Add
0x4A7BDE: mov     edx, [ebp+0]; jumptable 004A7B8E case 3
0x4A7BE1: push    edx; int
0x4A7BE2: lea     eax, [esp+118h+ArgList]
0x4A7BE6: push    eax; ArgList
0x4A7BE7: call    TESOutput_PrintLabeledSignedInt
0x4A7BEC: jmp     short loc_4A7C32
0x4A7BEE: fld     dword ptr [ebp+0]; jumptable 004A7B8E case 5
0x4A7BF1: push    ecx
0x4A7BF2: lea     ecx, [esp+118h+ArgList]
0x4A7BF6: fstp    [esp+118h+var_118]; float
0x4A7BF9: push    ecx; ArgList
0x4A7BFA: call    TESOutput_PrintLabeledFloat
0x4A7BFF: add     esp, 8
0x4A7C02: lea     edx, [esp+114h+var_108]
0x4A7C06: push    edx
0x4A7C07: mov     ecx, ebx
0x4A7C09: mov     [esp+118h+var_108], eax
0x4A7C0D: call    NiTArray_Add
0x4A7C12: jmp     short Setting_BuildOutputArray___Done
0x4A7C14: mov     ebp, [ebp+0]; jumptable 004A7B8E case 6
0x4A7C17: lea     eax, [esp+114h+ArgList]
0x4A7C1B: push    ebp; int
0x4A7C1C: push    eax; ArgList
0x4A7C1D: call    TESOutput_PrintLabeledString
0x4A7C22: jmp     short loc_4A7BA4
0x4A7C24: mov     edx, [ebp+0]; jumptable 004A7B8E default case, case 4
0x4A7C27: push    edx; int
0x4A7C28: lea     eax, [esp+118h+ArgList]
0x4A7C2C: push    eax; ArgList
0x4A7C2D: call    TESOutput_PrintLabeledUnsignedInt
0x4A7C32: movzx   ecx, word ptr [ebx+8]
0x4A7C36: movzx   esi, word ptr [ebx+0Ah]
0x4A7C3A: add     esp, 8
0x4A7C3D: cmp     esi, ecx
0x4A7C3F: mov     [esp+114h+var_108], eax
0x4A7C43: jb      short loc_4A7C53
0x4A7C45: movzx   edx, word ptr [ebx+0Eh]
0x4A7C49: add     edx, esi
0x4A7C4B: push    edx
0x4A7C4C: mov     ecx, ebx
0x4A7C4E: call    NiTArray_SetSize
0x4A7C53: lea     eax, [esp+114h+var_108]
0x4A7C57: push    eax
0x4A7C58: push    esi
0x4A7C59: mov     ecx, ebx
0x4A7C5B: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
