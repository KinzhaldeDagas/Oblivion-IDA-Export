0x45CE00: sub     esp, 0Ch
0x45CE03: push    ebx
0x45CE04: mov     ebx, ecx
0x45CE06: mov     ecx, [ebx+54h]
0x45CE09: mov     edx, [ecx+4]
0x45CE0C: xor     eax, eax
0x45CE0E: test    edx, edx
0x45CE10: push    esi
0x45CE11: jbe     short loc_45CE27
0x45CE13: mov     esi, [ecx+8]
0x45CE16: mov     ecx, esi
0x45CE18: cmp     dword ptr [ecx], 0
0x45CE1B: jnz     short loc_45CE77
0x45CE1D: add     eax, 1
0x45CE20: add     ecx, 4
0x45CE23: cmp     eax, edx
0x45CE25: jb      short loc_45CE18
0x45CE27: xor     eax, eax
0x45CE29: test    eax, eax
0x45CE2B: mov     [esp+14h+var_8], eax
0x45CE2F: jz      loc_45CEBE
0x45CE35: push    edi
0x45CE36: lea     eax, [esp+18h+var_C]
0x45CE3A: push    eax
0x45CE3B: lea     ecx, [esp+1Ch+a1]
0x45CE3F: push    ecx
0x45CE40: mov     ecx, [ebx+54h]
0x45CE43: lea     edx, [esp+20h+var_8]
0x45CE47: push    edx
0x45CE48: call    sub_452600
0x45CE4D: mov     esi, [esp+18h+a1]
0x45CE51: test    esi, esi
0x45CE53: jz      short loc_45CE7C
0x45CE55: push    0; int
0x45CE57: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x45CE5C: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x45CE61: push    0; int
0x45CE63: push    esi; a1
0x45CE64: call    TESForm_LookupByFormID
0x45CE69: add     esp, 4
0x45CE6C: push    eax; void *
0x45CE6D: call    OblivionDynamicCast
0x45CE72: add     esp, 14h
0x45CE75: jmp     short loc_45CE81
0x45CE77: mov     eax, [esi+eax*4]
0x45CE7A: jmp     short loc_45CE29
0x45CE7C: mov     eax, ds:0B333C4h
0x45CE81: test    eax, eax
0x45CE83: mov     edi, [esp+18h+var_C]
0x45CE87: jz      short loc_45CE9E
0x45CE89: cmp     dword ptr [eax+3Ch], 0
0x45CE8D: jnz     short loc_45CE94
0x45CE8F: mov     eax, edi
0x45CE91: push    eax
0x45CE92: jmp     short loc_45CE9F
0x45CE94: push    edi
0x45CE95: push    esi
0x45CE96: push    eax
0x45CE97: mov     ecx, ebx
0x45CE99: call    sub_458ED0
0x45CE9E: push    edi; void *
0x45CE9F: mov     ecx, offset FormHeap
0x45CEA4: call    MemoryHeap_Free_checked
0x45CEA9: mov     ecx, [ebx+54h]
0x45CEAC: push    esi
0x45CEAD: call    NiTMap_RemoveAt
0x45CEB2: cmp     [esp+18h+var_8], 0
0x45CEB7: jnz     loc_45CE36
0x45CEBD: pop     edi
0x45CEBE: mov     ecx, [ebx+54h]
0x45CEC1: cmp     dword ptr [ecx+0Ch], 0
0x45CEC5: pop     esi
0x45CEC6: pop     ebx
0x45CEC7: jz      short loc_45CEDB
0x45CEC9: mov     ecx, ds:0B34D90h
0x45CECF: mov     edx, [ecx]
0x45CED1: mov     eax, [edx+18h]
0x45CED4: push    offset aLoadanimatio_0; "LoadAnimations() call finished, but sti"...
0x45CED9: call    eax
0x45CEDB: add     esp, 0Ch
0x45CEDE: retn
