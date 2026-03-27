0x70F360: sub     esp, 20h
0x70F363: push    ebp
0x70F364: push    esi
0x70F365: push    edi
0x70F366: mov     edi, [esp+2Ch+arg_0]
0x70F36A: mov     ecx, edi
0x70F36C: call    InitSurfacEData
0x70F371: mov     edx, [esp+2Ch+arg_14]
0x70F375: mov     al, byte ptr [esp+2Ch+arg_4]
0x70F379: xor     ecx, ecx
0x70F37B: xor     ebp, ebp
0x70F37D: cmp     edx, ebp
0x70F37F: setnz   cl
0x70F382: or      byte ptr [edi], 1
0x70F385: mov     [edi+1], al
0x70F388: mov     eax, [esp+2Ch+arg_8]
0x70F38C: mov     dword ptr [edi+0Ch], 0FFFFFFFFh
0x70F393: mov     [edi+8], ebp
0x70F396: mov     [esp+2Ch+var_20], eax
0x70F39A: mov     [edi+4], ecx
0x70F39D: xor     ecx, ecx
0x70F39F: cmp     eax, ebp
0x70F3A1: mov     [esp+2Ch+var_10], ebp
0x70F3A5: jz      short loc_70F3B2
0x70F3A7: mov     esi, eax
0x70F3A9: and     esi, 1
0x70F3AC: add     ecx, esi
0x70F3AE: shr     eax, 1
0x70F3B0: jnz     short loc_70F3A7
0x70F3B2: mov     byte ptr [esp+2Ch+arg_4], cl
0x70F3B6: mov     ecx, [esp+2Ch+arg_C]
0x70F3BA: xor     eax, eax
0x70F3BC: cmp     ecx, ebp
0x70F3BE: mov     [esp+2Ch+var_1C], ecx
0x70F3C2: mov     [esp+2Ch+var_C], 1
0x70F3CA: jz      short loc_70F3DB
0x70F3CC: lea     esp, [esp+0]
0x70F3D0: mov     esi, ecx
0x70F3D2: and     esi, 1
0x70F3D5: add     eax, esi
0x70F3D7: shr     ecx, 1
0x70F3D9: jnz     short loc_70F3D0
0x70F3DB: mov     ecx, [esp+2Ch+arg_10]
0x70F3DF: mov     byte ptr [esp+2Ch+arg_4+1], al
0x70F3E3: xor     eax, eax
0x70F3E5: cmp     ecx, ebp
0x70F3E7: mov     [esp+2Ch+var_18], ecx
0x70F3EB: mov     [esp+2Ch+var_8], 2
0x70F3F3: jz      short loc_70F400
0x70F3F5: mov     esi, ecx
0x70F3F7: and     esi, 1
0x70F3FA: add     eax, esi
0x70F3FC: shr     ecx, 1
0x70F3FE: jnz     short loc_70F3F5
0x70F400: xor     ecx, ecx
0x70F402: cmp     edx, ebp
0x70F404: mov     byte ptr [esp+2Ch+arg_4+2], al
0x70F408: mov     [esp+2Ch+var_14], edx
0x70F40C: mov     [esp+2Ch+var_4], 3
0x70F414: mov     eax, edx
0x70F416: jz      short loc_70F423
0x70F418: mov     edx, eax
0x70F41A: and     edx, 1
0x70F41D: add     ecx, edx
0x70F41F: shr     eax, 1
0x70F421: jnz     short loc_70F418
0x70F423: mov     edx, 4
0x70F428: lea     eax, [esp+2Ch+var_20]
0x70F42C: xor     esi, esi
0x70F42E: sub     edx, eax
0x70F430: mov     byte ptr [esp+2Ch+arg_4+3], cl
0x70F434: mov     [esp+2Ch+arg_14], edx
0x70F438: push    ebx
0x70F439: lea     esp, [esp+0]
0x70F440: cmp     [esp+esi*4+30h+var_20], ebp
0x70F444: lea     eax, [esp+esi*4+30h+var_20]
0x70F448: jz      short loc_70F49A
0x70F44A: cmp     esi, 2
0x70F44D: jge     short loc_70F49A
0x70F44F: lea     ecx, [esp+esi+30h+arg_4+1]
0x70F453: add     eax, edx
0x70F455: mov     ebx, [esp+esi*4+30h+var_20]
0x70F459: mov     ebp, [esp+eax+30h+var_20]
0x70F45D: cmp     ebx, ebp
0x70F45F: jbe     short loc_70F489
0x70F461: mov     dl, [ecx]
0x70F463: mov     edi, [esp+eax+30h+var_10]
0x70F467: mov     [esp+eax+30h+var_20], ebx
0x70F46B: mov     bl, byte ptr [esp+esi+30h+arg_4]
0x70F46F: mov     [ecx], bl
0x70F471: mov     ebx, [esp+esi*4+30h+var_10]
0x70F475: mov     [esp+eax+30h+var_10], ebx
0x70F479: mov     [esp+esi*4+30h+var_10], edi
0x70F47D: mov     edi, [esp+30h+arg_0]
0x70F481: mov     [esp+esi*4+30h+var_20], ebp
0x70F485: mov     byte ptr [esp+esi+30h+arg_4], dl
0x70F489: add     eax, 4
0x70F48C: add     ecx, 1
0x70F48F: cmp     eax, 0Ch
0x70F492: jl      short loc_70F455
0x70F494: mov     edx, [esp+30h+arg_14]
0x70F498: xor     ebp, ebp
0x70F49A: add     esi, 1
0x70F49D: cmp     esi, 3
0x70F4A0: jl      short loc_70F440
0x70F4A2: xor     esi, esi
0x70F4A4: xor     ecx, ecx
0x70F4A6: lea     eax, [edi+1Ch]
0x70F4A9: pop     ebx
0x70F4AA: lea     ebx, [ebx+0]
0x70F4B0: cmp     [esp+ecx*4+2Ch+var_20], ebp
0x70F4B4: jz      short loc_70F4D0
0x70F4B6: mov     dl, byte ptr [esp+ecx+2Ch+arg_4]
0x70F4BA: mov     [eax], dl
0x70F4BC: mov     edx, [esp+ecx*4+2Ch+var_10]
0x70F4C0: mov     byte ptr [eax+1], 1
0x70F4C4: mov     [eax-4], ebp
0x70F4C7: mov     [eax-8], edx
0x70F4CA: add     esi, 1
0x70F4CD: add     eax, 0Ch
0x70F4D0: add     ecx, 1
0x70F4D3: cmp     ecx, 4
0x70F4D6: jl      short loc_70F4B0
0x70F4D8: cmp     esi, 4
0x70F4DB: jnb     short loc_70F50A
0x70F4DD: lea     eax, [esi+esi*2]
0x70F4E0: mov     ecx, 4
0x70F4E5: sub     ecx, esi
0x70F4E7: lea     eax, [edi+eax*4+1Ch]
0x70F4EB: mov     esi, 5
0x70F4F0: mov     edx, 13h
0x70F4F5: mov     byte ptr [eax+1], 1
0x70F4F9: mov     byte ptr [eax], 0
0x70F4FC: mov     [eax-4], esi
0x70F4FF: mov     [eax-8], edx
0x70F502: add     eax, 0Ch
0x70F505: sub     ecx, 1
0x70F508: jnz     short loc_70F4F5
0x70F50A: mov     eax, edi
0x70F50C: pop     edi
0x70F50D: pop     esi
0x70F50E: pop     ebp
0x70F50F: add     esp, 20h
0x70F512: retn
