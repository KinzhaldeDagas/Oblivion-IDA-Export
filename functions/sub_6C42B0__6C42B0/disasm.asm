0x6C42B0: sub     esp, 0Ch
0x6C42B3: push    ebp
0x6C42B4: mov     ebp, [esp+10h+arg_0]
0x6C42B8: push    edi
0x6C42B9: push    ebp
0x6C42BA: mov     edi, ecx
0x6C42BC: call    sub_715820
0x6C42C1: test    al, al
0x6C42C3: jnz     short loc_6C42CF
0x6C42C5: pop     edi
0x6C42C6: xor     al, al
0x6C42C8: pop     ebp
0x6C42C9: add     esp, 0Ch
0x6C42CC: retn    4
0x6C42CF: mov     ax, [edi+46h]
0x6C42D3: cmp     ax, [ebp+46h]
0x6C42D7: jnz     short loc_6C42C5
0x6C42D9: push    ebx
0x6C42DA: push    esi
0x6C42DB: lea     esi, [edi+58h]
0x6C42DE: mov     ecx, esi
0x6C42E0: call    sub_6A9030
0x6C42E5: test    eax, eax
0x6C42E7: mov     [esp+1Ch+arg_0], eax
0x6C42EB: jz      short loc_6C4336
0x6C42ED: lea     ebx, [ebp+58h]
0x6C42F0: lea     ecx, [esp+1Ch+var_8]
0x6C42F4: push    ecx
0x6C42F5: lea     edx, [esp+20h+var_C]
0x6C42F9: push    edx
0x6C42FA: lea     eax, [esp+24h+arg_0]
0x6C42FE: push    eax
0x6C42FF: mov     ecx, esi
0x6C4301: call    sub_452600
0x6C4306: mov     edx, [esp+1Ch+var_C]
0x6C430A: lea     ecx, [esp+1Ch+var_4]
0x6C430E: push    ecx
0x6C430F: push    edx
0x6C4310: mov     ecx, ebx
0x6C4312: call    NiTMap_GetAt
0x6C4317: test    al, al
0x6C4319: jz      short loc_6C4360
0x6C431B: mov     ecx, [esp+1Ch+var_8]
0x6C431F: mov     eax, [ecx]
0x6C4321: mov     edx, [esp+1Ch+var_4]
0x6C4325: mov     eax, [eax+2Ch]
0x6C4328: push    edx
0x6C4329: call    eax
0x6C432B: test    al, al
0x6C432D: jz      short loc_6C4360
0x6C432F: cmp     [esp+1Ch+arg_0], 0
0x6C4334: jnz     short loc_6C42F0
0x6C4336: xor     esi, esi
0x6C4338: cmp     [edi+46h], si
0x6C433C: jbe     short loc_6C437B
0x6C433E: mov     edi, edi
0x6C4340: mov     ecx, [edi+40h]
0x6C4343: mov     ecx, [ecx+esi*4]
0x6C4346: test    ecx, ecx
0x6C4348: mov     edx, [ebp+40h]
0x6C434B: mov     eax, [edx+esi*4]
0x6C434E: jz      short loc_6C436C
0x6C4350: test    eax, eax
0x6C4352: jz      short loc_6C436C
0x6C4354: mov     edx, [ecx]
0x6C4356: push    eax
0x6C4357: mov     eax, [edx+2Ch]
0x6C435A: call    eax
0x6C435C: test    al, al
0x6C435E: jnz     short loc_6C4370
0x6C4360: pop     esi
0x6C4361: pop     ebx
0x6C4362: pop     edi
0x6C4363: xor     al, al
0x6C4365: pop     ebp
0x6C4366: add     esp, 0Ch
0x6C4369: retn    4
0x6C436C: cmp     ecx, eax
0x6C436E: jnz     short loc_6C4360
0x6C4370: movzx   ecx, word ptr [edi+46h]
0x6C4374: add     esi, 1
0x6C4377: cmp     esi, ecx
0x6C4379: jb      short loc_6C4340
0x6C437B: pop     esi
0x6C437C: pop     ebx
0x6C437D: pop     edi
0x6C437E: mov     al, 1
0x6C4380: pop     ebp
0x6C4381: add     esp, 0Ch
0x6C4384: retn    4
