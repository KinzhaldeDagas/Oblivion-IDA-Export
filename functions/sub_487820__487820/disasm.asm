0x487820: push    ecx
0x487821: push    ebx
0x487822: push    ebp
0x487823: mov     ebp, ecx
0x487825: mov     ecx, [ebp+4]; this
0x487828: test    ecx, ecx
0x48782A: push    esi
0x48782B: push    edi
0x48782C: mov     [esp+14h+var_4], 0
0x487834: jz      short loc_48783D
0x487836: call    TESObjectREFR_GetContainer
0x48783B: jmp     short loc_48783F
0x48783D: xor     eax, eax
0x48783F: add     eax, 8
0x487842: jz      short loc_4878C3
0x487844: mov     ebx, [eax+4]
0x487847: test    ebx, ebx
0x487849: jnz     short loc_48784F
0x48784B: cmp     [eax], ebx
0x48784D: jz      short loc_4878C3
0x48784F: mov     edi, [eax]
0x487851: mov     esi, [edi+4]
0x487854: test    esi, esi
0x487856: jz      short loc_4878BD
0x487858: mov     eax, [esp+14h+arg_0]
0x48785C: cmp     [esi+0Ch], eax
0x48785F: jnz     short loc_4878BD
0x487861: mov     eax, [ebp+0]
0x487864: test    eax, eax
0x487866: mov     dl, 1
0x487868: jz      short loc_48788A
0x48786A: lea     ebx, [ebx+0]
0x487870: test    dl, dl
0x487872: jz      short loc_4878AA
0x487874: mov     ecx, [eax]
0x487876: test    ecx, ecx
0x487878: jz      short loc_487883
0x48787A: cmp     [ecx+8], esi
0x48787D: jnz     short loc_487883
0x48787F: xor     dl, dl
0x487881: jmp     short loc_487886
0x487883: mov     eax, [eax+4]
0x487886: test    eax, eax
0x487888: jnz     short loc_487870
0x48788A: xor     eax, eax
0x48788C: mov     ecx, [edi]
0x48788E: test    ecx, ecx
0x487890: jl      loc_48791C
0x487896: test    eax, eax
0x487898: jz      short loc_4878B2
0x48789A: mov     edx, [eax+4]
0x48789D: lea     eax, [edx+ecx]
0x4878A0: test    eax, eax
0x4878A2: jz      short loc_4878B2
0x4878A4: add     [esp+14h+var_4], eax
0x4878A8: jmp     short loc_4878B6
0x4878AA: test    eax, eax
0x4878AC: jz      short loc_48788A
0x4878AE: mov     eax, [eax]
0x4878B0: jmp     short loc_48788C
0x4878B2: add     [esp+14h+var_4], ecx
0x4878B6: cmp     [esp+14h+var_4], 0
0x4878BB: jg      short loc_48791C
0x4878BD: mov     eax, ebx
0x4878BF: test    eax, eax
0x4878C1: jnz     short loc_487844
0x4878C3: mov     ebx, [ebp+0]
0x4878C6: test    ebx, ebx
0x4878C8: jz      short loc_487912
0x4878CA: lea     ebx, [ebx+0]
0x4878D0: cmp     dword ptr [ebx+4], 0
0x4878D4: jnz     short loc_4878DB
0x4878D6: cmp     dword ptr [ebx], 0
0x4878D9: jz      short loc_487912
0x4878DB: mov     eax, [ebx]
0x4878DD: mov     esi, [eax]
0x4878DF: test    esi, esi
0x4878E1: jz      short loc_48790B
0x4878E3: mov     edi, [esi]
0x4878E5: test    edi, edi
0x4878E7: jz      short loc_48790B
0x4878E9: mov     ecx, edi
0x4878EB: call    ExtraDataList_GetReferencePointer
0x4878F0: test    eax, eax
0x4878F2: jz      short loc_487904
0x4878F4: mov     ecx, edi
0x4878F6: call    ExtraDataList_GetReferencePointer
0x4878FB: mov     ecx, [esp+14h+arg_0]
0x4878FF: cmp     [eax+0Ch], ecx
0x487902: jz      short loc_48791C
0x487904: mov     esi, [esi+4]
0x487907: test    esi, esi
0x487909: jnz     short loc_4878E3
0x48790B: mov     ebx, [ebx+4]
0x48790E: test    ebx, ebx
0x487910: jnz     short loc_4878D0
0x487912: pop     edi
0x487913: pop     esi
0x487914: pop     ebp
0x487915: xor     al, al
0x487917: pop     ebx
0x487918: pop     ecx
0x487919: retn    4
0x48791C: pop     edi
0x48791D: pop     esi
0x48791E: pop     ebp
0x48791F: mov     al, 1
0x487921: pop     ebx
0x487922: pop     ecx
0x487923: retn    4
