0x606E10: sub     esp, 1Ch
0x606E13: push    ebx
0x606E14: push    ebp
0x606E15: push    esi
0x606E16: push    edi
0x606E17: mov     edi, ecx
0x606E19: mov     [esp+2Ch+a1.member.modlist.next], edi
0x606E1D: call    sub_567F70
0x606E22: mov     ecx, ds:0B33B00h
0x606E28: xor     ebp, ebp
0x606E2A: mov     dword ptr [esp+2Ch+a1.member.type], ebp
0x606E2E: xor     ebx, ebx
0x606E30: call    sub_45A170
0x606E35: test    al, al
0x606E37: jz      loc_606ED6
0x606E3D: mov     ecx, ds:0B33B00h
0x606E43: push    4; Size
0x606E45: lea     eax, [esp+30h+a1.member.refID]
0x606E49: push    eax; Dst
0x606E4A: call    SaveLoad_LoadData
0x606E4F: cmp     [esp+2Ch+a1.member.refID], 4B4F4C42h
0x606E57: jz      short loc_606EC1
0x606E59: mov     eax, ds:0B33B00h
0x606E5E: mov     esi, [eax+80h]
0x606E64: cmp     esi, ebp
0x606E66: jz      short loc_606EA5
0x606E68: mov     ecx, [esi]
0x606E6A: push    ecx; a1
0x606E6B: call    TESForm_LookupByFormID
0x606E70: mov     edx, [esi+5]
0x606E73: movzx   ecx, byte ptr [esi+9]
0x606E77: add     esp, 4
0x606E7A: push    edx
0x606E7B: mov     edx, [eax]
0x606E7D: push    ecx
0x606E7E: mov     ecx, eax
0x606E80: mov     eax, [edx+0D4h]
0x606E86: call    eax
0x606E88: mov     ecx, [esi]
0x606E8A: push    eax
0x606E8B: push    ecx
0x606E8C: push    21Eh
0x606E91: push    offset a_AiAlarmpackag; ".\\AI\\AlarmPackage.cpp"
0x606E96: push    offset aLoadgameBuffer; "LoadGame Buffer error: Block Header is "...
0x606E9B: call    PrintError
0x606EA0: add     esp, 1Ch
0x606EA3: jmp     short loc_606EC1
0x606EA5: movzx   edx, byte ptr [eax+7Ch]
0x606EA9: push    edx
0x606EAA: push    21Eh
0x606EAF: push    offset a_AiAlarmpackag; ".\\AI\\AlarmPackage.cpp"
0x606EB4: push    offset aLoadgameBuff_0; "LoadGame Buffer error: Block Header is "...
0x606EB9: call    PrintError
0x606EBE: add     esp, 10h
0x606EC1: mov     ecx, ds:0B33B00h
0x606EC7: mov     ebx, [ecx+14h]
0x606ECA: push    2; Size
0x606ECC: lea     eax, [esp+30h+a1.member]
0x606ED0: push    eax; Dst
0x606ED1: call    SaveLoad_LoadData
0x606ED6: push    2; a2
0x606ED8: lea     ecx, [esp+30h+a1]
0x606EDC: push    ecx; a1
0x606EDD: mov     ecx, edi
0x606EDF: call    TESForm_LoadDataFromCurrentSaveGame
0x606EE4: cmp     word ptr [esp+2Ch+a1.vtbl], bp
0x606EE9: mov     [esp+2Ch+a1.member.flags], ebp
0x606EED: jbe     loc_606F79
0x606EF3: mov     ecx, ds:0B33B00h
0x606EF9: push    1; Size
0x606EFB: lea     edx, [esp+30h+Dst]
0x606EFF: push    edx; Dst
0x606F00: call    SaveLoad_LoadData
0x606F05: mov     ecx, ds:0B33B00h
0x606F0B: push    2; Size
0x606F0D: lea     eax, [esp+30h+a1.member.modlist]
0x606F11: push    eax; Dst
0x606F12: call    SaveLoad_LoadData
0x606F17: mov     ecx, [esp+2Ch+a1.member.modlist.data]
0x606F1B: movsx   edx, [esp+2Ch+Dst]
0x606F20: push    ecx
0x606F21: push    edx
0x606F22: mov     ecx, offset ActorProcessManager_ptr
0x606F27: call    sub_675D00
0x606F2C: mov     edi, eax
0x606F2E: cmp     edi, ebp
0x606F30: jz      short loc_606F61
0x606F32: mov     eax, [esp+2Ch+a1.member.modlist.next]
0x606F36: mov     esi, [eax+3Ch]
0x606F39: cmp     [esi], ebp
0x606F3B: jz      short loc_606F5F
0x606F3D: push    8; Size
0x606F3F: call    FormHeapAlloc
0x606F44: add     esp, 4
0x606F47: cmp     eax, ebp
0x606F49: jz      short loc_606F54
0x606F4B: mov     ecx, [esi]
0x606F4D: mov     [eax], ecx
0x606F4F: mov     [eax+4], ebp
0x606F52: jmp     short loc_606F56
0x606F54: xor     eax, eax
0x606F56: mov     edx, [esi+4]
0x606F59: mov     [eax+4], edx
0x606F5C: mov     [esi+4], eax
0x606F5F: mov     [esi], edi
0x606F61: mov     eax, [esp+2Ch+a1.member.flags]
0x606F65: movzx   ecx, word ptr [esp+2Ch+a1.vtbl]
0x606F6A: add     eax, 1
0x606F6D: cmp     eax, ecx
0x606F6F: mov     [esp+2Ch+a1.member.flags], eax
0x606F73: jl      loc_606EF3
0x606F79: mov     ecx, ds:0B33B00h
0x606F7F: call    sub_45A170
0x606F84: test    al, al
0x606F86: jz      loc_607099
0x606F8C: mov     ecx, ds:0B33B00h
0x606F92: mov     edi, [ecx+80h]
0x606F98: cmp     edi, ebp
0x606F9A: mov     esi, [ecx+14h]
0x606F9D: jz      loc_607041
0x606FA3: mov     edx, [edi]
0x606FA5: push    edx; a1
0x606FA6: call    TESForm_LookupByFormID
0x606FAB: mov     ecx, eax
0x606FAD: movzx   eax, word ptr [esp+30h+a1.member.type]
0x606FB2: add     eax, ebx
0x606FB4: add     esp, 4
0x606FB7: cmp     esi, eax
0x606FB9: jbe     short loc_606FFB
0x606FBB: mov     edx, [edi+5]
0x606FBE: movzx   eax, byte ptr [edi+9]
0x606FC2: push    edx
0x606FC3: mov     edx, [ecx]
0x606FC5: push    eax
0x606FC6: mov     eax, [edx+0D4h]
0x606FCC: call    eax
0x606FCE: mov     ecx, [edi]
0x606FD0: movzx   edx, word ptr [esp+34h+a1.member.type]
0x606FD5: push    eax
0x606FD6: push    ecx
0x606FD7: push    232h
0x606FDC: sub     esi, edx
0x606FDE: push    offset a_AiAlarmpackag; ".\\AI\\AlarmPackage.cpp"
0x606FE3: sub     esi, ebx
0x606FE5: push    esi; ArgList
0x606FE6: push    offset aLoadgameBuff_1; "LoadGame Buffer overrun of %i bytes in "...
0x606FEB: call    PrintError
0x606FF0: add     esp, 20h
0x606FF3: pop     edi
0x606FF4: pop     esi
0x606FF5: pop     ebp
0x606FF6: pop     ebx
0x606FF7: add     esp, 1Ch
0x606FFA: retn
0x606FFB: jnb     loc_607099
0x607001: mov     eax, [edi+5]
0x607004: movzx   edx, byte ptr [edi+9]
0x607008: push    eax
0x607009: mov     eax, [ecx]
0x60700B: push    edx
0x60700C: mov     edx, [eax+0D4h]
0x607012: call    edx
0x607014: movzx   ecx, word ptr [esp+34h+a1.member.type]
0x607019: push    eax
0x60701A: mov     eax, [edi]
0x60701C: push    eax
0x60701D: push    232h
0x607022: sub     ecx, esi
0x607024: push    offset a_AiAlarmpackag; ".\\AI\\AlarmPackage.cpp"
0x607029: add     ecx, ebx
0x60702B: push    ecx; ArgList
0x60702C: push    offset aLoadgameBuff_2; "LoadGame Buffer underrun of %i bytes in"...
0x607031: call    PrintError
0x607036: add     esp, 20h
0x607039: pop     edi
0x60703A: pop     esi
0x60703B: pop     ebp
0x60703C: pop     ebx
0x60703D: add     esp, 1Ch
0x607040: retn
0x607041: movzx   eax, word ptr [esp+2Ch+a1.member.type]
0x607046: lea     edx, [eax+ebx]
0x607049: cmp     esi, edx
0x60704B: jbe     short loc_607076
0x60704D: movzx   edx, byte ptr [ecx+7Ch]
0x607051: push    edx
0x607052: push    232h
0x607057: sub     esi, eax
0x607059: push    offset a_AiAlarmpackag; ".\\AI\\AlarmPackage.cpp"
0x60705E: sub     esi, ebx
0x607060: push    esi; ArgList
0x607061: push    offset aLoadgameBuff_3; "LoadGame Buffer overrun of %i bytes in "...
0x607066: call    PrintError
0x60706B: add     esp, 14h
0x60706E: pop     edi
0x60706F: pop     esi
0x607070: pop     ebp
0x607071: pop     ebx
0x607072: add     esp, 1Ch
0x607075: retn
0x607076: jnb     short loc_607099
0x607078: movzx   ecx, byte ptr [ecx+7Ch]
0x60707C: push    ecx
0x60707D: push    232h
0x607082: sub     eax, esi
0x607084: push    offset a_AiAlarmpackag; ".\\AI\\AlarmPackage.cpp"
0x607089: add     eax, ebx
0x60708B: push    eax; ArgList
0x60708C: push    offset aLoadgameBuff_4; "LoadGame Buffer underrun of %i bytes in"...
0x607091: call    PrintError
0x607096: add     esp, 14h
0x607099: pop     edi
0x60709A: pop     esi
0x60709B: pop     ebp
0x60709C: pop     ebx
0x60709D: add     esp, 1Ch
0x6070A0: retn
