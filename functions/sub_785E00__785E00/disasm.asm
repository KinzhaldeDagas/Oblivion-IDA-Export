0x785E00: push    0FFFFFFFFh
0x785E02: push    offset SEH_785E00
0x785E07: mov     eax, large fs:0
0x785E0D: push    eax
0x785E0E: sub     esp, 18h
0x785E11: push    esi
0x785E12: mov     eax, ds:0B30AACh
0x785E17: xor     eax, esp
0x785E19: push    eax
0x785E1A: lea     eax, [esp+2Ch+var_C]
0x785E1E: mov     large fs:0, eax
0x785E24: mov     esi, ecx
0x785E26: lea     ecx, [esp+2Ch+var_24]
0x785E2A: call    sub_78E550
0x785E2F: mov     edx, [eax]
0x785E31: sub     esp, 18h
0x785E34: mov     ecx, esp
0x785E36: mov     [ecx], edx
0x785E38: mov     edx, [eax+4]
0x785E3B: mov     [ecx+4], edx
0x785E3E: mov     edx, [eax+8]
0x785E41: mov     [ecx+8], edx
0x785E44: mov     edx, [eax+0Ch]
0x785E47: mov     [ecx+0Ch], edx
0x785E4A: mov     edx, [eax+10h]
0x785E4D: mov     eax, [eax+14h]
0x785E50: mov     [ecx+10h], edx
0x785E53: mov     [ecx+14h], eax
0x785E56: mov     ecx, [esp+44h+arg_0]
0x785E5A: push    ecx
0x785E5B: mov     ecx, esi
0x785E5D: mov     [esp+48h+var_4], 0
0x785E65: call    sub_7856B0
0x785E6A: lea     ecx, [esp+2Ch+var_24]; void *
0x785E6E: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x785E76: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x785E7B: mov     ecx, [esp+2Ch+var_C]
0x785E7F: mov     large fs:0, ecx
0x785E86: pop     ecx
0x785E87: pop     esi
0x785E88: add     esp, 24h
0x785E8B: retn    4
