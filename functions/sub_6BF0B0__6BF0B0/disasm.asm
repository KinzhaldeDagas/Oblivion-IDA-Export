0x6BF0B0: push    0FFFFFFFFh
0x6BF0B2: push    offset SEH_6E3250
0x6BF0B7: mov     eax, large fs:0
0x6BF0BD: push    eax
0x6BF0BE: push    esi
0x6BF0BF: push    edi
0x6BF0C0: mov     eax, ds:0B30AACh
0x6BF0C5: xor     eax, esp
0x6BF0C7: push    eax
0x6BF0C8: lea     eax, [esp+18h+var_C]
0x6BF0CC: mov     large fs:0, eax
0x6BF0D2: mov     edi, [esp+18h+size]
0x6BF0D6: xor     ecx, ecx
0x6BF0D8: mov     eax, edi
0x6BF0DA: mov     edx, 8
0x6BF0DF: mul     edx
0x6BF0E1: seto    cl
0x6BF0E4: neg     ecx
0x6BF0E6: or      ecx, eax
0x6BF0E8: xor     eax, eax
0x6BF0EA: add     ecx, 4
0x6BF0ED: setb    al
0x6BF0F0: neg     eax
0x6BF0F2: or      eax, ecx
0x6BF0F4: push    eax; Size
0x6BF0F5: call    FormHeapAlloc
0x6BF0FA: add     esp, 4
0x6BF0FD: mov     [esp+18h+size], eax
0x6BF101: test    eax, eax
0x6BF103: mov     [esp+18h+var_4], 0
0x6BF10B: jz      short loc_6BF139
0x6BF10D: push    offset ?ClearComponentReferences@TESTexture@@UAEXXZ?; a5
0x6BF112: push    offset sub_7616D0; a4
0x6BF117: push    edi; size
0x6BF118: lea     esi, [eax+4]
0x6BF11B: push    8; a2
0x6BF11D: push    esi; a1
0x6BF11E: mov     [eax], edi
0x6BF120: call    ArrayConstructor
0x6BF125: mov     eax, esi
0x6BF127: mov     ecx, [esp+18h+var_C]
0x6BF12B: mov     large fs:0, ecx
0x6BF132: pop     ecx
0x6BF133: pop     edi
0x6BF134: pop     esi
0x6BF135: add     esp, 0Ch
0x6BF138: retn
0x6BF139: xor     eax, eax
0x6BF13B: mov     ecx, [esp+18h+var_C]
0x6BF13F: mov     large fs:0, ecx
0x6BF146: pop     ecx
0x6BF147: pop     edi
0x6BF148: pop     esi
0x6BF149: add     esp, 0Ch
0x6BF14C: retn
