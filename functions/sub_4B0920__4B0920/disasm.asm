0x4B0920: sub     esp, 8
0x4B0923: push    ebx
0x4B0924: push    ebp
0x4B0925: push    esi
0x4B0926: push    edi
0x4B0927: xor     edi, edi
0x4B0929: xor     ebp, ebp
0x4B092B: mov     [esp+18h+var_4], ecx
0x4B092F: mov     [esp+18h+var_8], ebp
0x4B0933: mov     ebx, [esp+18h+arg_0]
0x4B0937: mov     esi, [ebx]
0x4B0939: push    ebp
0x4B093A: add     esi, 284h
0x4B0940: call    Magic_GetSkillAVFromSchool
0x4B0945: add     esp, 4
0x4B0948: push    eax
0x4B0949: mov     eax, [esi]
0x4B094B: mov     ecx, ebx
0x4B094D: call    eax
0x4B094F: mov     ecx, [esp+18h+var_4]
0x4B0953: push    eax
0x4B0954: push    ebp
0x4B0955: call    sub_4B07C0
0x4B095A: mov     esi, eax
0x4B095C: test    esi, esi
0x4B095E: mov     ebx, esi
0x4B0960: jz      loc_4B0A00
0x4B0966: mov     ebp, [esi]
0x4B0968: test    ebp, ebp
0x4B096A: jz      short loc_4B09D1
0x4B096C: test    edi, edi
0x4B096E: jnz     short loc_4B098D
0x4B0970: push    8; Size
0x4B0972: call    FormHeapAlloc
0x4B0977: add     esp, 4
0x4B097A: test    eax, eax
0x4B097C: jz      short loc_4B0987
0x4B097E: mov     [eax], edi
0x4B0980: mov     [eax+4], edi
0x4B0983: mov     edi, eax
0x4B0985: jmp     short loc_4B09A4
0x4B0987: xor     eax, eax
0x4B0989: mov     edi, eax
0x4B098B: jmp     short loc_4B09A4
0x4B098D: mov     eax, edi
0x4B098F: nop
0x4B0990: cmp     [eax], ebp
0x4B0992: jz      short loc_4B099B
0x4B0994: mov     eax, [eax+4]
0x4B0997: test    eax, eax
0x4B0999: jnz     short loc_4B0990
0x4B099B: test    eax, eax
0x4B099D: setz    al
0x4B09A0: test    al, al
0x4B09A2: jz      short loc_4B09D1
0x4B09A4: cmp     dword ptr [edi], 0
0x4B09A7: jz      short loc_4B09CF
0x4B09A9: push    8; Size
0x4B09AB: call    FormHeapAlloc
0x4B09B0: add     esp, 4
0x4B09B3: test    eax, eax
0x4B09B5: jz      short loc_4B09C4
0x4B09B7: mov     ecx, [edi]
0x4B09B9: mov     [eax], ecx
0x4B09BB: mov     dword ptr [eax+4], 0
0x4B09C2: jmp     short loc_4B09C6
0x4B09C4: xor     eax, eax
0x4B09C6: mov     edx, [edi+4]
0x4B09C9: mov     [eax+4], edx
0x4B09CC: mov     [edi+4], eax
0x4B09CF: mov     [edi], ebp
0x4B09D1: mov     esi, [esi+4]
0x4B09D4: test    esi, esi
0x4B09D6: jnz     short loc_4B0966
0x4B09D8: cmp     [ebx+4], esi
0x4B09DB: jz      short loc_4B09F6
0x4B09DD: lea     ecx, [ecx+0]
0x4B09E0: mov     eax, [ebx+4]
0x4B09E3: mov     esi, [eax+4]
0x4B09E6: push    eax
0x4B09E7: call    FormHeapFree
0x4B09EC: add     esp, 4
0x4B09EF: test    esi, esi
0x4B09F1: mov     [ebx+4], esi
0x4B09F4: jnz     short loc_4B09E0
0x4B09F6: mov     ebp, [esp+18h+var_8]
0x4B09FA: mov     dword ptr [ebx], 0
0x4B0A00: push    ebx
0x4B0A01: call    FormHeapFree
0x4B0A06: add     ebp, 1
0x4B0A09: add     esp, 4
0x4B0A0C: cmp     ebp, 6
0x4B0A0F: mov     [esp+18h+var_8], ebp
0x4B0A13: jl      loc_4B0933
0x4B0A19: mov     eax, edi
0x4B0A1B: pop     edi
0x4B0A1C: pop     esi
0x4B0A1D: pop     ebp
0x4B0A1E: pop     ebx
0x4B0A1F: add     esp, 8
0x4B0A22: retn    4
