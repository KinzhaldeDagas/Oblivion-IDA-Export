0x47AB90: push    ebx
0x47AB91: mov     ebx, [esp+4+arg_0]
0x47AB95: test    ebx, ebx
0x47AB97: push    edi
0x47AB98: mov     edi, ecx
0x47AB9A: jz      short loc_47AC15
0x47AB9C: mov     ecx, offset dword_B33C80
0x47ABA1: lea     eax, [edi+4Ch]
0x47ABA4: mov     edx, [eax]
0x47ABA6: mov     [ecx], edx
0x47ABA8: mov     edx, [eax+4]
0x47ABAB: mov     [ecx+4], edx
0x47ABAE: mov     edx, [eax+8]
0x47ABB1: mov     [ecx+8], edx
0x47ABB4: mov     edx, [eax+0Ch]
0x47ABB7: mov     [ecx+0Ch], edx
0x47ABBA: xor     edx, edx
0x47ABBC: mov     [eax], edx
0x47ABBE: mov     [eax+4], edx
0x47ABC1: mov     [eax+8], edx
0x47ABC4: mov     [eax+0Ch], edx
0x47ABC7: add     ecx, 10h
0x47ABCA: add     eax, 10h
0x47ABCD: cmp     ecx, offset g_bUpdatePlayerModel
0x47ABD3: jl      short loc_47ABA4
0x47ABD5: push    ebp
0x47ABD6: mov     ebp, [esp+0Ch+arg_4]
0x47ABDA: push    esi
0x47ABDB: mov     esi, offset unk_B06574
0x47ABE0: mov     eax, [esi]
0x47ABE2: mov     ecx, ds:0B065C8h[eax*4]
0x47ABE9: cmp     ecx, 0FFFFFFFFh
0x47ABEC: jz      short loc_47ABF5
0x47ABEE: test    byte ptr [edi+ecx*8+4], 1
0x47ABF3: jz      short loc_47AC08
0x47ABF5: push    eax
0x47ABF6: push    eax
0x47ABF7: push    ebp
0x47ABF8: mov     ecx, ebx
0x47ABFA: call    TESRace_GetBodyModel??
0x47ABFF: push    eax
0x47AC00: push    ebx
0x47AC01: mov     ecx, edi
0x47AC03: call    TESBipedModelForm_GetBodyPartModel????
0x47AC08: add     esi, 4
0x47AC0B: cmp     esi, offset off_B06588; "Head"
0x47AC11: jl      short loc_47ABE0
0x47AC13: pop     esi
0x47AC14: pop     ebp
0x47AC15: pop     edi
0x47AC16: pop     ebx
0x47AC17: retn    8
