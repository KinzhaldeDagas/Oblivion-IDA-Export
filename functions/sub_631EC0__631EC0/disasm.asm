0x631EC0: push    0FFFFFFFFh
0x631EC2: push    offset SEH_806210
0x631EC7: mov     eax, large fs:0
0x631ECD: push    eax
0x631ECE: push    ecx
0x631ECF: push    ebx
0x631ED0: push    ebp
0x631ED1: push    esi
0x631ED2: push    edi
0x631ED3: mov     eax, ds:0B30AACh
0x631ED8: xor     eax, esp
0x631EDA: push    eax
0x631EDB: lea     eax, [esp+24h+var_C]
0x631EDF: mov     large fs:0, eax
0x631EE5: mov     edi, ecx
0x631EE7: mov     eax, [edi]
0x631EE9: mov     edx, [eax+184h]
0x631EEF: call    edx
0x631EF1: xor     ebp, ebp
0x631EF3: cmp     eax, ebp
0x631EF5: jz      short loc_631F59
0x631EF7: mov     ecx, [eax+1Ch]
0x631EFA: shr     ecx, 9
0x631EFD: test    cl, 1
0x631F00: jz      short loc_631F08
0x631F02: test    byte ptr [eax+1Ch], 1
0x631F06: jnz     short loc_631F59
0x631F08: mov     cl, [eax+20h]
0x631F0B: cmp     cl, 5
0x631F0E: jnz     short loc_631F2C
0x631F10: mov     edx, [edi]
0x631F12: mov     esi, [eax+18h]
0x631F15: mov     eax, [edx+180h]
0x631F1B: mov     ecx, edi
0x631F1D: call    eax
0x631F1F: mov     ecx, ds:0B152B0h[esi*4]
0x631F26: cmp     dword ptr [ecx+eax*4], 1
0x631F2A: jmp     short loc_631F53
0x631F2C: cmp     cl, 6
0x631F2F: jz      short loc_631F39
0x631F31: test    cl, cl
0x631F33: jnz     loc_632076
0x631F39: mov     edx, [edi]
0x631F3B: mov     esi, [eax+18h]
0x631F3E: mov     eax, [edx+180h]
0x631F44: mov     ecx, edi
0x631F46: call    eax
0x631F48: mov     ecx, ds:0B152B0h[esi*4]
0x631F4F: cmp     dword ptr [ecx+eax*4], 2Ch ; ','
0x631F53: jnz     loc_632076
0x631F59: mov     esi, [esp+24h+arg_0]
0x631F5D: mov     edx, [esi]
0x631F5F: mov     eax, [edx+380h]
0x631F65: mov     ecx, esi
0x631F67: call    eax
0x631F69: test    eax, eax
0x631F6B: jnz     short loc_631F89
0x631F6D: mov     edx, [esi]
0x631F6F: mov     eax, [edx+18Ch]
0x631F75: mov     ecx, esi
0x631F77: call    eax
0x631F79: test    eax, eax
0x631F7B: jz      short loc_631F89
0x631F7D: mov     edx, [esi]
0x631F7F: mov     eax, [edx+320h]
0x631F85: mov     ecx, esi
0x631F87: call    eax
0x631F89: push    3Ch ; '<'; Size
0x631F8B: call    FormHeapAlloc
0x631F90: add     esp, 4
0x631F93: mov     [esp+24h+var_10], eax
0x631F97: cmp     eax, ebp
0x631F99: mov     [esp+24h+var_4], ebp
0x631F9D: jz      short loc_631FAA
0x631F9F: mov     ecx, eax; this
0x631FA1: call    ??0TESPackage@@QAE@XZ; TESPackage::TESPackage(void)
0x631FA6: mov     esi, eax
0x631FA8: jmp     short loc_631FAC
0x631FAA: xor     esi, esi
0x631FAC: or      ebx, 0FFFFFFFFh
0x631FAF: push    1
0x631FB1: mov     ecx, esi
0x631FB3: mov     [esp+28h+var_4], ebx
0x631FB7: call    TESPackage_SetType?
0x631FBC: or      dword ptr [esi+1Ch], 6
0x631FC0: push    0Ch; Size
0x631FC2: call    FormHeapAlloc
0x631FC7: add     esp, 4
0x631FCA: mov     [esp+24h+var_10], eax
0x631FCE: cmp     eax, ebp
0x631FD0: mov     [esp+24h+var_4], 1
0x631FD8: jz      short loc_631FE3
0x631FDA: mov     ecx, eax
0x631FDC: call    TESPackage_TargetData_constr
0x631FE1: mov     ebp, eax
0x631FE3: push    ebp
0x631FE4: mov     ecx, esi
0x631FE6: mov     [esp+28h+var_4], ebx
0x631FEA: call    TESPackage_SetTarget
0x631FEF: test    ebp, ebp
0x631FF1: jz      short loc_632003
0x631FF3: mov     ecx, ebp; void *
0x631FF5: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x631FFA: push    ebp
0x631FFB: call    FormHeapFree
0x632000: add     esp, 4
0x632003: mov     ecx, [esi+28h]
0x632006: push    0
0x632008: call    TESPackage_TargetData_SetType
0x63200D: mov     ecx, ds:0B333C4h
0x632013: push    ecx
0x632014: mov     ecx, [esi+28h]
0x632017: call    TeSPackage_TargetData_SetTargetREFR
0x63201C: mov     bl, [esp+24h+arg_4]
0x632020: test    bl, bl
0x632022: mov     ecx, [esi+28h]
0x632025: jz      short loc_63202E
0x632027: push    0BB8h
0x63202C: jmp     short loc_632030
0x63202E: push    50h ; 'P'
0x632030: call    TESAIForm_SetServiceFlags
0x632035: mov     ecx, [esp+24h+arg_0]; this
0x632039: push    1; a4
0x63203B: push    1; a3
0x63203D: push    esi; a2
0x63203E: mov     dword ptr [esi+18h], 7
0x632045: call    Actor_AddPackage?
0x63204A: mov     edx, [edi]
0x63204C: mov     eax, ds:0B333C4h
0x632051: mov     edx, [edx+484h]
0x632057: push    eax
0x632058: mov     ecx, edi
0x63205A: call    edx
0x63205C: test    bl, bl
0x63205E: jz      short loc_632076
0x632060: mov     eax, [edi]
0x632062: fld     dword ptr ds:0B36B38h
0x632068: mov     edx, [eax+160h]
0x63206E: push    ecx
0x63206F: mov     ecx, edi
0x632071: fstp    [esp+28h+var_28]
0x632074: call    edx
0x632076: mov     ecx, dword ptr [esp+24h+var_C]
0x63207A: mov     large fs:0, ecx
0x632081: pop     ecx
0x632082: pop     edi
0x632083: pop     esi
0x632084: pop     ebp
0x632085: pop     ebx
0x632086: add     esp, 10h
0x632089: retn    8
