0x42DDF0: sub     esp, 0Ch
0x42DDF3: push    ebx
0x42DDF4: push    ebp
0x42DDF5: mov     ebp, [esp+14h+Str1]
0x42DDF9: cmp     byte ptr [ebp+0], 5Ch ; '\'
0x42DDFD: push    esi
0x42DDFE: push    edi; lpCriticalSection
0x42DDFF: mov     [esp+1Ch+var_C], 0
0x42DE07: jnz     short loc_42DE0C
0x42DE09: add     ebp, 1
0x42DE0C: push    5; MaxCount
0x42DE0E: push    offset aData; "Data\\"
0x42DE13: push    ebp; Str1
0x42DE14: call    _strncmp
0x42DE19: add     esp, 0Ch
0x42DE1C: test    eax, eax
0x42DE1E: jz      short loc_42DE34
0x42DE20: push    5; MaxCount
0x42DE22: push    offset Str2; "data\\"
0x42DE27: push    ebp; Str1
0x42DE28: call    _strncmp
0x42DE2D: add     esp, 0Ch
0x42DE30: test    eax, eax
0x42DE32: jnz     short loc_42DE37
0x42DE34: add     ebp, 5
0x42DE37: mov     eax, ebp
0x42DE39: lea     edx, [eax+1]
0x42DE3C: lea     esp, [esp+0]
0x42DE40: mov     cl, [eax]
0x42DE42: add     eax, 1
0x42DE45: test    cl, cl
0x42DE47: jnz     short loc_42DE40
0x42DE49: sub     eax, edx
0x42DE4B: cmp     [esp+1Ch+arg_8], 0FFFFh
0x42DE53: jnz     short loc_42DE7D
0x42DE55: cmp     byte ptr [eax+ebp-1], 5Ch ; '\'
0x42DE5A: jz      short loc_42DE7D
0x42DE5C: mov     eax, ebp
0x42DE5E: lea     edx, [eax+1]
0x42DE61: mov     cl, [eax]
0x42DE63: add     eax, 1
0x42DE66: test    cl, cl
0x42DE68: jnz     short loc_42DE61
0x42DE6A: sub     eax, edx
0x42DE6C: lea     eax, [eax+ebp-3]
0x42DE70: push    eax
0x42DE71: call    ArchiveManager_GetFileTypemask
0x42DE76: add     esp, 4
0x42DE79: mov     [esp+1Ch+arg_8], eax
0x42DE7D: push    1; int
0x42DE7F: push    ebp; FullPath
0x42DE80: lea     ecx, [esp+24h+var_8]
0x42DE84: call    BSHash_constr
0x42DE89: mov     ebx, ArchiveProvidedLastFile
0x42DE8F: test    ebx, ebx
0x42DE91: jz      short loc_42DED4
0x42DE93: mov     cx, word ptr [esp+1Ch+arg_8]
0x42DE98: test    [ebx+174h], cx
0x42DE9F: jz      short loc_42DED4
0x42DEA1: push    0
0x42DEA3: lea     edx, [esp+20h+var_C]
0x42DEA7: push    edx
0x42DEA8: lea     eax, [esp+24h+var_8]
0x42DEAC: push    eax
0x42DEAD: mov     ecx, ebx
0x42DEAF: call    Archive_ContainsFolder
0x42DEB4: test    al, al
0x42DEB6: jz      short loc_42DED4
0x42DEB8: lea     ecx, [ebx+1A8h]
0x42DEBE: push    ecx; lpAddend
0x42DEBF: call    ds:InterlockedIncrement
0x42DEC5: mov     esi, [esp+1Ch+var_C]
0x42DEC9: shl     esi, 4
0x42DECC: add     esi, [ebx+178h]
0x42DED2: jmp     short loc_42DF37
0x42DED4: mov     esi, ArchiveList
0x42DEDA: test    esi, esi
0x42DEDC: jz      loc_42DFEE
0x42DEE2: mov     edi, [esi]
0x42DEE4: test    edi, edi
0x42DEE6: jz      short loc_42DF11
0x42DEE8: cmp     edi, ebx
0x42DEEA: jz      short loc_42DF11
0x42DEEC: mov     dx, word ptr [esp+1Ch+arg_8]
0x42DEF1: test    [edi+174h], dx
0x42DEF8: jz      short loc_42DF11
0x42DEFA: push    0
0x42DEFC: lea     eax, [esp+20h+var_C]
0x42DF00: push    eax
0x42DF01: lea     ecx, [esp+24h+var_8]
0x42DF05: push    ecx
0x42DF06: mov     ecx, edi
0x42DF08: call    Archive_ContainsFolder
0x42DF0D: test    al, al
0x42DF0F: jnz     short loc_42DF22
0x42DF11: mov     esi, [esi+4]
0x42DF14: test    esi, esi
0x42DF16: jnz     short loc_42DEE2
0x42DF18: pop     edi
0x42DF19: pop     esi
0x42DF1A: pop     ebp
0x42DF1B: xor     al, al
0x42DF1D: pop     ebx
0x42DF1E: add     esp, 0Ch
0x42DF21: retn
0x42DF22: mov     esi, [esp+1Ch+var_C]
0x42DF26: shl     esi, 4
0x42DF29: mov     ArchiveProvidedLastFile, edi
0x42DF2F: add     esi, [edi+178h]
0x42DF35: mov     ebx, edi
0x42DF37: test    esi, esi
0x42DF39: jz      loc_42DFE7
0x42DF3F: cmp     dword ptr [esi+8], 0
0x42DF43: jz      loc_42DFE7
0x42DF49: test    byte ptr [ebx+194h], 20h
0x42DF50: mov     byte ptr [esp+1Ch+arg_8], 1
0x42DF55: jz      short loc_42DF5E
0x42DF57: mov     byte ptr [esp+1Ch+arg_8], 0
0x42DF5C: jmp     short loc_42DF6E
0x42DF5E: push    offset aArchivemanag_0; "ArchiveManager::GetRandomFileNameForDir"...
0x42DF63: lea     ecx, [ebx+200h]
0x42DF69: call    NiEnterCriticalSection
0x42DF6E: mov     esi, [esi+8]
0x42DF71: push    0; Seed
0x42DF73: call    GetRandomLargeInteger?
0x42DF78: xor     edx, edx
0x42DF7A: div     esi
0x42DF7C: add     esp, 4
0x42DF7F: mov     ecx, ebx
0x42DF81: push    edx
0x42DF82: mov     edx, [esp+20h+var_C]
0x42DF86: push    edx
0x42DF87: call    sub_42CC00
0x42DF8C: mov     edi, [esp+1Ch+Str]
0x42DF90: mov     edx, edi
0x42DF92: mov     esi, eax
0x42DF94: mov     eax, ebp
0x42DF96: sub     edx, ebp
0x42DF98: mov     cl, [eax]
0x42DF9A: mov     [edx+eax], cl
0x42DF9D: add     eax, 1
0x42DFA0: test    cl, cl
0x42DFA2: jnz     short loc_42DF98
0x42DFA4: push    5Ch ; '\'; Ch
0x42DFA6: push    edi; Str
0x42DFA7: call    _strrchr
0x42DFAC: add     esp, 8
0x42DFAF: test    eax, eax
0x42DFB1: jz      short loc_42DFEE
0x42DFB3: lea     edx, [eax+1]
0x42DFB6: mov     ecx, esi
0x42DFB8: sub     edx, esi
0x42DFBA: lea     ebx, [ebx+0]
0x42DFC0: mov     al, [ecx]
0x42DFC2: mov     [edx+ecx], al
0x42DFC5: add     ecx, 1
0x42DFC8: test    al, al
0x42DFCA: jnz     short loc_42DFC0
0x42DFCC: cmp     byte ptr [esp+1Ch+arg_8], al
0x42DFD0: jz      short loc_42DFDD
0x42DFD2: lea     ecx, [ebx+200h]; lpCriticalSection
0x42DFD8: call    NiLeaveCriticalSection_0
0x42DFDD: pop     edi
0x42DFDE: pop     esi
0x42DFDF: pop     ebp
0x42DFE0: mov     al, 1
0x42DFE2: pop     ebx
0x42DFE3: add     esp, 0Ch
0x42DFE6: retn
0x42DFE7: mov     ecx, ebx
0x42DFE9: call    Arcghive_CheckDelete
0x42DFEE: pop     edi
0x42DFEF: pop     esi
0x42DFF0: pop     ebp
0x42DFF1: xor     al, al
0x42DFF3: pop     ebx
0x42DFF4: add     esp, 0Ch
0x42DFF7: retn
