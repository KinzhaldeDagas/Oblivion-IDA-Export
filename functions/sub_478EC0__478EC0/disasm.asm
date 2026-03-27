0x478EC0: sub     esp, 18h
0x478EC3: push    ebx
0x478EC4: mov     ebx, [esp+1Ch+arg_4]
0x478EC8: push    ebp
0x478EC9: lea     ebp, [ebx+0ACh]
0x478ECF: push    edi
0x478ED0: mov     ecx, ebp
0x478ED2: mov     [esp+24h+var_18], ebp
0x478ED6: call    sub_4784A0
0x478EDB: mov     ecx, ebp
0x478EDD: call    sub_477F90
0x478EE2: movzx   eax, word ptr [ebx+0B6h]
0x478EE9: xor     edi, edi
0x478EEB: test    eax, eax
0x478EED: mov     byte ptr [esp+24h+arg_4], 0
0x478EF2: mov     [esp+24h+var_14], edi
0x478EF6: jbe     loc_4790FF
0x478EFC: cmp     eax, edi
0x478EFE: push    esi
0x478EFF: jbe     loc_4790E8
0x478F05: mov     eax, [ebx+0B0h]
0x478F0B: mov     esi, [eax+edi*4]
0x478F0E: test    esi, esi
0x478F10: mov     [esp+28h+var_C], esi
0x478F14: jz      loc_4790E8
0x478F1A: mov     edx, [esi]
0x478F1C: mov     eax, [edx+8]
0x478F1F: mov     ecx, esi
0x478F21: call    eax
0x478F23: mov     edx, [ebx]
0x478F25: mov     ebp, eax
0x478F27: mov     eax, [edx+4]
0x478F2A: mov     ecx, ebx
0x478F2C: call    eax
0x478F2E: test    eax, eax
0x478F30: jz      short loc_478F44
0x478F32: cmp     eax, offset unk_B35408
0x478F37: jz      loc_478FD6
0x478F3D: mov     eax, [eax+4]
0x478F40: test    eax, eax
0x478F42: jnz     short loc_478F32
0x478F44: mov     eax, [esi]
0x478F46: mov     edx, [eax+0Ch]
0x478F49: mov     ecx, esi
0x478F4B: call    edx
0x478F4D: test    eax, eax
0x478F4F: jnz     loc_478FF6
0x478F55: cmp     byte ptr [esp+28h+arg_4], al
0x478F59: jnz     short loc_478F8D
0x478F5B: test    ebp, ebp
0x478F5D: jz      short loc_478F8D
0x478F5F: cmp     [esi+0B8h], ax
0x478F66: jz      short loc_478F8D
0x478F68: mov     eax, [esp+28h+a1]
0x478F6C: mov     ecx, [eax+8]
0x478F6F: mov     edx, [ebx+8]
0x478F72: mov     eax, [ebx+1Ch]
0x478F75: push    ecx
0x478F76: mov     ecx, [eax+8]
0x478F79: push    edx
0x478F7A: push    ecx; ArgList
0x478F7B: push    offset aBodyPartSSForS; "Body part '%s'->'%s' for skeleton '%s' "...
0x478F80: call    PrintError
0x478F85: add     esp, 10h
0x478F88: mov     byte ptr [esp+28h+arg_4], 1
0x478F8D: mov     edx, [ebx]
0x478F8F: mov     edx, [edx+88h]
0x478F95: push    esi
0x478F96: lea     eax, [esp+2Ch+var_8]
0x478F9A: push    eax
0x478F9B: mov     ecx, ebx
0x478F9D: call    edx
0x478F9F: mov     eax, dword ptr [esp+28h+var_8]
0x478FA3: test    eax, eax
0x478FA5: jz      loc_4790E4
0x478FAB: mov     esi, eax
0x478FAD: add     eax, 4
0x478FB0: push    eax; lpAddend
0x478FB1: call    dword ptr ds:0A2807Ch
0x478FB7: test    eax, eax
0x478FB9: jnz     loc_4790E4
0x478FBF: test    esi, esi
0x478FC1: jz      loc_4790E4
0x478FC7: mov     eax, [esi]
0x478FC9: mov     edx, [eax]
0x478FCB: push    1
0x478FCD: mov     ecx, esi
0x478FCF: call    edx
0x478FD1: jmp     loc_4790E4
0x478FD6: test    ebp, ebp
0x478FD8: jz      loc_478F44
0x478FDE: mov     ecx, [esp+28h+arg_8]
0x478FE2: mov     edx, [esp+28h+a1]
0x478FE6: push    ecx
0x478FE7: push    esi
0x478FE8: push    edx
0x478FE9: call    sub_478EC0
0x478FEE: add     esp, 0Ch
0x478FF1: jmp     loc_4790E4
0x478FF6: mov     ebp, [esi+0B8h]
0x478FFC: test    ebp, ebp
0x478FFE: mov     [esp+28h+var_10], ebp
0x479002: jz      loc_4790E4
0x479008: mov     eax, [ebp+8]
0x47900B: mov     eax, [eax+40h]
0x47900E: mov     edi, [ebp+14h]
0x479011: xor     esi, esi
0x479013: test    eax, eax
0x479015: mov     [esp+28h+var_4], eax
0x479019: jbe     loc_4790C1
0x47901F: nop
0x479020: mov     eax, [edi+esi*4]
0x479023: test    eax, eax
0x479025: jz      loc_4790B4
0x47902B: mov     eax, [eax+8]
0x47902E: mov     ecx, [esp+28h+a1]
0x479032: push    eax; a2
0x479033: push    ecx; a1
0x479034: call    NiObjectNET_LookupObjectByName
0x479039: add     esp, 8
0x47903C: test    eax, eax
0x47903E: jz      short loc_479048
0x479040: mov     edx, [ebp+14h]
0x479043: mov     [edx+esi*4], eax
0x479046: jmp     short loc_4790B4
0x479048: mov     eax, [edi+esi*4]
0x47904B: mov     ecx, [eax+8]
0x47904E: mov     eax, ecx
0x479050: lea     ebp, [eax+1]
0x479053: mov     dl, [eax]
0x479055: add     eax, 1
0x479058: test    dl, dl
0x47905A: jnz     short loc_479053
0x47905C: mov     edx, [esp+28h+var_C]
0x479060: mov     edx, [edx+8]
0x479063: sub     eax, ebp
0x479065: push    eax; MaxCount
0x479066: push    ecx; Str2
0x479067: push    edx; Str1
0x479068: call    __strnicmp
0x47906D: add     esp, 0Ch
0x479070: test    eax, eax
0x479072: jnz     short loc_47908D
0x479074: mov     eax, [ebx+8]
0x479077: mov     ecx, [ebx+1Ch]
0x47907A: mov     edx, [ecx+8]
0x47907D: push    eax
0x47907E: mov     eax, [edi+esi*4]
0x479081: mov     ecx, [eax+8]
0x479084: push    edx
0x479085: push    ecx
0x479086: push    offset aBoneSNotFoun_1; "Bone '%s' not found for part '%s->%s'."...
0x47908B: jmp     short loc_4790A8
0x47908D: mov     edx, [esp+28h+a1]
0x479091: mov     eax, [edx+1Ch]
0x479094: mov     ecx, [eax+8]
0x479097: mov     edx, [ebx+8]
0x47909A: mov     eax, [edi+esi*4]
0x47909D: push    ecx
0x47909E: mov     ecx, [eax+8]
0x4790A1: push    edx
0x4790A2: push    ecx; ArgList
0x4790A3: push    offset aBoneSNotFoun_2; "Bone '%s' not found for part '%s'.\r\nR"...
0x4790A8: call    PrintError
0x4790AD: mov     ebp, [esp+38h+var_10]
0x4790B1: add     esp, 10h
0x4790B4: add     esi, 1
0x4790B7: cmp     esi, [esp+28h+var_4]
0x4790BB: jb      loc_479020
0x4790C1: cmp     [esp+28h+arg_8], 0
0x4790C6: jz      short loc_4790E0
0x4790C8: mov     ecx, [esp+28h+arg_8]
0x4790CC: mov     eax, [esp+28h+var_C]
0x4790D0: mov     [ebp+10h], ecx
0x4790D3: mov     edx, [ecx]
0x4790D5: mov     edx, [edx+84h]
0x4790DB: push    1
0x4790DD: push    eax
0x4790DE: call    edx
0x4790E0: mov     edi, [esp+28h+var_14]
0x4790E4: mov     ebp, [esp+28h+var_18]
0x4790E8: movzx   eax, word ptr [ebx+0B6h]
0x4790EF: add     edi, 1
0x4790F2: cmp     eax, edi
0x4790F4: mov     [esp+28h+var_14], edi
0x4790F8: ja      loc_478F05
0x4790FE: pop     esi
0x4790FF: mov     ecx, ebp
0x479101: call    sub_4784A0
0x479106: cmp     word ptr [ebp+0Ah], 0
0x47910B: jbe     short loc_47912F
0x47910D: mov     edx, [ebp+4]
0x479110: movzx   eax, word ptr [ebp+0Ah]
0x479114: movzx   ecx, ax
0x479117: cmp     dword ptr [edx+ecx*4-4], 0
0x47911C: setnz   cl
0x47911F: test    cl, cl
0x479121: jnz     short loc_47912F
0x479123: add     eax, 0FFFFFFFFh
0x479126: test    ax, ax
0x479129: mov     [ebp+0Ah], ax
0x47912D: ja      short loc_479110
0x47912F: pop     edi
0x479130: pop     ebp
0x479131: pop     ebx
0x479132: add     esp, 18h
0x479135: retn
