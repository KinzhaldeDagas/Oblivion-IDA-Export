0x4F6D70: fldz
0x4F6D72: mov     eax, [esp+arg_4]
0x4F6D76: push    ebp
0x4F6D77: mov     ebp, [esp+4+arg_C]
0x4F6D7B: push    edi
0x4F6D7C: fstp    qword ptr [ebp+0]
0x4F6D7F: xor     edi, edi
0x4F6D81: test    eax, eax
0x4F6D83: jz      short loc_4F6D8D
0x4F6D85: cmp     byte ptr [eax+4], 30h ; '0'
0x4F6D89: jnz     short loc_4F6D8D
0x4F6D8B: mov     edi, eax
0x4F6D8D: push    esi
0x4F6D8E: mov     esi, [esp+0Ch+arg_8]
0x4F6D92: test    esi, esi
0x4F6D94: jz      short loc_4F6DA2
0x4F6D96: movzx   eax, byte ptr [esi+4]
0x4F6D9A: add     eax, 0FFFFFFCFh
0x4F6D9D: cmp     eax, 2
0x4F6DA0: jbe     short loc_4F6DAA
0x4F6DA2: mov     esi, [esp+0Ch+arg_0]
0x4F6DA6: test    esi, esi
0x4F6DA8: jz      short loc_4F6E24
0x4F6DAA: cmp     esi, ds:0B3618Ch
0x4F6DB0: jnz     short loc_4F6DC5
0x4F6DB2: cmp     ds:0B36190h, edi
0x4F6DB8: jnz     short loc_4F6DC5
0x4F6DBA: fld     dword ptr ds:0B36194h
0x4F6DC0: fstp    qword ptr [ebp+0]
0x4F6DC3: jmp     short loc_4F6E24
0x4F6DC5: test    esi, esi
0x4F6DC7: jz      short loc_4F6E0F
0x4F6DC9: push    ebx
0x4F6DCA: mov     ecx, esi; this
0x4F6DCC: call    TESObjectREFR_GetParentCell
0x4F6DD1: mov     ebx, eax
0x4F6DD3: test    ebx, ebx
0x4F6DD5: jz      short loc_4F6E0E
0x4F6DD7: test    edi, edi
0x4F6DD9: jz      short loc_4F6E0E
0x4F6DDB: mov     ecx, edi
0x4F6DDD: call    TESForm__GetEditorNameLen
0x4F6DE2: push    eax; MaxCount
0x4F6DE3: mov     eax, [edi]
0x4F6DE5: mov     edx, [eax+0D4h]
0x4F6DEB: mov     ecx, edi
0x4F6DED: call    edx
0x4F6DEF: push    eax; Str2
0x4F6DF0: mov     eax, [ebx]
0x4F6DF2: mov     edx, [eax+0D4h]
0x4F6DF8: mov     ecx, ebx
0x4F6DFA: call    edx
0x4F6DFC: push    eax; Str1
0x4F6DFD: call    __strnicmp
0x4F6E02: add     esp, 0Ch
0x4F6E05: test    eax, eax
0x4F6E07: jnz     short loc_4F6E0E
0x4F6E09: fld1
0x4F6E0B: fstp    qword ptr [ebp+0]
0x4F6E0E: pop     ebx
0x4F6E0F: fld     qword ptr [ebp+0]
0x4F6E12: mov     ds:0B3618Ch, esi
0x4F6E18: fstp    dword ptr ds:0B36194h
0x4F6E1E: mov     ds:0B36190h, edi
0x4F6E24: cmp     byte ptr ds:0B361ACh, 0
0x4F6E2B: pop     esi
0x4F6E2C: jz      short loc_4F6E44
0x4F6E2E: fld     qword ptr [ebp+0]
0x4F6E31: sub     esp, 8
0x4F6E34: fstp    [esp+10h+var_10]
0x4F6E37: push    offset aGetincell0_2f; "GetInCell >> %0.2f"
0x4F6E3C: call    Interface_ConsolePrint
0x4F6E41: add     esp, 0Ch
0x4F6E44: pop     edi
0x4F6E45: mov     al, 1
0x4F6E47: pop     ebp
0x4F6E48: retn
